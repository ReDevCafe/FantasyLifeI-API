#ifndef MODENVIRONNEMENT_HPP
    #define MODENVIRONNEMENT_HPP

    #include "Json.hpp"
    #include "Mod/ModObject.hpp"
    #include "Mod/ModBase.hpp"

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
        ModEnvironnement(std::string modDirs = "../../../Mods");
        ~ModEnvironnement() { Free(); };

        void                    PreLoad();
        void                    PostLoad();
        void                    Free();
    private:
        int                     SetupEnvironnement(std::string modDirs);

        ModMetaData             parseModMeta(std::filesystem::path filename);
        void                    resolveOrder(std::vector<ModObject*> mods);

        std::vector<ModObject*> _modsList;
        std::vector<LibHandle> _modLibList;
        std::vector<std::unique_ptr<ModBase>> _modPTRList;
};

#endif // !