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
#include "API/Item/ItemWeaponData.hpp"
#include "API/Item/ItemCraftData.hpp"
#include "API/Item/ItemKitData.hpp"
#include <memory>

GameData *ModLoader::gameData = nullptr;

DWORD WINAPI ModLoader::init(LPVOID lpParam) {
    mlLogger.info("Mod loader has been started");
    gameData = new GameData(reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)));

    Sleep(10000);

    for (int i = 0; i < gameData->getStaticDataManager()->m_ItemText_Noun->m_dataMap.Data.Count; i++)
    {
        auto no = gameData->getStaticDataManager()->m_ItemText_Noun->m_dataMap.Data[i].Value.Second.textInfo.Data;
        std::string ronpiche = Utils::FNameToString(gameData->getStaticDataManager()->m_ItemText_Noun->m_dataMap.Data[i].Value.First);

        gameData->_cacheNounInfo.emplace(ronpiche, no);
    } 
    
    for (int i = 0; i < gameData->getStaticDataManager()->m_ItemMaterialData->m_dataMap.Data.Count; i++)
    {
        ItemMaterialData item{ gameData->getStaticDataManager()->m_ItemMaterialData->m_dataMap.Data[i].Value.Second };

        gameData->_cacheItemData.emplace(item.GetIdentifier(), std::make_shared<ItemMaterialData>(item));
    }

    // CAUSE CRASH BECAUSE MONEY AND EXP HAVE "NONE"
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

    for (int i = 0; i < gameData->getStaticDataManager()->m_ItemWeaponData->m_dataMap.Data.Count; i++)
    {
        ItemWeaponData item{ gameData->getStaticDataManager()->m_ItemWeaponData->m_dataMap.Data[i].Value.Second };

        gameData->_cacheItemData.emplace(item.GetIdentifier(), std::make_shared<ItemWeaponData>(item));
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

    for (int i = 0; i < gameData->getStaticDataManager()->m_ItemCraftData->m_dataMap.Data.Count; i++)
    {
        ItemCraftData item{ gameData->getStaticDataManager()->m_ItemCraftData->m_dataMap.Data[i].Value.Second };

        gameData->_cacheItemData.emplace(item.GetIdentifier(), std::make_shared<ItemCraftData>(item));
    }

    for (int i = 0; i < gameData->getStaticDataManager()->m_ItemKitData->m_dataMap.Data.Count; i++)
    {
        ItemKitData item{ gameData->getStaticDataManager()->m_ItemKitData->m_dataMap.Data[i].Value.Second };

        gameData->_cacheItemData.emplace(item.GetIdentifier(), std::make_shared<ItemKitData>(item));
    }
    // MOVE TO A NEW CLASS /\ /\

    //FIXME: SEGF somewhere
    for (int i = 0; i < gameData->getStaticDataManager()->m_RecipeData->m_dataMap.Data.Count; i++)
    {
        RecipeData recipe{ gameData->getStaticDataManager()->m_RecipeData->m_dataMap.Data[i].Value.Second };

        mlLogger.warn(recipe.GetIdentifier(), " POWER:", recipe.GetLifeParam().GetPower());

        ItemData boo = recipe.GetItem();
        mlLogger.warn("     REWARD: ", boo.GetName(LANG::ENGLISH), " (", boo.GetIdentifier(), ")");
        boo.SetName(LANG::ENGLISH, FString(L"AAAaaAAA"));
        gameData->_cacheRecipeData.emplace(recipe.GetIdentifier(), std::make_shared<RecipeData>(recipe));
    }

    
    // REGISTER TEXTS
    
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