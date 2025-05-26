#ifndef UGDSCHARALEVELCONFIG_HPP
    #define UGDSCHARALEVELCONFIG_HPP

    #include "Engine/UGameDataAsset.hpp"
    #include "Engine/DataTable.hpp"

class FGDCharaLevelConfig : public FTableRowBase
{
    public:
        uint16_t    lv;
        uint32_t    nextTotalLvExp;
        float       addedValue;
        uint32_t    skillPoint;
};

class UGDSCharaLevelConfig : public UGameDataAsset 
{
    public:
        TMap<uint16_t, FGDCharaLevelConfig> m_dataMap;
};

#endif // !UGDSCHARALEVELCONFIG_HPP
