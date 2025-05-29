#include "GameCache.hpp"
#include "Logger/ModLoaderLogger.hpp"
#include "ModLoader.hpp"
#include "GameData.hpp"

#include "API/Item/ItemMaterialData.hpp"
#include "API/Item/ItemConsumeData.hpp"
#include "API/Item/ItemImportantData.hpp"
#include "API/Item/ItemWeaponData.hpp"
#include "API/Item/ItemLifeToolsData.hpp"
#include "API/Item/ItemArmorData.hpp"
#include "API/Item/ItemCraftData.hpp"
#include "API/Item/ItemKitData.hpp"
#include "API/Item/ItemVehicleData.hpp"
#include "API/Item/ItemPowerUpData.hpp"

GameCache::GameCache()
{
    mlLogger.warn("Initialize GameCache");
    auto* gmd = ModLoader::gameData;
    auto* sdm = gmd->getStaticDataManager();

    initNoun(gmd, sdm);
    mlLogger.info("Cached: Nouns Registries");

    initItem(gmd, sdm);
    mlLogger.info("Cached: Items Registries");

    initRecipe(gmd, sdm);
    mlLogger.info("Cached: Recipes Registries");

    
}

FGDStCommon_NounInfo* GameCache::GetNoun(std::string key)
{
    return _cacheNounInfo.at(key);
}

ItemData GameCache::GetItem(std::string key)
{
    return *_cacheItemData.at(key);
}

RecipeData GameCache::GetRecipe(std::string key)
{
    return *_cacheRecipeData.at(key);
}

void GameCache::initNoun(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_PlantDungeonText_Noun);
    for (int i = 0; i < sdm->m_PlantDungeonText_Noun->m_dataMap.Data.Count; i++)
    {
        auto noun = sdm->m_PlantDungeonText_Noun->m_dataMap.Data[i].Value.Second.nounInfoArray.Data;
        if (noun == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_PlantDungeonText_Noun->m_dataMap.Data[i].Value.First);
        
        this->_cacheNounInfo.emplace(key, noun);
    } 

    gmd->waitObject(&sdm->m_ItemText_Noun);
    for (int i = 0; i < sdm->m_ItemText_Noun->m_dataMap.Data.Count; i++)
    {
        auto noun = sdm->m_ItemText_Noun->m_dataMap.Data[i].Value.Second.nounInfoArray.Data;
        if (noun == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_ItemText_Noun->m_dataMap.Data[i].Value.First);
        
        this->_cacheNounInfo.emplace(key, noun);
    } 

    gmd->waitObject(&sdm->m_LifeText_Noun);
    for (int i = 0; i < sdm->m_LifeText_Noun->m_dataMap.Data.Count; i++)
    {
        auto noun = sdm->m_LifeText_Noun->m_dataMap.Data[i].Value.Second.nounInfoArray.Data;
        if (noun == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_LifeText_Noun->m_dataMap.Data[i].Value.First);
        
        this->_cacheNounInfo.emplace(key, noun);
    } 

    gmd->waitObject(&sdm->m_SkillText_Noun);
    for (int i = 0; i < sdm->m_SkillText_Noun->m_dataMap.Data.Count; i++)
    {
        auto noun = sdm->m_SkillText_Noun->m_dataMap.Data[i].Value.Second.nounInfoArray.Data;
        if (noun == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_SkillText_Noun->m_dataMap.Data[i].Value.First);
        
        this->_cacheNounInfo.emplace(key, noun);
    } 

    gmd->waitObject(&sdm->m_QuestRequestMapText_Noun);
    for (int i = 0; i < sdm->m_QuestRequestMapText_Noun->m_dataMap.Data.Count; i++)
    {
        auto noun = sdm->m_QuestRequestMapText_Noun->m_dataMap.Data[i].Value.Second.nounInfoArray.Data;
        if (noun == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_QuestRequestMapText_Noun->m_dataMap.Data[i].Value.First);
        
        this->_cacheNounInfo.emplace(key, noun);
    } 

    gmd->waitObject(&sdm->m_MapText_Noun);
    for (int i = 0; i < sdm->m_MapText_Noun->m_dataMap.Data.Count; i++)
    {
        auto noun = sdm->m_MapText_Noun->m_dataMap.Data[i].Value.Second.nounInfoArray.Data;
        if (noun == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_MapText_Noun->m_dataMap.Data[i].Value.First);
        
        this->_cacheNounInfo.emplace(key, noun);
    }    

    gmd->waitObject(&sdm->m_MenuText_Noun);
    for (int i = 0; i < sdm->m_MenuText_Noun->m_dataMap.Data.Count; i++)
    {
        auto noun = sdm->m_MenuText_Noun->m_dataMap.Data[i].Value.Second.nounInfoArray.Data;
        if (noun == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_MenuText_Noun->m_dataMap.Data[i].Value.First);
        
        this->_cacheNounInfo.emplace(key, noun);
    }  

    gmd->waitObject(&sdm->m_CharaText_Noun);
    for (int i = 0; i < sdm->m_CharaText_Noun->m_dataMap.Data.Count; i++)
    {
        auto noun = sdm->m_CharaText_Noun->m_dataMap.Data[i].Value.Second.nounInfoArray.Data;
        if (noun == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_CharaText_Noun->m_dataMap.Data[i].Value.First);
        
        this->_cacheNounInfo.emplace(key, noun);
    }

    gmd->waitObject(&sdm->m_SystemText_Noun);
    for (int i = 0; i < sdm->m_SystemText_Noun->m_dataMap.Data.Count; i++)
    {
        auto noun = sdm->m_SystemText_Noun->m_dataMap.Data[i].Value.Second.nounInfoArray.Data;
        if (noun == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_SystemText_Noun->m_dataMap.Data[i].Value.First);
        
        this->_cacheNounInfo.emplace(key, noun);
    }
}

void GameCache::initItem(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_ItemMaterialData);
    for (int i = 0; i < sdm->m_ItemMaterialData->m_dataMap.Data.Count; i++)
    {
        ItemMaterialData citem{ sdm->m_ItemMaterialData->m_dataMap.Data[i].Value.Second };

        _cacheItemData.emplace(citem.GetIdentifier(), std::make_unique<ItemMaterialData>(citem));
    }

    gmd->waitObject(&sdm->m_ItemConsumeData);
    for (int i = 0; i < sdm->m_ItemConsumeData->m_dataMap.Data.Count; i++)
    {
        ItemConsumeData citem{ sdm->m_ItemConsumeData->m_dataMap.Data[i].Value.Second };

        _cacheItemData.emplace(citem.GetIdentifier(), std::make_unique<ItemConsumeData>(citem));
    }

    gmd->waitObject(&sdm->m_ItemImportantData);
    for (int i = 0; i < sdm->m_ItemImportantData->m_dataMap.Data.Count; i++)
    {
        ItemImportantData citem{ sdm->m_ItemImportantData->m_dataMap.Data[i].Value.Second };

        _cacheItemData.emplace(citem.GetIdentifier(), std::make_unique<ItemImportantData>(citem));
    }

    gmd->waitObject(&sdm->m_ItemWeaponData);
    for (int i = 0; i < sdm->m_ItemWeaponData->m_dataMap.Data.Count; i++)
    {
        ItemWeaponData citem{ sdm->m_ItemWeaponData->m_dataMap.Data[i].Value.Second };

        _cacheItemData.emplace(citem.GetIdentifier(), std::make_unique<ItemWeaponData>(citem));
    }

    gmd->waitObject(&sdm->m_ItemLifeToolsData);
    for (int i = 0; i < sdm->m_ItemLifeToolsData->m_dataMap.Data.Count; i++)
    {
        ItemLifeToolsData citem{ sdm->m_ItemLifeToolsData->m_dataMap.Data[i].Value.Second };

        _cacheItemData.emplace(citem.GetIdentifier(), std::make_unique<ItemLifeToolsData>(citem));
    }

    gmd->waitObject(&sdm->m_ItemArmorData);
    for (int i = 0; i < sdm->m_ItemArmorData->m_dataMap.Data.Count; i++)
    {
        ItemArmorData citem{ sdm->m_ItemArmorData->m_dataMap.Data[i].Value.Second };

        _cacheItemData.emplace(citem.GetIdentifier(), std::make_unique<ItemArmorData>(citem));
    }
    gmd->waitObject(&sdm->m_ItemCraftData);
    for (int i = 0; i < sdm->m_ItemCraftData->m_dataMap.Data.Count; i++)
    {
        ItemCraftData citem{ sdm->m_ItemCraftData->m_dataMap.Data[i].Value.Second };

        _cacheItemData.emplace(citem.GetIdentifier(), std::make_unique<ItemCraftData>(citem));
    }

    gmd->waitObject(&sdm->m_ItemKitData);
    for (int i = 0; i < sdm->m_ItemKitData->m_dataMap.Data.Count; i++)
    {
        ItemKitData citem{ sdm->m_ItemKitData->m_dataMap.Data[i].Value.Second };

        _cacheItemData.emplace(citem.GetIdentifier(), std::make_unique<ItemKitData>(citem));
    }
    gmd->waitObject(&sdm->m_ItemVehicleData);
    for (int i = 0; i < sdm->m_ItemVehicleData->m_dataMap.Data.Count; i++)
    {
        ItemVehicleData citem{ sdm->m_ItemVehicleData->m_dataMap.Data[i].Value.Second };

        _cacheItemData.emplace(citem.GetIdentifier(), std::make_unique<ItemVehicleData>(citem));
    }

    gmd->waitObject(&sdm->m_ItemPowerUpData);
    for (int i = 0; i < sdm->m_ItemPowerUpData->m_dataMap.Data.Count; i++)
    {
        ItemPowerUpData citem{ sdm->m_ItemPowerUpData->m_dataMap.Data[i].Value.Second };

        _cacheItemData.emplace(citem.GetIdentifier(), std::make_unique<ItemPowerUpData>(citem));
    }
}

void GameCache::initRecipe(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_RecipeData);
    for (int i = 0; i < sdm->m_RecipeData->m_dataMap.Data.Count; i++)
    {
        RecipeData recipe{ sdm->m_RecipeData->m_dataMap.Data[i].Value.Second };

        _cacheRecipeData.emplace(recipe.GetIdentifier(), std::make_unique<RecipeData>(recipe));
    }
}