#ifndef MOD_CONFIG_MANAGER
  #define MOD_CONFIG_MANAGER

  #include <string>
  #include <functional>
  #include <filesystem>
  #include "Export.h"
  #include "ModConfig.hpp"

/*
 * Please refer to the following documentation:
 * https://github.com/ReDevCafe/FantasyLifeI-API/tree/master/.github/doc/Mod/ConfigurationFiles.md
 */
class ConfigManager
{
  public:
  ConfigManager(const std::filesystem::path& configPath);
  ML_API void PushConfig(std::string name, std::function<void(ModConfig&)> registerFunction);

  void ReloadAll();
  void SaveAll();

  const std::unordered_map<std::string, std::shared_ptr<ModConfig>>& GetAllConfig() const { return _configs; }

  private:
  std::mutex _mutex;
  std::filesystem::path _configPath;
  std::unordered_map<std::string, std::shared_ptr<ModConfig>> _configs;
};

#endif //! MOD_CONFIG_MANAGER