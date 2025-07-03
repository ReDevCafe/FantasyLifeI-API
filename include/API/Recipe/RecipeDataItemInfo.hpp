#ifndef RECIPEDATAITEMINFO
    #define RECIPEDATAITEMINFO

    #include "API/Item/ItemData.hpp"
    #include "Export.h"

class ML_API RecipeDataItemInfo : public GameObjectProxy<FGDRecipeData_ItemInfo>
{
    private:
        FGDRecipeData_ItemInfo dataObj;
    public:
        RecipeDataItemInfo(FGDRecipeData_ItemInfo& data) :
            dataObj(data),
            GameObjectProxy(dataObj)
        {}; 

        RecipeDataItemInfo(ItemData data, int32_t power) :
            dataObj{data.getObject().ID, power},
            GameObjectProxy(dataObj)
        {};

        ItemData GetItem();
        void SetItem(ItemData data) const { this->_object.ItemId = data.getObject().ID; }

        int32_t GetNumberRequired() const { return this->_object.numItems; }
        void SetNumberRequired(int32_t value) const { this->_object.numItems = value; } 

        FGDRecipeData_ItemInfo _getObject() const { return dataObj; }
};

#endif // !RECIPEDATAITEMINFO