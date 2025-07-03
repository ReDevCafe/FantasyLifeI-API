#ifndef ITEMCRAFTDATA_HPP
    #define ITEMCRAFTDATA_HPP

    #include "ItemData.hpp"

class ML_API ItemCraftData : public ItemData
{
    public:
        ItemCraftData(FGDItemCraftData& data) : ItemData(data){};
};

#endif // !ITEMCRAFTDATA_HPP