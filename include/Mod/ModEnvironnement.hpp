#ifndef MODENVIRONNEMENT_HPP
    #define MODENVIRONNEMENT_HPP

    #include "Mod/ModObject.hpp"
    #include "Mod/ModBase.hpp"
    #include <mutex>

#ifdef _WIN32
    #include <windows.h>
    using LibHandle = HMODULE;
    #define LoadLib(path) LoadLibraryA(path.c_str())
    #define GetFunction GetProcAddress
    #define CloseLib FreeLibrary
#else
    #include <dlfcn.h>
    using LibHandle = void*;
    #define LoadLib(path) dlopen(path.c_str(), RTLD_NOW)
    #define GetFunction dlsym
    #define CloseLib dlclose
#endif

class ModEnvironnement
{
    public:
    ModEnvironnement(std::string modDirs);

    private:
    // Archive reading, decompression shit..
    bool                    findFileInArchive(const std::filesystem::path& archivePath, const std::string& suffix, std::string& foundPath);
    bool                    readContentFromArchive(const std::filesystem::path& archivePath, const std::string& internalName, std::vector<char>& bufferOut);
    std::filesystem::path   writeBufferToTemp(const std::vector<char>& buffer, const std::string& suffix);

    // Loading libs and parsing metadatas
    ModMetaData             parseModData(const std::vector<char>& buf);
    void                    resolveOrder(std::vector<ModObject*> mods);
    
    public:
    void                    SetupEnvironnnement(std::string modDirs);
    void                    PreLoad();
    void                    PostLoad();
    void                    Free();
    
    private:
    std::vector<ModObject*>                 _modsList;
    std::vector<LibHandle>                  _modLibList;
    std::vector<std::unique_ptr<ModBase>>   _modPtrList;
    std::vector<std::filesystem::path>      _tempFilesToRemove;
    std::mutex _mergeMutex;
};

#endif