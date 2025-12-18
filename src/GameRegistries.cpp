#include "GameRegistries.hpp"
#include "GameData.hpp"
#include "ModLoader.hpp"
#include "SDK/DP1Project.h"

WrappedRegistry<ItemMaterialData, FGDItemMaterialData>* GameRegistries::ITEM_MATERIAL = nullptr;

void GameRegistries::init(GameData* gameData)
{
  ModLoader::logger->verbose("Initialize Game Registries");
  auto* sdm = gameData->getStaticDataManager();

  bindItem(sdm);
}

void GameRegistries::bindItem(UStaticDataManager* sdm)
{
  ModLoader::gameData->waitObject(&sdm->m_ItemMaterialData);
  ITEM_MATERIAL = new WrappedRegistry<ItemMaterialData, FGDItemMaterialData>();
  ITEM_MATERIAL->Bind(&sdm->m_ItemMaterialData->m_dataMap);
  ITEM_MATERIAL->BuildIndex();
  ModLoader::logger->verbose("Binded Material Item Registry!");

}
  
  