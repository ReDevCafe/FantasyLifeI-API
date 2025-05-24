#include "Loader/ModEnvironnement.hpp"
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
        std::cout << ML << "Created Mods directory" << std::endl;
        return 0;
    }

    for (const auto& entry : std::filesystem::directory_iterator(modsDirs))
    {
        if (!std::filesystem::is_directory(entry))
        {
            std::cerr << ML << "Invalid object inside the mods folder" << std::endl;
            return 0;
        }

        std::filesystem::path modJsonPath = entry.path() / "Mod.json";
        if (!std::filesystem::exists(modJsonPath))
        {
            std::cerr << ML << "Invalid mod packet" << std::endl;
            return 0;
        }

        ModObject meta;
        if (parseModMeta(modJsonPath.string(), meta))
        {
            std::cerr << "Failed to load Mod.json of " << entry.path() << ", mod has been disabled.." << std::endl;
            return 0;
        }

        std::filesystem::path modDllPath = entry.path() / meta.dllName;
        if (!std::filesystem::exists(modDllPath))
        {
            std::cerr << ML << "Cannot find mod dll" << std::endl;
            return 0;
        }

        ModCommunicator::LoadMod(modDllPath.string().c_str(), meta);
    }

    return 0;
}


