#include "ModLoader.hpp"
#include "Hook/EventHandler.hpp"

GameData *ModLoader::gameData = nullptr;
GameCache *ModLoader::gameCache = nullptr;
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
    modEnvironnement = new ModEnvironnement("../../Content/Mods");
    modEnvironnement->PreLoad();

    gameCache->PostLoadCache();

    UMapUtility* mapUtilityClass = nullptr;
    gameData->waitObject(&mapUtilityClass, "MapUtility");
    if(!mapUtilityClass) logger->error("FUCK YOU");
    logger->verbose(std::hex, mapUtilityClass);

    UFunction* getCurrentMapFunc = nullptr;
    gameData->waitObject(&getCurrentMapFunc, "GetCurrentMapID");
    if(!getCurrentMapFunc) logger->error("sudo rm");

    uintptr_t classPtr = *reinterpret_cast<uintptr_t*>(reinterpret_cast<uintptr_t>(mapUtilityClass) + 0x10);
    uintptr_t cdo = *reinterpret_cast<uintptr_t*>(classPtr + 0x110);

    struct Params
    {
        FName returnValue;
    } params;
    std::memset(&params, 0, sizeof(Params));

    Sleep(8000);

    using tProcessEvent = void(*)(void*, UFunction*, void*);
    tProcessEvent ProcessEvent = reinterpret_cast<tProcessEvent>(baseAddress + 0x30B4190);
    ProcessEvent(mapUtilityClass, getCurrentMapFunc, &params);

    using tGetCurrentMapId = FName(*)(void);
    tGetCurrentMapId GetCurrentMapId = reinterpret_cast<tGetCurrentMapId>(baseAddress + 0x6725f00);
    FName CrMapId = GetCurrentMapId();

    logger->verbose("O1: ", CrMapId.ComparisonIndex, ", O2: ", CrMapId.Number);
    logger->verbose("Bite: ", Utils::FNameToString(CrMapId));

    logger->verbose(std::hex, (baseAddress + 0x30B4190));
    logger->verbose("O1: ", params.returnValue.ComparisonIndex, ", O2: ", params.returnValue.Number);

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