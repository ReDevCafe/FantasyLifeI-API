#ifndef FLI_GAME_REGISTRIES_PROXY
  #define FLI_GAME_REGISTRIES_PROXY

  #include "API/Function/Engine/FName/FNameCTor.hpp"
  #include "API/Registry/TMapRegistry.hpp"
  #include "API/Registry/WrappedRegistry.hpp"
  #include "API/Registry/MergedRegistry.hpp"
  #include "API/Item/ItemMaterialData.hpp"
  #include "API/Item/ItemConsumeData.hpp"
  #include "Export.h"
  #include "SDK/DP1Project.h"
  #include <memory>

class GameData;
class ML_API GameRegistries
{
  public:
  void init(GameData* gameData);

  private:
  void bindNounPRE(UStaticDataManager* sdm);
  void bindItem(UStaticDataManager* sdm);

  template<typename T>
  static uint16_t _BindTMap(std::shared_ptr<MergedRegistry<T>>& outRegistry, const char* sourceName, TMap<FName, T>* gameMap)
  {
    outRegistry = std::make_shared<MergedRegistry<T>>();
    auto source = std::make_shared<TMapRegistrySource<FName, T>>(sourceName, 0, gameMap);
    source->BuildIndex();
    const uint16_t id = outRegistry->AddSource(std::move(source));
    _LogBound(sourceName);
    return id;
  }

  template<typename WrappedType, typename GameDataType>
  static uint16_t _BindWrapped(std::shared_ptr<MergedRegistry<WrappedType>>& outRegistry, const char* sourceName, TMap<FName, GameDataType>* gameMap)
  {
    outRegistry = std::make_shared<MergedRegistry<WrappedType>>();
    auto source = std::make_shared<WrappedRegistrySource<WrappedType, GameDataType>>(sourceName, 0, gameMap);
    source->BuildIndex();
    const uint16_t id = outRegistry->AddSource(std::move(source));
    _LogBound(sourceName);
    return id;
  }

  static void _LogBound(const char* sourceName);

  public:
  template<typename T>
  static uint16_t AddModSource(std::shared_ptr<MergedRegistry<T>>& registry, std::shared_ptr<RegistrySource<T>> source)
  {
    if (!registry) throw std::runtime_error("Registry not initialized");
    return registry->AddSource(std::move(source));
  }

  template<typename T>
  static void RemoveModSource(std::shared_ptr<MergedRegistry<T>>& registry, uint16_t sourceId)
  {
    if (!registry) throw std::runtime_error("Registry not initialized");
    registry->RemoveSource(sourceId);
  }

  static std::shared_ptr<MergedRegistry<FGDBattleCommandNameNoun>>    NOUN_BATTLE_COMMAND;
  static std::shared_ptr<MergedRegistry<FGDPlantDungeonText_Noun>>    NOUN_PLANT_DUNGEON;
  static std::shared_ptr<MergedRegistry<FGDItemText_Noun>>            NOUN_ITEM;
  static std::shared_ptr<MergedRegistry<FGDLifeText_Noun>>            NOUN_LIFE;
  static std::shared_ptr<MergedRegistry<FGDSkillText>>                NOUN_SKILL;
  static std::shared_ptr<MergedRegistry<FGDQuestRequestMapText_Noun>> NOUN_QUEST_REQUEST;
  static std::shared_ptr<MergedRegistry<FGDQuestTitleText>>           NOUN_QUEST_TITLE;
  static std::shared_ptr<MergedRegistry<FGDMapText_Noun>>             NOUN_MAP;
  static std::shared_ptr<MergedRegistry<FGDMenuText_Noun>>            NOUN_MENU;
  static std::shared_ptr<MergedRegistry<FGDCharaText_Noun>>           NOUN_CHARA;
  static std::shared_ptr<MergedRegistry<FGDSystemText_Noun>>          NOUN_SYSTEM;

  static std::shared_ptr<MergedRegistry<ItemMaterialData>>            ITEM_MATERIAL;
  static std::shared_ptr<MergedRegistry<ItemConsumeData>>             ITEM_CONSUME;

  private:
  static uint16_t _nounBattleCommandSourceId;
  static uint16_t _nounPlantDungeonSourceId;
  static uint16_t _nounItemSourceId;
  static uint16_t _nounLifeSourceId;
  static uint16_t _nounSkillSourceId;
  static uint16_t _nounQuestRequestSourceId;
  static uint16_t _nounQuestTitleSourceId;
  static uint16_t _nounMapSourceId;
  static uint16_t _nounMenuSourceId;
  static uint16_t _nounCharaSourceId;
  static uint16_t _nounSystemSourceId;

  static uint16_t _itemMaterialSourceId;
  static uint16_t _itemConsumeSourceId;
};

#endif // FLI_GAME_REGISTRIES_PROXY