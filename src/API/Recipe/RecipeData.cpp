#include "API/Recipe/RecipeData.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"
#include <memory>
#include "API/Engine/TArrayHelper.hpp"


std::string RecipeData::GetIdentifier()
{
    return FNameUtils::GetString(this->_object.recipeId);
}

std::string RecipeData::GetItemIdentifier()
{
    return FNameUtils::GetString(this->_object.ItemId);
}

ItemData RecipeData::GetItem()
{
    return ModLoader::gameCache->GetItem(GetItemIdentifier());
}

RecipeDataItemInfo RecipeData::GetRecipeItem(int index)
{
    auto raw = TArrayHelper<FGDRecipeData_ItemInfo>::Get(this->_object.itemList, index);
    return RecipeDataItemInfo(raw);
}

void RecipeData::SetRecipeItem(ItemData value, int index, int32_t quantity)
{
    TArrayHelper<FGDRecipeData_ItemInfo>::Set(this->_object.itemList, index, FGDRecipeData_ItemInfo{value.getObject().ID, quantity});
}

void RecipeData::AddRecipeItem(ItemData data, int32_t quantity)
{
    TArrayHelper<FGDRecipeData_ItemInfo>::Add(this->_object.itemList, FGDRecipeData_ItemInfo{data.getObject().ID, quantity});
}