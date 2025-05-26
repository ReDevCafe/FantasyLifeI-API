#include "ModLoader.hpp"

GameData *ModLoader::gameData = nullptr;

#include <fstream>
#include "Engine/FUObjectArray.hpp"
#include <API/Life/ULifeData.hpp>
#include "Engine/TMap.hpp"
#include <API/Life/LifeData.hpp>

DWORD WINAPI ModLoader::init(LPVOID lpParam) {
    mlLogger.info("Mod loader has been started");
    gameData = new GameData(reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)));

    Sleep(7000);
    while(true) 
    {
        if(gameData->getDynamicDataManager()->GDDCharaStatus->m_permanent.m_stAvatarP.Count == 0) continue;
        auto truc = gameData->getDynamicDataManager()->GDDCharaStatus->m_permanent.m_stAvatarP[0];
        std::string id = Utils::FNameToString(truc.m_lifeId);
        mlLogger.warn("Level de merde: ", truc.m_lv.Data[0].Value.Second, "Exp de merde: ", truc.m_exp.Data[0].Value.Second, " Life:", id);
        Sleep(2000);
    }

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