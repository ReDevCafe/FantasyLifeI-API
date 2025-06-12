#include "Loader/ModEnvironnement.hpp"
#include "ModLoader.hpp"
using json = nlohmann::json;

int parseModMeta(const std::string& filename, ModObject& mod)
{
	std::ifstream file(filename);
	if (!file.is_open())
	{
		return 1;
	}

	json js;
	file >> js;

	js.at("name").get_to(mod.name);
	js.at("author").get_to(mod.author);
	js.at("version").get_to(mod.version);
	js.at("dllName").get_to(mod.dllName);

	return 0;
}

DWORD ModEnvironnement::SetupEnvironnement()
{
    const std::string modsDirs = "../../../Mods";
    if (!std::filesystem::exists(modsDirs))
    {
        std::filesystem::create_directories(modsDirs);
        ModLoader::logger->info("Created Mods directory");
        return 0;
    }

    for (const auto& entry : std::filesystem::directory_iterator(modsDirs))
    {
        if (!std::filesystem::is_directory(entry))
        {
            ModLoader::logger->error("Invalid object inside the mods folder");
            return 0;
        }

        std::filesystem::path modJsonPath = entry.path() / "Mod.json";
        if (!std::filesystem::exists(modJsonPath))
        {
            ModLoader::logger->error("Invalid mod packet inside of",  entry.path());
            return 0;
        }

        ModObject meta;
        if (parseModMeta(modJsonPath.string(), meta))
        {
            ModLoader::logger->error("Failed to load Mod.json of ", entry.path(), ", mod has been disabled..");
            return 0;
        }

        std::filesystem::path modDllPath = entry.path() / meta.dllName;
        if (!std::filesystem::exists(modDllPath))
        {
            ModLoader::logger->error("Cannot find mod dll ", modDllPath, ", for ", meta.name, ", mod has been disabled..");
            return 0;
        }

    }

    return 0;
}


