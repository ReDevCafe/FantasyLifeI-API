#include "ModLoader.hpp"
#include "GameData.hpp"
#include "Hook/EventHandler.hpp"
#include "Patcher/Patcher.hpp"
#include "Patcher/Patches/EventHook.hpp"
#include "Utils.hpp"
#include "Patcher/Patcher.hpp"
#include "Patcher/Patches/EventHook.hpp"
#include "Utils.hpp"

GameData *ModLoader::gameData = nullptr;
GameCache *ModLoader::gameCache = nullptr;
Logger *ModLoader::logger = nullptr;
ModEnvironnement *ModLoader::modEnvironnement = nullptr;
ConfigManager *ModLoader::configManager = nullptr;

DWORD WINAPI ModLoader::init(LPVOID lpParam) {
    logger = new Logger("ModLoader");
    logger->info("Mod loader has been started");
    Patcher patcher;
    uintptr_t baseAddress = (uintptr_t) GetModuleHandle(nullptr);
    // patcher.add(new EventHook(EventType::ClickEvent, 0x657DC32)); broken?????
    // patcher.applyPatches(baseAddress);
    gameData = new GameData(reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)));

    gameCache = new GameCache();
    configManager = new ConfigManager("../../Content/Settings");
    modEnvironnement = new ModEnvironnement("../../Content/Mods");

    

    

//    modEnvironnement->PreLoad();

    gameCache->PostLoadCache();
    gameData->initOthersData();

    logger->info(test1.Get(), " > ", test2.Get(), " ? ", test3.Get());
       
//    modEnvironnement->PostLoad();

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    HANDLE LoaderThread = nullptr;
    switch(ul_reason_for_call)
    {
        case DLL_PROCESS_ATTACH:
        {
            AllocConsole();
            freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);
            freopen_s(reinterpret_cast<FILE**>(stderr), "CONOUT$", "w", stderr);

            std::cout.clear();
            std::cerr.clear();

            Utils::EnableAnsiColors();
            LoaderThread = CreateThread(nullptr, 0, ModLoader::init, nullptr, 0, nullptr);
            break;
        }
        case DLL_PROCESS_DETACH:
        {
            ModLoader::logger->verbose("Mod loader detached from process");
            if (LoaderThread)
                CloseHandle(LoaderThread);
            FreeConsole();

            if (ModLoader::gameData != nullptr)
                delete ModLoader::gameData;

            if(ModLoader::gameCache != nullptr)
                delete ModLoader::gameCache;

            if(ModLoader::logger != nullptr)
                delete ModLoader::logger;

            if(ModLoader::modEnvironnement != nullptr)
            {
                ModLoader::modEnvironnement->Free();
                delete ModLoader::modEnvironnement;
            }

            if(ModLoader::configManager != nullptr)
                delete ModLoader::configManager;

            break;
        }
    }

    return TRUE;
}