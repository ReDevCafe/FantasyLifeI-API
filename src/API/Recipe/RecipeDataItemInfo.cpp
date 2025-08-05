#include "API/Recipe/RecipeDataItemInfo.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"

ItemData RecipeDataItemInfo::GetItem()
{
    return ModLoader::gameCache->GetItem(FNameUtils::getString(this->_object.ItemId));
}