#ifndef MODLOADER_HPP_
    #define MODLOADER_HPP_

    #include "Logger/ModLoaderLogger.hpp"
    #include "Loader/ModEnvironnement.hpp"
    #include "Utils.hpp"
    #include "GameData.hpp"
    #include "GameCache.hpp"
    #include "Hook/MemoryHelper.hpp"
    #include "Patcher/Patcher.hpp"
    #include "Patcher/Patches/EventHook.hpp"

class ModLoader {
    public:
        static GameData *gameData;
        static GameCache *gameCache;
        static DWORD WINAPI init(LPVOID lpParam);
    protected:
    private:
};

#endif /* !MODLOADER_HPP_ */
