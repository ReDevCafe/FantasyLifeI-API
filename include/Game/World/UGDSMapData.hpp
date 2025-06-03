#ifndef UGDSMAPDATA_HPP
    #define UGDSMAPDATA_HPP

    #include "Game/FGDStCommon.hpp"
    #include "Engine/DataTable.hpp"
    #include "Engine/UGameDataAsset.hpp"
    #include "Engine/UObject.hpp"
    #include "Map.hpp"

struct FGDMapData_MapViewData
{ 
	FString                                            mapName;                                                    // 0x0000   (0x0010)  
	FName                                              playerStartTag;                                             // 0x0010   (0x0008)  
};

struct FGDMapData_AttributeInfo
{ 
	bool                                               indoor;                                                     // 0x0000   (0x0001)  
	bool                                               isDisableWeaponDraw;                                        // 0x0001   (0x0001)  
	bool                                               dungeon;                                                    // 0x0002   (0x0001)  
	bool                                               isHuge;                                                     // 0x0003   (0x0001)  
	bool                                               partyNpcOff;                                                // 0x0004   (0x0001)  
	bool                                               weatherEffectOff;                                           // 0x0005   (0x0001)  
	bool                                               isDisableVehicle;                                           // 0x0006   (0x0001)  
};

struct FGDMapData_CameraInfo
{ 
	FName                                              cameraParamName;                                            // 0x0000   (0x0008)  
	bool                                               isDisableAltitudeRotate;                                    // 0x0008   (0x0001)  
	bool                                               isDisableAzimuthRotate;                                     // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000A   (0x0002)  MISSED
};

struct FGDMapData_PlayerIconInfo
{ 
	FName                                              dispMapId;                                                  // 0x0000   (0x0008)  
	FVector2D                                          playerIconPos;                                              // 0x0008   (0x0010)  
};

struct FGDMapData_MapMenuInfo
{ 
	bool                                               overwriteEnabled;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              overwriteMapId;                                             // 0x0004   (0x0008)  
	char                                               overwriteTextureAreaNo;                                     // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	TArray<FGDMapData_PlayerIconInfo>                  overwritePlayerIcon;                                        // 0x0010   (0x0010)  
	float                                              mapAngleOffset;                                             // 0x0020   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

struct FGDMapData_SubMapData
{ 
	FName                                              subMapId;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0008   (0x0004)  MISSED
	EMapType                                           Type;                                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	FName                                              AreaID;                                                     // 0x0010   (0x0008)  
	FGDMapData_AttributeInfo                           attributeInfo;                                              // 0x0018   (0x0007)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x001F   (0x0001)  MISSED
	float                                              shadowAmountInEvent;                                        // 0x0020   (0x0004)  
	FGDMapData_CameraInfo                              cameraInfo;                                                 // 0x0024   (0x000C)  
	bool                                               timePeriod;                                                 // 0x0030   (0x0001)  
	bool                                               Seamless;                                                   // 0x0031   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x0032   (0x0006)  MISSED
	FGDMapData_MapMenuInfo                             mapMenuInfo;                                                // 0x0038   (0x0028)  
	float                                              fallThroughHeight;                                          // 0x0060   (0x0004)  
	unsigned char                                      UnknownData04_6[0xC];                                       // 0x0064   (0x000C)  MISSED
	FVector4                                           safeWarpPos;                                                // 0x0070   (0x0020)  
	unsigned char                                      UnknownData05_7[0x10];                                      // 0x0090   (0x0010)  MISSED
};

struct FGDMapData : FTableRowBase
{ 
	FName                                              mapId;                                                      // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0010   (0x0004)  MISSED
	FName                                              MapPath;                                                    // 0x0014   (0x0008)  
	char                                               MapFlagNumber;                                              // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FName                                              MapViewCategory;                                            // 0x0020   (0x0008)  
	TArray<FGDMapData_MapViewData>                     MapViewDataArray;                                           // 0x0028   (0x0010)  
	char                                               MapRegion;                                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	FName                                              MapSubject;                                                 // 0x003C   (0x0008)  
	FName                                              MapNameID;                                                  // 0x0044   (0x0008)  
	FName                                              miniMapCraftParam;                                          // 0x004C   (0x0008)  
	FName                                              WorldMapID;                                                 // 0x0054   (0x0008)  
	bool                                               IsMemorizeMap;                                              // 0x005C   (0x0001)  
	bool                                               timePeriod;                                                 // 0x005D   (0x0001)  
	bool                                               Seamless;                                                   // 0x005E   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1];                                       // 0x005F   (0x0001)  MISSED
	FName                                              BGIconId;                                                   // 0x0060   (0x0008)  
	FName                                              BGNightIconId;                                              // 0x0068   (0x0008)  
	TMap<FName, FGDMapData_SubMapData>                 subMapDataList;                                             // 0x0070   (0x0050)  
	unsigned char                                      UnknownData04_7[0xA0];                                      // 0x00C0   (0x00A0)  MISSED
};

class UGDSMapData : public UGameDataAsset
{ 
public:
	TMap<FName, FGDMapData>                            m_dataMap;                                                  // 0x0050   (0x0050)  
	unsigned char                                      UnknownData00_7[0xB0];                                      // 0x00A0   (0x00B0)  MISSED
};

#endif // !UGDSMAPDATA_HPP