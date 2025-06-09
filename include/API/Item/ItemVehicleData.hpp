#ifndef ITEMVEHICLEDATA_HPP
    #define ITEMVEHICLEDATA_HPP

    #include "ItemData.hpp"

class ItemVehicleData : public ItemData
{
    public:
        ItemVehicleData(FGDItemVehicleData& data): ItemData(data){};
};

#endif // !ITEMVEHICLEDATA_HPP