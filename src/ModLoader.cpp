#include "ModLoader.hpp"
#include "Hook/EventHandler.hpp"
#include "API/Item/ItemWeaponData.hpp"
#include "API/Identifier/ItemIdentifier.hpp"

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
    gameCache = new GameCache();
    //TODO: Load PreLoad mod function

    auto item = gameCache->GetItem(WEAPON_GREATSWORD_OF_TIME);
    auto name = item.getObject().ID;
    logger->verbose("TIME FNAME: ", name.ComparisonIndex, ", ", name.Number);

    auto item1 = gameCache->GetItem(WEAPON_IRON_SWORD);
    auto name1 = item1.getObject().ID;
    logger->verbose("IRON FNAME: ", name1.ComparisonIndex, ", ", name1.Number);

    gameCache->PostLoadCache();
    gameData->initOthersData();

    //TODO: Load PostLoad mod function

    auto inv = gameData->getPlayer()->inventory;

    
    for(int i = 0; i < 999; ++i)
        logger->verbose(inv.GetWeapon(i).getObject().ItemId.ComparisonIndex);

    
    auto swordOfTimeInstance = inv.GetWeapon(0);
    //auto sword = swordOfTimeInstance.GetItem<ItemWeaponData>();
    //inv.SetWeapon(1, swordOfTimeInstance);
    
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