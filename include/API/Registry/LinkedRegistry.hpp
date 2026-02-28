#ifndef LINKED_REGISTRY_HPP
  #define LINKED_REGISTRY_HPP

  #include "API/Engine/TMap.hpp"
  #include "API/Function/Engine/FName/FNameCTor.hpp"
  #include "API/Registry/RegistrySource.hpp"
  #include <memory>
  #include <shared_mutex>
  #include <string>
  #include <unordered_map>
  #include <vector>

template<typename Value, typename GameEntry>
class LinkedRegistry : public RegistrySource<Value>
{
  public:
  LinkedRegistry(const std::string& name, int priority = 0)
    : _name(name)
    , _priority(priority)
    , _gameRegistry(nullptr)
  {}

  void LinkToGameRegistry(TMap<FName, GameEntry>* gameRegistry)
  {
    std::unique_lock lock(_mutex);
    _gameRegistry = gameRegistry;
  }

  void AddModEntry(const std::string& key, std::shared_ptr<Value> value)
  {
    std::unique_lock lock(_mutex);

    const uint64_t offset = static_cast<uint64_t>(_modEntries.size());
    _keyToOffset.emplace(key, offset);
    _modEntries.push_back(std::move(value));

    if (_gameRegistry) SyncToGameRegistry(key, _modEntries.back().get());
  }

  void AddModEntry(const std::string& key, Value* value)
  {
    AddModEntry(key, std::shared_ptr<Value>(value));
  }

  Value* Get(const std::string& key) override
  {
    std::shared_lock rlock(_mutex);
    const auto it = _keyToOffset.find(key);
    return (it != _keyToOffset.end()) ? _modEntries[it->second].get() : nullptr;
  }

  Value* GetByOffset(uint64_t offset) override
  {
    std::shared_lock rlock(_mutex);
    return (offset < _modEntries.size()) ? _modEntries[offset].get() : nullptr;
  }

  bool Contains(const std::string& key) const override
  {
    std::shared_lock rlock(_mutex);
    return _keyToOffset.find(key) != _keyToOffset.end();
  }

  size_t Size() const override
  {
    std::shared_lock rlock(_mutex);
    return _modEntries.size();
  }

  std::vector<std::string> GetAllKeys() const override
  {
    std::shared_lock rlock(_mutex);
    std::vector<std::string> keys;
    keys.reserve(_keyToOffset.size());
    for (const auto& [key, _] : _keyToOffset) keys.push_back(key);
    return keys;
  }

  uint64_t GetOffset(const std::string& key) const override
  {
    std::shared_lock rlock(_mutex);
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
  virtual void SyncToGameRegistry(const std::string& key, Value* value) = 0;

  std::string   _name;
  int           _priority;
  TMap<FName, GameEntry>*                           _gameRegistry;
  std::vector<std::shared_ptr<Value>>               _modEntries;
  std::unordered_map<std::string, uint64_t>         _keyToOffset;
  mutable std::shared_mutex                         _mutex;
};

#endif // LINKED_REGISTRY_HPP