#include "ModLoader.hpp"
#include "API/Engine/TArray.hpp"
#include "API/Engine/TMap.hpp"
#include "GameCache.hpp"
#include "GameData.hpp"
#include "Hook/EventHandler.hpp"
#include "Patcher/Patcher.hpp"
#include "Patcher/Patches/EventHook.hpp"
#include "Psapi.h"

#include "API/Engine/FName.hpp"
#include "SDK/DP1Project.h"

GameData *ModLoader::gameData = nullptr;
GameCache *ModLoader::gameCache = nullptr;
Logger *ModLoader::logger = nullptr;
ModEnvironnement *ModLoader::modEnvironnement = nullptr;
ConfigManager *ModLoader::configManager = nullptr;


DWORD WINAPI ModLoader::init(LPVOID lpParam)
{
    logger = new Logger("ModLoader");
    logger->info("Mod loader has been started");
    
    Sleep(200); // TODO: Remove this hacky sleep, but it's needed, maybe check if the memory is ready next time?
    Patcher patcher;
    
    logger->verbose("Dll module is loaded");
    uintptr_t baseAddress = (uintptr_t) GetModuleHandle(nullptr);
    patcher.add(new EventHook(EventType::ClickEvent, 0x657DC32));
    patcher.applyPatches(baseAddress);
    gameData = new GameData(baseAddress, reinterpret_cast<LPMODULEINFO>(lpParam)->SizeOfImage);
    gameData->init();

    gameCache = new GameCache();
    configManager = new ConfigManager("../../Content/Settings");
    modEnvironnement = new ModEnvironnement("../../Content/Mods");
    modEnvironnement->PreLoad();
    
    gameCache->PostLoadCache();
    gameData->initOthersData();

    modEnvironnement->PostLoad();

    logger->verbose("Mod loader initialization complete");
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

            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            DWORD dwMode = 0;
            if(GetConsoleMode(hConsole, &dwMode))
            {
                dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
                SetConsoleMode(hConsole, dwMode);
            }

            MODULEINFO moduleInfo{};
            GetModuleInformation(GetCurrentProcess(), GetModuleHandle(nullptr), &moduleInfo, sizeof(MODULEINFO));
            LoaderThread = CreateThread(nullptr, 0, ModLoader::init, &moduleInfo, 0, nullptr);
            break;
        }
        case DLL_PROCESS_DETACH:
        {
            ModLoader::logger->verbose("Mod loader detached from process");
            if (LoaderThread)
                CloseHandle(LoaderThread);
            FreeConsole();

            if (!ModLoader::configManager)
                delete ModLoader::configManager;

            if (!ModLoader::modEnvironnement)
            {
                ModLoader::modEnvironnement->Free();
                delete ModLoader::modEnvironnement;
            }
            
            if (!ModLoader::logger)
                delete ModLoader::logger;

            if (!ModLoader::gameCache)
                delete ModLoader::gameCache;

            if (!ModLoader::gameData)
                delete ModLoader::gameData;

            break;
        }
    }

    return TRUE;
}