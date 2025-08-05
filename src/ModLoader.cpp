#include "ModLoader.hpp"
#include "Hook/EventHandler.hpp"
#include "Utils.hpp"

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
    
    UGDSMapPickPoint* pickpoint = nullptr;
    gameData->waitObject(&pickpoint, "Map_100101_GDSMapPickPoint");

    logger->verbose(std::hex, pickpoint);           // CHECK THE ARRAYS INSIDE 

    logger->verbose("TSetElementSize  ", std::hex, sizeof(TSetElement<TPair<FName, FGDMapPickPoint>>));
    logger->verbose("TPairSize ", std::hex, sizeof(TPair<FName, FGDMapPickPoint>));
    logger->verbose("FNameSize ",  std::hex, sizeof(FName));
    

    logger->verbose(std::hex, &(pickpoint->m_dataMap.Data[0].Value.Second));  // qsa_life05_pick_point_00
    logger->verbose(std::hex, &(pickpoint->m_dataMap.Data[78].Value.Second)); // map_100101_pick_point_5000

    Sleep(5000);

   

    /*for (int i = 0; i < pickpoint->m_dataMap.Data.Count; ++i)
    {
        logger->verbose("Starting the test for ", i);
        pickpoint->m_dataMap.Data[i].Value.Second.actorPos.X = 2805;
        pickpoint->m_dataMap.Data[i].Value.Second.actorPos.Y = -6182;
        pickpoint->m_dataMap.Data[i].Value.Second.actorPos.Z = 500;
        pickpoint->m_dataMap.Data[i].Value.Second.actorPos.W = 0;
    }

    pickpoint = nullptr;
    gameData->waitObject(&pickpoint, "Map_100101_PV_GDSMapPickPoint");
    logger->verbose(std::hex, &(pickpoint->m_dataMap.Data[0].Value.Second));  // qsa_life05_pick_point_00   [PV]
    logger->verbose(std::hex, &(pickpoint->m_dataMap.Data[78].Value.Second)); // map_100101_pick_point_5000 [PV]
    
    */
    gameCache = new GameCache();
    modEnvironnement = new ModEnvironnement("../../Content/Mods");
    modEnvironnement->PreLoad();

    logger->info(Utils::TestFNameToString(gameCache->GetItem("imt01000280").getObject().nameId));
    logger->info(Utils::TestFNameToString(pickpoint->m_dataMap.Data[0].Value.Second.ID));

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