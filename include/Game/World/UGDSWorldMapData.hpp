#ifndef UGDSWORLDMAPDATA_HPP
    #define UGDSWORLDMAPDATA_HPP

    #include "Engine/UObject.hpp"
    #include "Engine/FName.hpp"
    #include "Game/FGDStCommon.hpp"

struct FGDWorldMapData : FTableRowBase
{
    public:
    FName                       ID;
    FName                       NameId;
    FName                       MapId;
    FName                       AreaId;

    bool                        isUseInitPos;
    unsigned char               unknown1[0x7];
    
    FVector2D                   initPos;
    bool                        offsetBg;
    char                        MapRegion;

    unsigned char               unknown2[0x6];
    FVector2D                   MapButtonPosition;
    int8_t                      MapFocusAreaIndex;
    char                        hideIconType;

    unsigned char               unknown3[0x6];
    FVector2D                   hideIconPos;
    TArray<FGDStCommon_CondCmd> DisplayableCondition;
    TArray<FGDStCommon_CondCmd> SelectableCondition;
    TArray<FGDStCommon_CondCmd> ExposureCondition;
    TArray<FGDStCommon_CondCmd> DetailDisplayCondition;
};

class UGDSWorldMapData : public UGameDataAsset
{
    public:
    TMap<FName, FGDWorldMapData>    m_dataMap;
};

#endif // !UGDSWORLDMAPDATA_HPP