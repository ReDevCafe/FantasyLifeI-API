
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GameplayTags

#pragma pack(push, 0x1)

/// Enum /Script/DataRegistry.EDataRegistryAcquireStatus
/// Size: 0x01 (1 bytes)
enum class EDataRegistryAcquireStatus : uint8_t
{
	EDataRegistryAcquireStatus__NotStarted                                           = 0,
	EDataRegistryAcquireStatus__WaitingForInitialAcquire                             = 1,
	EDataRegistryAcquireStatus__InitialAcquireFinished                               = 2,
	EDataRegistryAcquireStatus__WaitingForResources                                  = 3,
	EDataRegistryAcquireStatus__AcquireFinished                                      = 4,
	EDataRegistryAcquireStatus__AcquireError                                         = 5,
	EDataRegistryAcquireStatus__DoesNotExist                                         = 6
};

/// Enum /Script/DataRegistry.EMetaDataRegistrySourceAssetUsage
/// Size: 0x01 (1 bytes)
enum class EMetaDataRegistrySourceAssetUsage : uint8_t
{
	EMetaDataRegistrySourceAssetUsage__NoAssets                                      = 0,
	EMetaDataRegistrySourceAssetUsage__SearchAssets                                  = 1,
	EMetaDataRegistrySourceAssetUsage__RegisterAssets                                = 2,
	EMetaDataRegistrySourceAssetUsage__SearchAndRegisterAssets                       = 3
};

/// Enum /Script/DataRegistry.EDataRegistrySubsystemGetItemResult
/// Size: 0x01 (1 bytes)
enum class EDataRegistrySubsystemGetItemResult : uint8_t
{
	EDataRegistrySubsystemGetItemResult__Found                                       = 0,
	EDataRegistrySubsystemGetItemResult__NotFound                                    = 1
};

/// Enum /Script/DataRegistry.EDataRegistryAvailability
/// Size: 0x01 (1 bytes)
enum class EDataRegistryAvailability : uint8_t
{
	EDataRegistryAvailability__DoesNotExist                                          = 0,
	EDataRegistryAvailability__Unknown                                               = 1,
	EDataRegistryAvailability__Remote                                                = 2,
	EDataRegistryAvailability__OnDisk                                                = 3,
	EDataRegistryAvailability__LocalAsset                                            = 4,
	EDataRegistryAvailability__PreCached                                             = 5
};

/// Class /Script/DataRegistry.DataRegistrySettings
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UDataRegistrySettings : public UDeveloperSettings
{ 
public:
	TArray<FDirectoryPath>                             DirectoriesToScan;                                          // 0x0038   (0x0010)  
	bool                                               bInitializeAllLoadedRegistries;                             // 0x0048   (0x0001)  
	bool                                               bIgnoreMissingCookedAssetRegistryData;                      // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Struct /Script/DataRegistry.DataRegistryIdFormat
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FDataRegistryIdFormat
{ 
	FGameplayTag                                       BaseGameplayTag;                                            // 0x0000   (0x0008)  
};

/// Struct /Script/DataRegistry.DataRegistryCachePolicy
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FDataRegistryCachePolicy
{ 
	bool                                               bCacheIsAlwaysVolatile;                                     // 0x0000   (0x0001)  
	bool                                               bUseCurveTableCacheVersion;                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            MinNumberKept;                                              // 0x0004   (0x0004)  
	int32_t                                            MaxNumberKept;                                              // 0x0008   (0x0004)  
	float                                              ForceKeepSeconds;                                           // 0x000C   (0x0004)  
	float                                              ForceReleaseSeconds;                                        // 0x0010   (0x0004)  
};

/// Class /Script/DataRegistry.DataRegistry
/// Size: 0x00C0 (192 bytes) (0x000028 - 0x0000C0) align 8 MaxSize: 0x00C0
class UDataRegistry : public UObject
{ 
public:
	FName                                              RegistryType;                                               // 0x0028   (0x0008)  
	FDataRegistryIdFormat                              IdFormat;                                                   // 0x0030   (0x0008)  
	class UScriptStruct*                               ItemStruct;                                                 // 0x0038   (0x0008)  
	TArray<class UDataRegistrySource*>                 DataSources;                                                // 0x0040   (0x0010)  
	TArray<class UDataRegistrySource*>                 RuntimeSources;                                             // 0x0050   (0x0010)  
	float                                              TimerUpdateFrequency;                                       // 0x0060   (0x0004)  
	FDataRegistryCachePolicy                           DefaultCachePolicy;                                         // 0x0064   (0x0014)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0078   (0x0048)  MISSED
};

/// Class /Script/DataRegistry.DataRegistrySource
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UDataRegistrySource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UDataRegistrySource*                         ParentSource;                                               // 0x0030   (0x0008)  
};

/// Class /Script/DataRegistry.MetaDataRegistrySource
/// Size: 0x0108 (264 bytes) (0x000038 - 0x000108) align 8 MaxSize: 0x0108
class UMetaDataRegistrySource : public UDataRegistrySource
{ 
public:
	EMetaDataRegistrySourceAssetUsage                  AssetUsage;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FAssetManagerSearchRules                           SearchRules;                                                // 0x0040   (0x0050)  
	TMap<FName, class UDataRegistrySource*>            RuntimeChildren;                                            // 0x0090   (0x0050)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x00E0   (0x0028)  MISSED
};

/// Struct /Script/DataRegistry.DataRegistrySource_DataTableRules
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FDataRegistrySource_DataTableRules
{ 
	bool                                               bPrecacheTable;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              CachedTableKeepSeconds;                                     // 0x0004   (0x0004)  
};

/// Class /Script/DataRegistry.DataRegistrySource_CurveTable
/// Size: 0x00A0 (160 bytes) (0x000038 - 0x0000A0) align 8 MaxSize: 0x00A0
class UDataRegistrySource_CurveTable : public UDataRegistrySource
{ 
public:
	TWeakObjectPtr<class UCurveTable*>                 SourceTable;                                                // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0040   (0x0020)  MISSED
	FDataRegistrySource_DataTableRules                 TableRules;                                                 // 0x0060   (0x0008)  
	class UCurveTable*                                 CachedTable;                                                // 0x0068   (0x0008)  
	class UCurveTable*                                 PreloadTable;                                               // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0078   (0x0028)  MISSED
};

/// Class /Script/DataRegistry.MetaDataRegistrySource_CurveTable
/// Size: 0x0118 (280 bytes) (0x000108 - 0x000118) align 8 MaxSize: 0x0118
class UMetaDataRegistrySource_CurveTable : public UMetaDataRegistrySource
{ 
public:
	class UClass*                                      CreatedSource;                                              // 0x0108   (0x0008)  
	FDataRegistrySource_DataTableRules                 TableRules;                                                 // 0x0110   (0x0008)  
};

/// Class /Script/DataRegistry.DataRegistrySource_DataTable
/// Size: 0x00A0 (160 bytes) (0x000038 - 0x0000A0) align 8 MaxSize: 0x00A0
class UDataRegistrySource_DataTable : public UDataRegistrySource
{ 
public:
	TWeakObjectPtr<class UDataTable*>                  SourceTable;                                                // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0040   (0x0020)  MISSED
	FDataRegistrySource_DataTableRules                 TableRules;                                                 // 0x0060   (0x0008)  
	class UDataTable*                                  CachedTable;                                                // 0x0068   (0x0008)  
	class UDataTable*                                  PreloadTable;                                               // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0078   (0x0028)  MISSED
};

/// Class /Script/DataRegistry.MetaDataRegistrySource_DataTable
/// Size: 0x0118 (280 bytes) (0x000108 - 0x000118) align 8 MaxSize: 0x0118
class UMetaDataRegistrySource_DataTable : public UMetaDataRegistrySource
{ 
public:
	class UClass*                                      CreatedSource;                                              // 0x0108   (0x0008)  
	FDataRegistrySource_DataTableRules                 TableRules;                                                 // 0x0110   (0x0008)  
};

/// Class /Script/DataRegistry.DataRegistrySubsystem
/// Size: 0x00E0 (224 bytes) (0x000030 - 0x0000E0) align 8 MaxSize: 0x00E0
class UDataRegistrySubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0030   (0x00B0)  MISSED


	/// Functions
	// Function /Script/DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType
	// bool NotEqual_DataRegistryType(FDataRegistryType A, FDataRegistryType B);                                                // [0x53f4aa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId
	// bool NotEqual_DataRegistryId(FDataRegistryId A, FDataRegistryId B);                                                      // [0x5aa0dd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType
	// bool IsValidDataRegistryType(FDataRegistryType DataRegistryType);                                                        // [0x53f3720] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId
	// bool IsValidDataRegistryId(FDataRegistryId DataRegistryId);                                                              // [0x5a8c1e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP
	// bool GetCachedItemFromLookupBP(FDataRegistryId ItemId, FDataRegistryLookup& ResolvedLookup, FTableRowBase& OutItem);     // [0x64de100] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DataRegistry.DataRegistrySubsystem.GetCachedItemBP
	// bool GetCachedItemBP(FDataRegistryId ItemId, FTableRowBase& OutItem);                                                    // [0x64ddee0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DataRegistry.DataRegistrySubsystem.FindCachedItemBP
	// void FindCachedItemBP(FDataRegistryId ItemId, EDataRegistrySubsystemGetItemResult& OutResult, FTableRowBase& OutItem);   // [0x64ddc80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve
	// void EvaluateDataRegistryCurve(FDataRegistryId ItemId, float InputValue, float DefaultValue, EDataRegistrySubsystemGetItemResult& OutResult, float& OutValue); // [0x64dd9f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType
	// bool EqualEqual_DataRegistryType(FDataRegistryType A, FDataRegistryType B);                                              // [0x53f1fe0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId
	// bool EqualEqual_DataRegistryId(FDataRegistryId A, FDataRegistryId B);                                                    // [0x5a7acd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString
	// FString Conv_DataRegistryTypeToString(FDataRegistryType DataRegistryType);                                               // [0x53f2870] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString
	// FString Conv_DataRegistryIdToString(FDataRegistryId DataRegistryId);                                                     // [0x64dd860] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DataRegistry.DataRegistrySubsystem.AcquireItemBP
	// bool AcquireItemBP(FDataRegistryId ItemId, FDelegateProperty AcquireCallback);                                           // [0x64dd760] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/DataRegistry.DataRegistryLookup
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FDataRegistryLookup
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/DataRegistry.DataRegistryType
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FDataRegistryType
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
};

/// Struct /Script/DataRegistry.DataRegistryId
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FDataRegistryId
{ 
	FDataRegistryType                                  RegistryType;                                               // 0x0000   (0x0008)  
	FName                                              ItemName;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/DataRegistry.DataRegistrySourceItemId
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FDataRegistrySourceItemId
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

#pragma pack(pop)


