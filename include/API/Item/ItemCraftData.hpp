#ifndef ITEMCRAFTDATA_HPP
    #define ITEMCRAFTDATA_HPP

    #include "ItemData.hpp"

class ItemCraftData : public ItemData
{
    public:
        ItemCraftData(FGDItemCraftData& data) : ItemData(data){};
};

#endif // !ITEMCRAFTDATA_HPP