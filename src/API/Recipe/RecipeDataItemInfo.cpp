#include "API/Recipe/RecipeDataItemInfo.hpp"
#include "API/Engine/FName.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"

ItemData RecipeDataItemInfo::GetItem()
{
    return ModLoader::gameCache->GetItem(this->_object.ItemId.ToString());
}