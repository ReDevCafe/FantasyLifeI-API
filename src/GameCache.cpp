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
#include <cstdint>

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

    uint32_t totalSize = 
        (this->_cacheNounInfo.size() * sizeof(void*)) +
        (this->_cacheTextInfo.size() * sizeof(void*)) +
        (this->_cacheItemData.size() * sizeof(void*)) +
        (this->_cacheRecipeData.size() * sizeof(void*)) +
        (this->_cacheCommonPickParam.size() * sizeof(void*)) +
        (this->_cacheCharaData.size() * sizeof(void*)) +
        (this->_cacheAddSkillLotTable.size() * sizeof(TArray<FGDAddSkillLotTable_AddSkillInfo>*));

    ModLoader::logger->verbose("Total cached size: ", totalSize / 1024, " KB");
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
    for (auto& noun : sdm->m_BattleCommandNameNoun->m_dataMap)
        this->_cacheNounInfo.emplace(noun.ID.ToString(), noun.nounInfoArray.GetData());

    gmd->waitObject(&sdm->m_PlantDungeonText_Noun);
    for (auto& noun : sdm->m_PlantDungeonText_Noun->m_dataMap)
        this->_cacheNounInfo.emplace(noun.ID.ToString(), noun.nounInfoArray.GetData());

    gmd->waitObject(&sdm->m_ItemText_Noun);
    for (auto& noun : sdm->m_ItemText_Noun->m_dataMap)
        this->_cacheNounInfo.emplace(noun.ID.ToString(), noun.textInfo.GetData()); // WHY IS THIS FUCKING NAMED TEXTINFO WTF LEVEL 5 PLEASE BE CONSISTENT

    gmd->waitObject(&sdm->m_LifeText_Noun);
    for (auto& textInfo : sdm->m_LifeText_Noun->m_dataMap)
        this->_cacheNounInfo.emplace(textInfo.ID.ToString(), textInfo.textInfo.GetData());

    gmd->waitObject(&sdm->m_SkillText_Noun);
    for (auto& textInfo : sdm->m_SkillText_Noun->m_dataMap)
        this->_cacheNounInfo.emplace(textInfo.ID.ToString(), textInfo.textInfo.GetData());

    gmd->waitObject(&sdm->m_QuestRequestMapText_Noun);
    for (auto& textInfo : sdm->m_QuestRequestMapText_Noun->m_dataMap)
        this->_cacheNounInfo.emplace(textInfo.ID.ToString(), textInfo.textInfo.GetData());

    gmd->waitObject(&sdm->m_QuestTitleText);
    for (auto& textInfo : sdm->m_QuestTitleText->m_dataMap)
        this->_cacheNounInfo.emplace(textInfo.ID.ToString(), textInfo.Text.GetData());

    gmd->waitObject(&sdm->m_MapText_Noun);
    for (auto& textInfo : sdm->m_MapText_Noun->m_dataMap)
        this->_cacheNounInfo.emplace(textInfo.ID.ToString(), textInfo.nounInfo.GetData());

    gmd->waitObject(&sdm->m_MenuText_Noun);
    for (auto& textInfo : sdm->m_MenuText_Noun->m_dataMap)
        this->_cacheNounInfo.emplace(textInfo.ID.ToString(), textInfo.nounInfoArray.GetData());

    gmd->waitObject(&sdm->m_CharaText_Noun);
    for (auto& textInfo : sdm->m_CharaText_Noun->m_dataMap)
        this->_cacheNounInfo.emplace(textInfo.ID.ToString(), textInfo.textInfo.GetData());

    gmd->waitObject(&sdm->m_SystemText_Noun);
    for (auto& textInfo : sdm->m_SystemText_Noun->m_dataMap)
        this->_cacheNounInfo.emplace(textInfo.ID.ToString(), textInfo.nounInfoArray.GetData());

    ModLoader::logger->verbose("GameCache: NounInfo size: ", this->_cacheNounInfo.size());
}

void GameCache::initText(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_AchievementText);
    for (auto& textInfo : sdm->m_AchievementText->m_dataMap)
        this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.textInfo.GetData());

    gmd->waitObject(&sdm->m_CharacterFlavorText);
    for (auto& textInfo : sdm->m_CharacterFlavorText->m_dataMap)
        this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.textInfo.GetData());

    gmd->waitObject(&sdm->m_CharamakeText);
    for (auto& textInfo : sdm->m_CharamakeText->m_dataMap)
        this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.textInfo.GetData());

    gmd->waitObject(&sdm->m_DailyMissionCompleteNotificationText);
    for (auto& textInfo : sdm->m_DailyMissionCompleteNotificationText->m_dataMap)
        this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.Text.GetData());

    gmd->waitObject(&sdm->m_DailyMissionTitleText);
    for (auto& textInfo : sdm->m_DailyMissionTitleText->m_dataMap)
        this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.Text.GetData());

    gmd->waitObject(&sdm->m_GuildRewardText);
    for (auto& textInfo : sdm->m_GuildRewardText->m_dataMap)
        this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.Text.GetData());

    gmd->waitObject(&sdm->m_ItemText);
    for (auto& textInfo : sdm->m_ItemText->m_dataMap)
        this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.textInfo.GetData());

    gmd->waitObject(&sdm->m_LifeText);
    for (auto& textInfo : sdm->m_LifeText->m_dataMap)
        this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.textInfo.GetData());

    gmd->waitObject(&sdm->m_MapText);
    for (auto& textInfo : sdm->m_MapText->m_dataMap)
        this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.textInfo.GetData());

    gmd->waitObject(&sdm->m_MenuText);
    for (auto& textInfo : sdm->m_MenuText->m_dataMap)
        this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.textInfo.GetData());

    gmd->waitObject(&sdm->m_MultiText);
    for (auto& textInfo : sdm->m_MultiText->m_dataMap)
        this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.textInfo.GetData());

    gmd->waitObject(&sdm->m_PhaseTitleText);
    for (auto& textInfo : sdm->m_PhaseTitleText->m_dataMap)
        this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.textInfoArray.GetData());

    gmd->waitObject(&sdm->m_PlantDungeonText);
    for (auto& textInfo : sdm->m_PlantDungeonText->m_dataMap)
        this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.textInfo.GetData());

    gmd->waitObject(&sdm->m_QuestDetailText);
    for (auto& textInfo : sdm->m_QuestDetailText->m_dataMap)
        this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.Text.GetData());

    gmd->waitObject(&sdm->m_QuestPurposeText);
    for (auto& textInfo : sdm->m_QuestPurposeText->m_dataMap)
        this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.Text.GetData());

    gmd->waitObject(&sdm->m_QuestReportNotificationText);
    for (auto& textInfo : sdm->m_QuestReportNotificationText->m_dataMap)
        this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.Text.GetData());

    gmd->waitObject(&sdm->m_SkillText);
    for (auto& textInfo : sdm->m_SkillText->m_dataMap)
        this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.textInfo.GetData());

    gmd->waitObject(&sdm->m_SystemText);
    for (auto& textInfo : sdm->m_SystemText->m_dataMap)
        this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.textInfo.GetData());

    gmd->waitObject(&sdm->m_TipsText);
    for (auto& textInfo : sdm->m_TipsText->m_dataMap)
        this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.textInfo.GetData());

    ModLoader::logger->verbose("GameCache: TextInfo size: ", this->_cacheTextInfo.size());
}

void GameCache::postInitText(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_PhasePurposeText);
    for (auto& textInfo : sdm->m_PhasePurposeText->m_dataMap)
       this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.textInfoArray.GetData());

    gmd->waitObject(&sdm->m_BattleCommandDescText);
    for (auto& textInfo : sdm->m_BattleCommandDescText->m_dataMap)
       this->_cacheTextInfo.emplace(textInfo.ID.ToString(), textInfo.textInfo.GetData());
    
}

void GameCache::initSkill(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_SkillData);
    for (auto& skillInfo : sdm->m_SkillData->m_dataMap)
    {
        std::string key = skillInfo.ID.Name.ToString();
        if(key == "ps_just_avoid" || key == "ps_just_guard") continue;

        this->_cacheSkillData.emplace(key, std::make_unique<SkillData>(skillInfo));
    } 
    ModLoader::logger->verbose("GameCache: SkillData size: ", this->_cacheSkillData.size());
}

void GameCache::initCommonPickParam(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_CommonPickParamData);
    for (auto& paramInfo : sdm->m_CommonPickParamData->m_dataMap)
        this->_cacheCommonPickParam.emplace(paramInfo.ID.ToString(), std::make_unique<CommonPickParamData>(paramInfo));
    
    ModLoader::logger->verbose("GameCache: CommonPickParamData size: ", this->_cacheCommonPickParam.size());
}

void GameCache::initItem(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_ItemMaterialData);
    for (auto& itemInfo : sdm->m_ItemMaterialData->m_dataMap)
        this->_cacheItemData.emplace(itemInfo.ID.ToString(), std::make_unique<ItemMaterialData>(itemInfo));
    
    gmd->waitObject(&sdm->m_ItemConsumeData);
    for (auto& itemInfo : sdm->m_ItemConsumeData->m_dataMap)
        this->_cacheItemData.emplace(itemInfo.ID.ToString(), std::make_unique<ItemConsumeData>(itemInfo));

    gmd->waitObject(&sdm->m_ItemImportantData);
    for (auto& itemInfo : sdm->m_ItemImportantData->m_dataMap)
        this->_cacheItemData.emplace(itemInfo.ID.ToString(), std::make_unique<ItemImportantData>(itemInfo));

    gmd->waitObject(&sdm->m_ItemWeaponData);
    for (auto& itemInfo : sdm->m_ItemWeaponData->m_dataMap)
        this->_cacheItemData.emplace(itemInfo.ID.ToString(), std::make_unique<ItemWeaponData>(itemInfo));

    gmd->waitObject(&sdm->m_ItemLifeToolsData);
    for (auto& itemInfo : sdm->m_ItemLifeToolsData->m_dataMap)
        this->_cacheItemData.emplace(itemInfo.ID.ToString(), std::make_unique<ItemLifeToolsData>(itemInfo));

    gmd->waitObject(&sdm->m_ItemArmorData);
    for (auto& itemInfo : sdm->m_ItemArmorData->m_dataMap)
        this->_cacheItemData.emplace(itemInfo.ID.ToString(), std::make_unique<ItemArmorData>(itemInfo));
    
    gmd->waitObject(&sdm->m_ItemCraftData);
    for (auto& itemInfo : sdm->m_ItemCraftData->m_dataMap)
        this->_cacheItemData.emplace(itemInfo.ID.ToString(), std::make_unique<ItemCraftData>(itemInfo));

    gmd->waitObject(&sdm->m_ItemKitData);
    for (auto& itemInfo : sdm->m_ItemKitData->m_dataMap)
        this->_cacheItemData.emplace(itemInfo.ID.ToString(), std::make_unique<ItemKitData>(itemInfo));

    gmd->waitObject(&sdm->m_ItemVehicleData);
    for (auto& itemInfo : sdm->m_ItemVehicleData->m_dataMap)
        this->_cacheItemData.emplace(itemInfo.ID.ToString(), std::make_unique<ItemVehicleData>(itemInfo));

    gmd->waitObject(&sdm->m_ItemPowerUpData);
    for (auto& itemInfo : sdm->m_ItemPowerUpData->m_dataMap)
        this->_cacheItemData.emplace(itemInfo.ID.ToString(), std::make_unique<ItemPowerUpData>(itemInfo));

    ModLoader::logger->verbose("GameCache: ItemData size: ", this->_cacheItemData.size());
}

void GameCache::initRecipe(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_RecipeData);
    for (auto& recipeInfo : sdm->m_RecipeData->m_dataMap)
        this->_cacheRecipeData.emplace(recipeInfo.recipeId.ToString(), std::make_unique<RecipeData>(recipeInfo));

    ModLoader::logger->verbose("GameCache: RecipeData size: ", this->_cacheRecipeData.size());
}

void GameCache::initChara(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_CharaData);
    for (auto& charaInfo : sdm->m_CharaData->m_dataMap)
        this->_cacheCharaData.emplace(charaInfo.ID.ToString(), std::make_unique<CharaData>(charaInfo));

    ModLoader::logger->verbose("GameCache: CharaData size: ", this->_cacheCharaData.size());
}

void GameCache::initSubLevel(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_MapSubLevel);
    for (auto& levelInfo : sdm->m_MapSubLevel->m_dataMap)
        this->_cacheSubLevel.emplace(levelInfo.SubLevelID.ToString(),  std::make_unique<MapSubLevel>(levelInfo));

    ModLoader::logger->verbose("GameCache: SubLevel size: ", this->_cacheSubLevel.size());
}

void GameCache::initMap(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_MapData);
    for (auto& mapInfo : sdm->m_MapData->m_dataMap)
        this->_cacheMap.emplace(mapInfo.mapId.ToString(), std::make_unique<MapData>(mapInfo));

    ModLoader::logger->verbose("GameCache: MapData size: ", this->_cacheMap.size());
}

void GameCache::initAddSkillTable(GameData* gmd, UStaticDataManager* sdm)
{
    gmd->waitObject(&sdm->m_AddSkillLotTable);
    for (auto& addSkillInfo : sdm->m_AddSkillLotTable->m_dataMap)
        this->_cacheAddSkillLotTable.emplace(addSkillInfo.ID.ToString(), &addSkillInfo.addSkillInfoList);

    ModLoader::logger->verbose("GameCache: AddSkillLotTable size: ", this->_cacheAddSkillLotTable.size());
}