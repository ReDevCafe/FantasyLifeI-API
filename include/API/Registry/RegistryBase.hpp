#ifndef FLI_BASE_REGISTRY_HPP
  #define FLI_BASE_REGISTRY_HPP

  #include <cstdint>
  #include <string>
  #include <unordered_map>

template<typename T>
class IRegistry
{
  public:
  virtual ~IRegistry() = default;

  virtual T*     Get(const std::string& key)      = 0;
  virtual T*     GetByOffset(uint64_t offset)      = 0;
  virtual bool   Contains(const std::string& key) const = 0;
  virtual size_t Size()                           const = 0;

  virtual std::unordered_map<std::string, uint64_t>::const_iterator begin() const = 0;
  virtual std::unordered_map<std::string, uint64_t>::const_iterator end()   const = 0;
};

#endif // FLI_BASE_REGISTRY_HPP