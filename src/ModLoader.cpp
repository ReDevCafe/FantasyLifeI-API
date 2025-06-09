#include "ModLoader.hpp"
#include "Hook/EventHandler.hpp"

GameData *ModLoader::gameData = nullptr;

DWORD WINAPI ModLoader::init(LPVOID lpParam) {
    mlLogger.info("Mod loader has been started");
    Patcher patcher;
    uintptr_t baseAddress = (uintptr_t) GetModuleHandle(nullptr);
    patcher.add(new EventHook(EventType::ClickEvent, 0x657DC32));
    patcher.applyPatches(baseAddress);
    gameData = new GameData(reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)));
    gameData->initOthersData();
    // TEST
    /*
    mlLogger.info(gameData->getStaticDataManager()->m_LifeData->m_dataMap.Data.Count);
    UGDSLifeData& lifes = ULifeData(*gameData->getStaticDataManager()->m_LifeData).getObject();
    LifeData life = LifeData(ULifeData(*gameData->getStaticDataManager()->m_LifeData).getLife(ELifeType::Cook));
    
    life.getObject().Category = ELifeCategory::Gatherer;
    life.getObject().emblemIconId = lifes.m_dataMap.Data[8].Value.Second.portraitIconId;
    life.Name(LANG::ENGLISH) = FString(L"WAWAWA");
    life.Description(LANG::ENGLISH) = FString(L"Skibidi skibidi\n hawk tuah hawk\n Skibidi edging and skibidi mog\n Edging and gooning and learning to tax");

    for(int i = 0; i < lifes.m_dataMap.Data.Count; ++i)
    {
        FName lifeName        = lifes.m_dataMap.Data[i].Value.First;
        FName testId          = lifes.m_dataMap.Data[i].Value.Second.emblemIconId;
        std::string testIdStr = Utils::FNameToString(testId);
        std::string uwu = LifeData(lifes.m_dataMap.Data[i].Value.Second).Name(LANG::ENGLISH).ToString();

        mlLogger.warn("     [",i,"] {", Utils::FNameToString(lifeName), ", L\"", uwu, "\" { name: \"", testIdStr, "\", fNameIndex: ", testId.ComparisonIndex, ", fNameNum: ", testId.Number, "}}");
    }*/

    //! TEST
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
            mlLogger.warn("Mod loader attached to process");
            Sleep(5000);
            LoaderThread = CreateThread(nullptr, 0, ModLoader::init, nullptr, 0, nullptr);
            if (LoaderThread)
                CloseHandle(LoaderThread);
            break;
        }
        case DLL_PROCESS_DETACH:
        {
            mlLogger.warn("Mod loader detached from process");
            if (LoaderThread)
                CloseHandle(LoaderThread);
            FreeConsole();
            if (ModLoader::gameData != nullptr)
                delete ModLoader::gameData;
            break;
        }
    }

    return TRUE;
}