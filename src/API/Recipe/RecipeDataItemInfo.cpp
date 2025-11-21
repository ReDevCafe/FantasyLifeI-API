#include "API/Recipe/RecipeDataItemInfo.hpp"
#include "API/Engine/FName.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"
#include "Utils.hpp"

ItemData RecipeDataItemInfo::GetItem()
{
    return ModLoader::gameCache->GetItem(static_cast<API_FName>(this->_object.ItemId).ToString());
}