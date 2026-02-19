#ifndef WRAPPED_REGISTRY_HPP
  #define WRAPPED_REGISTRY_HPP

  #include "API/Engine/TMap.hpp"
  #include "RegistrySource.hpp"
  #include <stdexcept>
  #include <string>
  #include <unordered_map>
  #include <vector>
  #include "SDK.h"

template<typename WrappedType, typename GameDataType>
class WrappedRegistrySource : public RegistrySource<WrappedType>
{
  public:
  WrappedRegistrySource(const std::string& name, int priority, TMap<FName, GameDataType>* gameMap)
  : _name(name)
  , _priority(priority)
  , _gameMap(gameMap)
  , _isIndexed(false)
  {}

  void BuildIndex()
  {
    if (!_gameMap) throw std::runtime_error("Game map not bound");

    const uint32_t count = _gameMap->Data.Num();

    _keyToOffset.clear();
    _keyToOffset.reserve(static_cast<size_t>(count * 1.25f));

    _wrappedCache.clear();
    _wrappedCache.reserve(count);

    for (uint32_t i = 0; i < count; ++i)
    {
      auto& entry = _gameMap->Data[i];
      _keyToOffset.emplace(entry.Value.First.ToString(), static_cast<uint64_t>(i));
      _wrappedCache.emplace_back(entry.Value.Second);
    }
    _isIndexed = true;
  }

  WrappedType* Get(const std::string& key) override
  {
    if (!_isIndexed) BuildIndex();
    const auto it = _keyToOffset.find(key);
    return (it != _keyToOffset.end()) ? &_wrappedCache[it->second] : nullptr;
  }

  WrappedType* GetByOffset(uint64_t offset) override
  {
    if (!_isIndexed) BuildIndex();
    if (offset >= _wrappedCache.size()) [[unlikely]] return nullptr;
    return &_wrappedCache[offset];
  }

  bool Contains(const std::string& key) const override
  {
    return _keyToOffset.find(key) != _keyToOffset.end();
  }

  size_t Size() const override { return _keyToOffset.size(); }

  std::vector<std::string> GetAllKeys() const override
  {
    std::vector<std::string> keys;
    keys.reserve(_keyToOffset.size());
    for (const auto& [key, _] : _keyToOffset) keys.push_back(key);

    return keys;
  }

  uint64_t GetOffset(const std::string& key) const override
  {
    const auto it = _keyToOffset.find(key);
    return (it != _keyToOffset.end()) ? it->second : UINT64_MAX;
  }

  const std::unordered_map<std::string, uint64_t>& GetIndex() const override
  {
    return _keyToOffset;
  }

  int         GetPriority()   const override { return _priority; }
  std::string GetSourceName() const override { return _name; }

  protected:
  std::string                               _name;
  int                                       _priority;
  TMap<FName, GameDataType>*                _gameMap;
  std::unordered_map<std::string, uint64_t> _keyToOffset;
  std::vector<WrappedType>                  _wrappedCache;
  bool                                      _isIndexed;
};

#endif // WRAPPED_REGISTRY_HPP