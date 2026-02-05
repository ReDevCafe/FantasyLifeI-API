#include "Mod/Configuration/ModConfig.hpp"
#include <exception>
#include <filesystem>
#include <fstream>
#include <mutex>
#include <stdexcept>
#include "Lib/json.hpp"
#include "ModLoader.hpp"


void ModConfig::Load()
{
  std::lock_guard<std::mutex> lock(_mutex);

  if(!std::filesystem::exists(_configPath))
  {
    FinalizeIntialization();
    return;
  }

  try
  {
    std::ifstream file(_configPath);
    if(!file.is_open())
    {
      ModLoader::logger->error("Failed to open config file: ", _configPath.string());
      
      FinalizeIntialization();
      return;
    }

    json Json;
    file >> Json;
    file.close();

    for(const auto& [path, value] : Json.items())
    {
      ApplyLoadedValue(path, value);
    }

    FinalizeIntialization();
  }
  catch(const json::exception& e)
  {
    ModLoader::logger->error("JSON parse error in ", _configPath, " ", e.what());
    FinalizeIntialization();
  }
}

void ModConfig::Save()
{
  std::lock_guard<std::mutex> lock(_mutex);

  try
  {
    std::filesystem::create_directories(_configPath.parent_path());
    json Json = GetAllValues();

    std::ofstream file(_configPath);
    if(!file.is_open()) throw std::runtime_error("Failed to open config file for writing: " + _configPath.string());

    file << Json.dump(4);
    file.close();
  } catch (const std::exception& e)
  {
    ModLoader::logger->error("Failed to save config ", _configPath, " : ", e.what());
  }
}

void ModConfig::Reload()
{
  std::lock_guard<std::mutex> lock(_mutex);
  for(auto& [path, reg] : _registration)
  {
    _pending.insert(path);
    // TODO: Reset the config value and adding a reset method in reg
  }

  Load();
}

void ModConfig::ApplyLoadedValue(const std::string& path, const json& value)
{
  auto it = _registration.find(path);
  if(it != _registration.end())
  {
    try
    {
      it->second.setter(value);
    } catch(const json::exception& e)
    {
      ModLoader::logger->error("Error loading config value '", path, "': ", e.what());
      it->second.setter(it->second.defaultValue);
    }

    _pending.erase(path);
  }
}

void ModConfig::FinalizeIntialization()
{
  // Praying on the fact that the mutex is already locked by caller, if not, ngl we are cook

  for(const auto& path : _pending)
  {
    auto it = _registration.find(path);
    if(it != _registration.end()) it->second.setter(it->second.defaultValue);
  }

  _pending.clear();
}

json ModConfig::GetAllValues()
{
  json Json;
  for(const auto& [path, reg] : _registration) Json[path] = reg.getter();

  return Json;
}