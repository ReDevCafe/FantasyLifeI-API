#ifndef RECIPEDATAITEMINFO
    #define RECIPEDATAITEMINFO

    #include "Game/Recipe/UGDSRecipeData.hpp"
    #include "API/Item/ItemData.hpp"

class RecipeDataItemInfo : public GameObjectProxy<FGDRecipeData_ItemInfo>
{
    public:
        RecipeDataItemInfo(FGDRecipeData_ItemInfo& data) : GameObjectProxy(data){}; 

        RecipeDataItemInfo(ItemData data, int32_t power) : GameObjectProxy(this->_object)
        {
            this->_object = FGDRecipeData_ItemInfo{data.getObject().ID, power};
        };

        ItemData GetItem();
        void SetItem(ItemData data) const { this->_object.ItemId = data.getObject().ID; }

        int32_t GetNumberRequired() const { return this->_object.numItems; }
        void SetNumberRequired(int32_t value) const { this->_object.numItems = value; } 
};

#endif // !RECIPEDATAITEMINFO