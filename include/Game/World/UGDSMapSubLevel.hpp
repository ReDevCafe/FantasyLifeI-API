#ifndef UGDSMAPSUBLEVEL_HPP
    #define UGDSMAPSUBLEVEL_HPP

    #include "Engine/DataTable.hpp"
    #include "Engine/UGameDataAsset.hpp"
    #include "Map.hpp"
    #include "Game/FGDStCommon.hpp"

struct FGDMapSubLevel : FTableRowBase
{
    public:
    FName                           SubLevelId;
    EMapSublevelType                SubLevelType;
    unsigned char                   unknown1[0x3];
    FName                           mapSubId;
    FGDStCommon_SubLevelLoadInfo    SubLevelInfo; //// WHY?
    unsigned char                   unknown2[0x4];
    TArray<FGDStCommon_CondCmd>     ValidCondition;
};

class UGDSMapSubLevel : public UGameDataAsset
{ 
    public:
	TMap<FName, FGDMapSubLevel>  m_dataMap;
};


#endif // !UGDSMAPSUBLEVEL_HPP  