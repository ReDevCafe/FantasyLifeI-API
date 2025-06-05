#ifndef UGDSMAPCRAFTAREA_HPP
    #define UGDSMAPCRAFTAREA_HPP

    #include "Engine/DataTable.hpp"
    #include "Engine/FName.hpp"
    #include "Engine/UGameDataAsset.hpp"

struct FGDMapCraftArea_DefaultCraftAreaData
{ 
	FName                                              areaNameID;                                                 // 0x0000   (0x0008)  
	FName                                              areaAssetID;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/DP1Project.GDMapCraftArea
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FGDMapCraftArea : FTableRowBase
{ 
	FName                                              mapId;                                                      // 0x0008   (0x0008)  
	TArray<FGDMapCraftArea_DefaultCraftAreaData>       AreaDataList;                                               // 0x0010   (0x0010)  
};

/// Class /Script/DP1Project.GDSMapCraftArea
/// Size: 0x00A0 (160 bytes) (0x000050 - 0x0000A0) align 8 MaxSize: 0x00A0
class UGDSMapCraftArea : public UGameDataAsset
{ 
public:
	TMap<FName, FGDMapCraftArea>                       m_dataMap;                                                  // 0x0050   (0x0050)  
};

#endif // !UGDSMAPCRAFTAREA_HPP
