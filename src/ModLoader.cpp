#include "ModLoader.hpp"

#include <fstream>
#include "Engine/FUObjectArray.hpp"
#include <API/Life/ULifeData.hpp>
#include "Engine/DataTable.hpp"
#include "API/Life/LifeData.hpp"
#include "API/Item/ItemLifeToolsData.hpp"
#include "API/Item/ItemArmorData.hpp"
#include "GameData.hpp"
#include "API/Item/ItemIdentifier.hpp"
#include "API/Item/ItemMaterialData.hpp"
#include "API/Item/ItemConsumeData.hpp"
#include "API/Item/ItemImportantData.hpp"
#include <memory>

GameData *ModLoader::gameData = nullptr;

DWORD WINAPI ModLoader::init(LPVOID lpParam) {
    mlLogger.info("Mod loader has been started");
    gameData = new GameData(reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)));

    Sleep(10000);

    // std::string ntm = gameData->getItemText_Noun("ilt01000020")->nounSingularForm_fr.ToString();
    // mlLogger.warn(ntm);

    for (int i = 0; i < gameData->getStaticDataManager()->m_ItemText_Noun->m_dataMap.Data.Count; i++)
    {
        auto no = gameData->getStaticDataManager()->m_ItemText_Noun->m_dataMap.Data[i].Value.Second.textInfo.Data;
        FName ronpiche = gameData->getStaticDataManager()->m_ItemText_Noun->m_dataMap.Data[i].Value.First;

        gameData->_cacheNounInfo.emplace(Utils::FNameToString(ronpiche), no);
    } 

    for (int i = 0; i < gameData->getStaticDataManager()->m_ItemLifeToolsData->m_dataMap.Data.Count; i++)
    {
        ItemLifeToolsData item{ gameData->getStaticDataManager()->m_ItemLifeToolsData->m_dataMap.Data[i].Value.Second };

        gameData->_cacheItemData.emplace(item.GetIdentifier(),  std::make_shared<ItemLifeToolsData>(item));
    }

    for (int i = 0; i < gameData->getStaticDataManager()->m_ItemArmorData->m_dataMap.Data.Count; i++)
    {
        ItemArmorData item{ gameData->getStaticDataManager()->m_ItemArmorData->m_dataMap.Data[i].Value.Second };

        gameData->_cacheItemData.emplace(item.GetIdentifier(), std::make_shared<ItemArmorData>(item));
    }

    for (int i = 0; i < gameData->getStaticDataManager()->m_ItemMaterialData->m_dataMap.Data.Count; i++)
    {
        ItemMaterialData item{ gameData->getStaticDataManager()->m_ItemMaterialData->m_dataMap.Data[i].Value.Second };

        //gameData->_cacheItemData.emplace(item.GetIdentifier(), std::make_shared<ItemMaterialData>(item));
    }

    // CAUSE CRASH BECAUSE MONEY HAVE "NONE"
    for (int i = 0; i < gameData->getStaticDataManager()->m_ItemConsumeData->m_dataMap.Data.Count; i++)
    {
        ItemConsumeData item{ gameData->getStaticDataManager()->m_ItemConsumeData->m_dataMap.Data[i].Value.Second };

        gameData->_cacheItemData.emplace(item.GetIdentifier(), std::make_shared<ItemConsumeData>(item));
    }

    for (int i = 0; i < gameData->getStaticDataManager()->m_ItemImportantData->m_dataMap.Data.Count; i++)
    {
        ItemImportantData item{ gameData->getStaticDataManager()->m_ItemImportantData->m_dataMap.Data[i].Value.Second };

        gameData->_cacheItemData.emplace(item.GetIdentifier(), std::make_shared<ItemImportantData>(item));
    }
    
    //FIXME: FIX CA CA MARCHE PAS LALALALALALALA
    for(auto item = gameData->_cacheItemData.begin(); item != gameData->_cacheItemData.end(); ++item)
    {
        if(item->second->GetNameIdentifier() == "None") 
        {   
            mlLogger.warn("#define BAD \"", item->second->GetIdentifier(), "\"");
            continue;   // Probably miss some but fuck it
        }
        std::string itemName = item->second->GetName(LANG::ENGLISH);
        for(auto& c: itemName)
        {
            if(c == ' ' || c == '\'' || c == '-') c = '_';
            else c = std::toupper(c);
        }

        mlLogger.warn("#define ", itemName, " \"", item->second->GetIdentifier(), "\"");
    }
    /*
     * RACCOON_HEAD iam02000070 SEND RACC_MDL -> TAIL_MDL
     *

    auto data = std::dynamic_pointer_cast<ItemArmorData>(gameData->_cacheItemData.at(TAILOR_CAP));
    data->SetName(LANG::ENGLISH, L"Ratio");
    data->GetModel();
    auto data1 = std::dynamic_pointer_cast<ItemArmorData>(gameData->_cacheItemData.at(RACCOON_HEAD));
    data1->GetModel();
    */

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