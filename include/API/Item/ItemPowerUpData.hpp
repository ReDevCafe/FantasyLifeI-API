#ifndef ITEMPOWERUPDATA_HPP
    #define ITEMPOWERUPDATA_HPP
    #include "ItemData.hpp"
    #include "Game/Item/UGDSItemPowerUpData.hpp"

class ItemPowerUpData : public ItemData
{
    public:
        ItemPowerUpData(FGDItemPowerUpData& data) : ItemData(data){};
};

#endif // ITEMPOWERUPDATA_HPP