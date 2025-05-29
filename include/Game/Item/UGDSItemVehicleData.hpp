#ifndef UGDSITEMVEHICLEDATA_HPP
    #define UGDSITEMVEHICLEDATA_HPP
    #include "FGDItemData.hpp"

struct FGDItemVehicleData : FGDItemData
{
    public:
        FName                           vehicleId;
        bool                            isMenuAlwaysDisplayed;
        unsigned char                   unknown[0x7];
};

class UGDSItemVehicleData : public UGameDataAsset
{
    public:
	    TMap<FName, FGDItemVehicleData> m_dataMap; 
        unsigned    char                unknown[0x50];
};

#endif // !UGDSITEMVEHICLEDATA_HPP
