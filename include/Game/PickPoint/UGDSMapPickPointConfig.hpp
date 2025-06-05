#ifndef UGDSMAPPICKPOINTCONFIG_HPP
    #define UGDSMAPPICKPOINTCONFIG_HPP

    #include "Engine/DataTable.hpp"
    #include "Engine/UGameDataAsset.hpp"

struct FGDMapPickPointConfig_DataSetting
{
    public:
    uint16_t    dataIdxOffset;
    uint16_t    dataNum;
};

struct FGDMapPickPointConfig : FTableRowBase
{
    public:
    FName                               mapId;
    FGDMapPickPointConfig_DataSetting   Tree;
    FGDMapPickPointConfig_DataSetting   Deposit;
    FGDMapPickPointConfig_DataSetting   Fish;
    FGDMapPickPointConfig_DataSetting   Vegetable;
};

class UGDSMapPickPointConfig : public UGameDataAsset
{
    public:
    TMap<FName, FGDMapPickPointConfig>  m_dataMap;
};

#endif // !UGDSMAPPICKPOINTCONFIG_HPP