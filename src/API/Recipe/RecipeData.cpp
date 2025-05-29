#include "API/Recipe/RecipeData.hpp"
#include "ModLoader.hpp"
#include "GameCache.hpp"
#include <memory>


std::string RecipeData::GetIdentifier()
{
    return Utils::FNameToString(this->_object.recipeId);
}

std::string RecipeData::GetItemIdentifier()
{
    return Utils::FNameToString(this->_object.ItemId);
}

ItemData RecipeData::GetItem()
{
    return ModLoader::gameCache->GetItem(GetItemIdentifier());
}

void RecipeData::AddItem(ItemData data, int32_t quantity)
{
    auto object = RecipeDataItemInfo{data, quantity};

    //auto oldPtr = this->_object.itemList.Data;
    int32_t count = this->_object.itemList.Count;
    //size_t newCount = count + 1;

    //auto newSize = sizeof(FGDRecipeData_ItemInfo) * newCount;
    //auto newPtr = static_cast<FGDRecipeData_ItemInfo*>(
     //   std::realloc(oldPtr, newSize)
    //);
    //if(!newPtr) return;

    //this->_object.itemList.Data = newPtr;
    //this->_object.itemList.Count = newCount;
    this->_object.itemList.Data[count] = object.getObject();
    this->_object.itemList.Count = ++count;
}