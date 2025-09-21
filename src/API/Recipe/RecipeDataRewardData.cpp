#include "API/Recipe/RecipeDataRewardData.hpp"
#include "GameCache.hpp"
#include "ModLoader.hpp"

ItemData RecipeDataRewardData::GetRank0Item()
{
    return ModLoader::gameCache->GetItem(FNameUtils::GetString(this->_object.rank0_itemId));
}

ItemData RecipeDataRewardData::GetRank1Item()
{
    return ModLoader::gameCache->GetItem(FNameUtils::GetString(this->_object.rank1_itemId));
}

ItemData RecipeDataRewardData::GetRank2Item()
{
    return ModLoader::gameCache->GetItem(FNameUtils::GetString(this->_object.rank2_itemId));
}

ItemData RecipeDataRewardData::GetRank3Item()
{
    return ModLoader::gameCache->GetItem(FNameUtils::GetString(this->_object.rank3_itemId));
}

