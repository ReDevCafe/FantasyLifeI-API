#ifndef MODLOADER_HPP_
    #define MODLOADER_HPP_

    #include "Logger/ModLoaderLogger.hpp"
    #include "Loader/ModEnvironnement.hpp"
    #include "Utils.hpp"
class GameData;
class GameCache;

class ModLoader {
    public:
        static GameData *gameData;
        static GameCache *gameCache;
        static DWORD WINAPI init(LPVOID lpParam);
    protected:
    private:
};

#endif /* !MODLOADER_HPP_ */
