#ifndef MODLOADER_HPP
    #define MODLOADER_HPP

    #include "Logger/Logger.hpp"
    #include "Mod/Configuration/ConfigManager.hpp"
    #include "Mod/ModEnvironnement.hpp"
    #include "GameData.hpp"
    #include "GameCache.hpp"
    #include "Export.h"

    #ifndef MLVERSION
        #define MLVERSION 0.5
    #endif

    #ifdef _WIN32
        #include <Psapi.h>
    #endif

class ModLoader {
    public:
        ML_API static GameData *gameData;
        ML_API static GameCache *gameCache;
        ML_API static ConfigManager *configManager;

        static ModEnvironnement *modEnvironnement;
        static Logger *logger; 
        
        static void WINAPI init(MODULEINFO* moduleInfo);

    protected:
    private:
};

#endif /* !MODLOADER_HPP */