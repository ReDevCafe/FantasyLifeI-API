#ifndef ITEMPOWERUPDATA_HPP
    #define ITEMPOWERUPDATA_HPP
    #include "ItemData.hpp"

class ItemPowerUpData : public ItemData
{
    public:
        ItemPowerUpData(FGDItemPowerUpData& data) : ItemData(data){};
};

#endif // ITEMPOWERUPDATA_HPP