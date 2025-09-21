#include "API/Recipe/RecipeDataItemInfo.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"

ItemData RecipeDataItemInfo::GetItem()
{
    return ModLoader::gameCache->GetItem(FNameUtils::GetString(this->_object.ItemId));
}