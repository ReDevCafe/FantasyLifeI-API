#include "API/Recipe/RecipeData.hpp"
#include "API/Engine/FName.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"

std::string RecipeData::GetIdentifier()
{
    return this->_object.recipeId.ToString();
}

std::string RecipeData::GetItemIdentifier()
{
    return this->_object.ItemId.ToString();
}

ItemData RecipeData::GetItem()
{
    return ModLoader::gameCache->GetItem(GetItemIdentifier());
}

RecipeDataItemInfo RecipeData::GetRecipeItem(int index)
{
    auto raw = this->_object.itemList.Get(index);
    return RecipeDataItemInfo(raw);
}

void RecipeData::SetRecipeItem(ItemData value, int index, int32_t quantity)
{
    this->_object.itemList.Set(index, FGDRecipeData_ItemInfo{value.getObject().ID, quantity});
}

void RecipeData::AddRecipeItem(ItemData data, int32_t quantity)
{
    this->_object.itemList.Add(FGDRecipeData_ItemInfo{data.getObject().ID, quantity});
}