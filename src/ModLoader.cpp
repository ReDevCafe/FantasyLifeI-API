#include "ModLoader.hpp"
#include "Hook/EventHandler.hpp"

GameData *ModLoader::gameData = nullptr;
GameCache *ModLoader::gameCache = nullptr;
Logger *ModLoader::logger = nullptr;
ModEnvironnement *ModLoader::modEnvironnement = nullptr;

DWORD WINAPI ModLoader::init(LPVOID parameter) {
    LPMODULEINFO moduleInfo = reinterpret_cast<LPMODULEINFO>(parameter);
    logger = new Logger("ModLoader");
    logger->info("Mod loader has been started");
    Patcher patcher;
    uintptr_t baseAddress = (uintptr_t) GetModuleHandle(nullptr);
    const unsigned char eacBypassPatch[] = {0x48, 0x31, 0xC0, 0x90, 0x90, 0x90};
    patcher.add(new Patch(Priority::HIGH, "EACBypass", 0x60c1e76, eacBypassPatch, sizeof(eacBypassPatch)));
    //patcher.add(new EventHook(EventType::ClickEvent, 0x6604cb9));
    const uint8_t eacPattern[] = {
        0xFF, 0x15, 0x00, 0x00, 0x00, 0x00, 0x84, 0xC0, 0x74, 0x09, 0x33, 0xD2
    };
    const char* mask = "xx????xxxxxx";
    try {
        uintptr_t address = MemoryHelper::findPattern(baseAddress, moduleInfo->SizeOfImage, eacPattern, mask);
        ModLoader::logger->info(std::hex, address);
    } catch (const std::exception &exception) {
        ModLoader::logger->info(exception.what());
    }
    
    patcher.applyPatches(baseAddress);
    gameData = new GameData(reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)));

    gameCache = new GameCache();
    modEnvironnement = new ModEnvironnement("../../Content/Mods");
    modEnvironnement->PreLoad();

    gameCache->PostLoadCache();
    gameData->initOthersData();
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
            MODULEINFO moduleInfo{};
            GetModuleInformation(GetCurrentProcess(), GetModuleHandle(nullptr), &moduleInfo, sizeof(MODULEINFO));
            LoaderThread = CreateThread(nullptr, 0, ModLoader::init, &moduleInfo, 0, nullptr);
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