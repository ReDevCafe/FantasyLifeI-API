#ifndef MODLOADER_HPP_
    #define MODLOADER_HPP_

    #include "Logger/ModLoaderLogger.hpp"
    #include "Loader/ModEnvironnement.hpp"
    #include "Utils.hpp"
class GameData;

class ModLoader {
    public:
        static GameData *gameData;
        static DWORD WINAPI init(LPVOID lpParam);
    protected:
    private:
};

#endif /* !MODLOADER_HPP_ */
