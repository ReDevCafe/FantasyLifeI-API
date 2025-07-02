
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioExtensions
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MetasoundFrontend

#pragma pack(push, 0x1)

/// Enum /Script/MetasoundEngine.EMetaSoundMessageLevel
/// Size: 0x01 (1 bytes)
enum class EMetaSoundMessageLevel : uint8_t
{
	EMetaSoundMessageLevel__Error                                                    = 0,
	EMetaSoundMessageLevel__Warning                                                  = 1,
	EMetaSoundMessageLevel__Info                                                     = 2
};

/// Enum /Script/MetasoundEngine.EMetaSoundOutputAudioFormat
/// Size: 0x01 (1 bytes)
enum class EMetaSoundOutputAudioFormat : uint8_t
{
	EMetaSoundOutputAudioFormat__Mono                                                = 0,
	EMetaSoundOutputAudioFormat__Stereo                                              = 1,
	EMetaSoundOutputAudioFormat__Quad                                                = 2,
	EMetaSoundOutputAudioFormat__FiveDotOne                                          = 3,
	EMetaSoundOutputAudioFormat__SevenDotOne                                         = 4,
	EMetaSoundOutputAudioFormat__COUNT                                               = 5
};

/// Enum /Script/MetasoundEngine.EMetaSoundBuilderResult
/// Size: 0x01 (1 bytes)
enum class EMetaSoundBuilderResult : uint8_t
{
	EMetaSoundBuilderResult__Succeeded                                               = 0,
	EMetaSoundBuilderResult__Failed                                                  = 1
};

/// Class /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMetasoundFrontendLiteralBlueprintAccess : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateStringMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(FString Value);                                                   // [0x881eac0] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateStringArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(TArray<FString>& Value);                                     // [0x881e780] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateObjectMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(class UObject* Value);                                            // [0x881dd90] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateObjectArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(TArray<UObject*>& Value);                                    // [0x881dc30] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateMetaSoundLiteralFromParam
	// FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(FAudioParameter& Param);                                       // [0x881d9d0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateIntMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32_t Value);                                                      // [0x881d800] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateIntArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(TArray<int32_t>& Value);                                        // [0x881d500] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateFloatMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value);                                                      // [0x881d190] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateFloatArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(TArray<float>& Value);                                        // [0x881ce80] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateBoolMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value);                                                        // [0x881cb70] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundFrontendLiteralBlueprintAccess.CreateBoolArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(TArray<bool>& Value);                                          // [0x881c870] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetasoundGeneratorHandle
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class UMetasoundGeneratorHandle : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0028   (0x0070)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.WatchOutput
	// bool WatchOutput(FName OutputName, FDelegateProperty& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName); // [0x8823810] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.UpdateWatchers
	// void UpdateWatchers();                                                                                                   // [0x88235e0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.GetCPUCoreUtilization
	// double GetCPUCoreUtilization();                                                                                          // [0x88209f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.EnableRuntimeRenderTiming
	// void EnableRuntimeRenderTiming(bool Enable);                                                                             // [0x881f130] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle
	// class UMetasoundGeneratorHandle* CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent);                     // [0x881d940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.ApplyParameterPack
	// bool ApplyParameterPack(class UMetasoundParameterPack* Pack);                                                            // [0x881b300] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundCacheSubsystem
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UMetaSoundCacheSubsystem : public UAudioEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0030   (0x0040)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundCacheSubsystem.TouchOrPrecacheMetaSound
	// void TouchOrPrecacheMetaSound(class UMetaSoundSource* InMetaSound, int32_t InNumInstances);                              // [0x8823180] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundCacheSubsystem.RemoveCachedOperatorsForMetaSound
	// void RemoveCachedOperatorsForMetaSound(class UMetaSoundSource* InMetaSound);                                             // [0x88226b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundCacheSubsystem.PrecacheMetaSound
	// void PrecacheMetaSound(class UMetaSoundSource* InMetaSound, int32_t InNumInstances);                                     // [0x8822310] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetasoundOutputBlueprintAccess
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMetasoundOutputBlueprintAccess : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsTime
	// bool IsTime(FMetaSoundOutput& Output);                                                                                   // [0x8821fc0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsString
	// bool IsString(FMetaSoundOutput& Output);                                                                                 // [0x8821f10] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsInt32
	// bool IsInt32(FMetaSoundOutput& Output);                                                                                  // [0x8821cf0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsFloat
	// bool IsFloat(FMetaSoundOutput& Output);                                                                                  // [0x8821c40] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.IsBool
	// bool IsBool(FMetaSoundOutput& Output);                                                                                   // [0x8821b90] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetTimeSeconds
	// double GetTimeSeconds(FMetaSoundOutput& Output, bool& Success);                                                          // [0x88219c0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetString
	// FString GetString(FMetaSoundOutput& Output, bool& Success);                                                              // [0x8821810] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetInt32
	// int32_t GetInt32(FMetaSoundOutput& Output, bool& Success);                                                               // [0x8820c60] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetFloat
	// float GetFloat(FMetaSoundOutput& Output, bool& Success);                                                                 // [0x8820b30] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundOutputBlueprintAccess.GetBool
	// bool GetBool(FMetaSoundOutput& Output, bool& Success);                                                                   // [0x88208d0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundOutputSubsystem
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UMetaSoundOutputSubsystem : public UTickableWorldSubsystem
{ 
public:
	TArray<class UMetasoundGeneratorHandle*>           TrackedGenerators;                                          // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundOutputSubsystem.WatchOutput
	// bool WatchOutput(class UAudioComponent* AudioComponent, FName OutputName, FDelegateProperty& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName); // [0x8823630] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundQualityHelper
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMetaSoundQualityHelper : public UObject
{ 
public:


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundQualityHelper.GetQualityList
	// TArray<FName> GetQualityList();                                                                                          // [0x5483d30] Final|Native|Static|Public 
};

/// Struct /Script/MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FDefaultMetaSoundAssetAutoUpdateSettings
{ 
	FSoftObjectPath                                    Metasound;                                                  // 0x0000   (0x0020)  
};

/// Struct /Script/MetasoundEngine.MetaSoundQualitySettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMetaSoundQualitySettings
{ 
	FPerPlatformInt                                    SampleRate;                                                 // 0x0000   (0x0004)  
	FPerPlatformFloat                                  BlockRate;                                                  // 0x0004   (0x0004)  
};

/// Class /Script/MetasoundEngine.MetaSoundSettings
/// Size: 0x0090 (144 bytes) (0x000038 - 0x000090) align 8 MaxSize: 0x0090
class UMetaSoundSettings : public UDeveloperSettings
{ 
public:
	bool                                               bAutoUpdateEnabled;                                         // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FMetasoundFrontendClassName>                AutoUpdateDenylist;                                         // 0x0040   (0x0010)  
	TArray<FDefaultMetaSoundAssetAutoUpdateSettings>   AutoUpdateAssetDenylist;                                    // 0x0050   (0x0010)  
	bool                                               bAutoUpdateLogWarningOnDroppedConnection;                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	TArray<FDirectoryPath>                             DirectoriesToRegister;                                      // 0x0068   (0x0010)  
	int32_t                                            DenyListCacheChangeID;                                      // 0x0078   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<FMetaSoundQualitySettings>                  QualitySettings;                                            // 0x0080   (0x0010)  
};

/// Class /Script/MetasoundEngine.MetasoundEditorGraphBase
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UMetasoundEditorGraphBase : public UEdGraph
{ 
public:
};

/// Class /Script/MetasoundEngine.MetaSoundPatch
/// Size: 0x0348 (840 bytes) (0x000028 - 0x000348) align 8 MaxSize: 0x0348
class UMetaSoundPatch : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x0028   (0x0048)  MISSED
	FMetasoundFrontendDocument                         RootMetaSoundDocument;                                      // 0x0070   (0x01D0)  
	SDK_UNDEFINED(80,1110) /* TSet<FString> */         __um(ReferencedAssetClassKeys);                             // 0x0240   (0x0050)  
	SDK_UNDEFINED(80,1111) /* TSet<UObject*> */        __um(ReferencedAssetClassObjects);                          // 0x0290   (0x0050)  
	SDK_UNDEFINED(80,1112) /* TSet<FSoftObjectPath> */ __um(ReferenceAssetClassCache);                             // 0x02E0   (0x0050)  
	FGuid                                              AssetClassID;                                               // 0x0330   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0340   (0x0008)  MISSED
};

/// Struct /Script/MetasoundEngine.MetaSoundAsyncAssetDependencies
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMetaSoundAsyncAssetDependencies
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class UObject*                                     Metasound;                                                  // 0x0008   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0010   (0x0020)  MISSED
};

/// Class /Script/MetasoundEngine.MetaSoundAssetSubsystem
/// Size: 0x01E0 (480 bytes) (0x000030 - 0x0001E0) align 8 MaxSize: 0x01E0
class UMetaSoundAssetSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	TArray<FMetaSoundAsyncAssetDependencies>           LoadingDependencies;                                        // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_7[0x198];                                     // 0x0048   (0x0198)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
	// void UnregisterAssetClassesInDirectories(TArray<FMetaSoundAssetDirectory>& Directories);                                 // [0x8823370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
	// void RegisterAssetClassesInDirectories(TArray<FMetaSoundAssetDirectory>& Directories);                                   // [0x88223e0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundBuilderBase
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UMetaSoundBuilderBase : public UObject
{ 
public:
	FMetaSoundFrontendDocumentBuilder                  Builder;                                                    // 0x0028   (0x0038)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0060   (0x0008)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.SetNodeInputDefault
	// void SetNodeInputDefault(FMetaSoundBuilderNodeInputHandle& NodeInputHandle, FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult); // [0x8822f10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.SetGraphInputDefault
	// void SetGraphInputDefault(FName InputName, FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult);      // [0x8822d40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveNodeInputDefault
	// void RemoveNodeInputDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult);          // [0x8822b50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveNode
	// void RemoveNode(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult);                                   // [0x8822a50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveInterface
	// void RemoveInterface(FName InterfaceName, EMetaSoundBuilderResult& OutResult);                                           // [0x8822970] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveGraphOutput
	// void RemoveGraphOutput(FName Name, EMetaSoundBuilderResult& OutResult);                                                  // [0x8822890] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.RemoveGraphInput
	// void RemoveGraphInput(FName Name, EMetaSoundBuilderResult& OutResult);                                                   // [0x88227b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.NodesAreConnected
	// bool NodesAreConnected(FMetaSoundBuilderNodeOutputHandle& OutputHandle, FMetaSoundBuilderNodeInputHandle& InputHandle);  // [0x88221d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.NodeOutputIsConnected
	// bool NodeOutputIsConnected(FMetaSoundBuilderNodeOutputHandle& OutputHandle);                                             // [0x8822120] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.NodeInputIsConnected
	// bool NodeInputIsConnected(FMetaSoundBuilderNodeInputHandle& InputHandle);                                                // [0x8822070] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.IsPreset
	// bool IsPreset();                                                                                                         // [0x8821ee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.InterfaceIsDeclared
	// bool InterfaceIsDeclared(FName InterfaceName);                                                                           // [0x8821af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetReferencedPresetAsset
	// class UObject* GetReferencedPresetAsset();                                                                               // [0x8821710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeOutputIsConstructorPin
	// bool GetNodeOutputIsConstructorPin(FMetaSoundBuilderNodeOutputHandle& OutputHandle);                                     // [0x8821650] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeOutputData
	// void GetNodeOutputData(FMetaSoundBuilderNodeOutputHandle& OutputHandle, FName& Name, FName& DataType, EMetaSoundBuilderResult& OutResult); // [0x8821480] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeInputIsConstructorPin
	// bool GetNodeInputIsConstructorPin(FMetaSoundBuilderNodeInputHandle& InputHandle);                                        // [0x88213c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeInputDefault
	// FMetasoundFrontendLiteral GetNodeInputDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // [0x88211e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeInputData
	// void GetNodeInputData(FMetaSoundBuilderNodeInputHandle& InputHandle, FName& Name, FName& DataType, EMetaSoundBuilderResult& OutResult); // [0x8821010] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.GetNodeInputClassDefault
	// FMetasoundFrontendLiteral GetNodeInputClassDefault(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // [0x8820e30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputsByDataType
	// TArray<FMetaSoundBuilderNodeOutputHandle> FindNodeOutputsByDataType(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, FName DataType); // [0x8820570] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputs
	// TArray<FMetaSoundBuilderNodeOutputHandle> FindNodeOutputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x8820410] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputParent
	// FMetaSoundNodeHandle FindNodeOutputParent(FMetaSoundBuilderNodeOutputHandle& OutputHandle, EMetaSoundBuilderResult& OutResult); // [0x881fdc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeOutputByName
	// FMetaSoundBuilderNodeOutputHandle FindNodeOutputByName(FMetaSoundNodeHandle& NodeHandle, FName OutputName, EMetaSoundBuilderResult& OutResult); // [0x88201f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputsByDataType
	// TArray<FMetaSoundBuilderNodeInputHandle> FindNodeInputsByDataType(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, FName DataType); // [0x8820050] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputs
	// TArray<FMetaSoundBuilderNodeInputHandle> FindNodeInputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x881fef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputParent
	// FMetaSoundNodeHandle FindNodeInputParent(FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult); // [0x881fdc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeInputByName
	// FMetaSoundBuilderNodeInputHandle FindNodeInputByName(FMetaSoundNodeHandle& NodeHandle, FName InputName, EMetaSoundBuilderResult& OutResult); // [0x881fba0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindNodeClassVersion
	// FMetasoundFrontendVersion FindNodeClassVersion(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult);    // [0x881fa50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindInterfaceOutputNodes
	// TArray<FMetaSoundNodeHandle> FindInterfaceOutputNodes(FName InterfaceName, EMetaSoundBuilderResult& OutResult);          // [0x881f930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindInterfaceInputNodes
	// TArray<FMetaSoundNodeHandle> FindInterfaceInputNodes(FName InterfaceName, EMetaSoundBuilderResult& OutResult);           // [0x881f760] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindGraphOutputNode
	// FMetaSoundNodeHandle FindGraphOutputNode(FName OutputName, EMetaSoundBuilderResult& OutResult);                          // [0x881f650] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.FindGraphInputNode
	// FMetaSoundNodeHandle FindGraphInputNode(FName InputName, EMetaSoundBuilderResult& OutResult);                            // [0x881f540] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodesByInterfaceBindings
	// void DisconnectNodesByInterfaceBindings(FMetaSoundNodeHandle& FromNodeHandle, FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult& OutResult); // [0x881efd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodes
	// void DisconnectNodes(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // [0x881ee40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodeOutput
	// void DisconnectNodeOutput(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult& OutResult);      // [0x881ed30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.DisconnectNodeInput
	// void DisconnectNodeInput(FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult);         // [0x881ec20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConvertToPreset
	// void ConvertToPreset(TScriptInterface<Class>& ReferencedNodeClass, EMetaSoundBuilderResult& OutResult);                  // [0x881c540] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConvertFromPreset
	// void ConvertFromPreset(EMetaSoundBuilderResult& OutResult);                                                              // [0x881c490] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ContainsNodeOutput
	// bool ContainsNodeOutput(FMetaSoundBuilderNodeOutputHandle& Output);                                                      // [0x881c3d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ContainsNodeInput
	// bool ContainsNodeInput(FMetaSoundBuilderNodeInputHandle& Input);                                                         // [0x881c310] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ContainsNode
	// bool ContainsNode(FMetaSoundNodeHandle& Node);                                                                           // [0x881c260] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodesByInterfaceBindings
	// void ConnectNodesByInterfaceBindings(FMetaSoundNodeHandle& FromNodeHandle, FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult& OutResult); // [0x881c0f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodes
	// void ConnectNodes(FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // [0x881bf40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeOutputToGraphOutput
	// void ConnectNodeOutputToGraphOutput(FName GraphOutputName, FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult& OutResult); // [0x881bba0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeOutputsToMatchingGraphInterfaceOutputs
	// TArray<FMetaSoundBuilderNodeInputHandle> ConnectNodeOutputsToMatchingGraphInterfaceOutputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x881bd40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeInputToGraphInput
	// void ConnectNodeInputToGraphInput(FName GraphInputName, FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult); // [0x881b800] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.ConnectNodeInputsToMatchingGraphInterfaceInputs
	// TArray<FMetaSoundBuilderNodeOutputHandle> ConnectNodeInputsToMatchingGraphInterfaceInputs(FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult); // [0x881b9a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddNodeByClassName
	// FMetaSoundNodeHandle AddNodeByClassName(FMetasoundFrontendClassName& ClassName, EMetaSoundBuilderResult& OutResult, int32_t MajorVersion); // [0x881b160] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddNode
	// FMetaSoundNodeHandle AddNode(TScriptInterface<Class>& NodeClass, EMetaSoundBuilderResult& OutResult);                    // [0x881afb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddInterface
	// void AddInterface(FName InterfaceName, EMetaSoundBuilderResult& OutResult);                                              // [0x881aed0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddGraphOutputNode
	// FMetaSoundBuilderNodeInputHandle AddGraphOutputNode(FName Name, FName DataType, FMetasoundFrontendLiteral DefaultValue, EMetaSoundBuilderResult& OutResult, bool bIsConstructorOutput); // [0x881ab10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderBase.AddGraphInputNode
	// FMetaSoundBuilderNodeOutputHandle AddGraphInputNode(FName Name, FName DataType, FMetasoundFrontendLiteral DefaultValue, EMetaSoundBuilderResult& OutResult, bool bIsConstructorInput); // [0x881a750] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundPatchBuilder
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UMetaSoundPatchBuilder : public UMetaSoundBuilderBase
{ 
public:


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundPatchBuilder.Build
	// TScriptInterface<Class> Build(class UObject* Parent, FMetaSoundBuilderOptions& OPTIONS);                                 // [0x881b6d0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MetasoundEngine.MetaSoundSourceBuilder
/// Size: 0x0080 (128 bytes) (0x000068 - 0x000080) align 8 MaxSize: 0x0080
class UMetaSoundSourceBuilder : public UMetaSoundBuilderBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0068   (0x0018)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.SetSampleRateOverride
	// void SetSampleRateOverride(int32_t SampleRate);                                                                          // [0x5464740] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.SetQuality
	// void SetQuality(FName Quality);                                                                                          // [0x8823110] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.SetFormat
	// void SetFormat(EMetaSoundOutputAudioFormat OutputFormat, EMetaSoundBuilderResult& OutResult);                            // [0x8822c60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.SetBlockRateOverride
	// void SetBlockRateOverride(float BlockRate);                                                                              // [0x5089f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.GetLiveUpdatesEnabled
	// bool GetLiveUpdatesEnabled();                                                                                            // [0x8820d80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.Build
	// TScriptInterface<Class> Build(class UObject* Parent, FMetaSoundBuilderOptions& OPTIONS);                                 // [0x881b6d0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundSourceBuilder.Audition
	// void Audition(class UObject* Parent, class UAudioComponent* AudioComponent, FDelegateProperty OnCreateGenerator, bool bLiveUpdatesEnabled); // [0x881b430] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundBuilderSubsystem
/// Size: 0x0128 (296 bytes) (0x000030 - 0x000128) align 8 MaxSize: 0x0128
class UMetaSoundBuilderSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	TMap<FName, class UMetaSoundBuilderBase*>          NamedBuilders;                                              // 0x0038   (0x0050)  
	SDK_UNDEFINED(80,1113) /* TMap<FMetasoundFrontendClassName, TWeakObjectPtr<UMetaSoundBuilderBase*>> */ __um(AssetBuilders); // 0x0088   (0x0050)  
	SDK_UNDEFINED(80,1114) /* TMap<FMetasoundFrontendClassName, TWeakObjectPtr<UMetaSoundBuilderBase*>> */ __um(TransientBuilders); // 0x00D8   (0x0050)  


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterSourceBuilder
	// bool UnregisterSourceBuilder(FName BuilderName);                                                                         // [0x8823540] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterPatchBuilder
	// bool UnregisterPatchBuilder(FName BuilderName);                                                                          // [0x8823540] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.UnregisterBuilder
	// bool UnregisterBuilder(FName BuilderName);                                                                               // [0x8823540] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.RegisterSourceBuilder
	// void RegisterSourceBuilder(FName BuilderName, class UMetaSoundSourceBuilder* Builder);                                   // [0x88225b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.RegisterPatchBuilder
	// void RegisterPatchBuilder(FName BuilderName, class UMetaSoundPatchBuilder* Builder);                                     // [0x88225b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.RegisterBuilder
	// void RegisterBuilder(FName BuilderName, class UMetaSoundBuilderBase* Builder);                                           // [0x88225b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.IsInterfaceRegistered
	// bool IsInterfaceRegistered(FName InInterfaceName);                                                                       // [0x8821da0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.FindSourceBuilder
	// class UMetaSoundSourceBuilder* FindSourceBuilder(FName BuilderName);                                                     // [0x88207f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.FindPatchBuilder
	// class UMetaSoundPatchBuilder* FindPatchBuilder(FName BuilderName);                                                       // [0x8820710] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.FindBuilderOfDocument
	// class UMetaSoundBuilderBase* FindBuilderOfDocument(TScriptInterface<Class> InMetaSound);                                 // [0x881f2f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.FindBuilder
	// class UMetaSoundBuilderBase* FindBuilder(FName BuilderName);                                                             // [0x881f250] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateStringMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(FString Value, FName& DataType);                                  // [0x881e910] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateStringArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(TArray<FString>& Value, FName& DataType);                    // [0x881e520] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateSourcePresetBuilder
	// class UMetaSoundSourceBuilder* CreateSourcePresetBuilder(FName BuilderName, TScriptInterface<Class>& ReferencedSourceClass, EMetaSoundBuilderResult& OutResult); // [0x881e3b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateSourceBuilder
	// class UMetaSoundSourceBuilder* CreateSourceBuilder(FName BuilderName, FMetaSoundBuilderNodeOutputHandle& OnPlayNodeOutput, FMetaSoundBuilderNodeInputHandle& OnFinishedNodeInput, TArray<FMetaSoundBuilderNodeInputHandle>& AudioOutNodeInputs, EMetaSoundBuilderResult& OutResult, EMetaSoundOutputAudioFormat OutputFormat, bool bIsOneShot); // [0x881e110] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreatePatchPresetBuilder
	// class UMetaSoundPatchBuilder* CreatePatchPresetBuilder(FName BuilderName, TScriptInterface<Class>& ReferencedPatchClass, EMetaSoundBuilderResult& OutResult); // [0x881dfb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreatePatchBuilder
	// class UMetaSoundPatchBuilder* CreatePatchBuilder(FName BuilderName, EMetaSoundBuilderResult& OutResult);                 // [0x881ded0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateObjectMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(class UObject* Value);                                            // [0x881dd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateObjectArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(TArray<UObject*>& Value);                                    // [0x881dc30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateMetaSoundLiteralFromParam
	// FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(FAudioParameter& Param);                                       // [0x881d9d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateIntMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32_t Value, FName& DataType);                                     // [0x881d660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateIntArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(TArray<int32_t>& Value, FName& DataType);                       // [0x881d2d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateFloatMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value, FName& DataType);                                     // [0x881cfe0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateFloatArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(TArray<float>& Value, FName& DataType);                       // [0x881ccb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateBoolMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value, FName& DataType);                                       // [0x881c9d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundBuilderSubsystem.CreateBoolArrayMetaSoundLiteral
	// FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(TArray<bool>& Value, FName& DataType);                         // [0x881c640] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundSource
/// Size: 0x0880 (2176 bytes) (0x000470 - 0x000880) align 16 MaxSize: 0x0880
class UMetaSoundSource : public USoundWaveProcedural
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x0470   (0x0048)  MISSED
	FMetasoundFrontendDocument                         RootMetaSoundDocument;                                      // 0x04B8   (0x01D0)  
	SDK_UNDEFINED(80,1115) /* TSet<FString> */         __um(ReferencedAssetClassKeys);                             // 0x0688   (0x0050)  
	SDK_UNDEFINED(80,1116) /* TSet<UObject*> */        __um(ReferencedAssetClassObjects);                          // 0x06D8   (0x0050)  
	SDK_UNDEFINED(80,1117) /* TSet<FSoftObjectPath> */ __um(ReferenceAssetClassCache);                             // 0x0728   (0x0050)  
	EMetaSoundOutputAudioFormat                        OutputFormat;                                               // 0x0778   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0779   (0x0003)  MISSED
	FGuid                                              AssetClassID;                                               // 0x077C   (0x0010)  
	unsigned char                                      UnknownData02_7[0xF4];                                      // 0x078C   (0x00F4)  MISSED
};

/// Struct /Script/MetasoundEngine.MetaSoundOutput
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FMetaSoundOutput : FSoundGeneratorOutput
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/MetasoundEngine.MetaSoundAssetDirectory
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMetaSoundAssetDirectory
{ 
	FDirectoryPath                                     Directory;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/MetasoundEngine.MetaSoundBuilderNodeInputHandle
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 4 MaxSize: 0x0020
struct FMetaSoundBuilderNodeInputHandle : FMetasoundFrontendVertexHandle
{ 
};

/// Struct /Script/MetasoundEngine.MetaSoundBuilderNodeOutputHandle
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 4 MaxSize: 0x0020
struct FMetaSoundBuilderNodeOutputHandle : FMetasoundFrontendVertexHandle
{ 
};

/// Struct /Script/MetasoundEngine.MetaSoundNodeHandle
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMetaSoundNodeHandle
{ 
	FGuid                                              NodeID;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/MetasoundEngine.MetaSoundBuilderOptions
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMetaSoundBuilderOptions
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	bool                                               bForceUniqueClassName;                                      // 0x0008   (0x0001)  
	bool                                               bAddToRegistry;                                             // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
	SDK_UNDEFINED(16,1118) /* TScriptInterface<Class> */ __um(ExistingMetaSound);                                  // 0x0010   (0x0010)  
};

#pragma pack(pop)


