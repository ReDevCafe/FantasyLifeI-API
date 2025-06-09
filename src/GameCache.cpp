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

    initText(gmd, sdm);
    mlLogger.info("Cached: Text Registries");

    initSkill(gmd, sdm);
    mlLogger.info("Cached: Skill Registries");

    initItem(gmd, sdm);
    mlLogger.info("Cached: Items Registries");

    initRecipe(gmd, sdm);
    mlLogger.info("Cached: Recipes Registries");   

    initPickParam(gmd, sdm);
    mlLogger.info("Cached: CommonPickParams Registries");

    initChara(gmd, sdm);
    mlLogger.info("Cached: Basic Chara Registries");

    initSubLevel(gmd, sdm);
    mlLogger.info("Cached: Sub level registries");

    initMap(gmd, sdm);
    mlLogger.info("Cached: Map registries");
}

void GameCache::initNoun(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_BattleCommandNameNoun);
    for (int i = 0; i < sdm->m_BattleCommandNameNoun->m_dataMap.Data.Count; i++)
    {
        auto noun = sdm->m_BattleCommandNameNoun->m_dataMap.Data[i].Value.Second.nounInfoArray.Data;
        if (noun == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_BattleCommandNameNoun->m_dataMap.Data[i].Value.First);
        
        this->_cacheNounInfo.emplace(key, noun);
    } 

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

    gmd->waitObject(&sdm->m_QuestTitleText);
    for (int i = 0; i < sdm->m_QuestTitleText->m_dataMap.Data.Count; i++)
    {
        auto noun = sdm->m_QuestTitleText->m_dataMap.Data[i].Value.Second.nounInfoArray.Data;
        if (noun == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_QuestTitleText->m_dataMap.Data[i].Value.First);
        
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

void GameCache::initText(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_AchievementText);
    for (int i = 0; i < sdm->m_AchievementText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_AchievementText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_AchievementText->m_dataMap.Data[i].Value.First);

        this->_cacheTextInfo.emplace(key, text);
    } 

    /*
    gmd->waitObject(&sdm->m_BattleCommandDescText);
    for (int i = 0; i < sdm->m_BattleCommandDescText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_BattleCommandDescText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_BattleCommandDescText->m_dataMap.Data[i].Value.First);
        mlLogger.warn(key, " + ", text->text_en.ToString());
        
        this->_cacheTextInfo.emplace(key, text);
    } 
    */

    gmd->waitObject(&sdm->m_CharacterFlavorText);
    for (int i = 0; i < sdm->m_CharacterFlavorText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_CharacterFlavorText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_CharacterFlavorText->m_dataMap.Data[i].Value.First);
        
        this->_cacheTextInfo.emplace(key, text);
    }

    gmd->waitObject(&sdm->m_CharamakeText);
    for (int i = 0; i < sdm->m_CharamakeText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_CharamakeText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_CharamakeText->m_dataMap.Data[i].Value.First);
        
        this->_cacheTextInfo.emplace(key, text);
    }

    gmd->waitObject(&sdm->m_DailyMissionCompleteNotificationText);
    for (int i = 0; i < sdm->m_DailyMissionCompleteNotificationText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_DailyMissionCompleteNotificationText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_DailyMissionCompleteNotificationText->m_dataMap.Data[i].Value.First);
        
        this->_cacheTextInfo.emplace(key, text);
    }

    gmd->waitObject(&sdm->m_DailyMissionTitleText);
    for (int i = 0; i < sdm->m_DailyMissionTitleText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_DailyMissionTitleText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_DailyMissionTitleText->m_dataMap.Data[i].Value.First);

        this->_cacheTextInfo.emplace(key, text);
    }

    gmd->waitObject(&sdm->m_GuildRewardText);
    for (int i = 0; i < sdm->m_GuildRewardText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_GuildRewardText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_GuildRewardText->m_dataMap.Data[i].Value.First);

        this->_cacheTextInfo.emplace(key, text);
    }

    gmd->waitObject(&sdm->m_ItemText);
    for (int i = 0; i < sdm->m_ItemText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_ItemText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_ItemText->m_dataMap.Data[i].Value.First);
        
        this->_cacheTextInfo.emplace(key, text);
    }

    gmd->waitObject(&sdm->m_LifeText);
    for (int i = 0; i < sdm->m_LifeText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_LifeText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_LifeText->m_dataMap.Data[i].Value.First);
       
        this->_cacheTextInfo.emplace(key, text);
    }

    gmd->waitObject(&sdm->m_MapText);
    for (int i = 0; i < sdm->m_MapText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_MapText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_MapText->m_dataMap.Data[i].Value.First);
        
        this->_cacheTextInfo.emplace(key, text);

        mlLogger.warn(key, " > ", text->text_en.ToString());
    }

    gmd->waitObject(&sdm->m_MenuText);
    for (int i = 0; i < sdm->m_MenuText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_MenuText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_MenuText->m_dataMap.Data[i].Value.First);

        this->_cacheTextInfo.emplace(key, text);
    }

    gmd->waitObject(&sdm->m_MultiText);
    for (int i = 0; i < sdm->m_MultiText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_MultiText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_MultiText->m_dataMap.Data[i].Value.First);

        this->_cacheTextInfo.emplace(key, text);
    }

    /*
    gmd->waitObject(&sdm->m_PhasePurposeText);
    for (int i = 0; i < sdm->m_PhasePurposeText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_PhasePurposeText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_PhasePurposeText->m_dataMap.Data[i].Value.First);
        if (text->text_en.c_str())
            mlLogger.warn(key, " + ", text->text_en.ToString());
        else
            mlLogger.warn(key, " + ", text->Text.ToString());
        
        this->_cacheTextInfo.emplace(key, text);
    }*/

    gmd->waitObject(&sdm->m_PhaseTitleText);
    for (int i = 0; i < sdm->m_PhaseTitleText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_PhaseTitleText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_PhaseTitleText->m_dataMap.Data[i].Value.First);

        this->_cacheTextInfo.emplace(key, text);
    }

    gmd->waitObject(&sdm->m_PlantDungeonText);
    for (int i = 0; i < sdm->m_PlantDungeonText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_PlantDungeonText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_PlantDungeonText->m_dataMap.Data[i].Value.First);
        
        this->_cacheTextInfo.emplace(key, text);
    }

    gmd->waitObject(&sdm->m_QuestDetailText);
    for (int i = 0; i < sdm->m_QuestDetailText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_QuestDetailText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_QuestDetailText->m_dataMap.Data[i].Value.First);

        this->_cacheTextInfo.emplace(key, text);
    }

    gmd->waitObject(&sdm->m_QuestPurposeText);
    for (int i = 0; i < sdm->m_QuestPurposeText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_QuestPurposeText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_QuestPurposeText->m_dataMap.Data[i].Value.First);
        
        this->_cacheTextInfo.emplace(key, text);
    }

    gmd->waitObject(&sdm->m_QuestReportNotificationText);
    for (int i = 0; i < sdm->m_QuestReportNotificationText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_QuestReportNotificationText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_QuestReportNotificationText->m_dataMap.Data[i].Value.First);
        
        this->_cacheTextInfo.emplace(key, text);
    }

    gmd->waitObject(&sdm->m_SkillText);
    for (int i = 0; i < sdm->m_SkillText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_SkillText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_SkillText->m_dataMap.Data[i].Value.First);
        
        this->_cacheTextInfo.emplace(key, text);
    }

    gmd->waitObject(&sdm->m_SystemText);
    for (int i = 0; i < sdm->m_SystemText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_SystemText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_SystemText->m_dataMap.Data[i].Value.First);
        
        this->_cacheTextInfo.emplace(key, text);
    }

    gmd->waitObject(&sdm->m_TipsText);
    for (int i = 0; i < sdm->m_TipsText->m_dataMap.Data.Count; i++)
    {
        auto text = sdm->m_TipsText->m_dataMap.Data[i].Value.Second.textInfoArray.Data;
        if (text == nullptr) continue;
        std::string key = Utils::FNameToString(sdm->m_TipsText->m_dataMap.Data[i].Value.First);
        
        this->_cacheTextInfo.emplace(key, text);
    }
}

void GameCache::initSkill(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_SkillData);
    for (int i = 0; i < sdm->m_SkillData->m_dataMap.Data.Count; i++)
    {
        std::string key = Utils::FNameToString(sdm->m_SkillData->m_dataMap.Data[i].Value.First.Name);
        if(key == "ps_just_avoid" || key == "ps_just_guard") continue;

        SkillData skill{ sdm->m_SkillData->m_dataMap.Data[i].Value.Second }; 
        
        this->_cacheSkillData.emplace(key, std::make_unique<SkillData>(skill));
    } 
}

//TODO: Get more infos
void GameCache::initPickParam(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_CommonPickParamData);
    for (int i = 0; i < sdm->m_CommonPickParamData->m_dataMap.Data.Count; i++)
    {
        CommonPickParamData param{ sdm->m_CommonPickParamData->m_dataMap.Data[i].Value.Second }; 
        this->_cacheCommonPickParam.emplace(param.GetIdentifier(), std::make_unique<CommonPickParamData>(param));
        param.SetIsBoss(true);

        /*std::string name = "NO_NAME_FOUND";
        if(_cacheTextInfo.contains(param.GetGotIdentifier()))
        {
            auto x = _cacheTextInfo.at(param.GetGotIdentifier())->text_en;
            name = x.c_str() ? x.ToString() : "NOT_DEFINED";
        }
        mlLogger.warn("#define ",  name," \"" ,param.GetIdentifier(), "\" // ", param.GetGotIdentifier());*/
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
        auto aled =  sdm->m_ItemWeaponData->m_dataMap.Data[i].Value.Second;
        ItemWeaponData citem{ sdm->m_ItemWeaponData->m_dataMap.Data[i].Value.Second };

        _cacheItemData.emplace(citem.GetIdentifier(), std::make_unique<ItemWeaponData>(citem));
    }

    gmd->waitObject(&sdm->m_ItemLifeToolsData);
    for (int i = 0; i < sdm->m_ItemLifeToolsData->m_dataMap.Data.Count; i++)
    {
        ItemLifeToolsData citem{ sdm->m_ItemLifeToolsData->m_dataMap.Data[i].Value.Second };
        _cacheItemData.emplace(citem.GetIdentifier(), std::make_unique<ItemLifeToolsData>(citem));

        auto array = sdm->m_ItemLifeToolsData->m_dataMap.Data[i].Value.Second.lifeParamList;
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