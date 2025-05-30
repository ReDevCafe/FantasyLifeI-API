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
    int32_t count = this->_object.itemList.Count;

    this->_object.itemList.Data[count] = object.getObject();
    this->_object.itemList.Count = ++count;

    this->_itemInfo.emplace_back(object);
}

//FIXME: rework
void RecipeData::RemoveItem(int index)
{
    int32_t count = this->_object.itemList.Count;
    //if(index <= 0 || index >= count) return;    // Invalid index

    this->_itemInfo.clear();
    this->_object.itemList.RemoveSingle(index);

    for(int i = 0; i < this->_object.itemList.Count; ++i)
        _itemInfo.push_back(RecipeDataItemInfo{this->_object.itemList[i]});
}