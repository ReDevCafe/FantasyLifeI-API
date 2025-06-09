#ifndef ITEMMATERIALDATA_HPP
    #define ITEMMATERIALDATA_HPP

    #include "ItemData.hpp"

class ItemMaterialData : public ItemData
{
    public:
        ItemMaterialData(FGDItemMaterialData& data): ItemData(data){};
};

#endif // !ITEMMATERIALDATA_HPP