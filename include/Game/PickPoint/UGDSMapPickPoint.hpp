#ifndef UGDSMAPPICKPOINT_HPP
    #define UGDSMAPPICKPOINT_HPP

    #include "Engine/DataTable.hpp"
    #include "Engine/UGameDataAsset.hpp"
    #include "Game/FGDStCommon.hpp"
    #include "Game/PickPoint/PickPoint.hpp"

struct FGDMapPickPoint_ParamInfo
{
    public:
    FName                       AreaRankLevel;
    uint16_t                    Level;
    unsigned char               unknown[0x2];
    FGDStCommon_PickStatusParam baseParamCorrect;
};

struct FGDStCommon_RpgTargetInfo
{
    public:
    FVector4        targetPos;
    FVector4        offsetPos;
    bool            isOverride;
    bool            isOverrideShape;
    char            shapeType;   // Probably enum
    unsigned char   unknown1[0x1];
    float           Radius;
    FVector         BoxExtent;
};

struct FGDMapPickPoint : FTableRowBase
{
    public:
    FName                           ID;
    uint16_t                        dataIdx;
    EPickPointType                  Type;           // EPickPointType?
    unsigned char                   unknown1[0x1];  // PROBABLY ENUM

    FName                           AreaID;
    char                            AreaNo;         // Area Number?
    char                            AreaRank;       
    unsigned char                   unknown2[0x2];

    TArray<FGDStCommon_CondCmd>     cond;
    FGDMapPickPoint_ParamInfo       ParamInfo;
    FVector4                        actorPos;
    FGDStCommon_RpgTargetInfo       rpgTargetInfo;
    FName                           GroupId;

    bool                            requestProhibited;
    bool                            isTimerRepop;

    unsigned char                   unknown3[0x2];
    float                           repopTime;
    float                           AOEScale;
    char                            respawnCount;

    unsigned char                   unknown4[0xB];
};

class UGDSMapPickPoint : public UGameDataAsset
{
    public:
    TMap<FName, FGDMapPickPoint>    m_dataMap;
    unsigned char                   unknown[0x70];
};

#endif // !UGDSMAPPICKPOINT_HPP