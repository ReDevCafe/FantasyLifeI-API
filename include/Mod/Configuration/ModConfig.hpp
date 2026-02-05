#ifndef MOD_CONFIG_HPP
  #define MOD_CONFIG_HPP

  #include <mutex>
  #include <unordered_map>
  #include <functional>
  #include <string>
  #include <unordered_set>
  #include <filesystem>
  #include "ConfigValue.hpp"
  #include "../../Lib/json.hpp"

  using json = nlohmann::json;

/*
 * Please refer to the following documentation:
 * https://github.com/ReDevCafe/FantasyLifeI-API/tree/master/.github/doc/Mod/ConfigurationFiles.md
 */
class ModConfig 
{
  public:
  ModConfig(const std::string& configId, std::filesystem::path configPath) : _configId(configId), _configPath(configPath){};
  ~ModConfig(){};

  template<typename T>
  void Register(const std::string& path, ConfigValue<T>* configValue, T defaultValue)
  {
    std::lock_guard<std::mutex> lock(_mutex);
    
    _registration[path] = {
      reinterpret_cast<void*>(configValue),
      [configValue](const json& val) { configValue->Set(val.get<T>()); },
      [configValue]() -> json { return configValue->Get(); },
      json(defaultValue)
    };

    _pending.insert(path);
  }

  void Reload();
  void Save();
  void Load();
  const std::string& GetConfigId() const { return _configId; }
  const std::filesystem::path& GetConfigPath() const { return _configPath;}

  private:
  struct Registration
  {
    void* ptr;
    std::function<void(const json&)> setter;
    std::function<json()> getter;
    json defaultValue;
  };

  void ApplyLoadedValue(const std::string& path, const json& value);
  void FinalizeIntialization();
  json GetAllValues();

  std::string _configId;
  std::filesystem::path _configPath;
  mutable std::mutex _mutex;
  std::unordered_map<std::string, Registration> _registration;
  std::unordered_set<std::string> _pending;
};


#endif //! MOD_CONFIG_HPP