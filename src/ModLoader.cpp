#include "ModLoader.hpp"
#include "GameCache.hpp"
#include "GameData.hpp"
#include "Hook/EventHandler.hpp"
#include "Patcher/Patcher.hpp"
#include "Patcher/Patches/EventHook.hpp"
#include <thread>
#include "CommonData.hpp"

GameData *ModLoader::gameData = nullptr;
GameCache *ModLoader::gameCache = nullptr;
Logger *ModLoader::logger = nullptr;
ModEnvironnement *ModLoader::modEnvironnement = nullptr;
ConfigManager *ModLoader::configManager = nullptr;

void WINAPI ModLoader::init(MODULEINFO* moduleInfo)
{
    logger = new Logger("ModLoader");
    logger->info("Mod loader has been started");
    
    std::this_thread::sleep_for(std::chrono::milliseconds(200));

    Patcher patcher;
    logger->verbose("Dll module is loaded");
    CommonData::init(moduleInfo->SizeOfImage, (uintptr_t) GetModuleHandle(nullptr));
    // Patcher is crashing the game for unknown reasons - disabling for now, waiting @EltyDev to investigate
    // patcher.add(new EventHook(EventType::ClickEvent, 0x657DC32));
    // patcher.applyPatches(baseAddress);

    gameData = new GameData();
    gameData->init();

    gameCache = new GameCache();
    configManager = new ConfigManager("../../Content/Settings");
    modEnvironnement = new ModEnvironnement("../../Content/Mods");
    modEnvironnement->PreLoad();
    
    gameCache->PostLoadCache();
    gameData->initOthersData();

    modEnvironnement->PostLoad();
    logger->verbose("Mod loader initialization complete");
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    std::thread* loaderThread;
    switch(ul_reason_for_call)
    {
        case DLL_PROCESS_ATTACH:
        {
            AllocConsole();
            freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);
            freopen_s(reinterpret_cast<FILE**>(stderr), "CONOUT$", "w", stderr);

            std::cout.clear();
            std::cerr.clear();

            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            DWORD dwMode = 0;
            if(GetConsoleMode(hConsole, &dwMode))
            {
                dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
                SetConsoleMode(hConsole, dwMode);
            }

            MODULEINFO moduleInfo{};
            GetModuleInformation(GetCurrentProcess(), GetModuleHandle(nullptr), &moduleInfo, sizeof(MODULEINFO));
            loaderThread = new std::thread(ModLoader::init, &moduleInfo);
            break;
        }
        case DLL_PROCESS_DETACH:
        {
            ModLoader::logger->verbose("Mod loader detached from process");

            if (ModLoader::configManager)
                delete ModLoader::configManager;

            if (ModLoader::modEnvironnement)
            {
                ModLoader::modEnvironnement->Free();
                delete ModLoader::modEnvironnement;
            }

            if (ModLoader::gameCache)
                delete ModLoader::gameCache;

            if (ModLoader::gameData)
                delete ModLoader::gameData;

            if (ModLoader::logger)
                delete ModLoader::logger;

            if (loaderThread)
                loaderThread->join();

            FreeConsole();
            
            break;
        }
    }

    return TRUE;
}