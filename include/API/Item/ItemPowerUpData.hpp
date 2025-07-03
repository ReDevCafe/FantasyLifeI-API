#ifndef ITEMPOWERUPDATA_HPP
    #define ITEMPOWERUPDATA_HPP
    #include "ItemData.hpp"

class ML_API ItemPowerUpData : public ItemData
{
    public:
        ItemPowerUpData(FGDItemPowerUpData& data) : ItemData(data){};
};

#endif // ITEMPOWERUPDATA_HPP