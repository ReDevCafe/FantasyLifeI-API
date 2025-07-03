#include "ModLoader.hpp"
#include "Hook/EventHandler.hpp"

ML_API GameData *ModLoader::gameData = nullptr;
ML_API GameCache *ModLoader::gameCache = nullptr;
Logger *ModLoader::logger = nullptr;
ModEnvironnement *ModLoader::modEnvironnement = nullptr;

DWORD WINAPI ModLoader::init(LPVOID lpParam) {
    logger = new Logger("ModLoader");
    logger->info("Mod loader has been started");
    Patcher patcher;
    uintptr_t baseAddress = (uintptr_t) GetModuleHandle(nullptr);
    patcher.add(new EventHook(EventType::ClickEvent, 0x657DC32));
    patcher.applyPatches(baseAddress);
    gameData = new GameData(reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)));
    gameData->initOthersData();

    gameCache = new GameCache();
    modEnvironnement = new ModEnvironnement("../../../Mods");

    gameCache->PostLoadCache();
    modEnvironnement->PostLoad();

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
            if (LoaderThread)
                CloseHandle(LoaderThread);
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

            break;
        }
    }

    return TRUE;
}