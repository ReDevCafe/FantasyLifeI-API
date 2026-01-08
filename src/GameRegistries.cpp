#include "GameRegistries.hpp"
#include "GameData.hpp"
#include "ModLoader.hpp"
#include "SDK/DP1Project.h"

// Initialize merged registries
std::shared_ptr<MergedRegistry<FGDBattleCommandNameNoun>>         GameRegistries::BATTLE_COMMAND_NOUN = nullptr;
std::shared_ptr<MergedRegistry<FGDPlantDungeonText_Noun>>         GameRegistries::PLANT_DUNGEON_NOUN = nullptr;
std::shared_ptr<MergedRegistry<FGDItemText_Noun>>                 GameRegistries::ITEM_NOUN = nullptr;
std::shared_ptr<MergedRegistry<FGDLifeText_Noun>>                 GameRegistries::LIFE_NOUN = nullptr;
std::shared_ptr<MergedRegistry<FGDSkillText>>                     GameRegistries::SKILL_NOUN = nullptr;
std::shared_ptr<MergedRegistry<FGDQuestRequestMapText_Noun>>      GameRegistries::QUEST_REQUEST_NOUN = nullptr;
std::shared_ptr<MergedRegistry<FGDQuestTitleText>>                GameRegistries::QUEST_TITLE_NOUN = nullptr;
std::shared_ptr<MergedRegistry<FGDMapText_Noun>>                  GameRegistries::MAP_NOUN = nullptr;
std::shared_ptr<MergedRegistry<FGDMenuText_Noun>>                 GameRegistries::MENU_NOUN = nullptr;
std::shared_ptr<MergedRegistry<FGDCharaText_Noun>>                GameRegistries::CHARA_NOUN = nullptr;
std::shared_ptr<MergedRegistry<FGDSystemText_Noun>>               GameRegistries::SYSTEM_NOUN = nullptr;
std::shared_ptr<MergedRegistry<ItemMaterialData>>                 GameRegistries::ITEM_MATERIAL = nullptr;

// Game source IDs
uint16_t GameRegistries::_battleCommandNounSourceId = 0;
uint16_t GameRegistries::_plantDungeonNounSourceId = 0;
uint16_t GameRegistries::_itemNounSourceId = 0;
uint16_t GameRegistries::_lifeNounSourceId = 0;
uint16_t GameRegistries::_skillNounSourceId = 0;
uint16_t GameRegistries::_questRequestNounSourceId = 0;
uint16_t GameRegistries::_questTitleNounSourceId = 0;
uint16_t GameRegistries::_mapNounSourceId = 0;
uint16_t GameRegistries::_menuNounSourceId = 0;
uint16_t GameRegistries::_charaNounSourceId = 0;
uint16_t GameRegistries::_systemNounSourceId = 0;
uint16_t GameRegistries::_itemMaterialSourceId = 0;

void GameRegistries::init(GameData* gameData)
{
  ModLoader::logger->verbose("Initialize Game Registries");
  auto* sdm = gameData->getStaticDataManager();

  bindNounPRE(sdm);
  bindItem(sdm);
}

void GameRegistries::bindNounPRE(UStaticDataManager* sdm)
{
  ModLoader::gameData->waitObject(&sdm->m_BattleCommandNameNoun);
  BATTLE_COMMAND_NOUN = std::make_shared<MergedRegistry<FGDBattleCommandNameNoun>>();
  auto battleCommandSource = std::make_shared<TMapRegistrySource<FName, FGDBattleCommandNameNoun>>("BattleCommandNoun", 0, &sdm->m_BattleCommandNameNoun->m_dataMap);
  battleCommandSource->BuildIndex();
  _battleCommandNounSourceId = BATTLE_COMMAND_NOUN->AddSource(battleCommandSource);
  ModLoader::logger->verbose("Binded Battle Command Noun Registry!");

  ModLoader::gameData->waitObject(&sdm->m_PlantDungeonText_Noun);
  PLANT_DUNGEON_NOUN = std::make_shared<MergedRegistry<FGDPlantDungeonText_Noun>>();
  auto plantDungeonSource = std::make_shared<TMapRegistrySource<FName, FGDPlantDungeonText_Noun>>("PlantDungeonNoun", 0, &sdm->m_PlantDungeonText_Noun->m_dataMap);
  plantDungeonSource->BuildIndex();
  _plantDungeonNounSourceId = PLANT_DUNGEON_NOUN->AddSource(plantDungeonSource);
  ModLoader::logger->verbose("Binded Plant Dungeon Noun Registry!");

  ModLoader::gameData->waitObject(&sdm->m_ItemText_Noun);
  ITEM_NOUN = std::make_shared<MergedRegistry<FGDItemText_Noun>>();
  auto itemNounSource = std::make_shared<TMapRegistrySource<FName, FGDItemText_Noun>>("ItemNoun", 0, &sdm->m_ItemText_Noun->m_dataMap);
  itemNounSource->BuildIndex();
  _itemNounSourceId = ITEM_NOUN->AddSource(itemNounSource);
  ModLoader::logger->verbose("Binded Item Noun Registry!");
  
  ModLoader::gameData->waitObject(&sdm->m_LifeText_Noun);
  LIFE_NOUN = std::make_shared<MergedRegistry<FGDLifeText_Noun>>();
  auto lifeNounSource = std::make_shared<TMapRegistrySource<FName, FGDLifeText_Noun>>("LifeNoun", 0, &sdm->m_LifeText_Noun->m_dataMap);
  lifeNounSource->BuildIndex();
  _lifeNounSourceId = LIFE_NOUN->AddSource(lifeNounSource);
  ModLoader::logger->verbose("Binded Life Noun Registry!");

  ModLoader::gameData->waitObject(&sdm->m_SkillText);
  SKILL_NOUN = std::make_shared<MergedRegistry<FGDSkillText>>();
  auto skillNounSource = std::make_shared<TMapRegistrySource<FName, FGDSkillText>>("SkillNoun", 0, &sdm->m_SkillText->m_dataMap);
  skillNounSource->BuildIndex();
  _skillNounSourceId = SKILL_NOUN->AddSource(skillNounSource);
  ModLoader::logger->verbose("Binded Skill Noun Registry!");

  ModLoader::gameData->waitObject(&sdm->m_QuestRequestMapText_Noun);
  QUEST_REQUEST_NOUN = std::make_shared<MergedRegistry<FGDQuestRequestMapText_Noun>>();
  auto questRequestSource = std::make_shared<TMapRegistrySource<FName, FGDQuestRequestMapText_Noun>>("QuestRequestNoun", 0, &sdm->m_QuestRequestMapText_Noun->m_dataMap);
  questRequestSource->BuildIndex();
  _questRequestNounSourceId = QUEST_REQUEST_NOUN->AddSource(questRequestSource);
  ModLoader::logger->verbose("Binded Quest Request Noun Registry!");

  ModLoader::gameData->waitObject(&sdm->m_QuestTitleText);
  QUEST_TITLE_NOUN = std::make_shared<MergedRegistry<FGDQuestTitleText>>();
  auto questTitleSource = std::make_shared<TMapRegistrySource<FName, FGDQuestTitleText>>("QuestTitleNoun", 0, &sdm->m_QuestTitleText->m_dataMap);
  questTitleSource->BuildIndex();
  _questTitleNounSourceId = QUEST_TITLE_NOUN->AddSource(questTitleSource);
  ModLoader::logger->verbose("Binded Quest Title Noun Registry!");

  ModLoader::gameData->waitObject(&sdm->m_MapText_Noun);
  MAP_NOUN = std::make_shared<MergedRegistry<FGDMapText_Noun>>();
  auto mapNounSource = std::make_shared<TMapRegistrySource<FName, FGDMapText_Noun>>("MapNoun", 0, &sdm->m_MapText_Noun->m_dataMap);
  mapNounSource->BuildIndex();
  _mapNounSourceId = MAP_NOUN->AddSource(mapNounSource);
  ModLoader::logger->verbose("Binded Map Noun Registry!");

  ModLoader::gameData->waitObject(&sdm->m_MenuText_Noun);
  MENU_NOUN = std::make_shared<MergedRegistry<FGDMenuText_Noun>>();
  auto menuNounSource = std::make_shared<TMapRegistrySource<FName, FGDMenuText_Noun>>("MenuNoun", 0, &sdm->m_MenuText_Noun->m_dataMap);
  menuNounSource->BuildIndex();
  _menuNounSourceId = MENU_NOUN->AddSource(menuNounSource);
  ModLoader::logger->verbose("Binded Menu Noun Registry!");

  ModLoader::gameData->waitObject(&sdm->m_CharaText_Noun);
  CHARA_NOUN = std::make_shared<MergedRegistry<FGDCharaText_Noun>>();
  auto charaNounSource = std::make_shared<TMapRegistrySource<FName, FGDCharaText_Noun>>("CharaNoun", 0, &sdm->m_CharaText_Noun->m_dataMap);
  charaNounSource->BuildIndex();
  _charaNounSourceId = CHARA_NOUN->AddSource(charaNounSource);
  ModLoader::logger->verbose("Binded Chara Noun Registry!");

  ModLoader::gameData->waitObject(&sdm->m_SystemText_Noun);
  SYSTEM_NOUN = std::make_shared<MergedRegistry<FGDSystemText_Noun>>();
  auto systemNounSource = std::make_shared<TMapRegistrySource<FName, FGDSystemText_Noun>>("SystemNoun", 0, &sdm->m_SystemText_Noun->m_dataMap);
  systemNounSource->BuildIndex();
  _systemNounSourceId = SYSTEM_NOUN->AddSource(systemNounSource);
  ModLoader::logger->verbose("Binded System Noun Registry!");
}

void GameRegistries::bindItem(UStaticDataManager* sdm)
{
  ModLoader::gameData->waitObject(&sdm->m_ItemMaterialData);
  ITEM_MATERIAL = std::make_shared<MergedRegistry<ItemMaterialData>>();
  auto itemMaterialSource = std::make_shared<WrappedRegistrySource<ItemMaterialData, FGDItemMaterialData>>("ItemMaterial", 0, &sdm->m_ItemMaterialData->m_dataMap);

  itemMaterialSource->BuildIndex();
  _itemMaterialSourceId = ITEM_MATERIAL->AddSource(itemMaterialSource);
  ModLoader::logger->verbose("Binded Material Item Registry!");
}