# Mod configs
Mod configuration files are an important part of mods, they allow you to define settings that can be easily changed by user or other mods.

To register configuration values, use the [Config Manager](https://github.com/ReDevCafe/FantasyLifeI-ModLoader-Headers/Mod/Configuration/ConfigManager.hpp) provided by the [Mod Loader](https://github.com/ReDevCafe/FantasyLifeI-ModLoader-Headers/ModLoader.hpp) class.

## Basic example:
```cpp
ConfigValue<bool>        setting1;
ConfigValue<std::string> setting2;
ConfigValue<int>         setting3;

void YourMod::OnPreLoad()
{
  ...

  // The config manager is a part of ModLoader
  // To register a configuration, call PushConfig()
  // It takes two arguments:
  // 1. A string ID that uniquely identifies your configuration file
  // 2. A function (or lambda) that performs the registration
  ModLoader::configManager->PushConfig("YourModID", [&](ModConfig& config)
  {
    // Register() requires three arguments:
    // 1. The path used inside the JSON file
    // 2. A Pointer to your ConfigValue variable
    // 3. The default value to use if the config file doesn't exit

    config.Register("setting1", &setting1, true);
    config.Register("setting2", &setting2, std::string("HRT :3"));
    config.Register("setting3", &setting3, 543653);
  });
  ...
}
```

## Accessing and using your config values:
```cpp
bool test = YourMod::setting1.Get();  // Retrieve current value
YourMod::setting1.Set(false);         // Change value
```
> [!NOTE] 
> `Get()` blocks until the value is initialized
> Use `GetOrThrow()` if you are impatient or if you want a exception instead of waiting

## Cleaner way to use the ConfigManager:

Instead of defining all the config values directly in you main mod file, you can group them neatly inside a `Config` class

`Config.hpp`
```cpp
...

class Config 
{
  public:
  inline static ConfigValue<bool> setting1;
  inline static ConfigValue<std::string> setting2;
  inline static ConfigValue<int> setting3;

  inline static void configRegister(ModConfig& config)
  {
      config.Register("setting1", &setting1, true);
      config.Register("setting2", &setting2, std::string("HRT :3"));
      config.Register("setting3", &setting3, 543653);
  }
}
```

`Mod.cpp`
```cpp

void YourMod::OnPreload()
{
    ...
    ModLoader::configManager->PushConfig("YourModID", Config::configRegister);
    ...
}
```

## References:
- [Mod Base](https://github.com/ReDevCafe/FantasyLifeI-ModLoader-Headers/Mod/ModBase.hpp)
- [Config Manager](https://github.com/ReDevCafe/FantasyLifeI-ModLoader-Headers/Mod/Configuration/ConfigManager.hpp)
- [Mod Config](https://github.com/ReDevCafe/FantasyLifeI-ModLoader-Headers/Mod/Configuration/ModConfig.hpp)
- [Config value](https://github.com/ReDevCafe/FantasyLifeI-ModLoader-Headers/Mod/Configuration/ConfigValue.hpp)