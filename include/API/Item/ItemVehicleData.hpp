#ifndef ITEMVEHICLEDATA_HPP
    #define ITEMVEHICLEDATA_HPP

    #include "ItemData.hpp"

class ML_API ItemVehicleData : public ItemData
{
    public:
        ItemVehicleData(FGDItemVehicleData& data): ItemData(data){};
        ItemVehicleData(ItemData data) : ItemData(data.getObject()){};
};

#endif // !ITEMVEHICLEDATA_HPP