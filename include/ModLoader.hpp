#ifndef MODLOADER_HPP_
    #define MODLOADER_HPP_

    #include "Logger/Logger.hpp"
    #include "Loader/ModEnvironnement.hpp"
    #include "Utils.hpp"
    #include "GameData.hpp"
    #include "GameCache.hpp"
    #include "Hook/MemoryHelper.hpp"
    #include "Patcher/Patcher.hpp"
    #include "Patcher/Patches/EventHook.hpp"

    #include <psapi.h>

class ModLoader {
    public:
        static GameData *gameData;
        static GameCache *gameCache;
        static Logger *logger; 
        static DWORD WINAPI init(LPVOID parameter);
    protected:
    private:
};

#endif /* !MODLOADER_HPP_ */
