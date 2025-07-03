#include "ModEnvironnement.hpp"
#include "ModLoader.hpp"
#include <set>

using json = nlohmann::json;

ModEnvironnement::ModEnvironnement(std::string modDirs)
{
    SetupEnvironnement(modDirs);
}

ModMetaData ModEnvironnement::parseModMeta(std::filesystem::path filename)
{
	std::ifstream file(filename);
	if (!file.is_open())
    throw std::filesystem::filesystem_error(
        "Failed to open mod json file",
        std::filesystem::path(filename),
        std::make_error_code(std::errc::io_error)
    );

    ModMetaData meta;

	json js;
	file >> js;

	js.at("name").get_to(meta.name);
	js.at("author").get_to(meta.author);
	js.at("version").get_to(meta.version);
    js.at("dependencies").get_to(meta.dependencies);

	return meta;
}

std::vector<ModObject*> ModEnvironnement::resolveOrder(std::vector<ModObject>& mods)
{
    const size_t N = mods.size();
    std::unordered_map<std::string, ModObject*> nameMap;
    nameMap.reserve(N);
    for(auto& m : mods) nameMap.emplace(m.getMeta().name, &m);

    std::unordered_map<ModObject*, size_t> indegree;
    indegree.reserve(N);

    std::unordered_map<ModObject*, std::vector<ModObject*>> dependents;
    dependents.reserve(N);

    for(auto& m : mods)
    {
        ModObject* pm = &m;
        for(auto& depName : m.getMeta().dependencies)
        {
            auto it = nameMap.find(depName);
            if(it == nameMap.end()) throw std::runtime_error("Missing dependency: " + depName);

            ModObject* dep = it->second;
            dependents[dep].push_back(pm);
            ++indegree[pm];
        }
    }

    std::queue<ModObject*> q;
    q = {};
    for(auto& [obj, deg] : indegree)
        if(deg == 0) q.push(obj);

    std::vector<ModObject*> sorted;
    sorted.reserve(N);

    while(!q.empty())
    {
        ModObject* cur = q.front();
        q.pop();

        sorted.push_back(cur);

        for(ModObject* child : dependents[cur])
            if(--indegree[child] == 0)
                q.push(child);
    }

    if(sorted.size() != N)
    {
        for(auto& [obj, deg] : indegree)
            if(deg > 0)
                throw std::runtime_error("Cyclic dependency involving " + obj->getMeta().name);
    }

    return sorted;
}

int ModEnvironnement::SetupEnvironnement(std::string modDirs)
{
    if (!std::filesystem::exists(modDirs))
    {
        std::filesystem::create_directories(modDirs);
        ModLoader::logger->info("Created Mods directory");
        return 0;
    }
    
    std::vector<ModObject> tempModList;
    for (const auto& entry : std::filesystem::directory_iterator(modDirs))
    {
        if (!std::filesystem::is_directory(entry))
        {
            ModLoader::logger->error("Invalid object inside the mods folder");
            return 0;
        }

        std::filesystem::path entryPath = entry.path();
        std::filesystem::path modJsonPath = entryPath / "Mod.json";
        if (!std::filesystem::exists(modJsonPath))
        {
            ModLoader::logger->error("Invalid mod packet inside of",  entryPath, " Missing: ", modJsonPath);
            return 0;
        }

        ModObject mod(parseModMeta(modJsonPath), entryPath);
        std::filesystem::path modLibPath = entryPath / (mod.getMeta().name + ".mod");
        if (!std::filesystem::exists(modLibPath))
        {
            ModLoader::logger->error("Invalid mod packet inside of",  entryPath, " Missing: ", modLibPath);
            return 0;
        }

        tempModList.push_back(mod);
    }

    _modsList = resolveOrder(tempModList);
    return 1;
}

void ModEnvironnement::PreLoad()
{
    for(auto* m : _modsList)
    {
        ModLoader::logger->verbose("Loading mod: ", m->getMeta().name, " v", m->getMeta().version);
        std::filesystem::path modLibPath = m->GetPath() / (m->getMeta().name + ".mod");

        LibHandle lib = LoadLib(modLibPath.string());
        if(!lib)
        {
            ModLoader::logger->error("Failed to load ", modLibPath);
            continue;
        }
        _modLibList.push_back(lib);
        
        using GetModFunc = ModBase* (*)();
        GetModFunc getFunc = (GetModFunc)GetFunction(lib, "CraftMod");
        if(!getFunc)
        {
            ModLoader::logger->error("Missing CraftMod function in ", m->getMeta().name);
            CloseLib(lib);
        }

        std::unique_ptr<ModBase> mod(getFunc());

        mod->OnPreLoad();
        _modPTRList.push_back(std::move(mod));
    }
}

void ModEnvironnement::PostLoad()
{
    for(auto& mod : _modPTRList)
        mod->OnPostLoad();
}

void ModEnvironnement::Free()
{
    for(auto* lib : _modLibList)
        CloseLib(lib);
}