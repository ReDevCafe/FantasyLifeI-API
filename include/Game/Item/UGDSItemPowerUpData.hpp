#ifndef UGDSITEMPOWERUPDATA_HPP
    #define UGDSITEMPOWERUPDATA_HPP

    #include "FGDItemData.hpp"

struct FGDItemPowerUpData : FGDItemData
{
    FName   tamagemonoid;   //?? tamagemono??
};

class UGDSItemPowerUpData : public UGameDataAsset
{
    public:
        TMap<FName, FGDItemPowerUpData> m_dataMap;
        unsigned    char                unknown[0x50];
};

#endif // !UGDSITEMPOWERUPDATA_HPP