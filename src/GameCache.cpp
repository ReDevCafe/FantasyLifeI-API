#include "GameCache.hpp"

#include "API/Engine/FName.hpp"
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
    ModLoader::logger->verbose("Initialize GameCache");
    auto* gmd = ModLoader::gameData;
    auto* sdm = gmd->getStaticDataManager();

    initNoun(gmd, sdm);
    ModLoader::logger->verbose("Cached: Nouns Registries");

    initText(gmd, sdm);
    ModLoader::logger->verbose("Cached: Text Registries");

    initItem(gmd, sdm);
    ModLoader::logger->verbose("Cached: Items Registries");

    initRecipe(gmd, sdm);
    ModLoader::logger->verbose("Cached: Recipes Registries");   

    initCommonPickParam(gmd, sdm);
    ModLoader::logger->verbose("Cached: CommonPickParams Registries");

    initChara(gmd, sdm);
    ModLoader::logger->verbose("Cached: Basic Chara Registries");

    initAddSkillTable(gmd, sdm);
    ModLoader::logger->verbose("Cached: AddSkillTable Registries");
}

void GameCache::PostLoadCache()
{
    auto* gmd = ModLoader::gameData;
    auto* sdm = gmd->getStaticDataManager();

    initSubLevel(gmd, sdm);
    ModLoader::logger->verbose("Cached: Sub level registries");

    initMap(gmd, sdm);
    ModLoader::logger->verbose("Cached: Map registries");


    ModLoader::logger->info("OK: GameCache has been initialized");
}

void GameCache::initNoun(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_BattleCommandNameNoun);
    for (int i = 0; i < sdm->m_BattleCommandNameNoun->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_BattleCommandNameNoun->m_dataMap.Data[i];
        auto noun = textInfo.Value.Second.nounInfoArray.Data;
        if (noun == nullptr) continue;

        this->_cacheNounInfo.emplace(textInfo.Value.First.ToString(), noun);
    } 

    gmd->waitObject(&sdm->m_PlantDungeonText_Noun);
    for (int i = 0; i < sdm->m_PlantDungeonText_Noun->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_PlantDungeonText_Noun->m_dataMap.Data[i];
        auto noun = textInfo.Value.Second.nounInfoArray.Data;
        if (noun == nullptr) continue;

        this->_cacheNounInfo.emplace(textInfo.Value.First.ToString(), noun);
    } 

    gmd->waitObject(&sdm->m_ItemText_Noun);
    for (int i = 0; i < sdm->m_ItemText_Noun->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_ItemText_Noun->m_dataMap.Data[i];
        auto noun = textInfo.Value.Second.textInfo.Data;
        if (noun == nullptr) continue;

        this->_cacheNounInfo.emplace(textInfo.Value.First.ToString(), noun);
    } 

    gmd->waitObject(&sdm->m_LifeText_Noun);
    for (int i = 0; i < sdm->m_LifeText_Noun->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_LifeText_Noun->m_dataMap.Data[i];
        auto noun = textInfo.Value.Second.textInfo.Data;
        if (noun == nullptr) continue;

        this->_cacheNounInfo.emplace(textInfo.Value.First.ToString(), noun);
    } 

    gmd->waitObject(&sdm->m_SkillText_Noun);
    for (int i = 0; i < sdm->m_SkillText_Noun->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_SkillText_Noun->m_dataMap.Data[i];
        auto noun = textInfo.Value.Second.textInfo.Data;
        if (noun == nullptr) continue;

        this->_cacheNounInfo.emplace(textInfo.Value.First.ToString(), noun);
    } 

    gmd->waitObject(&sdm->m_QuestRequestMapText_Noun);
    for (int i = 0; i < sdm->m_QuestRequestMapText_Noun->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_QuestRequestMapText_Noun->m_dataMap.Data[i];
        auto noun = textInfo.Value.Second.textInfo.Data;
        if (noun == nullptr) continue;

        this->_cacheNounInfo.emplace(textInfo.Value.First.ToString(), noun);
    } 

    gmd->waitObject(&sdm->m_QuestTitleText);
    for (int i = 0; i < sdm->m_QuestTitleText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_QuestTitleText->m_dataMap.Data[i];
        auto noun = textInfo.Value.Second.Text.Data;
        if (noun == nullptr) continue;

        this->_cacheNounInfo.emplace(textInfo.Value.First.ToString(), noun);
    } 

    gmd->waitObject(&sdm->m_MapText_Noun);
    for (int i = 0; i < sdm->m_MapText_Noun->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_MapText_Noun->m_dataMap.Data[i];
        auto noun = textInfo.Value.Second.nounInfo.Data;
        if (noun == nullptr) continue;

        this->_cacheNounInfo.emplace(textInfo.Value.First.ToString(), noun);
    }    

    gmd->waitObject(&sdm->m_MenuText_Noun);
    for (int i = 0; i < sdm->m_MenuText_Noun->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_MenuText_Noun->m_dataMap.Data[i];
        auto noun = textInfo.Value.Second.nounInfoArray.Data;
        if (noun == nullptr) continue;

        this->_cacheNounInfo.emplace(textInfo.Value.First.ToString(), noun);
    }  

    gmd->waitObject(&sdm->m_CharaText_Noun);
    for (int i = 0; i < sdm->m_CharaText_Noun->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_CharaText_Noun->m_dataMap.Data[i];
        auto noun = textInfo.Value.Second.textInfo.Data;
        if (noun == nullptr) continue;

        this->_cacheNounInfo.emplace(textInfo.Value.First.ToString(), noun);
    }

    gmd->waitObject(&sdm->m_SystemText_Noun);
    for (int i = 0; i < sdm->m_SystemText_Noun->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_SystemText_Noun->m_dataMap.Data[i];
        auto noun = textInfo.Value.Second.nounInfoArray.Data;
        if (noun == nullptr) continue;

        this->_cacheNounInfo.emplace(textInfo.Value.First.ToString(), noun);
    }
}

void GameCache::initText(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_AchievementText);
    for (int i = 0; i < sdm->m_AchievementText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_AchievementText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.textInfo.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }

    gmd->waitObject(&sdm->m_CharacterFlavorText);
    for (int i = 0; i < sdm->m_CharacterFlavorText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_CharacterFlavorText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.textInfo.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }

    gmd->waitObject(&sdm->m_CharamakeText);
    for (int i = 0; i < sdm->m_CharamakeText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_CharamakeText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.textInfo.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }

    gmd->waitObject(&sdm->m_DailyMissionCompleteNotificationText);
    for (int i = 0; i < sdm->m_DailyMissionCompleteNotificationText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_DailyMissionCompleteNotificationText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.Text.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }

    gmd->waitObject(&sdm->m_DailyMissionTitleText);
    for (int i = 0; i < sdm->m_DailyMissionTitleText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_DailyMissionTitleText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.Text.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }

    gmd->waitObject(&sdm->m_GuildRewardText);
    for (int i = 0; i < sdm->m_GuildRewardText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_GuildRewardText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.Text.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }

    gmd->waitObject(&sdm->m_ItemText);
    for (int i = 0; i < sdm->m_ItemText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_ItemText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.textInfo.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }

    gmd->waitObject(&sdm->m_LifeText);
    for (int i = 0; i < sdm->m_LifeText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_LifeText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.textInfo.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }

    gmd->waitObject(&sdm->m_MapText);
    for (int i = 0; i < sdm->m_MapText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_MapText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.textInfo.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }

    gmd->waitObject(&sdm->m_MenuText);
    for (int i = 0; i < sdm->m_MenuText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_MenuText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.textInfo.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }

    gmd->waitObject(&sdm->m_MultiText);
    for (int i = 0; i < sdm->m_MultiText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_MultiText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.textInfo.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }


    gmd->waitObject(&sdm->m_PhaseTitleText);
    for (int i = 0; i < sdm->m_PhaseTitleText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_PhaseTitleText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }

    gmd->waitObject(&sdm->m_PlantDungeonText);
    for (int i = 0; i < sdm->m_PlantDungeonText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_PlantDungeonText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.textInfo.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }

    gmd->waitObject(&sdm->m_QuestDetailText);
    for (int i = 0; i < sdm->m_QuestDetailText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_QuestDetailText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.Text.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }

    gmd->waitObject(&sdm->m_QuestPurposeText);
    for (int i = 0; i < sdm->m_QuestPurposeText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_QuestPurposeText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.Text.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }

    gmd->waitObject(&sdm->m_QuestReportNotificationText);
    for (int i = 0; i < sdm->m_QuestReportNotificationText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_QuestReportNotificationText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.Text.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }

    gmd->waitObject(&sdm->m_SkillText);
    for (int i = 0; i < sdm->m_SkillText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_SkillText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.textInfo.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }

    gmd->waitObject(&sdm->m_SystemText);
    for (int i = 0; i < sdm->m_SystemText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_SystemText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.textInfo.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }

    gmd->waitObject(&sdm->m_TipsText);
    for (int i = 0; i < sdm->m_TipsText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_TipsText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.textInfo.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }
}

void GameCache::postInitText(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_PhasePurposeText);
    for (int i = 0; i < sdm->m_PhasePurposeText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_PhasePurposeText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    }

    gmd->waitObject(&sdm->m_BattleCommandDescText);
    for (int i = 0; i < sdm->m_BattleCommandDescText->m_dataMap.Data.Count; i++)
    {
        auto textInfo = sdm->m_BattleCommandDescText->m_dataMap.Data[i];
        auto text = textInfo.Value.Second.textInfo.Data;
        if (text == nullptr) continue;

        this->_cacheTextInfo.emplace(textInfo.Value.First.ToString(), text);
    } 
}

void GameCache::initSkill(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_SkillData);
    for (int i = 0; i < sdm->m_SkillData->m_dataMap.Data.Count; i++)
    {
        auto skillInfo = sdm->m_SkillData->m_dataMap.Data[i];
        std::string key = skillInfo.Value.First.Name.ToString();
        if(key == "ps_just_avoid" || key == "ps_just_guard") continue;

        this->_cacheSkillData.emplace(key, std::make_unique<SkillData>(skillInfo.Value.Second));
    } 
}

void GameCache::initCommonPickParam(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_CommonPickParamData);
    for (int i = 0; i < sdm->m_CommonPickParamData->m_dataMap.Data.Count; i++)
    {
        CommonPickParamData param{ sdm->m_CommonPickParamData->m_dataMap.Data[i].Value.Second }; 
        this->_cacheCommonPickParam.emplace(param.GetIdentifier(), std::make_unique<CommonPickParamData>(param));
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

void GameCache::initChara(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_CharaData);
    for (int i = 0; i < sdm->m_CharaData->m_dataMap.Data.Count; i++)
    {
        CharaData chara{ sdm->m_CharaData->m_dataMap.Data[i].Value.Second };

        _cacheCharaData.emplace(chara.GetIdentifier(), std::make_unique<CharaData>(chara));
    }
}

void GameCache::initSubLevel(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_MapSubLevel);
    for (int i = 0; i < sdm->m_MapSubLevel->m_dataMap.Data.Count; i++)
    {
        MapSubLevel level{ sdm->m_MapSubLevel->m_dataMap.Data[i].Value.Second };

        _cacheSubLevel.emplace(level.GetIdentifier(), std::make_unique<MapSubLevel>(level));
    }
}

void GameCache::initMap(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_MapData);
    for (int i = 0; i < sdm->m_MapData->m_dataMap.Data.Count; ++i)
    {
        MapData map{ sdm->m_MapData->m_dataMap.Data[i].Value.Second };

        _cacheMap.emplace(map.GetIdentifier(), std::make_unique<MapData>(map));
    }
}

void GameCache::initAddSkillTable(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_AddSkillLotTable);
    for (int i = 0; i < sdm->m_AddSkillLotTable->m_dataMap.Data.Count; i++)
    {
        auto addSkillInfo = sdm->m_AddSkillLotTable->m_dataMap.Data[i];
        this->_cacheAddSkillLotTable.emplace(
            addSkillInfo.Value.First.ToString(), 
            &addSkillInfo.Value.Second.addSkillInfoList
        );
    }
}