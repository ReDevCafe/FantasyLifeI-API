#ifndef ITEMVEHICLEDATA_HPP
    #define ITEMVEHICLEDATA_HPP

    #include "ItemData.hpp"

class ML_API ItemVehicleData : public ItemData
{
    public:
        ItemVehicleData(FGDItemVehicleData& data): ItemData(data){};
};

#endif // !ITEMVEHICLEDATA_HPP