#ifndef ITEMMATERIALDATA_HPP
    #define ITEMMATERIALDATA_HPP

    #include "ItemData.hpp"

class ML_API ItemMaterialData : public ItemData
{
    public:
        ItemMaterialData(FGDItemMaterialData& data): ItemData(data){};
        ItemMaterialData(ItemData data) : ItemData(data.getObject()){};
};

#endif // !ITEMMATERIALDATA_HPP