
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LevelSequence

#pragma pack(push, 0x1)

/// Enum /Script/DatasmithContent.EDatasmithAreaLightActorShape
/// Size: 0x01 (1 bytes)
enum class EDatasmithAreaLightActorShape : uint8_t
{
	EDatasmithAreaLightActorShape__Rectangle                                         = 0,
	EDatasmithAreaLightActorShape__Disc                                              = 1,
	EDatasmithAreaLightActorShape__Sphere                                            = 2,
	EDatasmithAreaLightActorShape__Cylinder                                          = 3,
	EDatasmithAreaLightActorShape__None                                              = 4
};

/// Enum /Script/DatasmithContent.EDatasmithAreaLightActorType
/// Size: 0x01 (1 bytes)
enum class EDatasmithAreaLightActorType : uint8_t
{
	EDatasmithAreaLightActorType__Point                                              = 0,
	EDatasmithAreaLightActorType__Spot                                               = 1,
	EDatasmithAreaLightActorType__IES_DEPRECATED                                     = 2,
	EDatasmithAreaLightActorType__Rect                                               = 3
};

/// Enum /Script/DatasmithContent.EDatasmithImportSearchPackagePolicy
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportSearchPackagePolicy : uint8_t
{
	EDatasmithImportSearchPackagePolicy__Current                                     = 0,
	EDatasmithImportSearchPackagePolicy__All                                         = 1
};

/// Enum /Script/DatasmithContent.EDatasmithImportAssetConflictPolicy
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportAssetConflictPolicy : uint8_t
{
	EDatasmithImportAssetConflictPolicy__Replace                                     = 0,
	EDatasmithImportAssetConflictPolicy__Update                                      = 1,
	EDatasmithImportAssetConflictPolicy__Use                                         = 2,
	EDatasmithImportAssetConflictPolicy__Ignore                                      = 3
};

/// Enum /Script/DatasmithContent.EDatasmithImportActorPolicy
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportActorPolicy : uint8_t
{
	EDatasmithImportActorPolicy__Update                                              = 0,
	EDatasmithImportActorPolicy__Full                                                = 1,
	EDatasmithImportActorPolicy__Ignore                                              = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportMaterialQuality
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportMaterialQuality : uint8_t
{
	EDatasmithImportMaterialQuality__UseNoFresnelCurves                              = 0,
	EDatasmithImportMaterialQuality__UseSimplifierFresnelCurves                      = 1,
	EDatasmithImportMaterialQuality__UseRealFresnelCurves                            = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportLightmapMin
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportLightmapMin : uint8_t
{
	EDatasmithImportLightmapMin__LIGHTMAP                                            = 0,
	EDatasmithImportLightmapMin__LIGHTMAP2                                           = 1,
	EDatasmithImportLightmapMin__LIGHTMAP3                                           = 2,
	EDatasmithImportLightmapMin__LIGHTMAP4                                           = 3,
	EDatasmithImportLightmapMin__LIGHTMAP5                                           = 4,
	EDatasmithImportLightmapMin__LIGHTMAP6                                           = 5
};

/// Enum /Script/DatasmithContent.EDatasmithImportLightmapMax
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportLightmapMax : uint8_t
{
	EDatasmithImportLightmapMax__LIGHTMAP                                            = 0,
	EDatasmithImportLightmapMax__LIGHTMAP2                                           = 1,
	EDatasmithImportLightmapMax__LIGHTMAP3                                           = 2,
	EDatasmithImportLightmapMax__LIGHTMAP4                                           = 3,
	EDatasmithImportLightmapMax__LIGHTMAP5                                           = 4,
	EDatasmithImportLightmapMax__LIGHTMAP6                                           = 5,
	EDatasmithImportLightmapMax__LIGHTMAP7                                           = 6
};

/// Enum /Script/DatasmithContent.EDatasmithImportScene
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportScene : uint8_t
{
	EDatasmithImportScene__NewLevel                                                  = 0,
	EDatasmithImportScene__CurrentLevel                                              = 1,
	EDatasmithImportScene__AssetsOnly                                                = 2
};

/// Enum /Script/DatasmithContent.EDatasmithCADStitchingTechnique
/// Size: 0x01 (1 bytes)
enum class EDatasmithCADStitchingTechnique : uint8_t
{
	EDatasmithCADStitchingTechnique__StitchingNone                                   = 0,
	EDatasmithCADStitchingTechnique__StitchingHeal                                   = 1,
	EDatasmithCADStitchingTechnique__StitchingSew                                    = 2
};

/// Enum /Script/DatasmithContent.EDatasmithCADRetessellationRule
/// Size: 0x01 (1 bytes)
enum class EDatasmithCADRetessellationRule : uint8_t
{
	EDatasmithCADRetessellationRule__All                                             = 0,
	EDatasmithCADRetessellationRule__SkipDeletedSurfaces                             = 1
};

/// Class /Script/DatasmithContent.DatasmithObjectTemplate
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UDatasmithObjectTemplate : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithActorTemplate
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x0000D0) align 8 MaxSize: 0x00D0
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{ 
public:
	SDK_UNDEFINED(80,661) /* TSet<FName> */            __um(Layers);                                               // 0x0030   (0x0050)  
	SDK_UNDEFINED(80,662) /* TSet<FName> */            __um(Tags);                                                 // 0x0080   (0x0050)  
};

/// Class /Script/DatasmithContent.DatasmithAdditionalData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDatasmithAdditionalData : public UObject
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithAreaLightActor
/// Size: 0x0308 (776 bytes) (0x000290 - 0x000308) align 8 MaxSize: 0x0308
class ADatasmithAreaLightActor : public AActor
{ 
public:
	TEnumAsByte<EComponentMobility>                    Mobility;                                                   // 0x0290   (0x0001)  
	EDatasmithAreaLightActorType                       LightType;                                                  // 0x0291   (0x0001)  
	EDatasmithAreaLightActorShape                      LightShape;                                                 // 0x0292   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0293   (0x0005)  MISSED
	FVector2D                                          Dimensions;                                                 // 0x0298   (0x0010)  
	float                                              Intensity;                                                  // 0x02A8   (0x0004)  
	ELightUnits                                        IntensityUnits;                                             // 0x02AC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02AD   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x02B0   (0x0010)  
	float                                              Temperature;                                                // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x02C4   (0x0004)  MISSED
	class UTextureLightProfile*                        IESTexture;                                                 // 0x02C8   (0x0008)  
	bool                                               bUseIESBrightness;                                          // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x02D1   (0x0003)  MISSED
	float                                              IESBrightnessScale;                                         // 0x02D4   (0x0004)  
	FRotator                                           Rotation;                                                   // 0x02D8   (0x0018)  
	float                                              SourceRadius;                                               // 0x02F0   (0x0004)  
	float                                              SourceLength;                                               // 0x02F4   (0x0004)  
	float                                              AttenuationRadius;                                          // 0x02F8   (0x0004)  
	float                                              SpotlightInnerAngle;                                        // 0x02FC   (0x0004)  
	float                                              SpotlightOuterAngle;                                        // 0x0300   (0x0004)  
	unsigned char                                      UnknownData04_7[0x4];                                       // 0x0304   (0x0004)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithAreaLightActorTemplate
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{ 
public:
	EDatasmithAreaLightActorType                       LightType;                                                  // 0x0030   (0x0001)  
	EDatasmithAreaLightActorShape                      LightShape;                                                 // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0032   (0x0006)  MISSED
	FVector2D                                          Dimensions;                                                 // 0x0038   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0048   (0x0010)  
	float                                              Intensity;                                                  // 0x0058   (0x0004)  
	ELightUnits                                        IntensityUnits;                                             // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	float                                              Temperature;                                                // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	TWeakObjectPtr<class UTextureLightProfile*>        IESTexture;                                                 // 0x0068   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0070   (0x0020)  MISSED
	bool                                               bUseIESBrightness;                                          // 0x0090   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0091   (0x0003)  MISSED
	float                                              IESBrightnessScale;                                         // 0x0094   (0x0004)  
	FRotator                                           Rotation;                                                   // 0x0098   (0x0018)  
	float                                              SourceRadius;                                               // 0x00B0   (0x0004)  
	float                                              SourceLength;                                               // 0x00B4   (0x0004)  
	float                                              AttenuationRadius;                                          // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData05_7[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithAssetImportData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDatasmithAssetImportData : public UAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshImportData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshCADImportData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithSceneImportData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDatasmithSceneImportData : public UAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithTranslatedSceneImportData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithCADImportSceneData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithMDLSceneImportData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithGLTFSceneImportData
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{ 
public:
	FString                                            Generator;                                                  // 0x0028   (0x0010)  
	float                                              Version;                                                    // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FString                                            author;                                                     // 0x0040   (0x0010)  
	FString                                            License;                                                    // 0x0050   (0x0010)  
	FString                                            Source;                                                     // 0x0060   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshGLTFImportData
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{ 
public:
	FString                                            SourceMeshName;                                             // 0x0028   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithFBXSceneImportData
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{ 
public:
	bool                                               bGenerateLightmapUVs;                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FString                                            TexturesDir;                                                // 0x0030   (0x0010)  
	char                                               IntermediateSerialization;                                  // 0x0040   (0x0001)  
	bool                                               bColorizeMaterials;                                         // 0x0041   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0042   (0x0006)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithDeltaGenAssetImportData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithDeltaGenSceneImportData
/// Size: 0x0090 (144 bytes) (0x000048 - 0x000090) align 8 MaxSize: 0x0090
class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
{ 
public:
	bool                                               bMergeNodes;                                                // 0x0048   (0x0001)  
	bool                                               bOptimizeDuplicatedNodes;                                   // 0x0049   (0x0001)  
	bool                                               bRemoveInvisibleNodes;                                      // 0x004A   (0x0001)  
	bool                                               bSimplifyNodeHierarchy;                                     // 0x004B   (0x0001)  
	bool                                               bImportVar;                                                 // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	FString                                            VarPath;                                                    // 0x0050   (0x0010)  
	bool                                               bImportPos;                                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	FString                                            PosPath;                                                    // 0x0068   (0x0010)  
	bool                                               bImportTml;                                                 // 0x0078   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	FString                                            TmlPath;                                                    // 0x0080   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithVREDAssetImportData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithVREDSceneImportData
/// Size: 0x00A8 (168 bytes) (0x000048 - 0x0000A8) align 8 MaxSize: 0x00A8
class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
{ 
public:
	bool                                               bMergeNodes;                                                // 0x0048   (0x0001)  
	bool                                               bOptimizeDuplicatedNodes;                                   // 0x0049   (0x0001)  
	bool                                               bImportMats;                                                // 0x004A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x004B   (0x0005)  MISSED
	FString                                            MatsPath;                                                   // 0x0050   (0x0010)  
	bool                                               bImportVar;                                                 // 0x0060   (0x0001)  
	bool                                               bCleanVar;                                                  // 0x0061   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0062   (0x0006)  MISSED
	FString                                            VarPath;                                                    // 0x0068   (0x0010)  
	bool                                               bImportLightInfo;                                           // 0x0078   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	FString                                            LightInfoPath;                                              // 0x0080   (0x0010)  
	bool                                               bImportClipInfo;                                            // 0x0090   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	FString                                            ClipInfoPath;                                               // 0x0098   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithAssetUserData
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UDatasmithAssetUserData : public UAssetUserData
{ 
public:
	TMap<FName, FString>                               MetaData;                                                   // 0x0028   (0x0050)  
};

/// Struct /Script/DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FDatasmithCameraLookatTrackingSettingsTemplate
{ 
	bool                                               bEnableLookAtTracking : 1;                                  // 0x0000:0 (0x0001)  
	bool                                               bAllowRoll : 1;                                             // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TWeakObjectPtr<class AActor*>                      ActorToTrack;                                               // 0x0008   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0010   (0x0020)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithCineCameraActorTemplate
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{ 
public:
	FDatasmithCameraLookatTrackingSettingsTemplate     LookatTrackingSettings;                                     // 0x0030   (0x0030)  
};

/// Struct /Script/DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FDatasmithCameraFilmbackSettingsTemplate
{ 
	float                                              SensorWidth;                                                // 0x0000   (0x0004)  
	float                                              SensorHeight;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithCameraLensSettingsTemplate
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FDatasmithCameraLensSettingsTemplate
{ 
	float                                              MaxFStop;                                                   // 0x0000   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithCameraFocusSettingsTemplate
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FDatasmithCameraFocusSettingsTemplate
{ 
	ECameraFocusMethod                                 FocusMethod;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ManualFocusDistance;                                        // 0x0004   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithPostProcessSettingsTemplate
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FDatasmithPostProcessSettingsTemplate
{ 
	bool                                               bOverride_WhiteTemp : 1;                                    // 0x0000:0 (0x0001)  
	bool                                               bOverride_ColorSaturation : 1;                              // 0x0000:1 (0x0001)  
	bool                                               bOverride_VignetteIntensity : 1;                            // 0x0000:2 (0x0001)  
	bool                                               bOverride_AutoExposureMethod : 1;                           // 0x0000:3 (0x0001)  
	bool                                               bOverride_CameraISO : 1;                                    // 0x0000:4 (0x0001)  
	bool                                               bOverride_CameraShutterSpeed : 1;                           // 0x0000:5 (0x0001)  
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0001   (0x0003)  MISSED
	bool                                               bOverride_DepthOfFieldFstop : 1;                            // 0x0004:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              WhiteTemp;                                                  // 0x0008   (0x0004)  
	float                                              VignetteIntensity;                                          // 0x000C   (0x0004)  
	FVector4                                           ColorSaturation;                                            // 0x0010   (0x0020)  
	TEnumAsByte<EAutoExposureMethod>                   AutoExposureMethod;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              CameraISO;                                                  // 0x0034   (0x0004)  
	float                                              CameraShutterSpeed;                                         // 0x0038   (0x0004)  
	float                                              DepthOfFieldFstop;                                          // 0x003C   (0x0004)  
};

/// Class /Script/DatasmithContent.DatasmithCineCameraComponentTemplate
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 16 MaxSize: 0x0090
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	FDatasmithCameraFilmbackSettingsTemplate           FilmbackSettings;                                           // 0x0030   (0x0008)  
	FDatasmithCameraLensSettingsTemplate               LensSettings;                                               // 0x0038   (0x0004)  
	FDatasmithCameraFocusSettingsTemplate              FocusSettings;                                              // 0x003C   (0x0008)  
	float                                              currentFocalLength;                                         // 0x0044   (0x0004)  
	float                                              currentAperture;                                            // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FDatasmithPostProcessSettingsTemplate              PostProcessSettings;                                        // 0x0050   (0x0040)  
};

/// Class /Script/DatasmithContent.DatasmithContentBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValuesForKey
	// TArray<FString> GetDatasmithUserDataValuesForKey(class UObject* Object, FName Key, bool bPartialMatchKey);               // [0x879fc50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
	// FString GetDatasmithUserDataValueForKey(class UObject* Object, FName Key, bool bPartialMatchKey);                        // [0x879f780] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
	// void GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, FString StringToMatch, TArray<FName>& OutKeys, TArray<FString>& OutValues); // [0x879f2b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
	// class UDatasmithAssetUserData* GetDatasmithUserData(class UObject* Object);                                              // [0x879f220] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DatasmithContent.DatasmithCustomActionBase
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UDatasmithCustomActionBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithDecalComponentTemplate
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	int32_t                                            sortOrder;                                                  // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FVector                                            DecalSize;                                                  // 0x0038   (0x0018)  
	class UMaterialInterface*                          Material;                                                   // 0x0050   (0x0008)  
};

/// Class /Script/DatasmithContent.DatasmithImportedSequencesActor
/// Size: 0x02A0 (672 bytes) (0x000290 - 0x0002A0) align 8 MaxSize: 0x02A0
class ADatasmithImportedSequencesActor : public AActor
{ 
public:
	TArray<class ULevelSequence*>                      ImportedSequences;                                          // 0x0290   (0x0010)  


	/// Functions
	// Function /Script/DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
	// void PlayLevelSequence(class ULevelSequence* SequenceToPlay);                                                            // [0x5031e90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DatasmithContent.DatasmithOptionsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDatasmithOptionsBase : public UObject
{ 
public:
};

/// Struct /Script/DatasmithContent.DatasmithTessellationOptions
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FDatasmithTessellationOptions
{ 
	float                                              ChordTolerance;                                             // 0x0000   (0x0004)  
	float                                              MaxEdgeLength;                                              // 0x0004   (0x0004)  
	float                                              NormalTolerance;                                            // 0x0008   (0x0004)  
	EDatasmithCADStitchingTechnique                    StitchingTechnique;                                         // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithCommonTessellationOptions
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
{ 
public:
	FDatasmithTessellationOptions                      OPTIONS;                                                    // 0x0028   (0x0010)  
};

/// Struct /Script/DatasmithContent.DatasmithAssetImportOptions
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FDatasmithAssetImportOptions
{ 
	FName                                              PackagePath;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/DatasmithContent.DatasmithStaticMeshImportOptions
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 1 MaxSize: 0x0004
struct FDatasmithStaticMeshImportOptions
{ 
	EDatasmithImportLightmapMin                        MinLightmapResolution;                                      // 0x0000   (0x0001)  
	EDatasmithImportLightmapMax                        MaxLightmapResolution;                                      // 0x0001   (0x0001)  
	bool                                               bGenerateLightmapUVs;                                       // 0x0002   (0x0001)  
	bool                                               bRemoveDegenerates;                                         // 0x0003   (0x0001)  
};

/// Struct /Script/DatasmithContent.DatasmithImportBaseOptions
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FDatasmithImportBaseOptions
{ 
	EDatasmithImportScene                              SceneHandling;                                              // 0x0000   (0x0001)  
	bool                                               bIncludeGeometry;                                           // 0x0001   (0x0001)  
	bool                                               bIncludeMaterial;                                           // 0x0002   (0x0001)  
	bool                                               bIncludeLight;                                              // 0x0003   (0x0001)  
	bool                                               bIncludeCamera;                                             // 0x0004   (0x0001)  
	bool                                               bIncludeAnimation;                                          // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	FDatasmithAssetImportOptions                       AssetOptions;                                               // 0x0008   (0x0008)  
	FDatasmithStaticMeshImportOptions                  StaticMeshOptions;                                          // 0x0010   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithReimportOptions
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FDatasmithReimportOptions
{ 
	bool                                               bUpdateActors;                                              // 0x0000   (0x0001)  
	bool                                               bRespawnDeletedActors;                                      // 0x0001   (0x0001)  
};

/// Class /Script/DatasmithContent.DatasmithImportOptions
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UDatasmithImportOptions : public UDatasmithOptionsBase
{ 
public:
	EDatasmithImportSearchPackagePolicy                SearchPackagePolicy;                                        // 0x0028   (0x0001)  
	EDatasmithImportAssetConflictPolicy                MaterialConflictPolicy;                                     // 0x0029   (0x0001)  
	EDatasmithImportAssetConflictPolicy                TextureConflictPolicy;                                      // 0x002A   (0x0001)  
	EDatasmithImportActorPolicy                        StaticMeshActorImportPolicy;                                // 0x002B   (0x0001)  
	EDatasmithImportActorPolicy                        LightImportPolicy;                                          // 0x002C   (0x0001)  
	EDatasmithImportActorPolicy                        CameraImportPolicy;                                         // 0x002D   (0x0001)  
	EDatasmithImportActorPolicy                        OtherActorImportPolicy;                                     // 0x002E   (0x0001)  
	EDatasmithImportMaterialQuality                    MaterialQuality;                                            // 0x002F   (0x0001)  
	FDatasmithImportBaseOptions                        BaseOptions;                                                // 0x0030   (0x0014)  
	FDatasmithReimportOptions                          ReimportOptions;                                            // 0x0044   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0046   (0x0002)  MISSED
	FString                                            Filename;                                                   // 0x0048   (0x0010)  
	FString                                            FilePath;                                                   // 0x0058   (0x0010)  
	FString                                            SourceUri;                                                  // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0078   (0x0018)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithLandscapeTemplate
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{ 
public:
	class UMaterialInterface*                          LandscapeMaterial;                                          // 0x0030   (0x0008)  
	int32_t                                            StaticLightingLOD;                                          // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithLightComponentTemplate
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	bool                                               bVisible : 1;                                               // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0031   (0x0003)  MISSED
	bool                                               CastShadows : 1;                                            // 0x0034:0 (0x0001)  
	bool                                               bUseTemperature : 1;                                        // 0x0034:1 (0x0001)  
	bool                                               bUseIESBrightness : 1;                                      // 0x0034:2 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              Intensity;                                                  // 0x0038   (0x0004)  
	float                                              Temperature;                                                // 0x003C   (0x0004)  
	float                                              IESBrightnessScale;                                         // 0x0040   (0x0004)  
	FLinearColor                                       LightColor;                                                 // 0x0044   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	class UMaterialInterface*                          LightFunctionMaterial;                                      // 0x0058   (0x0008)  
	class UTextureLightProfile*                        IESTexture;                                                 // 0x0060   (0x0008)  
};

/// Struct /Script/DatasmithContent.DatasmithStaticParameterSetTemplate
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FDatasmithStaticParameterSetTemplate
{ 
	TMap<FName, bool>                                  StaticSwitchParameters;                                     // 0x0000   (0x0050)  
};

/// Class /Script/DatasmithContent.DatasmithMaterialInstanceTemplate
/// Size: 0x0198 (408 bytes) (0x000030 - 0x000198) align 8 MaxSize: 0x0198
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{ 
public:
	TWeakObjectPtr<class UMaterialInterface*>          ParentMaterial;                                             // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0038   (0x0020)  MISSED
	TMap<FName, float>                                 ScalarParameterValues;                                      // 0x0058   (0x0050)  
	TMap<FName, FLinearColor>                          VectorParameterValues;                                      // 0x00A8   (0x0050)  
	SDK_UNDEFINED(80,663) /* TMap<FName, TWeakObjectPtr<UTexture*>> */ __um(TextureParameterValues);               // 0x00F8   (0x0050)  
	FDatasmithStaticParameterSetTemplate               StaticParameters;                                           // 0x0148   (0x0050)  
};

/// Class /Script/DatasmithContent.DatasmithPointLightComponentTemplate
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	ELightUnits                                        IntensityUnits;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              SourceRadius;                                               // 0x0034   (0x0004)  
	float                                              SourceLength;                                               // 0x0038   (0x0004)  
	float                                              AttenuationRadius;                                          // 0x003C   (0x0004)  
};

/// Class /Script/DatasmithContent.DatasmithPostProcessVolumeTemplate
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 16 MaxSize: 0x0080
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{ 
public:
	FDatasmithPostProcessSettingsTemplate              Settings;                                                   // 0x0030   (0x0040)  
	bool                                               bEnabled : 1;                                               // 0x0070:0 (0x0001)  
	bool                                               bUnbound : 1;                                               // 0x0070:1 (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0071   (0x000F)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithScene
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UDatasmithScene : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithSceneActor
/// Size: 0x02E8 (744 bytes) (0x000290 - 0x0002E8) align 8 MaxSize: 0x02E8
class ADatasmithSceneActor : public AActor
{ 
public:
	class UDatasmithScene*                             Scene;                                                      // 0x0290   (0x0008)  
	SDK_UNDEFINED(80,664) /* TMap<FName, TWeakObjectPtr<AActor*>> */ __um(RelatedActors);                          // 0x0298   (0x0050)  
};

/// Class /Script/DatasmithContent.DatasmithSceneComponentTemplate
/// Size: 0x0120 (288 bytes) (0x000030 - 0x000120) align 16 MaxSize: 0x0120
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	FTransform                                         RelativeTransform;                                          // 0x0030   (0x0060)  
	TEnumAsByte<EComponentMobility>                    Mobility;                                                   // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	TWeakObjectPtr<class USceneComponent*>             AttachParent;                                               // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x00A0   (0x0020)  MISSED
	bool                                               bVisible;                                                   // 0x00C0   (0x0001)  
	bool                                               bCastShadow;                                                // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x00C2   (0x0006)  MISSED
	SDK_UNDEFINED(80,665) /* TSet<FName> */            __um(Tags);                                                 // 0x00C8   (0x0050)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0118   (0x0008)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithSkyLightComponentTemplate
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	TEnumAsByte<ESkyLightSourceType>                   SourceType;                                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            CubemapResolution;                                          // 0x0034   (0x0004)  
	class UTextureCube*                                Cubemap;                                                    // 0x0038   (0x0008)  
};

/// Class /Script/DatasmithContent.DatasmithSpotLightComponentTemplate
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	float                                              InnerConeAngle;                                             // 0x0030   (0x0004)  
	float                                              OuterConeAngle;                                             // 0x0034   (0x0004)  
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshComponentTemplate
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0030   (0x0008)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0038   (0x0010)  
};

/// Struct /Script/DatasmithContent.DatasmithMeshSectionInfoTemplate
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FDatasmithMeshSectionInfoTemplate
{ 
	int32_t                                            MaterialIndex;                                              // 0x0000   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithMeshSectionInfoMapTemplate
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FDatasmithMeshSectionInfoMapTemplate
{ 
	TMap<uint32_t, FDatasmithMeshSectionInfoTemplate>  Map;                                                        // 0x0000   (0x0050)  
};

/// Struct /Script/DatasmithContent.DatasmithMeshBuildSettingsTemplate
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FDatasmithMeshBuildSettingsTemplate
{ 
	bool                                               bUseMikkTSpace : 1;                                         // 0x0000:0 (0x0001)  
	bool                                               bRecomputeNormals : 1;                                      // 0x0000:1 (0x0001)  
	bool                                               bRecomputeTangents : 1;                                     // 0x0000:2 (0x0001)  
	bool                                               bRemoveDegenerates : 1;                                     // 0x0000:3 (0x0001)  
	bool                                               bUseHighPrecisionTangentBasis : 1;                          // 0x0000:4 (0x0001)  
	bool                                               bUseFullPrecisionUVs : 1;                                   // 0x0000:5 (0x0001)  
	bool                                               bGenerateLightmapUVs : 1;                                   // 0x0000:6 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            MinLightmapResolution;                                      // 0x0004   (0x0004)  
	int32_t                                            SrcLightmapIndex;                                           // 0x0008   (0x0004)  
	int32_t                                            DstLightmapIndex;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithStaticMaterialTemplate
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FDatasmithStaticMaterialTemplate
{ 
	FName                                              MaterialSlotName;                                           // 0x0000   (0x0008)  
	class UMaterialInterface*                          MaterialInterface;                                          // 0x0008   (0x0008)  
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshTemplate
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{ 
public:
	FDatasmithMeshSectionInfoMapTemplate               SectionInfoMap;                                             // 0x0030   (0x0050)  
	int32_t                                            LightMapCoordinateIndex;                                    // 0x0080   (0x0004)  
	int32_t                                            LightMapResolution;                                         // 0x0084   (0x0004)  
	TArray<FDatasmithMeshBuildSettingsTemplate>        BuildSettings;                                              // 0x0088   (0x0010)  
	TArray<FDatasmithStaticMaterialTemplate>           StaticMaterials;                                            // 0x0098   (0x0010)  
};

/// Struct /Script/DatasmithContent.DatasmithImportInfo
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FDatasmithImportInfo
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/DatasmithContent.DatasmithRetessellationOptions
/// Size: 0x0014 (20 bytes) (0x000010 - 0x000014) align 4 MaxSize: 0x0014
struct FDatasmithRetessellationOptions : FDatasmithTessellationOptions
{ 
	EDatasmithCADRetessellationRule                    RetessellationRule;                                         // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

#pragma pack(pop)


