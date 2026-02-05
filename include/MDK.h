#pragma once

// Definition
#include "Export.h"

// Game SDK
#include "SDK.h"

// API TRANSLATION LAYER
#include "API/Common/Common.hpp"
#include "API/Common/CommonElementAttrParam.hpp"
#include "API/Common/CommonItemTableSetting.hpp"
#include "API/Common/CommonPickParamData.hpp"
#include "API/Common/CommonPickParamDataPickParam.hpp"
#include "API/Common/CommonPickStatusParam.hpp"
#include "API/Common/CommonPriceInfo.hpp"
#include "API/Common/CommonSkillParam.hpp"

#include "API/Entities/Player/Player.hpp"

#include "API/Entities/CharaData.hpp"
#include "API/Entities/EntityStats.hpp"
#include "API/Entities/EntityStatus.hpp"

#include "API/Identifier/ItemIdentifier.hpp"
#include "API/Identifier/MapIdentifier.hpp"
#include "API/Identifier/MenuIconIdentifier.hpp"
#include "API/Identifier/RecipeIdentifier.hpp"
#include "API/Identifier/SkillIdentifier.hpp"

#include "API/Item/ItemArmorData.hpp"
#include "API/Item/ItemConsumeData.hpp"
#include "API/Item/ItemCraftData.hpp"
#include "API/Item/ItemData.hpp"
#include "API/Item/ItemEquipData.hpp"
#include "API/Item/ItemImportantData.hpp"
#include "API/Item/ItemKitData.hpp"
#include "API/Item/ItemLifeToolsData.hpp"
#include "API/Item/ItemMaterialData.hpp"
#include "API/Item/ItemPowerUpData.hpp"
#include "API/Item/ItemUniqueSkillEquipData.hpp"
#include "API/Item/ItemVehicleData.hpp"
#include "API/Item/ItemWeaponData.hpp"

#include "API/Life/LifeData.hpp"
#include "API/Life/ULifeData.hpp"

#include "API/Recipe/RecipeData.hpp"
#include "API/Recipe/RecipeDataItemInfo.hpp"
#include "API/Recipe/RecipeDataLifeParamInfo.hpp"
#include "API/Recipe/RecipeDataRewardData.hpp"

#include "API/Skill/EffectCondition.hpp"
#include "API/Skill/SkillData.hpp"
#include "API/Skill/SkillEffectInfo.hpp"

#include "API/Table/ItemTableDetail.hpp"

#include "API/World/MapAttributeInfo.hpp"
#include "API/World/MapData.hpp"
#include "API/World/MapDataSubMapData.hpp"
#include "API/World/MapSubLevel.hpp"

#include "API/GameObjectProxy.hpp"
#include "API/Language.hpp"

// ENGINE
#include "Engine/FUObjectArray.hpp"

// Hook system
#include "Hook/EventHandler.hpp"
#include "Hook/MemoryHelper.hpp"

// Logger
#include "Logger/Logger.hpp"

// Mod base
#include "Mod/ModBase.hpp"

// Utility and Cache
#include "GameCache.hpp"
#include "GameData.hpp"
#include "ModLoader.hpp"