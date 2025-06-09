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

RecipeDataItemInfo RecipeData::GetItem(int index)
{
    if(index >= this->_object.itemList.Count || index < 0)
        throw std::out_of_range("RecipeData::GetItem() out of range");

    return RecipeDataItemInfo(this->_object.itemList.Data[index]);
}

void RecipeData::SetItem(int index, ItemData value, int32_t quantity)
{
    auto array = this->_object.itemList;
    int count = array.Count;
    if(array.Max == 0)
    {
        array.Max = 4;
        array.Data = new FGDRecipeData_ItemInfo[4];
    } else if (count >= array.Max)
    {
        FGDRecipeData_ItemInfo* newData = new FGDRecipeData_ItemInfo[count + 1];
        for(int i = 0; i < count; ++i)
            newData[i] = array.Data[i];

        delete[] array.Data;
        array.Data = newData;
        array.Max = count + 1;
    }
    
    array.Data[count] = FGDRecipeData_ItemInfo{value.getObject().ID, quantity};
    array.Count = ++count;
}

void RecipeData::AddItem(ItemData data, int32_t quantity)
{
    SetItem(this->_object.itemList.Count, data, quantity);
}