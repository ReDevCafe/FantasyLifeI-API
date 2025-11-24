#include "API/Recipe/RecipeDataRewardData.hpp"
#include "API/Engine/FName.hpp"
#include "GameCache.hpp"
#include "ModLoader.hpp"

ItemData RecipeDataRewardData::GetRank0Item()
{
    return ModLoader::gameCache->GetItem(this->_object.rank0_itemId.ToString());
}

ItemData RecipeDataRewardData::GetRank1Item()
{
    return ModLoader::gameCache->GetItem(this->_object.rank1_itemId.ToString());
}

ItemData RecipeDataRewardData::GetRank2Item()
{
    return ModLoader::gameCache->GetItem(this->_object.rank2_itemId.ToString());
}

ItemData RecipeDataRewardData::GetRank3Item()
{
    return ModLoader::gameCache->GetItem(this->_object.rank3_itemId.ToString());
}

