#include "ModLoader.hpp"
#include "Hook/EventHandler.hpp"

GameData *ModLoader::gameData = nullptr;
GameCache *ModLoader::gameCache = nullptr;
Logger *ModLoader::logger = nullptr;

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
    //TODO: Load PreLoad mod function


    gameCache->PostLoadCache();
    //TODO: Load PostLoad mod function


    gameData->waitObject(&gameData->getDynamicDataManager()->GDDInventoryStatus);
    logger->info("Found InvStatus => ", std::hex, gameData->getDynamicDataManager()->GDDInventoryStatus);

    USaveData* help;
    gameData->waitObject(&help, "SaveData", 0);
    logger->info("Found SaveData => ", std::hex, help);

    auto test = gameData->getDynamicDataManager()->GDDInventoryStatus->m_permanent;

    logger->info("Found SaveData => ", std::hex, gameData->getDynamicDataManager()->GDDInventoryStatus, std::dec, " ", test.invConsume.Count);
    auto item = gameCache->GetItem(Utils::FNameToString(test.invConsume.Data[0].ItemId));
    logger->verbose("First item in InvConsume: ", item.GetName(LANG::ENGLISH));

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
            ModLoader::logger->warn("Mod loader detached from process");
            if (LoaderThread)
                CloseHandle(LoaderThread);
            FreeConsole();

            if (ModLoader::gameData != nullptr)
                delete ModLoader::gameData;

            if(ModLoader::gameCache != nullptr)
                delete ModLoader::gameCache;

            if(ModLoader::logger != nullptr)
                delete ModLoader::logger;

            break;
        }
    }

    return TRUE;
}