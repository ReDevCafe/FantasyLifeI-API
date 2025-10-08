#include "Mod/ModEnvironnement.hpp"

#include "ModLoader.hpp"
#include "Mod/ThreadPool.hpp"
#include <latch>
#include "Lib/json.hpp"
#include "Lib/miniz.h"


using json = nlohmann::json;

ModEnvironnement::ModEnvironnement(std::string modDirs)
{
    SetupEnvironnnement(std::move(modDirs));
}

ModMetaData ModEnvironnement::parseModData(const std::vector<char>& buffer)
{
    ModMetaData meta;
    std::string s(buffer.begin(), buffer.end());
    json js = json::parse(s);

    js.at("title").get_to(meta.title);
    js.at("identifier").get_to(meta.identifier);
    js.at("version").get_to(meta.version);
    js.at("author").get_to(meta.author);
    js.at("dependencies").get_to(meta.dependencies);

    return meta;
}

void ModEnvironnement::resolveOrder(std::vector<ModObject*> mods)
{
    const size_t N = mods.size();
    std::unordered_map<std::string, ModObject*> identifierMap;
    identifierMap.reserve(N);
    for(auto& m : mods) identifierMap.emplace(m->getMeta().identifier, m);

    std::unordered_map<ModObject*, int> indegree;
    std::unordered_map<ModObject*, std::vector<ModObject*>> dependents;
    indegree.reserve(N);
    dependents.reserve(N);

    for(auto& m : mods)
    {
        ModObject* pm = m;
        for(auto& depId : m->getMeta().dependencies)
        {
            if(depId.first == "fliapi")
            {
                if(depId.second <= MLVERSION) continue;

                ModLoader::logger->error("Mismatch version fliapi (The ModLoader) need to be atleast ", depId.second, " >= ");
                return;
            }

            auto it = identifierMap.find(depId.first);

            if(it == identifierMap.end()) 
            {
                ModLoader::logger->error("Missing dependency: ", depId.first);
                return;
            }

            if(depId.second > it->second->getMeta().version)
            {
                ModLoader::logger->error("Mismatch version ", depId.first, " need to be atleast ", depId.second, " >= ");
                return;
            }
            
            dependents[it->second].push_back(pm);
            ++indegree[pm];
        }
    }

    std::queue<ModObject*> q;
    for(auto& m : mods)
    {
        ModObject* pm = m;
        if(indegree[pm] == 0)
            q.push(pm);
    }

    std::vector<ModObject*> sorted;
    sorted.reserve(N);

    while(!q.empty())
    {
        ModObject* cur = q.front(); q.pop();
        sorted.push_back(cur);

        for(ModObject* child : dependents[cur])
            if(--indegree[child] == 0)
                q.push(child);
    }

    if(sorted.size() != N)
    {
        for(auto& [obj, deg] : indegree)
            if(deg > 0)
            {
                ModLoader::logger->error("Cyclic dependency involving ", obj->getMeta().identifier);
                return;
            }
    }

    _modsList = std::move(sorted);
}

bool ModEnvironnement::findModJsonInArchive(const std::filesystem::path& archivePath, std::string& foundPath)
{
    mz_zip_archive archive;
    memset(&archive, 0, sizeof(archive));

    if(!mz_zip_reader_init_file(&archive, archivePath.string().c_str(), 0)) return false;

    mz_uint num = mz_zip_reader_get_num_files(&archive);
    for(mz_uint i = 0; i < num; ++i)
    {
        mz_zip_archive_file_stat stat;
        if(!mz_zip_reader_file_stat(&archive, i, &stat)) continue;
        //if(!stat.m_filename) break;
        //if(!stat.m_filename) break;

        std::string fname = stat.m_filename;
        if(fname.size() >= 8 && fname.substr(fname.size() - 8) == "Mod.json")
        {
            foundPath = fname;
            mz_zip_reader_end(&archive);
            return true;
        }
    }

    mz_zip_reader_end(&archive);
    return false;
}

bool ModEnvironnement::findModLibInArchive(const std::filesystem::path& archivePath, const std::string& libName, std::string& foundPath)
{
    mz_zip_archive archive;
    memset(&archive, 0, sizeof(archive));

    if(!mz_zip_reader_init_file(&archive, archivePath.string().c_str(), 0)) return false;
    mz_uint num = mz_zip_reader_get_num_files(&archive);
    for (mz_uint i = 0; i < num; ++i) {
        mz_zip_archive_file_stat st;
        if (!mz_zip_reader_file_stat(&archive, i, &st)) continue;
        //if (st.m_filename) {
        //if (st.m_filename) {
            std::string fname = st.m_filename;
            if (fname.size() >= libName.size() &&
                fname.compare(fname.size() - libName.size(), libName.size(), libName) == 0)
            {
                foundPath = fname;
                mz_zip_reader_end(&archive);
                return true;
            }
        //}
        //}
    }

    mz_zip_reader_end(&archive);
    return false;
}

bool ModEnvironnement::readContentFromArchive(const std::filesystem::path& archivePath, const std::string& internalName, std::vector<char>& bufferOut)
{
    mz_zip_archive archive;
    memset(&archive, 0, sizeof(archive));

    if(!mz_zip_reader_init_file(&archive, archivePath.string().c_str(), 0)) return false;

    int index = mz_zip_reader_locate_file(&archive, internalName.c_str(), nullptr, 0);
    if(index < 0)
    {
        mz_uint num = mz_zip_reader_get_num_files(&archive);
        bool found = false;

        for(mz_uint i = 0; i < num; ++num)
        {
            mz_zip_archive_file_stat stat;
            if(!mz_zip_reader_file_stat(&archive, i, &stat)) continue;
            //if(stat.m_filename == "") break;
            //if(stat.m_filename == "") break;

            std::string fname = stat.m_filename;
            if(fname.size() >= internalName.size() && fname.compare(fname.size() - internalName.size(), internalName.size(), internalName) == 0)
            {
                index = static_cast<int>(i);
                found = true;
                break;
            }
        }
        if(!found)
        {
            mz_zip_reader_end(&archive);
            return false;
        }
    }

    size_t uncompSize = 0;
    void* p = mz_zip_reader_extract_to_heap(&archive, index, &uncompSize, 0);
    if(!p) 
    {
        mz_zip_reader_end(&archive);
        return false;
    }

    bufferOut.resize(uncompSize);
    memcpy(bufferOut.data(), p, uncompSize);
    mz_free(p);
    mz_zip_reader_end(&archive);
    return true;
}

std::filesystem::path ModEnvironnement::writeBufferToTemp(const std::vector<char>& buffer, const std::string& suffix)
{
    try
    {
        std::filesystem::path tmpDir = std::filesystem::temp_directory_path();
        auto now = std::chrono::high_resolution_clock::now().time_since_epoch().count();

        std::string unique = std::to_string(std::hash<std::string>{}(std::to_string(now)));
        std::filesystem::path tmpPath = tmpDir / (std::string("fliapi_temp_") + unique + suffix);
        std::ofstream ofs(tmpPath, std::ios::binary);

        if(!ofs.is_open()) return {};
        ofs.write(buffer.data(), static_cast<std::streamsize>(buffer.size()));
        ofs.close();
        return tmpPath;
    }
    catch(...) { return {}; }
}

void ModEnvironnement::SetupEnvironnnement(std::string modDirs)
{
    if (!std::filesystem::exists(modDirs))
    {
        std::filesystem::create_directories(modDirs);
        ModLoader::logger->info("Created mods directory");
        return;
    }

    std::vector<ModObject*> tempModList;

    for(const auto& entry : std::filesystem::directory_iterator(modDirs))
    {
        std::filesystem::path entryPath = entry.path();
        if(entryPath.extension() == ".fliarchive")
        {
            std::string modJsonInternal;
            if(!findModJsonInArchive(entryPath, modJsonInternal))
            {
                ModLoader::logger->warn("Invalid mod (no metadata) ", entryPath);
                continue;
            }

            std::vector<char> jsonBuffer;
            if(!readContentFromArchive(entryPath, modJsonInternal, jsonBuffer))
            {
                ModLoader::logger->error("Failed to read metadata inside: ", entryPath);
                continue;
            }

            ModMetaData meta;
            try {
                meta = parseModData(jsonBuffer);
            } catch (const std::exception& e) {
                ModLoader::logger->error("Failed to parse Mod.json inside: ", entryPath, " error: ", e.what());
                continue;
            }

            std::string internalModPath;
            std::string modLibIdentifier = "CompiledBin.bin";
            if(!findModLibInArchive(entryPath, modLibIdentifier, internalModPath))
            {
                ModLoader::logger->warn("Invalid mod (no content) ", entryPath);
                continue;
            }

            tempModList.push_back(new ModObject(std::move(meta), entryPath, internalModPath));
        }
    }

    resolveOrder(tempModList);
}

void ModEnvironnement::PreLoad()
{
    #ifdef MLDEBUG
        ThreadPool podol{1};
        podol.enqueue([](){
            std::cerr << "[TEST1] pool task executed on " << std::this_thread::get_id() << "\n";
            ModLoader::logger->error("[TEST2] logger work");
        });
    #endif

    const size_t modListSize = _modsList.size();
    size_t numThreads = std::thread::hardware_concurrency();
    if(numThreads == 0) numThreads = 1;
    if(numThreads > modListSize) numThreads = modListSize;

    ThreadPool pool{numThreads};
    struct Bucket
    {
        std::mutex                              mutex;
        std::vector<LibHandle>                  libs;
        std::vector<std::unique_ptr<ModBase>>   mods;
    };

    std::vector<Bucket> buckets(numThreads);
    std::atomic<int> nextBucket { 0 }; 
    std::latch done(static_cast<int>(modListSize));
    
    
    for (auto * mod : _modsList)
    {
        pool.enqueue([this, &done, mod, &buckets, &nextBucket, numThreads]()
        {
            size_t index = nextBucket.fetch_add(1) % numThreads;
            Bucket& bucket = buckets[index];

            std::vector<char> modBuf;
            if(!readContentFromArchive(mod->getContainerPath(), mod->getInternalPath(), modBuf))
            {
                ModLoader::logger->error("Failed to decompressed content from archive from: ", mod->getMeta().identifier);
                done.count_down();
                return;
            }

            std::string suffix = ".mod";
            {
                std::string intern = mod->getInternalPath();
                size_t pos = intern.find_last_of('.');
                if(pos != std::string::npos) suffix = intern.substr(pos);
            }
            std::string suffix = ".mod";
            {
                std::string intern = mod->getInternalPath();
                size_t pos = intern.find_last_of('.');
                if(pos != std::string::npos) suffix = intern.substr(pos);
            }

            std::filesystem::path libOnDiskPath = writeBufferToTemp(modBuf, suffix);
            if(libOnDiskPath.empty())
            {
                ModLoader::logger->error("Failed to writee temporary content for ", mod->getMeta().identifier);
                done.count_down();
                return;
            }

            {
                std::lock_guard<std::mutex> lg(_mergeMutex);
                _tempFilesToRemove.push_back(libOnDiskPath);
            }
            {
                std::lock_guard<std::mutex> lg(_mergeMutex);
                _tempFilesToRemove.push_back(libOnDiskPath);
            }

            LibHandle lib = LoadLib(libOnDiskPath.string());
            if(!lib)
            {
                ModLoader::logger->error("Failed to load: ", mod->getMeta().identifier);
                done.count_down();
                return;
            }

            using GetModFunc = ModBase *(*)();
            auto getter = reinterpret_cast<GetModFunc>(GetFunction(lib, "CraftMod"));
            if(!getter)
            {
                ModLoader::logger->error("Missing CraftMod in ", mod->getMeta().identifier);
                CloseLib(lib);
                done.count_down();
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
        _modLibList.reserve(buckets.size());
        std::lock_guard<std::mutex> lg(_mergeMutex);
        for(auto& bucket : buckets)
        {
            _modPtrList.reserve(bucket.mods.size());
            _modLibList.insert(_modLibList.end(), bucket.libs.begin(), bucket.libs.end());
            for(auto& modPtr : bucket.mods) 
            { 
                _modPtrList.push_back(std::move(modPtr));
            }
        }
    }
    ModLoader::logger->verbose("MENV Preload finished. [size of modPtr: ", _modPtrList.size(),"]");
}

void ModEnvironnement::PostLoad()
{
    const size_t modListSize = _modsList.size();
    size_t numThreads = std::thread::hardware_concurrency();
    if(numThreads == 0) numThreads = 1;
    if(numThreads > modListSize) numThreads = modListSize;

    ThreadPool pool{numThreads};

    for(auto& modPtr : _modPtrList)
        pool.enqueue([&modPtr]{modPtr->OnPostLoad();});
}

void ModEnvironnement::Free()
{
    for(auto* mod : _modsList)
        delete mod;

    _modsList.clear();
    
    for(auto& modPtr : _modPtrList)
        modPtr->OnExit();
    
    _modPtrList.clear();
    
    for(auto lib : _modLibList)
        CloseLib(lib);

    _modLibList.clear();

    for(const std::filesystem::path& p : _tempFilesToRemove)
    {
        std::error_code ec;
        if(!std::filesystem::exists(p)) continue;

        if(!std::filesystem::remove(p, ec))
            ModLoader::logger->warn("Could not remove temporary file: ", p, " error: ", ec.message());
    }
    _tempFilesToRemove.clear();
}