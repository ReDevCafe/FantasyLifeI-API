#include "Mod/ModEnvironnement.hpp"
#include "ModLoader.hpp"
#include <set>
#include "Mod/ThreadPool.hpp"
#include <latch>

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

void ModEnvironnement::resolveOrder(std::vector<ModObject*> mods)
{
    const size_t N = mods.size();

    std::unordered_map<std::string, ModObject*> nameMap;
    nameMap.reserve(N);
    for (auto& m : mods)
        nameMap.emplace(m->getMeta().name, m);

    std::unordered_map<ModObject*, int> indegree;
    std::unordered_map<ModObject*, std::vector<ModObject*>> dependents;
    indegree.reserve(N);
    dependents.reserve(N);

    for (auto& m : mods) 
    {
        ModObject* pm = m;
        for (auto& depName : m->getMeta().dependencies) {
            auto it = nameMap.at(depName);
            if (!it) throw std::runtime_error("Missing dependency: " + depName);

            dependents[it].push_back(pm);
            ++indegree[pm];
        }
    }

    std::queue<ModObject*> q;
    for (auto& m : mods)
    {
        ModObject* pm = m;
        if (indegree[pm] == 0)
            q.push(pm);
    }

    std::vector<ModObject*> sorted;
    sorted.reserve(N);

    while (!q.empty()) 
    {
        ModObject* cur = q.front(); q.pop();
        sorted.push_back(cur);

        for (ModObject* child : dependents[cur]) 
            if (--indegree[child] == 0)
                q.push(child);
    }

    if (sorted.size() != N) 
        for (auto& [obj, deg] : indegree) 
            if (deg > 0)
                throw std::runtime_error("Cyclic dependency involving " + obj->getMeta().name);
        

    _modsList = std::move(sorted);
}

int ModEnvironnement::SetupEnvironnement(std::string modDirs)
{
    if (!std::filesystem::exists(modDirs))
    {
        std::filesystem::create_directories(modDirs);
        ModLoader::logger->info("Created Mods directory");
        return 0;
    }
    
    std::vector<ModObject*> tempModList;
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

        ModObject* mod = new ModObject(parseModMeta(modJsonPath), entryPath);
        std::filesystem::path modLibPath = entryPath / (mod->getMeta().name + ".mod");
        if (!std::filesystem::exists(modLibPath))
        {
            ModLoader::logger->error("Invalid mod packet inside of",  entryPath, " Missing: ", modLibPath);
            return 0;
        }

        tempModList.push_back(mod);
    }

    resolveOrder(tempModList);
    return 1;
}

void ModEnvironnement::PreLoad()
{
    const size_t modListSize = _modsList.size();
    size_t numThreads = std::thread::hardware_concurrency();
    if (numThreads > modListSize) numThreads = modListSize;

    ThreadPool pool{numThreads};

    struct Bucket
    {
        std::vector<LibHandle> libs;
        std::vector<std::unique_ptr<ModBase>> mods;
    };

    std::vector<Bucket> buckets(numThreads);
    std::atomic<int> nextBucket { 0 };

    std::latch done(modListSize);

    for (auto* mod : _modsList)
    {
        pool.enqueue([this, &done, mod, &buckets, &nextBucket, numThreads]
            {
                size_t index = nextBucket.fetch_add(1) % numThreads;
                Bucket& bucket = buckets[index];

                ModMetaData meta = mod->getMeta();
                ModLoader::logger->info("Loading mod: ", meta.name, " v", meta.version);

                auto path = mod->GetPath() / (meta.name + ".mod");
                LibHandle lib = LoadLib(path.string());
                if (!lib)
                {
                    ModLoader::logger->error("Failed to load: ", meta.name);
                    return;
                }

                using GetModFunc = ModBase * (*)();
                auto getter = reinterpret_cast<GetModFunc>(GetFunction(lib, "CraftMod"));
                if (!getter)
                {
                    ModLoader::logger->error("Missing CraftMod in ", meta.name);
                    return;
                }

                auto modPtr = std::unique_ptr<ModBase>(getter());
                modPtr->OnPreLoad();

                bucket.libs.push_back(lib);
                bucket.mods.push_back(std::move(modPtr));
                done.count_down();
            });
    }

    done.wait();

    {
        std::lock_guard<std::mutex> lg(_mergeMutex);
        for(auto& bucket : buckets)
        {
            _modLibList.insert(_modLibList.end(), bucket.libs.begin(), bucket.libs.end());

            for(auto& modPtr : bucket.mods) _modPTRList.push_back(std::move(modPtr));
        }
    }
}

void ModEnvironnement::PostLoad()
{
    ThreadPool pool{};

    for(auto& modPtr : _modPTRList)
    {
        pool.enqueue([&modPtr] 
        {
            modPtr->OnPostLoad();
        });
    }
}

void ModEnvironnement::Free()
{
    for(auto* mod : _modsList)
        delete mod;
    _modsList.clear();

    _modPTRList.clear();

    for(auto* lib : _modLibList)
        CloseLib(lib);
    _modsList.clear();
}