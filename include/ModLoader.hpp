#ifndef MODLOADER_HPP_
    #define MODLOADER_HPP_

    #include "GameData.hpp"
    #include "Logger/ModLoaderLogger.hpp"
    #include "Utils.hpp"

class ModLoader {
    public:
        static GameData *gameData;
        static DWORD WINAPI init(LPVOID lpParam);
    protected:
    private:
};

#endif /* !MODLOADER_HPP_ */
