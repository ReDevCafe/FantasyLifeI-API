#ifndef ITEMCRAFTDATA_HPP
    #define ITEMCRAFTDATA_HPP

    #include "ItemData.hpp"

class ML_API ItemCraftData : public ItemData
{
    public:
        ItemCraftData(FGDItemCraftData& data) : ItemData(data){};
        ItemCraftData(ItemData data) : ItemData(data.getObject()){};

};

#endif // !ITEMCRAFTDATA_HPP