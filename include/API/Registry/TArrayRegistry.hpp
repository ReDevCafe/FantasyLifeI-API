#ifndef TARRAY_REGISTRY_HPP
  #define TARRAY_REGISTRY_HPP

  #include "RegistrySource.hpp"
  #include "API/Engine/TArray.hpp"
  #include <functional>
  #include <stdexcept>
  #include <string>
  #include <unordered_map>
  #include <vector>

template<typename Value>
class TArrayRegistrySource : public RegistrySource<Value>
{
  public:
  using KeyExtractor = std::function<std::string(const Value&)>;

  TArrayRegistrySource(const std::string& name, int priority, TArray<Value>* gameArray, KeyExtractor extractor)
    : _name(name)
    , _priority(priority)
    , _gameArray(gameArray)
    , _keyExtractor(std::move(extractor))
    , _isIndexed(false)
  {}

  void BuildIndex()
  {
    if (!_gameArray)    throw std::runtime_error("Game array not bound");
    if (!_keyExtractor) throw std::runtime_error("Key extractor not set");

    const uint32_t count = _gameArray->Num();
    _keyToOffset.clear();
    _keyToOffset.reserve(static_cast<size_t>(count * 1.25f));
    for (uint32_t i = 0; i < count; ++i) _keyToOffset.emplace(_keyExtractor(_gameArray->Data[i]), static_cast<uint64_t>(i));

    _isIndexed = true;
  }

  Value* Get(const std::string& key) override
  {
    if (!_isIndexed) BuildIndex();
    const auto it = _keyToOffset.find(key);
    return (it != _keyToOffset.end()) ? &_gameArray->Data[it->second] : nullptr;
  }

  Value* GetByOffset(uint64_t offset) override
  {
    if (!_gameArray || offset >= _gameArray->Num()) [[unlikely]] return nullptr;
    return &_gameArray->Data[offset];
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

  private:
  std::string                               _name;
  int                                       _priority;
  TArray<Value>*                            _gameArray;
  KeyExtractor                              _keyExtractor;
  std::unordered_map<std::string, uint64_t> _keyToOffset;
  bool                                      _isIndexed;
};

#endif // TARRAY_REGISTRY_HPP