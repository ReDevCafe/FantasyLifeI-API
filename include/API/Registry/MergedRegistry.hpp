#ifndef MERGED_REGISTRY_HPP
  #define MERGED_REGISTRY_HPP

  #include "API/Registry/RegistryBase.hpp"
  #include "API/Registry/RegistrySource.hpp"
  #include "CompositeIndex.hpp"
  #include <algorithm>
  #include <atomic>
  #include <memory>
  #include <shared_mutex>
  #include <stdexcept>
  #include <unordered_map>
  #include <vector>

template<typename Value>
class MergedRegistry : public IRegistry<Value>
{
  public:
  MergedRegistry() : _needsRebuild(true), _nextSourceId(0) {}

  uint16_t AddSource(std::shared_ptr<RegistrySource<Value>> source)
  {
    if (_nextSourceId >= (1 << CompositeIndex::SOURCE_BITS)) throw std::overflow_error("Maximum number of sources reached");
    std::unique_lock lock(_mutex);
    const uint16_t sourceId = _nextSourceId++;

    if (sourceId >= _sources.size()) _sources.resize(sourceId + 1);
    _sources[sourceId] = std::move(source);

    _RebuildPriorityOrder();
    _needsRebuild.store(true, std::memory_order_release);
    return sourceId;
  }

  void RemoveSource(uint16_t sourceId)
  {
    std::unique_lock lock(_mutex);

    if (sourceId < _sources.size()) _sources[sourceId].reset();

    _priorityOrder.erase(std::remove(_priorityOrder.begin(), _priorityOrder.end(), sourceId), _priorityOrder.end());
    _needsRebuild.store(true, std::memory_order_release);
  }

  Value* Get(const std::string& key) override
  {
    _EnsureBuilt();
    std::shared_lock rlock(_mutex);
    return _LookupByKey(key);
  }

  Value* GetByOffset(uint64_t offset) override
  {
    _EnsureBuilt();
    std::shared_lock rlock(_mutex);

    if (offset >= _offsetToComposite.size()) [[unlikely]] return nullptr;
    return _GetByCompositeNoLock(_offsetToComposite[offset]);
  }

  uint64_t GetCompositeIndex(const std::string& key)
  {
    _EnsureBuilt();
    std::shared_lock rlock(_mutex);

    const auto it = _mergedIndex.find(key);
    return (it != _mergedIndex.end()) ? it->second : CompositeIndex::INVALID;
  }

  Value* GetByCompositeIndex(uint64_t compositeIndex)
  {
    std::shared_lock rlock(_mutex);
    return _GetByCompositeNoLock(compositeIndex);
  }

  bool Contains(const std::string& key) const override
  {
    std::shared_lock rlock(_mutex);
    return _mergedIndex.find(key) != _mergedIndex.end();
  }

  size_t Size() const override
  {
    std::shared_lock rlock(_mutex);
    return _mergedIndex.size();
  }

  std::unordered_map<std::string, uint64_t>::const_iterator begin() const override
  {
    return _mergedIndex.begin();
  }

  std::unordered_map<std::string, uint64_t>::const_iterator end() const override
  {
    return _mergedIndex.end();
  }

  std::vector<Value*> GetAll()
  {
    _EnsureBuilt();
    std::shared_lock rlock(_mutex);

    std::vector<Value*> results;
    results.reserve(_offsetToComposite.size());

    for (const uint64_t composite : _offsetToComposite) 
      if (Value* v = _GetByCompositeNoLock(composite)) results.push_back(v);

    return results;
  }

  struct IndexInfo
  {
      uint16_t    sourceId;
      uint64_t    sourceOffset;
      std::string sourceName;
      bool        valid;
  };

  IndexInfo DecodeIndex(uint64_t compositeIndex)
  {
      IndexInfo info{};
      CompositeIndex::Decode(compositeIndex, info.sourceId, info.sourceOffset);

      std::shared_lock rlock(_mutex);
      if (info.sourceId < _sources.size() && _sources[info.sourceId])
      {
        info.sourceName = _sources[info.sourceId]->GetSourceName();
        info.valid      = true;
      }
      return info;
  }

  std::vector<std::string> GetSourceNames()
  {
    std::shared_lock rlock(_mutex);
    std::vector<std::string> names;
    names.reserve(_priorityOrder.size());
    for (uint16_t id : _priorityOrder)
      if (id < _sources.size() && _sources[id]) names.push_back(_sources[id]->GetSourceName());

    return names;
  }

  private:
  void _RebuildPriorityOrder()
  {
    _priorityOrder.clear();
    for (uint16_t i = 0; i < static_cast<uint16_t>(_sources.size()); ++i)
      if (_sources[i]) _priorityOrder.push_back(i);

    std::sort(_priorityOrder.begin(), _priorityOrder.end(),
      [this](uint16_t a, uint16_t b) {
        return _sources[a]->GetPriority() > _sources[b]->GetPriority();
      });
  }

  void _EnsureBuilt()
  {
    if (!_needsRebuild.load(std::memory_order_acquire)) [[likely]] return;

    std::unique_lock wlock(_mutex);
    if (!_needsRebuild.load(std::memory_order_relaxed)) return;
    _Rebuild();
  }

  void _Rebuild()
  {
    _mergedIndex.clear();
    _offsetToComposite.clear();

    size_t totalEstimate = 0;
    for (uint16_t id : _priorityOrder)
      if (id < _sources.size() && _sources[id]) totalEstimate += _sources[id]->Size();

    _mergedIndex.reserve(static_cast<size_t>(totalEstimate * 1.25f));
    _offsetToComposite.reserve(totalEstimate);

    for (const uint16_t sourceId : _priorityOrder)
    {
      if (sourceId >= _sources.size() || !_sources[sourceId]) [[unlikely]] continue;
      auto& source = _sources[sourceId];

      for (const auto& [key, sourceOffset] : source->GetIndex())
      {
        auto [it, inserted] = _mergedIndex.emplace(key, CompositeIndex::Encode(sourceId, sourceOffset));
        if (inserted) _offsetToComposite.push_back(it->second);
      }
    }

    _needsRebuild.store(false, std::memory_order_release);
  }

  [[nodiscard]] Value* _GetByCompositeNoLock(uint64_t composite) const
  {
    uint16_t sourceId;
    uint64_t offset;
    CompositeIndex::Decode(composite, sourceId, offset);

    if (sourceId >= _sources.size() || !_sources[sourceId]) [[unlikely]] return nullptr;
    return _sources[sourceId]->GetByOffset(offset);
  }

  [[nodiscard]] Value* _LookupByKey(const std::string& key) const
  {
    const auto it = _mergedIndex.find(key);
    if (it == _mergedIndex.end()) [[unlikely]] return nullptr;
    return _GetByCompositeNoLock(it->second);
  }

  std::vector<std::shared_ptr<RegistrySource<Value>>> _sources;
  std::vector<uint16_t>                               _priorityOrder;

  std::unordered_map<std::string, uint64_t>           _mergedIndex;
  std::vector<uint64_t>                               _offsetToComposite;

  mutable std::shared_mutex                           _mutex;
  std::atomic<bool>                                   _needsRebuild;
  uint16_t                                            _nextSourceId;
};

#endif // MERGED_REGISTRY_HPP