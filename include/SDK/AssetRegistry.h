
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/AssetRegistry.AssetRegistryHelpers
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAssetRegistryHelpers : public UObject
{ 
public:


	/// Functions
	// Function /Script/AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
	// FSoftObjectPath ToSoftObjectPath(FAssetData& InAssetData);                                                               // [0x3c65520] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
	// FARFilter SetFilterTagsAndValues(FARFilter& InFilter, TArray<FTagAndValue>& InTagsAndValues);                            // [0x3c653a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsValid
	// bool IsValid(FAssetData& InAssetData);                                                                                   // [0x3c64750] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsUAsset
	// bool IsUAsset(FAssetData& InAssetData);                                                                                  // [0x3c64610] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsRedirector
	// bool IsRedirector(FAssetData& InAssetData);                                                                              // [0x3c64470] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
	// bool IsAssetLoaded(FAssetData& InAssetData);                                                                             // [0x3c64300] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetTagValue
	// bool GetTagValue(FAssetData& InAssetData, FName& InTagName, FString& OutTagValue);                                       // [0x3c64030] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetFullName
	// FString GetFullName(FAssetData& InAssetData);                                                                            // [0x3c63d30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetExportTextName
	// FString GetExportTextName(FAssetData& InAssetData);                                                                      // [0x3c63bb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetClass
	// class UClass* GetClass(FAssetData& InAssetData);                                                                         // [0x3c637c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetBlueprintAssets
	// void GetBlueprintAssets(FARFilter& InFilter, TArray<FAssetData>& OutAssetData);                                          // [0x3c63620] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
	// TScriptInterface<Class> GetAssetRegistry();                                                                              // [0x3c62b80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetAsset
	// class UObject* GetAsset(FAssetData& InAssetData);                                                                        // [0x3c628e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.FindAssetNativeClass
	// class UClass* FindAssetNativeClass(FAssetData& AssetData);                                                               // [0x3c62430] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.CreateAssetData
	// FAssetData CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass);                                           // [0x3c622d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AssetRegistry.AssetRegistry
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAssetRegistry : public UInterface
{ 
public:


	/// Functions
	// Function /Script/AssetRegistry.AssetRegistry.WaitForPackage
	// void WaitForPackage(FString PackageName);                                                                                // [0x3c65880] Native|Public|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.WaitForCompletion
	// void WaitForCompletion();                                                                                                // [0x3c65860] Native|Public|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
	// void UseFilterToExcludeAssets(TArray<FAssetData>& AssetDataList, FARFilter& Filter);                                     // [0x3c656b0] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.SearchAllAssets
	// void SearchAllAssets(bool bSynchronousSearch);                                                                           // [0x3c65310] Native|Public|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.ScanPathsSynchronous
	// void ScanPathsSynchronous(TArray<FString>& InPaths, bool bForceRescan, bool bIgnoreDenyListScanFilters);                 // [0x3c651a0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
	// void ScanModifiedAssetFiles(TArray<FString>& InFilePaths);                                                               // [0x3c650c0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.ScanFilesSynchronous
	// void ScanFilesSynchronous(TArray<FString>& InFilePaths, bool bForceRescan);                                              // [0x3c64f90] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.RunAssetsThroughFilter
	// void RunAssetsThroughFilter(TArray<FAssetData>& AssetDataList, FARFilter& Filter);                                       // [0x3c64de0] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.PrioritizeSearchPath
	// void PrioritizeSearchPath(FString PathToPrioritize);                                                                     // [0x3c64d40] Native|Public|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.K2_GetReferencers
	// bool K2_GetReferencers(FName PackageName, FAssetRegistryDependencyOptions& ReferenceOptions, TArray<FName>& OutReferencers); // [0x3c64be0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.K2_GetDependencies
	// bool K2_GetDependencies(FName PackageName, FAssetRegistryDependencyOptions& DependencyOptions, TArray<FName>& OutDependencies); // [0x3c64a80] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.K2_GetAssetByObjectPath
	// FAssetData K2_GetAssetByObjectPath(FSoftObjectPath& ObjectPath, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets); // [0x3c64890] RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.IsSearchAsync
	// bool IsSearchAsync();                                                                                                    // [0x3c645e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AssetRegistry.AssetRegistry.IsSearchAllAssets
	// bool IsSearchAllAssets();                                                                                                // [0x3c645b0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AssetRegistry.AssetRegistry.IsLoadingAssets
	// bool IsLoadingAssets();                                                                                                  // [0x3c64440] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AssetRegistry.AssetRegistry.HasAssets
	// bool HasAssets(FName PackagePath, bool bRecursive);                                                                      // [0x3c64230] Native|Public|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetSubPaths
	// void GetSubPaths(FString InBasePath, TArray<FString>& OutPathList, bool bInRecurse);                                     // [0x3c63eb0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetDerivedClassNames
	// void GetDerivedClassNames(TArray<FTopLevelAssetPath>& ClassNames, TSet<FTopLevelAssetPath>& ExcludedClassNames, TSet<FTopLevelAssetPath>& OutDerivedClassNames); // [0x3c63900] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPaths
	// bool GetAssetsByPaths(TArray<FName> PackagePaths, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // [0x3c633d0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPath
	// bool GetAssetsByPath(FName PackagePath, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // [0x3c631c0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPackageName
	// bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets); // [0x3c62fb0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByClass
	// bool GetAssetsByClass(FTopLevelAssetPath ClassPathName, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses);       // [0x3c62de0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssets
	// bool GetAssets(FARFilter& Filter, TArray<FAssetData>& OutAssetData, bool bSkipARFilteredAssets);                         // [0x3c62be0] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetByObjectPath
	// FAssetData GetAssetByObjectPath(FName ObjectPath, bool bIncludeOnlyOnDiskAssets);                                        // [0x3c62a20] Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAncestorClassNames
	// bool GetAncestorClassNames(FTopLevelAssetPath ClassPathName, TArray<FTopLevelAssetPath>& OutAncestorClassNames);         // [0x3c627c0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAllCachedPaths
	// void GetAllCachedPaths(TArray<FString>& OutPathList);                                                                    // [0x3c626e0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAllAssets
	// bool GetAllAssets(TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);                                      // [0x3c62570] Native|Public|HasOutParms|BlueprintCallable|Const 
};

/// Class /Script/AssetRegistry.AssetRegistryImpl
/// Size: 0x0E48 (3656 bytes) (0x000028 - 0x000E48) align 8 MaxSize: 0x0E48
class UAssetRegistryImpl : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xE20];                                     // 0x0028   (0x0E20)  MISSED
};

/// Struct /Script/AssetRegistry.TagAndValue
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FTagAndValue
{ 
	FName                                              Tag;                                                        // 0x0000   (0x0008)  
	FString                                            Value;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/AssetRegistry.AssetRegistryDependencyOptions
/// Size: 0x0005 (5 bytes) (0x000000 - 0x000005) align 1 MaxSize: 0x0005
struct FAssetRegistryDependencyOptions
{ 
	bool                                               bIncludeSoftPackageReferences;                              // 0x0000   (0x0001)  
	bool                                               bIncludeHardPackageReferences;                              // 0x0001   (0x0001)  
	bool                                               bIncludeSearchableNames;                                    // 0x0002   (0x0001)  
	bool                                               bIncludeSoftManagementReferences;                           // 0x0003   (0x0001)  
	bool                                               bIncludeHardManagementReferences;                           // 0x0004   (0x0001)  
};

#pragma pack(pop)


