
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
/// dependency: InterchangeCore

#pragma pack(push, 0x1)

/// Enum /Script/InterchangeEngine.EInterchangePipelineConfigurationDialogResult
/// Size: 0x01 (1 bytes)
enum class EInterchangePipelineConfigurationDialogResult : uint8_t
{
	EInterchangePipelineConfigurationDialogResult__Cancel                            = 0,
	EInterchangePipelineConfigurationDialogResult__Import                            = 1,
	EInterchangePipelineConfigurationDialogResult__ImportAll                         = 2
};

/// Class /Script/InterchangeEngine.InterchangeBlueprintPipelineBase
/// Size: 0x00A8 (168 bytes) (0x0000A8 - 0x0000A8) align 8 MaxSize: 0x00A8
class UInterchangeBlueprintPipelineBase : public UBlueprint
{ 
public:
};

/// Class /Script/InterchangeEngine.InterchangeFilePickerBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInterchangeFilePickerBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/InterchangeEngine.InterchangeFilePickerBase.ScriptedFilePickerForTranslatorType
	// bool ScriptedFilePickerForTranslatorType(EInterchangeTranslatorType TranslatorType, FInterchangeFilePickerParameters& Parameters, TArray<FString>& OutFilenames); // [0x886a730] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeEngine.InterchangeFilePickerBase.ScriptedFilePickerForTranslatorAssetType
	// bool ScriptedFilePickerForTranslatorAssetType(EInterchangeTranslatorAssetType TranslatorAssetType, FInterchangeFilePickerParameters& Parameters, TArray<FString>& OutFilenames); // [0x886a560] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/InterchangeEngine.InterchangePipelineConfigurationBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInterchangePipelineConfigurationBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowScenePipelineConfigurationDialog
	// EInterchangePipelineConfigurationDialogResult ScriptedShowScenePipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, class UInterchangeSourceData* SourceData, class UInterchangeTranslatorBase* Translator, class UInterchangeBaseNodeContainer* BaseNodeContainer); // [0x886ae20] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowReimportPipelineConfigurationDialog
	// EInterchangePipelineConfigurationDialogResult ScriptedShowReimportPipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, class UInterchangeSourceData* SourceData, class UInterchangeTranslatorBase* Translator, class UInterchangeBaseNodeContainer* BaseNodeContainer, class UObject* ReimportAsset); // [0x886ab60] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowPipelineConfigurationDialog
	// EInterchangePipelineConfigurationDialogResult ScriptedShowPipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, class UInterchangeSourceData* SourceData, class UInterchangeTranslatorBase* Translator, class UInterchangeBaseNodeContainer* BaseNodeContainer); // [0x886a900] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/InterchangeEngine.InterchangeTranslatorPipelines
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FInterchangeTranslatorPipelines
{ 
	TSoftObjectPtr<class UClass*>                      Translator;                                                 // 0x0000   (0x0028)  
	TArray<FSoftObjectPath>                            Pipelines;                                                  // 0x0028   (0x0010)  
};

/// Struct /Script/InterchangeEngine.InterchangePipelineStack
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FInterchangePipelineStack
{ 
	TArray<FSoftObjectPath>                            Pipelines;                                                  // 0x0000   (0x0010)  
	TArray<FInterchangeTranslatorPipelines>            PerTranslatorPipelines;                                     // 0x0010   (0x0010)  
};

/// Struct /Script/InterchangeEngine.InterchangeImportSettings
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FInterchangeImportSettings
{ 
	TMap<FName, FInterchangePipelineStack>             PipelineStacks;                                             // 0x0000   (0x0050)  
	FName                                              DefaultPipelineStack;                                       // 0x0050   (0x0008)  
	TSoftObjectPtr<class UClass*>                      ImportDialogClass;                                          // 0x0058   (0x0028)  
	bool                                               bShowImportDialog;                                          // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Struct /Script/InterchangeEngine.InterchangePerTranslatorDialogOverride
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FInterchangePerTranslatorDialogOverride
{ 
	TSoftObjectPtr<class UClass*>                      Translator;                                                 // 0x0000   (0x0028)  
	bool                                               bShowImportDialog;                                          // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/InterchangeEngine.InterchangeDialogOverride
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInterchangeDialogOverride
{ 
	bool                                               bShowImportDialog;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FInterchangePerTranslatorDialogOverride>    PerTranslatorImportDialogOverride;                          // 0x0008   (0x0010)  
};

/// Struct /Script/InterchangeEngine.InterchangeContentImportSettings
/// Size: 0x0128 (296 bytes) (0x000088 - 0x000128) align 8 MaxSize: 0x0128
struct FInterchangeContentImportSettings : FInterchangeImportSettings
{ 
	TMap<EInterchangeTranslatorAssetType, FName>       DefaultPipelineStackOverride;                               // 0x0088   (0x0050)  
	TMap<EInterchangeTranslatorAssetType, FInterchangeDialogOverride> ShowImportDialogOverride;                    // 0x00D8   (0x0050)  
};

/// Class /Script/InterchangeEngine.InterchangeProjectSettings
/// Size: 0x0240 (576 bytes) (0x000038 - 0x000240) align 8 MaxSize: 0x0240
class UInterchangeProjectSettings : public UDeveloperSettings
{ 
public:
	FInterchangeContentImportSettings                  ContentImportSettings;                                      // 0x0038   (0x0128)  
	FInterchangeImportSettings                         SceneImportSettings;                                        // 0x0160   (0x0088)  
	TSoftObjectPtr<class UClass*>                      FilePickerClass;                                            // 0x01E8   (0x0028)  
	bool                                               bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing;   // 0x0210   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0211   (0x0007)  MISSED
	TSoftObjectPtr<class UClass*>                      GenericPipelineClass;                                       // 0x0218   (0x0028)  
};

/// Class /Script/InterchangeEngine.InterchangePythonPipelineBase
/// Size: 0x0108 (264 bytes) (0x000108 - 0x000108) align 8 MaxSize: 0x0108
class UInterchangePythonPipelineBase : public UInterchangePipelineBase
{ 
public:
};

/// Class /Script/InterchangeEngine.InterchangePythonPipelineAsset
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UInterchangePythonPipelineAsset : public UObject
{ 
public:
	TSoftObjectPtr<class UClass*>                      PythonClass;                                                // 0x0028   (0x0028)  
	class UInterchangePythonPipelineBase*              GeneratedPipeline;                                          // 0x0050   (0x0008)  
	FString                                            JsonDefaultProperties;                                      // 0x0058   (0x0010)  
};

/// Class /Script/InterchangeEngine.InterchangeSceneImportAsset
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeSceneImportAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/InterchangeEngine.InterchangeAssetImportData
/// Size: 0x00D8 (216 bytes) (0x000028 - 0x0000D8) align 8 MaxSize: 0x00D8
class UInterchangeAssetImportData : public UAssetImportData
{ 
public:
	FSoftObjectPath                                    SceneImportAsset;                                           // 0x0028   (0x0020)  
	FString                                            NodeUniqueID;                                               // 0x0048   (0x0010)  
	class UInterchangeBaseNodeContainer*               NodeContainer;                                              // 0x0058   (0x0008)  
	TArray<class UObject*>                             Pipelines;                                                  // 0x0060   (0x0010)  
	class UInterchangeBaseNodeContainer*               TransientNodeContainer;                                     // 0x0070   (0x0008)  
	TArray<class UObject*>                             TransientPipelines;                                         // 0x0078   (0x0010)  
	class UInterchangeTranslatorSettings*              TransientTranslatorSettings;                                // 0x0088   (0x0008)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0090   (0x0048)  MISSED


	/// Functions
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.SetTranslatorSettings
	// void SetTranslatorSettings(class UInterchangeTranslatorSettings* TranslatorSettings);                                    // [0x886b330] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.SetPipelines
	// void SetPipelines(TArray<UObject*>& InPipelines);                                                                        // [0x886b280] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.SetNodeContainer
	// void SetNodeContainer(class UInterchangeBaseNodeContainer* InNodeContainer);                                             // [0x886b080] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.ScriptGetFirstFilename
	// FString ScriptGetFirstFilename();                                                                                        // [0x5ab82c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.ScriptExtractFilenames
	// TArray<FString> ScriptExtractFilenames();                                                                                // [0x886a4d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.ScriptExtractDisplayLabels
	// TArray<FString> ScriptExtractDisplayLabels();                                                                            // [0x886a4d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetTranslatorSettings
	// class UInterchangeTranslatorSettings* GetTranslatorSettings();                                                           // [0x8869f80] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetStoredNode
	// class UInterchangeBaseNode* GetStoredNode(FString InNodeUniqueId);                                                       // [0x8869ec0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetStoredFactoryNode
	// class UInterchangeFactoryBaseNode* GetStoredFactoryNode(FString InNodeUniqueId);                                         // [0x8869e00] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetPipelines
	// TArray<UObject*> GetPipelines();                                                                                         // [0x8869c50] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetNumberOfPipelines
	// int32_t GetNumberOfPipelines();                                                                                          // [0x8869c10] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetNodeContainer
	// class UInterchangeBaseNodeContainer* GetNodeContainer();                                                                 // [0x8869bd0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeEngine.InterchangeAssetImportDataConverterBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInterchangeAssetImportDataConverterBase : public UObject
{ 
public:
};

/// Class /Script/InterchangeEngine.InterchangePipelineStackOverride
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UInterchangePipelineStackOverride : public UObject
{ 
public:
	TArray<FSoftObjectPath>                            OverridePipelines;                                          // 0x0028   (0x0010)  


	/// Functions
	// Function /Script/InterchangeEngine.InterchangePipelineStackOverride.AddPythonPipeline
	// void AddPythonPipeline(class UInterchangePythonPipelineBase* PipelineBase);                                              // [0x88698f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangePipelineStackOverride.AddPipeline
	// void AddPipeline(class UInterchangePipelineBase* PipelineBase);                                                          // [0x88698f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangePipelineStackOverride.AddBlueprintPipeline
	// void AddBlueprintPipeline(class UInterchangeBlueprintPipelineBase* PipelineBase);                                        // [0x88698f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeEngine.InterchangeManager
/// Size: 0x0350 (848 bytes) (0x000028 - 0x000350) align 16 MaxSize: 0x0350
class UInterchangeManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x178];                                     // 0x0028   (0x0178)  MISSED
	SDK_UNDEFINED(80,1118) /* TSet<UClass*> */         __um(RegisteredTranslatorsClass);                           // 0x01A0   (0x0050)  
	TMap<class UClass*, class UClass*>                 RegisteredFactoryClasses;                                   // 0x01F0   (0x0050)  
	TMap<class UClass*, class UInterchangeWriterBase*> RegisteredWriters;                                          // 0x0240   (0x0050)  
	TMap<class UClass*, class UInterchangeAssetImportDataConverterBase*> RegisteredConverters;                     // 0x0290   (0x0050)  
	unsigned char                                      UnknownData01_7[0x70];                                      // 0x02E0   (0x0070)  MISSED


	/// Functions
	// Function /Script/InterchangeEngine.InterchangeManager.ImportScene
	// bool ImportScene(FString ContentPath, class UInterchangeSourceData* SourceData, FImportAssetParameters& ImportAssetParameters); // [0x886a250] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.ImportAsset
	// bool ImportAsset(FString ContentPath, class UInterchangeSourceData* SourceData, FImportAssetParameters& ImportAssetParameters); // [0x8869fc0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.GetRegisteredFactoryClass
	// class UClass* GetRegisteredFactoryClass(class UClass* ClassToMake);                                                      // [0x8869d60] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeManager.GetInterchangeManagerScripted
	// class UInterchangeManager* GetInterchangeManagerScripted();                                                              // [0x8869ba0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.ExportScene
	// bool ExportScene(class UObject* World, bool bIsAutomated);                                                               // [0x8869ae0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.ExportAsset
	// bool ExportAsset(class UObject* Asset, bool bIsAutomated);                                                               // [0x8869ae0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.CreateSourceData
	// class UInterchangeSourceData* CreateSourceData(FString InFilename);                                                      // [0x8869a40] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/InterchangeEngine.InterchangeMeshUtilities
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInterchangeMeshUtilities : public UObject
{ 
public:
};

/// Struct /Script/InterchangeEngine.InterchangeFilePickerParameters
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FInterchangeFilePickerParameters
{ 
	bool                                               bAllowMultipleFiles;                                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FText                                              Title;                                                      // 0x0008   (0x0018)  
	FString                                            DefaultPath;                                                // 0x0018   (0x0010)  
};

/// Struct /Script/InterchangeEngine.InterchangeStackInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInterchangeStackInfo
{ 
	FName                                              StackName;                                                  // 0x0000   (0x0008)  
	TArray<class UInterchangePipelineBase*>            Pipelines;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/InterchangeEngine.PropertyData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPropertyData
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/InterchangeEngine.ImportAssetParameters
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FImportAssetParameters
{ 
	class UObject*                                     ReimportAsset;                                              // 0x0000   (0x0008)  
	int32_t                                            ReimportSourceIndex;                                        // 0x0008   (0x0004)  
	bool                                               bIsAutomated;                                               // 0x000C   (0x0001)  
	bool                                               bFollowRedirectors;                                         // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	TArray<FSoftObjectPath>                            OverridePipelines;                                          // 0x0010   (0x0010)  
	class ULevel*                                      ImportLevel;                                                // 0x0020   (0x0008)  
	FString                                            DestinationName;                                            // 0x0028   (0x0010)  
	bool                                               bReplaceExisting;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	SDK_UNDEFINED(16,1119) /* FDelegateProperty */     __um(OnAssetDone);                                          // 0x003C   (0x0010)  
	unsigned char                                      UnknownData02_6[0x14];                                      // 0x004C   (0x0014)  MISSED
	SDK_UNDEFINED(16,1120) /* FDelegateProperty */     __um(OnAssetsImportDone);                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0070   (0x0010)  MISSED
	SDK_UNDEFINED(16,1121) /* FDelegateProperty */     __um(OnSceneObjectDone);                                    // 0x0080   (0x0010)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x0090   (0x0010)  MISSED
	SDK_UNDEFINED(16,1122) /* FDelegateProperty */     __um(OnSceneImportDone);                                    // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData05_7[0x10];                                      // 0x00B0   (0x0010)  MISSED
};

#pragma pack(pop)


