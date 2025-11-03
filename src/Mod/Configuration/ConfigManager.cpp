#include "Mod/Configuration/ConfigManager.hpp"
#include <filesystem>
#include <mutex>

ConfigManager::ConfigManager(const std::filesystem::path& configPath) : _configPath(configPath)
{
  std::filesystem::create_directories(_configPath);
}

void ConfigManager::PushConfig(std::string name, std::function<void(ModConfig&)> registerFunction)
{
  std::lock_guard<std::mutex> lock(_mutex);
  auto configPath = _configPath / (name + ".json");
  auto config = std::make_shared<ModConfig>(name, configPath);

  registerFunction(*config);

  config->Load();
  _configs[name] = config;
}

void ConfigManager::SaveAll()
{
  std::lock_guard<std::mutex> lock(_mutex);
  for(const auto& [name, config] : _configs)
    config->Save();
}

void ConfigManager::ReloadAll()
{
  std::lock_guard<std::mutex> lock(_mutex);
  for(const auto& [name, config] : _configs)
    config->Reload();
}
