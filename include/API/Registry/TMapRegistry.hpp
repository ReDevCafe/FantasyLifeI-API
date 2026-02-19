#ifndef TMAP_REGISTRY_HPP
  #define TMAP_REGISTRY_HPP

  #include "API/Engine/TMap.hpp"
  #include "RegistrySource.hpp"
  #include <stdexcept>
  #include <string>
  #include <unordered_map>
  #include "SDK.h"

class FName;

template<typename Key, typename Entry>
class TMapRegistrySource : public RegistrySource<Entry>
{
  public:
  TMapRegistrySource(const std::string& name, int priority, TMap<Key, Entry>* gameMap)
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

    for (uint32_t i = 0; i < count; ++i)
    {
      auto& entry = _gameMap->Data[i];
      _keyToOffset.emplace(entry.Value.First.ToString(), static_cast<uint64_t>(i));
    }
    _isIndexed = true;
  }

  Entry* Get(const std::string& key) override
  {
    if (!_isIndexed) BuildIndex();
    const auto it = _keyToOffset.find(key);
    if (it == _keyToOffset.end()) [[unlikely]] return nullptr;
    return ExtractValue(_gameMap->Data[it->second].Value.Second);
  }

  Entry* GetByOffset(uint64_t offset) override
  {
    if (!_gameMap || offset >= _gameMap->Data.Num()) [[unlikely]] return nullptr;
    return ExtractValue(_gameMap->Data[offset].Value.Second);
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
  virtual Entry* ExtractValue(Entry& entry) { return &entry; }

  std::string                               _name;
  int                                       _priority;
  TMap<Key, Entry>*                         _gameMap;
  std::unordered_map<std::string, uint64_t> _keyToOffset;
  bool                                      _isIndexed;
};

#endif // TMAP_REGISTRY_HPP