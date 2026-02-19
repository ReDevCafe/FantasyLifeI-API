#include "GameRegistries.hpp"
#include "API/Item/ItemConsumeData.hpp"
#include "API/Registry/MergedRegistry.hpp"
#include "GameData.hpp"
#include "ModLoader.hpp"
#include "SDK/DP1Project.h"

std::shared_ptr<MergedRegistry<FGDBattleCommandNameNoun>>    GameRegistries::NOUN_BATTLE_COMMAND = nullptr;
std::shared_ptr<MergedRegistry<FGDPlantDungeonText_Noun>>    GameRegistries::NOUN_PLANT_DUNGEON  = nullptr;
std::shared_ptr<MergedRegistry<FGDItemText_Noun>>            GameRegistries::NOUN_ITEM           = nullptr;
std::shared_ptr<MergedRegistry<FGDLifeText_Noun>>            GameRegistries::NOUN_LIFE           = nullptr;
std::shared_ptr<MergedRegistry<FGDSkillText>>                GameRegistries::NOUN_SKILL          = nullptr;
std::shared_ptr<MergedRegistry<FGDQuestRequestMapText_Noun>> GameRegistries::NOUN_QUEST_REQUEST  = nullptr;
std::shared_ptr<MergedRegistry<FGDQuestTitleText>>           GameRegistries::NOUN_QUEST_TITLE    = nullptr;
std::shared_ptr<MergedRegistry<FGDMapText_Noun>>             GameRegistries::NOUN_MAP            = nullptr;
std::shared_ptr<MergedRegistry<FGDMenuText_Noun>>            GameRegistries::NOUN_MENU           = nullptr;
std::shared_ptr<MergedRegistry<FGDCharaText_Noun>>           GameRegistries::NOUN_CHARA          = nullptr;
std::shared_ptr<MergedRegistry<FGDSystemText_Noun>>          GameRegistries::NOUN_SYSTEM         = nullptr;

std::shared_ptr<MergedRegistry<ItemMaterialData>>            GameRegistries::ITEM_MATERIAL       = nullptr;
std::shared_ptr<MergedRegistry<ItemConsumeData>>             GameRegistries::ITEM_CONSUME        = nullptr;

uint16_t GameRegistries::_nounBattleCommandSourceId = 0;
uint16_t GameRegistries::_nounPlantDungeonSourceId  = 0;
uint16_t GameRegistries::_nounItemSourceId          = 0;
uint16_t GameRegistries::_nounLifeSourceId          = 0;
uint16_t GameRegistries::_nounSkillSourceId         = 0;
uint16_t GameRegistries::_nounQuestRequestSourceId  = 0;
uint16_t GameRegistries::_nounQuestTitleSourceId    = 0;
uint16_t GameRegistries::_nounMapSourceId           = 0;
uint16_t GameRegistries::_nounMenuSourceId          = 0;
uint16_t GameRegistries::_nounCharaSourceId         = 0;
uint16_t GameRegistries::_nounSystemSourceId        = 0;
uint16_t GameRegistries::_itemMaterialSourceId      = 0;
uint16_t GameRegistries::_itemConsumeSourceId       = 0;

void GameRegistries::_LogBound(const char* sourceName)
{
  ModLoader::logger->verbose("Binded " + std::string(sourceName) + " Registry!");
}

void GameRegistries::init(GameData* gameData)
{
  ModLoader::logger->verbose("Initialize Game Registries");
  auto* sdm = gameData->getStaticDataManager();
  bindNounPRE(sdm);
  bindItem(sdm);
}

void GameRegistries::bindNounPRE(UStaticDataManager* sdm)
{
  #define WAIT_AND_BIND_TMAP(field, registry, sourceId, sourceName, memberPtr)  \
  ModLoader::gameData->waitObject(&sdm->field);                                 \
  sourceId = _BindTMap(registry, sourceName, &sdm->field->memberPtr)

  WAIT_AND_BIND_TMAP(m_BattleCommandNameNoun,    NOUN_BATTLE_COMMAND,   _nounBattleCommandSourceId,  "BattleCommandNoun",  m_dataMap);
  WAIT_AND_BIND_TMAP(m_PlantDungeonText_Noun,    NOUN_PLANT_DUNGEON,    _nounPlantDungeonSourceId,   "PlantDungeonNoun",   m_dataMap);
  WAIT_AND_BIND_TMAP(m_ItemText_Noun,            NOUN_ITEM,             _nounItemSourceId,            "ItemNoun",           m_dataMap);
  WAIT_AND_BIND_TMAP(m_LifeText_Noun,            NOUN_LIFE,             _nounLifeSourceId,            "LifeNoun",           m_dataMap);
  WAIT_AND_BIND_TMAP(m_SkillText,                NOUN_SKILL,            _nounSkillSourceId,           "SkillNoun",          m_dataMap);
  WAIT_AND_BIND_TMAP(m_QuestRequestMapText_Noun, NOUN_QUEST_REQUEST,    _nounQuestRequestSourceId,    "QuestRequestNoun",   m_dataMap);
  WAIT_AND_BIND_TMAP(m_QuestTitleText,           NOUN_QUEST_TITLE,      _nounQuestTitleSourceId,      "QuestTitleNoun",     m_dataMap);
  WAIT_AND_BIND_TMAP(m_MapText_Noun,             NOUN_MAP,              _nounMapSourceId,             "MapNoun",            m_dataMap);
  WAIT_AND_BIND_TMAP(m_MenuText_Noun,            NOUN_MENU,             _nounMenuSourceId,            "MenuNoun",           m_dataMap);
  WAIT_AND_BIND_TMAP(m_CharaText_Noun,           NOUN_CHARA,            _nounCharaSourceId,           "CharaNoun",          m_dataMap);
  WAIT_AND_BIND_TMAP(m_SystemText_Noun,          NOUN_SYSTEM,           _nounSystemSourceId,          "SystemNoun",         m_dataMap);

  #undef WAIT_AND_BIND_TMAP
}

void GameRegistries::bindItem(UStaticDataManager* sdm)
{
  ModLoader::gameData->waitObject(&sdm->m_ItemMaterialData);
  _itemMaterialSourceId = _BindWrapped<ItemMaterialData, FGDItemMaterialData>(ITEM_MATERIAL, "ItemMaterial", &sdm->m_ItemMaterialData->m_dataMap);

  ModLoader::gameData->waitObject(&sdm->m_ItemConsumeData);
  _itemConsumeSourceId = _BindWrapped<ItemConsumeData, FGDItemConsumeData>(ITEM_CONSUME, "ItemConsume", &sdm->m_ItemConsumeData->m_dataMap);
}