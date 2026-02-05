
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: LevelSequence
/// dependency: MovieScene
/// dependency: OpenColorIO
/// dependency: StructUtils
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/MovieRenderPipelineCore.EMovieGraphValueType
/// Size: 0x01 (1 bytes)
enum class EMovieGraphValueType : uint8_t
{
	EMovieGraphValueType__None                                                       = 0,
	EMovieGraphValueType__Bool                                                       = 1,
	EMovieGraphValueType__Byte                                                       = 2,
	EMovieGraphValueType__Int32                                                      = 3,
	EMovieGraphValueType__Int64                                                      = 4,
	EMovieGraphValueType__Float                                                      = 5,
	EMovieGraphValueType__Double                                                     = 6,
	EMovieGraphValueType__Name                                                       = 7,
	EMovieGraphValueType__String                                                     = 8,
	EMovieGraphValueType__Text                                                       = 9,
	EMovieGraphValueType__Enum                                                       = 10,
	EMovieGraphValueType__Struct                                                     = 11,
	EMovieGraphValueType__Object                                                     = 12,
	EMovieGraphValueType__SoftObject                                                 = 13,
	EMovieGraphValueType__Class                                                      = 14,
	EMovieGraphValueType__SoftClass                                                  = 15,
	EMovieGraphValueType__UInt32                                                     = 16,
	EMovieGraphValueType__UInt64                                                     = 17,
	EMovieGraphValueType__Count                                                      = 18
};

/// Enum /Script/MovieRenderPipelineCore.EMovieGraphContainerType
/// Size: 0x01 (1 bytes)
enum class EMovieGraphContainerType : uint8_t
{
	EMovieGraphContainerType__None                                                   = 0,
	EMovieGraphContainerType__Array                                                  = 1,
	EMovieGraphContainerType__Count                                                  = 2
};

/// Enum /Script/MovieRenderPipelineCore.EMovieGraphScalabilityQualityLevel
/// Size: 0x01 (1 bytes)
enum class EMovieGraphScalabilityQualityLevel : uint8_t
{
	EMovieGraphScalabilityQualityLevel__Low                                          = 0,
	EMovieGraphScalabilityQualityLevel__Medium                                       = 1,
	EMovieGraphScalabilityQualityLevel__High                                         = 2,
	EMovieGraphScalabilityQualityLevel__Epic                                         = 3,
	EMovieGraphScalabilityQualityLevel__Cinematic                                    = 4
};

/// Enum /Script/MovieRenderPipelineCore.EMovieGraphPinQueryRequirement
/// Size: 0x01 (1 bytes)
enum class EMovieGraphPinQueryRequirement : uint8_t
{
	EMovieGraphPinQueryRequirement__BuiltIn                                          = 0,
	EMovieGraphPinQueryRequirement__Dynamic                                          = 1,
	EMovieGraphPinQueryRequirement__BuiltInOrDynamic                                 = 2
};

/// Enum /Script/MovieRenderPipelineCore.EMovieGraphConditionGroupOpType
/// Size: 0x01 (1 bytes)
enum class EMovieGraphConditionGroupOpType : uint8_t
{
	EMovieGraphConditionGroupOpType__Add                                             = 0,
	EMovieGraphConditionGroupOpType__Subtract                                        = 1,
	EMovieGraphConditionGroupOpType__And                                             = 2
};

/// Enum /Script/MovieRenderPipelineCore.EMovieGraphConditionGroupQueryOpType
/// Size: 0x01 (1 bytes)
enum class EMovieGraphConditionGroupQueryOpType : uint8_t
{
	EMovieGraphConditionGroupQueryOpType__Add                                        = 0,
	EMovieGraphConditionGroupQueryOpType__Subtract                                   = 1,
	EMovieGraphConditionGroupQueryOpType__And                                        = 2
};

/// Enum /Script/MovieRenderPipelineCore.EMoviePipelineEncodeQuality
/// Size: 0x01 (1 bytes)
enum class EMoviePipelineEncodeQuality : uint8_t
{
	EMoviePipelineEncodeQuality__Low                                                 = 0,
	EMoviePipelineEncodeQuality__Medium                                              = 1,
	EMoviePipelineEncodeQuality__High                                                = 2,
	EMoviePipelineEncodeQuality__Epic                                                = 3
};

/// Enum /Script/MovieRenderPipelineCore.FCPXMLExportDataSource
/// Size: 0x01 (1 bytes)
enum class FCPXMLExportDataSource : uint8_t
{
	FCPXMLExportDataSource__OutputMetadata                                           = 0,
	FCPXMLExportDataSource__SequenceData                                             = 1
};

/// Enum /Script/MovieRenderPipelineCore.EMoviePipelineTextureStreamingMethod
/// Size: 0x01 (1 bytes)
enum class EMoviePipelineTextureStreamingMethod : uint8_t
{
	EMoviePipelineTextureStreamingMethod__None                                       = 0,
	EMoviePipelineTextureStreamingMethod__Disabled                                   = 1,
	EMoviePipelineTextureStreamingMethod__FullyLoad                                  = 2
};

/// Enum /Script/MovieRenderPipelineCore.EMovieRenderPipelineState
/// Size: 0x01 (1 bytes)
enum class EMovieRenderPipelineState : uint8_t
{
	EMovieRenderPipelineState__Uninitialized                                         = 0,
	EMovieRenderPipelineState__ProducingFrames                                       = 1,
	EMovieRenderPipelineState__Finalize                                              = 2,
	EMovieRenderPipelineState__Export                                                = 3,
	EMovieRenderPipelineState__Finished                                              = 4
};

/// Enum /Script/MovieRenderPipelineCore.EMovieRenderShotState
/// Size: 0x01 (1 bytes)
enum class EMovieRenderShotState : uint8_t
{
	EMovieRenderShotState__Uninitialized                                             = 0,
	EMovieRenderShotState__WarmingUp                                                 = 1,
	EMovieRenderShotState__MotionBlur                                                = 2,
	EMovieRenderShotState__Rendering                                                 = 3,
	EMovieRenderShotState__Finished                                                  = 4
};

/// Enum /Script/MovieRenderPipelineCore.EMoviePipelineShutterTiming
/// Size: 0x01 (1 bytes)
enum class EMoviePipelineShutterTiming : uint8_t
{
	EMoviePipelineShutterTiming__FrameOpen                                           = 0,
	EMoviePipelineShutterTiming__FrameCenter                                         = 1,
	EMoviePipelineShutterTiming__FrameClose                                          = 2
};

/// Struct /Script/MovieRenderPipelineCore.MovieGraphPropertyInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMovieGraphPropertyInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	bool                                               bIsDynamicProperty;                                         // 0x0008   (0x0001)  
	EMovieGraphValueType                               valueType;                                                  // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
	class UObject*                                     ValueTypeObject;                                            // 0x0010   (0x0008)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphNode
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class UMovieGraphNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0028   (0x0018)  MISSED
	TArray<class UMovieGraphPin*>                      InputPins;                                                  // 0x0040   (0x0010)  
	TArray<class UMovieGraphPin*>                      OutputPins;                                                 // 0x0050   (0x0010)  
	FInstancedPropertyBag                              DynamicProperties;                                          // 0x0060   (0x0010)  
	TArray<FMovieGraphPropertyInfo>                    ExposedPropertyInfo;                                        // 0x0070   (0x0010)  
	bool                                               bIsDisabled : 1;                                            // 0x0080:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	FGuid                                              Guid;                                                       // 0x0084   (0x0010)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0094   (0x0004)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphNode.TogglePromotePropertyToPin
	// void TogglePromotePropertyToPin(FName& PropertyName);                                                                    // [0x7e7a6e0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphNode.GetOutputPin
	// class UMovieGraphPin* GetOutputPin(FName& InPinLabel);                                                                   // [0x7e79e60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphNode.GetInputPin
	// class UMovieGraphPin* GetInputPin(FName& InPinLabel, EMovieGraphPinQueryRequirement PinRequirement);                     // [0x7e79c30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphNode.GetExposedProperties
	// TArray<FMovieGraphPropertyInfo> GetExposedProperties();                                                                  // [0x6087d20] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphSettingNode
/// Size: 0x0098 (152 bytes) (0x000098 - 0x000098) align 8 MaxSize: 0x0098
class UMovieGraphSettingNode : public UMovieGraphNode
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphApplyCVarPresetNode
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieGraphApplyCVarPresetNode : public UMovieGraphSettingNode
{ 
public:
	bool                                               bOverride_ConsoleVariablePreset : 1;                        // 0x0098:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	SDK_UNDEFINED(16,1165) /* TScriptInterface<Class> */ __um(ConsoleVariablePreset);                              // 0x00A0   (0x0010)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphFileOutputNode
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieGraphFileOutputNode : public UMovieGraphSettingNode
{ 
public:
	bool                                               bOverride_FileNameFormat : 1;                               // 0x0098:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	FString                                            FileNameFormat;                                             // 0x00A0   (0x0010)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphAudioOutputNode
/// Size: 0x00C0 (192 bytes) (0x0000B0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UMovieGraphAudioOutputNode : public UMovieGraphFileOutputNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B0   (0x0010)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieGraphBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.ResolveVersionNumber
	// int32_t ResolveVersionNumber(FMovieGraphFilenameResolveParams InParams, bool bGetNextVersion);                           // [0x7e74ef0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.ResolveFilenameFormatArguments
	// FString ResolveFilenameFormatArguments(FString InFormatString, FMovieGraphFilenameResolveParams& InParams, FMovieGraphResolveArgs& OutMergedFormatArgs); // [0x7e74c60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.NamedResolutionFromSize
	// FMovieGraphNamedResolution NamedResolutionFromSize(int32_t InResX, int32_t InResY);                                      // [0x7e74540] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.NamedResolutionFromProfile
	// FMovieGraphNamedResolution NamedResolutionFromProfile(FName& InResolutionProfileName);                                   // [0x7e74490] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.IsNamedResolutionValid
	// bool IsNamedResolutionValid(FName& InResolutionProfileName);                                                             // [0x7e743f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetRootTimecode
	// FTimecode GetRootTimecode(class UMovieGraphPipeline* InMovieGraphPipeline);                                              // [0x7e73ee0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetRootFrameNumber
	// FFrameNumber GetRootFrameNumber(class UMovieGraphPipeline* InMovieGraphPipeline);                                        // [0x7e73e50] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetPipelineState
	// EMovieRenderPipelineState GetPipelineState(class UMovieGraphPipeline* InMovieGraphPipeline);                             // [0x7e73dc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetOverallSegmentCounts
	// void GetOverallSegmentCounts(class UMovieGraphPipeline* InMovieGraphPipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount); // [0x7e73c90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetOverallOutputFrames
	// void GetOverallOutputFrames(class UMovieGraphPipeline* InMovieGraphPipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount); // [0x7e73b60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetJobName
	// FText GetJobName(class UMovieGraphPipeline* InMovieGraphPipeline);                                                       // [0x7e73970] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetJobInitializationTime
	// FDateTime GetJobInitializationTime(class UMovieGraphPipeline* InMovieGraphPipeline);                                     // [0x7e738e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetJobAuthor
	// FText GetJobAuthor(class UMovieGraphPipeline* InMovieGraphPipeline);                                                     // [0x7e73830] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetEstimatedTimeRemaining
	// bool GetEstimatedTimeRemaining(class UMovieGraphPipeline* InMovieGraphPipeline, FTimespan& OutEstimate);                 // [0x7e73690] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetEffectiveOutputResolution
	// FIntPoint GetEffectiveOutputResolution(class UMovieGraphEvaluatedConfig* InEvaluatedGraph);                              // [0x7e73600] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetEffectiveFrameRate
	// FFrameRate GetEffectiveFrameRate(class UMovieGraphGlobalOutputSettingNode* InNode, FFrameRate& InDefaultRate);           // [0x7e73520] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetCurrentShotTimecode
	// FTimecode GetCurrentShotTimecode(class UMovieGraphPipeline* InMovieGraphPipeline);                                       // [0x7e73480] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetCurrentShotFrameNumber
	// FFrameNumber GetCurrentShotFrameNumber(class UMovieGraphPipeline* InMovieGraphPipeline);                                 // [0x7e733f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetCurrentSegmentWorkMetrics
	// FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(class UMovieGraphPipeline* InMovieGraphPipeline);          // [0x7e73300] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetCurrentSegmentState
	// EMovieRenderShotState GetCurrentSegmentState(class UMovieGraphPipeline* InMovieGraphPipeline);                           // [0x7e73270] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetCurrentSegmentName
	// void GetCurrentSegmentName(class UMovieGraphPipeline* InMovieGraphPipeline, FText& OutOuterName, FText& OutInnerName);   // [0x7e73120] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetCurrentFocusDistance
	// float GetCurrentFocusDistance(class UMovieGraphPipeline* InMovieGraphPipeline);                                          // [0x7e73090] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetCurrentFocalLength
	// float GetCurrentFocalLength(class UMovieGraphPipeline* InMovieGraphPipeline);                                            // [0x7e73000] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetCurrentCineCamera
	// class UCineCameraComponent* GetCurrentCineCamera(class UMovieGraphPipeline* InMovieGraphPipeline);                       // [0x7e72f70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetCurrentAperture
	// float GetCurrentAperture(class UMovieGraphPipeline* InMovieGraphPipeline);                                               // [0x7e72ee0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetCompletionPercentage
	// float GetCompletionPercentage(class UMovieGraphPipeline* InPipeline);                                                    // [0x7e72e50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphBranchNode
/// Size: 0x0098 (152 bytes) (0x000098 - 0x000098) align 8 MaxSize: 0x0098
class UMovieGraphBranchNode : public UMovieGraphNode
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphRenderPassNode
/// Size: 0x0098 (152 bytes) (0x000098 - 0x000098) align 8 MaxSize: 0x0098
class UMovieGraphRenderPassNode : public UMovieGraphSettingNode
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphWidgetRendererBaseNode
/// Size: 0x0110 (272 bytes) (0x000098 - 0x000110) align 8 MaxSize: 0x0110
class UMovieGraphWidgetRendererBaseNode : public UMovieGraphRenderPassNode
{ 
public:
	bool                                               bOverride_bCompositeOntoFinalImage : 1;                     // 0x0098:0 (0x0001)  
	bool                                               bCompositeOntoFinalImage;                                   // 0x0099   (0x0001)  
	unsigned char                                      UnknownData00_7[0x76];                                      // 0x009A   (0x0076)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphBurnInNode
/// Size: 0x0188 (392 bytes) (0x000110 - 0x000188) align 8 MaxSize: 0x0188
class UMovieGraphBurnInNode : public UMovieGraphWidgetRendererBaseNode
{ 
public:
	bool                                               bOverride_BurnInClass : 1;                                  // 0x0110:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0111   (0x0007)  MISSED
	FSoftClassPath                                     BurnInClass;                                                // 0x0118   (0x0020)  
	TMap<class UClass*, class UMovieGraphBurnInWidget*> BurnInWidgetInstances;                                     // 0x0138   (0x0050)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphBurnInWidget
/// Size: 0x02E0 (736 bytes) (0x0002E0 - 0x0002E0) align 8 MaxSize: 0x02E0
class UMovieGraphBurnInWidget : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphBurnInWidget.UpdateForGraph
	// void UpdateForGraph(class UMovieGraphPipeline* InGraphPipeline, class UMovieGraphEvaluatedConfig* InEvaluatedConfig);    // [0x35d7f00] Event|Public|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphCameraSettingNode
/// Size: 0x00A0 (160 bytes) (0x000098 - 0x0000A0) align 8 MaxSize: 0x00A0
class UMovieGraphCameraSettingNode : public UMovieGraphSettingNode
{ 
public:
	bool                                               bOverride_ShutterTiming : 1;                                // 0x0098:0 (0x0001)  
	bool                                               bOverride_OverscanPercentage : 1;                           // 0x0098:1 (0x0001)  
	EMoviePipelineShutterTiming                        ShutterTiming;                                              // 0x0099   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x009A   (0x0002)  MISSED
	float                                              OverscanPercentage;                                         // 0x009C   (0x0004)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphCollectionNode
/// Size: 0x00A8 (168 bytes) (0x000098 - 0x0000A8) align 8 MaxSize: 0x00A8
class UMovieGraphCollectionNode : public UMovieGraphSettingNode
{ 
public:
	bool                                               bOverride_Collection : 1;                                   // 0x0098:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	class UMovieGraphCollection*                       Collection;                                                 // 0x00A0   (0x0008)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphCommandLineEncoderNode
/// Size: 0x0138 (312 bytes) (0x000098 - 0x000138) align 8 MaxSize: 0x0138
class UMovieGraphCommandLineEncoderNode : public UMovieGraphSettingNode
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0098   (0x0008)  MISSED
	bool                                               bOverride_FileNameFormat : 1;                               // 0x00A0:0 (0x0001)  
	bool                                               bOverride_bDeleteSourceFiles : 1;                           // 0x00A0:1 (0x0001)  
	bool                                               bOverride_bSkipEncodeOnRenderCanceled : 1;                  // 0x00A0:2 (0x0001)  
	bool                                               bOverride_VideoCodec : 1;                                   // 0x00A0:3 (0x0001)  
	bool                                               bOverride_AudioCodec : 1;                                   // 0x00A0:4 (0x0001)  
	bool                                               bOverride_OutputFileExtension : 1;                          // 0x00A0:5 (0x0001)  
	bool                                               bOverride_CommandLineFormat : 1;                            // 0x00A0:6 (0x0001)  
	bool                                               bOverride_VideoInputStringFormat : 1;                       // 0x00A0:7 (0x0001)  
	bool                                               bOverride_AudioInputStringFormat : 1;                       // 0x00A1:0 (0x0001)  
	bool                                               bOverride_EncodeSettings : 1;                               // 0x00A1:1 (0x0001)  
	bool                                               bOverride_bRetainInputTextFiles : 1;                        // 0x00A1:2 (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00A2   (0x0006)  MISSED
	FString                                            FileNameFormat;                                             // 0x00A8   (0x0010)  
	bool                                               bDeleteSourceFiles;                                         // 0x00B8   (0x0001)  
	bool                                               bSkipEncodeOnRenderCanceled;                                // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x00BA   (0x0006)  MISSED
	FString                                            VideoCodec;                                                 // 0x00C0   (0x0010)  
	FString                                            AudioCodec;                                                 // 0x00D0   (0x0010)  
	FString                                            OutputFileExtension;                                        // 0x00E0   (0x0010)  
	FString                                            CommandLineFormat;                                          // 0x00F0   (0x0010)  
	FString                                            VideoInputStringFormat;                                     // 0x0100   (0x0010)  
	FString                                            AudioInputStringFormat;                                     // 0x0110   (0x0010)  
	FString                                            EncodeSettings;                                             // 0x0120   (0x0010)  
	bool                                               bRetainInputTextFiles;                                      // 0x0130   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0131   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphValueContainer
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UMovieGraphValueContainer : public UObject
{ 
public:
	FName                                              PropertyName;                                               // 0x0028   (0x0008)  
	FInstancedPropertyBag                              Value;                                                      // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.SetValueTypeObject
	// void SetValueTypeObject(class UObject* ValueTypeObject);                                                                 // [0x7e85c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.SetValueType
	// void SetValueType(EMovieGraphValueType valueType, class UObject* InValueTypeObject);                                     // [0x7e85b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.SetValueText
	// bool SetValueText(FText& InValue);                                                                                       // [0x7e859c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.SetValueString
	// bool SetValueString(FString InValue);                                                                                    // [0x7e85820] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.SetValueSerializedString
	// bool SetValueSerializedString(FString NewValue);                                                                         // [0x7e85680] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.SetValueObject
	// bool SetValueObject(class UObject* InValue);                                                                             // [0x7e84ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.SetValueName
	// bool SetValueName(FName InValue);                                                                                        // [0x7e85510] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.SetValueInt64
	// bool SetValueInt64(int64_t InValue);                                                                                     // [0x7e853a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.SetValueInt32
	// bool SetValueInt32(int32_t InValue);                                                                                     // [0x7e85230] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.SetValueFloat
	// bool SetValueFloat(float InValue);                                                                                       // [0x7e850d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.SetValueEnum
	// bool SetValueEnum(char InValue, class UEnum* Enum);                                                                      // [0x7e84ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.SetValueDouble
	// bool SetValueDouble(double InValue);                                                                                     // [0x7e84d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.SetValueContainerType
	// void SetValueContainerType(EMovieGraphContainerType ContainerType);                                                      // [0x7e84d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.SetValueClass
	// bool SetValueClass(class UClass* InValue);                                                                               // [0x7e84ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.SetValueByte
	// bool SetValueByte(char InValue);                                                                                         // [0x7e84a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.SetValueBool
	// bool SetValueBool(bool bInValue);                                                                                        // [0x7e848d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.GetValueTypeObject
	// class UObject* GetValueTypeObject();                                                                                     // [0x7e84580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.GetValueType
	// EMovieGraphValueType GetValueType();                                                                                     // [0x7e844b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.GetValueText
	// bool GetValueText(FText& OutValue);                                                                                      // [0x7e842f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.GetValueString
	// bool GetValueString(FString& OutValue);                                                                                  // [0x7e84130] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.GetValueSerializedString
	// FString GetValueSerializedString();                                                                                      // [0x7e83fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.GetValueObject
	// bool GetValueObject(class UObject* OutValue, class UClass* RequestedClass);                                              // [0x7e83df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.GetValueName
	// bool GetValueName(FName& OutValue);                                                                                      // [0x7e83c60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.GetValueInt64
	// bool GetValueInt64(int64_t& OutValue);                                                                                   // [0x7e83ad0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.GetValueInt32
	// bool GetValueInt32(int32_t& OutValue);                                                                                   // [0x7e83940] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.GetValueFloat
	// bool GetValueFloat(float& OutValue);                                                                                     // [0x7e837b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.GetValueEnum
	// bool GetValueEnum(char& OutValue, class UEnum* RequestedEnum);                                                           // [0x7e835a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.GetValueDouble
	// bool GetValueDouble(double& OutValue);                                                                                   // [0x7e83410] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.GetValueContainerType
	// EMovieGraphContainerType GetValueContainerType();                                                                        // [0x7e83340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.GetValueClass
	// bool GetValueClass(class UClass*& OutValue);                                                                             // [0x7e831b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.GetValueByte
	// bool GetValueByte(char& OutValue);                                                                                       // [0x7e83020] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphValueContainer.GetValueBool
	// bool GetValueBool(bool& bOutValue);                                                                                      // [0x7e82e90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphMember
/// Size: 0x0078 (120 bytes) (0x000040 - 0x000078) align 8 MaxSize: 0x0078
class UMovieGraphMember : public UMovieGraphValueContainer
{ 
public:
	FString                                            Description;                                                // 0x0040   (0x0010)  
	FString                                            Name;                                                       // 0x0050   (0x0010)  
	FGuid                                              Guid;                                                       // 0x0060   (0x0010)  
	bool                                               bIsEditable;                                                // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0071   (0x0007)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphMember.SetMemberName
	// bool SetMemberName(FString InNewName);                                                                                   // [0x7e75010] Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphMember.GetMemberName
	// FString GetMemberName();                                                                                                 // [0x7e73a20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphMember.GetGuid
	// FGuid GetGuid();                                                                                                         // [0x7e73770] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphVariable
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UMovieGraphVariable : public UMovieGraphMember
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphGlobalVariable
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UMovieGraphGlobalVariable : public UMovieGraphVariable
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphGlobalVariable_ShotName
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UMovieGraphGlobalVariable_ShotName : public UMovieGraphGlobalVariable
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphGlobalVariable_SequenceName
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UMovieGraphGlobalVariable_SequenceName : public UMovieGraphGlobalVariable
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphGlobalVariable_FrameNumber
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UMovieGraphGlobalVariable_FrameNumber : public UMovieGraphGlobalVariable
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphGlobalVariable_CameraName
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UMovieGraphGlobalVariable_CameraName : public UMovieGraphGlobalVariable
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphInterfaceBase
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
class UMovieGraphInterfaceBase : public UMovieGraphMember
{ 
public:
	bool                                               bIsBranch;                                                  // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphInput
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UMovieGraphInput : public UMovieGraphInterfaceBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphOutput
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UMovieGraphOutput : public UMovieGraphInterfaceBase
{ 
public:
};

/// Struct /Script/MovieRenderPipelineCore.MovieGraphEvaluatedSettingsStack
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMovieGraphEvaluatedSettingsStack
{ 
	TArray<class UMovieGraphNode*>                     NodeInstances;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/MovieRenderPipelineCore.MovieGraphEvaluatedBranchConfig
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FMovieGraphEvaluatedBranchConfig
{ 
	TMap<FString, FMovieGraphEvaluatedSettingsStack>   NamedNodes;                                                 // 0x0000   (0x0050)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphEvaluatedConfig
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UMovieGraphEvaluatedConfig : public UObject
{ 
public:
	TMap<FName, FMovieGraphEvaluatedBranchConfig>      BranchConfigMapping;                                        // 0x0028   (0x0050)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphEvaluatedConfig.GetSettingsForBranch
	// TArray<UMovieGraphSettingNode*> GetSettingsForBranch(class UClass* InClass, FName InBranchName, bool bIncludeCDOs, bool bExactMatch); // [0x7e74140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphEvaluatedConfig.GetSettingForBranch
	// class UMovieGraphSettingNode* GetSettingForBranch(class UClass* InClass, FName InBranchName, bool bIncludeCDOs, bool bExactMatch); // [0x7e73f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphEvaluatedConfig.GetBranchNames
	// TArray<FName> GetBranchNames();                                                                                          // [0x7e72d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphTraversableObject
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieGraphTraversableObject : public UInterface
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphConfig
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UMovieGraphConfig : public UObject
{ 
public:
	TArray<class UMovieGraphNode*>                     AllNodes;                                                   // 0x0028   (0x0010)  
	class UMovieGraphNode*                             InputNode;                                                  // 0x0038   (0x0008)  
	class UMovieGraphNode*                             OutputNode;                                                 // 0x0040   (0x0008)  
	TArray<class UMovieGraphVariable*>                 Variables;                                                  // 0x0048   (0x0010)  
	TArray<class UMovieGraphGlobalVariable*>           GlobalVariables;                                            // 0x0058   (0x0010)  
	TArray<class UMovieGraphInput*>                    Inputs;                                                     // 0x0068   (0x0010)  
	TArray<class UMovieGraphOutput*>                   Outputs;                                                    // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.UpdateGlobalVariableValues
	// void UpdateGlobalVariableValues(class UMovieGraphPipeline* InPipeline);                                                  // [0x7e750c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.RemoveOutboundEdges
	// bool RemoveOutboundEdges(class UMovieGraphNode* InNode, FName& InPinName);                                               // [0x7e74b80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.RemoveNodes
	// bool RemoveNodes(TArray<UMovieGraphNode*> InNodes);                                                                      // [0x7e74a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.RemoveNode
	// bool RemoveNode(class UMovieGraphNode* InNode);                                                                          // [0x7e749e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.RemoveLabeledEdge
	// bool RemoveLabeledEdge(class UMovieGraphNode* FromNode, FName& FromPinName, class UMovieGraphNode* ToNode, FName& ToPinName); // [0x7e74850] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.RemoveInboundEdges
	// bool RemoveInboundEdges(class UMovieGraphNode* InNode, FName& InPinName);                                                // [0x7e74770] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.RemoveAllOutboundEdges
	// bool RemoveAllOutboundEdges(class UMovieGraphNode* InNode);                                                              // [0x7e746d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.RemoveAllInboundEdges
	// bool RemoveAllInboundEdges(class UMovieGraphNode* InNode);                                                               // [0x7e74630] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.GetVariables
	// TArray<UMovieGraphVariable*> GetVariables(bool bIncludeGlobal);                                                          // [0x7e74310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.GetOutputs
	// TArray<UMovieGraphOutput*> GetOutputs();                                                                                 // [0x7e73ae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.GetOutputNode
	// class UMovieGraphNode* GetOutputNode();                                                                                  // [0x4f9fc60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.GetInputs
	// TArray<UMovieGraphInput*> GetInputs();                                                                                   // [0x7e737b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.GetInputNode
	// class UMovieGraphNode* GetInputNode();                                                                                   // [0x7e73790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.DeleteMember
	// bool DeleteMember(class UMovieGraphMember* MemberToDelete);                                                              // [0x7e72cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.CreateNodeByClass
	// class UMovieGraphNode* CreateNodeByClass(class UClass* InClass);                                                         // [0x7e72ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.CreateFlattenedGraph
	// class UMovieGraphEvaluatedConfig* CreateFlattenedGraph(FMovieGraphTraversalContext& InContext, FString& OutError);       // [0x7e728f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.AddVariable
	// class UMovieGraphVariable* AddVariable(FName InCustomBaseName);                                                          // [0x7e72850] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.AddOutput
	// class UMovieGraphOutput* AddOutput();                                                                                    // [0x7e72820] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.AddLabeledEdge
	// bool AddLabeledEdge(class UMovieGraphNode* FromNode, FName& FromPinLabel, class UMovieGraphNode* ToNode, FName& ToPinLabel); // [0x7e72690] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConfig.AddInput
	// class UMovieGraphInput* AddInput();                                                                                      // [0x7e72660] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphTimeStepBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieGraphTimeStepBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphTimeStepBase.GetCalculatedTimeData
	// FMovieGraphTimeStepData GetCalculatedTimeData();                                                                         // [0x7e79ab0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/MovieRenderPipelineCore.MovieGraphTimeStepData
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FMovieGraphTimeStepData
{ 
	int32_t                                            OutputFrameNumber;                                          // 0x0000   (0x0004)  
	int32_t                                            ShotOutputFrameNumber;                                      // 0x0004   (0x0004)  
	int32_t                                            RenderedFrameNumber;                                        // 0x0008   (0x0004)  
	float                                              FrameDeltaTime;                                             // 0x000C   (0x0004)  
	float                                              WorldTimeDilation;                                          // 0x0010   (0x0004)  
	float                                              WorldSeconds;                                               // 0x0014   (0x0004)  
	float                                              MotionBlurFraction;                                         // 0x0018   (0x0004)  
	FFrameRate                                         FrameRate;                                                  // 0x001C   (0x0008)  
	int32_t                                            TemporalSampleIndex;                                        // 0x0024   (0x0004)  
	int32_t                                            TemporalSampleCount;                                        // 0x0028   (0x0004)  
	bool                                               bIsFirstTemporalSampleForFrame;                             // 0x002C   (0x0001)  
	bool                                               bIsLastTemporalSampleForFrame;                              // 0x002D   (0x0001)  
	bool                                               bDiscardOutput;                                             // 0x002E   (0x0001)  
	bool                                               bRequiresAccumulator;                                       // 0x002F   (0x0001)  
	class UMovieGraphEvaluatedConfig*                  EvaluatedConfig;                                            // 0x0030   (0x0008)  
	FTimecode                                          RootTimeCode;                                               // 0x0038   (0x0014)  
	FFrameNumber                                       RootFrameNumber;                                            // 0x004C   (0x0004)  
	FTimecode                                          ShotTimeCode;                                               // 0x0050   (0x0014)  
	FFrameNumber                                       ShotFrameNumber;                                            // 0x0064   (0x0004)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphCoreTimeStep
/// Size: 0x0170 (368 bytes) (0x000028 - 0x000170) align 8 MaxSize: 0x0170
class UMovieGraphCoreTimeStep : public UMovieGraphTimeStepBase
{ 
public:
	FMovieGraphTimeStepData                            CurrentTimeStepData;                                        // 0x0028   (0x0068)  
	unsigned char                                      UnknownData00_7[0xE0];                                      // 0x0090   (0x00E0)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphEngineTimeStep
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UMovieGraphEngineTimeStep : public UEngineCustomTimeStep
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphRendererBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieGraphRendererBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphRendererBase.GetPreviewData
	// TArray<FMovieGraphImagePreviewData> GetPreviewData();                                                                    // [0x7e79f10] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphDataSourceBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieGraphDataSourceBase : public UObject
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphAudioRendererBase
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UMovieGraphAudioRendererBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0028   (0x0030)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphDebugSettingNode
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieGraphDebugSettingNode : public UMovieGraphSettingNode
{ 
public:
	bool                                               bOverride_bCaptureFramesWithRenderDoc : 1;                  // 0x0098:0 (0x0001)  
	bool                                               bOverride_bCaptureUnrealInsightsTrace : 1;                  // 0x0098:1 (0x0001)  
	bool                                               bOverride_UnrealInsightsTraceFileNameFormat : 1;            // 0x0098:2 (0x0001)  
	bool                                               bCaptureFramesWithRenderDoc;                                // 0x0099   (0x0001)  
	bool                                               bCaptureUnrealInsightsTrace;                                // 0x009A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x009B   (0x0005)  MISSED
	FString                                            UnrealInsightsTraceFileNameFormat;                          // 0x00A0   (0x0010)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphDefaultAudioRenderer
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class UMovieGraphDefaultAudioRenderer : public UMovieGraphAudioRendererBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphDefaultRenderer
/// Size: 0x01B8 (440 bytes) (0x000028 - 0x0001B8) align 8 MaxSize: 0x01B8
class UMovieGraphDefaultRenderer : public UMovieGraphRendererBase
{ 
public:
	TArray<class UMovieGraphRenderPassNode*>           RenderPassesInUse;                                          // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x180];                                     // 0x0038   (0x0180)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphEdge
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UMovieGraphEdge : public UObject
{ 
public:
	class UMovieGraphPin*                              InputPin;                                                   // 0x0028   (0x0008)  
	class UMovieGraphPin*                              OutputPin;                                                  // 0x0030   (0x0008)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphScriptBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieGraphScriptBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphScriptBase.OnShotStart
	// void OnShotStart(class UMoviePipelineExecutorJob* InJobCopy, class UMoviePipelineExecutorShot* InShotCopy);              // [0x7e7a4b0] Native|Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MovieGraphScriptBase.OnShotFinished
	// void OnShotFinished(class UMoviePipelineExecutorJob* InJobCopy, class UMoviePipelineExecutorShot* InShotCopy, FMoviePipelineOutputData& OutputData); // [0x7e7a2b0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MovieGraphScriptBase.OnJobStart
	// void OnJobStart(class UMoviePipelineExecutorJob* InJobCopy);                                                             // [0x7e7a220] Native|Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MovieGraphScriptBase.OnJobFinished
	// void OnJobFinished(class UMoviePipelineExecutorJob* InJobCopy, FMoviePipelineOutputData& InOutputData);                  // [0x7e7a050] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MovieGraphScriptBase.IsPerShotCallbackNeeded
	// bool IsPerShotCallbackNeeded();                                                                                          // [0x545df10] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphExecuteScriptNode
/// Size: 0x00C0 (192 bytes) (0x000098 - 0x0000C0) align 8 MaxSize: 0x00C0
class UMovieGraphExecuteScriptNode : public UMovieGraphSettingNode
{ 
public:
	bool                                               bOverride_Script : 1;                                       // 0x0098:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	FSoftClassPath                                     Script;                                                     // 0x00A0   (0x0020)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphGlobalGameOverridesNode
/// Size: 0x0150 (336 bytes) (0x000098 - 0x000150) align 8 MaxSize: 0x0150
class UMovieGraphGlobalGameOverridesNode : public UMovieGraphSettingNode
{ 
public:
	bool                                               bOverride_GameModeOverride : 1;                             // 0x0098:0 (0x0001)  
	bool                                               bOverride_ScalabilityQualityLevel : 1;                      // 0x0098:1 (0x0001)  
	bool                                               bOverride_bDisableTextureStreaming : 1;                     // 0x0098:2 (0x0001)  
	bool                                               bOverride_bDisableLODs : 1;                                 // 0x0098:3 (0x0001)  
	bool                                               bOverride_bDisableHLODs : 1;                                // 0x0098:4 (0x0001)  
	bool                                               bOverride_bFlushLevelStreaming : 1;                         // 0x0098:5 (0x0001)  
	bool                                               bOverride_bFlushAssetCompiler : 1;                          // 0x0098:6 (0x0001)  
	bool                                               bOverride_bFlushShaderCompiler : 1;                         // 0x0098:7 (0x0001)  
	bool                                               bOverride_bFlushGrassStreaming : 1;                         // 0x0099:0 (0x0001)  
	bool                                               bOverride_bFlushStreamingManagers : 1;                      // 0x0099:1 (0x0001)  
	bool                                               bOverride_VirtualTextureFeedbackFactor : 1;                 // 0x0099:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x009A   (0x0006)  MISSED
	class UClass*                                      GameModeOverride;                                           // 0x00A0   (0x0008)  
	EMovieGraphScalabilityQualityLevel                 ScalabilityQualityLevel;                                    // 0x00A8   (0x0001)  
	bool                                               bDisableTextureStreaming;                                   // 0x00A9   (0x0001)  
	bool                                               bDisableLODs;                                               // 0x00AA   (0x0001)  
	bool                                               bDisableHLODs;                                              // 0x00AB   (0x0001)  
	bool                                               bFlushLevelStreaming;                                       // 0x00AC   (0x0001)  
	bool                                               bFlushAssetCompiler;                                        // 0x00AD   (0x0001)  
	bool                                               bFlushShaderCompiler;                                       // 0x00AE   (0x0001)  
	bool                                               bFlushGrassStreaming;                                       // 0x00AF   (0x0001)  
	bool                                               bFlushStreamingManagers;                                    // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	int32_t                                            VirtualTextureFeedbackFactor;                               // 0x00B4   (0x0004)  
	unsigned char                                      UnknownData02_7[0x98];                                      // 0x00B8   (0x0098)  MISSED
};

/// Struct /Script/MovieRenderPipelineCore.MovieGraphNamedResolution
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMovieGraphNamedResolution
{ 
	FName                                              ProfileName;                                                // 0x0000   (0x0008)  
	FIntPoint                                          Resolution;                                                 // 0x0008   (0x0008)  
	FString                                            Description;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/MovieRenderPipelineCore.MovieGraphVersioningSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMovieGraphVersioningSettings
{ 
	bool                                               bAutoVersioning;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            VersionNumber;                                              // 0x0004   (0x0004)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphGlobalOutputSettingNode
/// Size: 0x0100 (256 bytes) (0x000098 - 0x000100) align 8 MaxSize: 0x0100
class UMovieGraphGlobalOutputSettingNode : public UMovieGraphSettingNode
{ 
public:
	bool                                               bOverride_OutputDirectory : 1;                              // 0x0098:0 (0x0001)  
	bool                                               bOverride_OutputResolution : 1;                             // 0x0098:1 (0x0001)  
	bool                                               bOverride_OutputFrameRate : 1;                              // 0x0098:2 (0x0001)  
	bool                                               bOverride_bOverwriteExistingOutput : 1;                     // 0x0098:3 (0x0001)  
	bool                                               bOverride_ZeroPadFrameNumbers : 1;                          // 0x0098:4 (0x0001)  
	bool                                               bOverride_FrameNumberOffset : 1;                            // 0x0098:5 (0x0001)  
	bool                                               bOverride_HandleFrameCount : 1;                             // 0x0098:6 (0x0001)  
	bool                                               bOverride_CustomPlaybackRangeStartFrame : 1;                // 0x0098:7 (0x0001)  
	bool                                               bOverride_CustomPlaybackRangeEndFrame : 1;                  // 0x0099:0 (0x0001)  
	bool                                               bOverride_VersioningSettings : 1;                           // 0x0099:1 (0x0001)  
	bool                                               bOverride_bFlushDiskWritesPerShot : 1;                      // 0x0099:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x009A   (0x0006)  MISSED
	FDirectoryPath                                     OutputDirectory;                                            // 0x00A0   (0x0010)  
	FMovieGraphNamedResolution                         OutputResolution;                                           // 0x00B0   (0x0020)  
	FFrameRate                                         OutputFrameRate;                                            // 0x00D0   (0x0008)  
	bool                                               bOverwriteExistingOutput;                                   // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00D9   (0x0003)  MISSED
	int32_t                                            ZeroPadFrameNumbers;                                        // 0x00DC   (0x0004)  
	int32_t                                            FrameNumberOffset;                                          // 0x00E0   (0x0004)  
	int32_t                                            HandleFrameCount;                                           // 0x00E4   (0x0004)  
	int32_t                                            CustomPlaybackRangeStartFrame;                              // 0x00E8   (0x0004)  
	int32_t                                            CustomPlaybackRangeEndFrame;                                // 0x00EC   (0x0004)  
	FMovieGraphVersioningSettings                      VersioningSettings;                                         // 0x00F0   (0x0008)  
	bool                                               bFlushDiskWritesPerShot;                                    // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00F9   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphInputNode
/// Size: 0x0098 (152 bytes) (0x000098 - 0x000098) align 8 MaxSize: 0x0098
class UMovieGraphInputNode : public UMovieGraphNode
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphLinearTimeStep
/// Size: 0x0170 (368 bytes) (0x000170 - 0x000170) align 8 MaxSize: 0x0170
class UMovieGraphLinearTimeStep : public UMovieGraphCoreTimeStep
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphMergeableModifierContainer
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UMovieGraphMergeableModifierContainer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<class UMovieGraphCollectionModifier*>       Modifiers;                                                  // 0x0030   (0x0010)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphModifierNode
/// Size: 0x00D0 (208 bytes) (0x000098 - 0x0000D0) align 8 MaxSize: 0x00D0
class UMovieGraphModifierNode : public UMovieGraphSettingNode
{ 
public:
	bool                                               bOverride_ModifierName : 1;                                 // 0x0098:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	FString                                            ModifierName;                                               // 0x00A0   (0x0010)  
	bool                                               bOverride_Collections : 1;                                  // 0x00B0:0 (0x0001)  
	bool                                               bOverride_ModifiersContainer : 1;                           // 0x00B0:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00B1   (0x0007)  MISSED
	TArray<FName>                                      Collections;                                                // 0x00B8   (0x0010)  
	class UMovieGraphMergeableModifierContainer*       ModifiersContainer;                                         // 0x00C8   (0x0008)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphModifierNode.RemoveModifier
	// bool RemoveModifier(class UClass* ModifierType);                                                                         // [0x7e7a630] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphModifierNode.RemoveCollection
	// bool RemoveCollection(FName& InCollectionName);                                                                          // [0x7e7a580] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphModifierNode.GetModifiers
	// TArray<UMovieGraphCollectionModifier*> GetModifiers();                                                                   // [0x7e79dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphModifierNode.GetModifier
	// class UMovieGraphCollectionModifier* GetModifier(class UClass* ModifierType);                                            // [0x7e79d20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphModifierNode.GetCollections
	// TArray<FName> GetCollections();                                                                                          // [0x7e79ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphModifierNode.AddModifier
	// class UMovieGraphCollectionModifier* AddModifier(class UClass* ModifierType);                                            // [0x7e79a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphModifierNode.AddCollection
	// void AddCollection(FName& InCollectionName);                                                                             // [0x7e79960] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphPostRenderNode
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieGraphPostRenderNode : public UInterface
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphOutputNode
/// Size: 0x0098 (152 bytes) (0x000098 - 0x000098) align 8 MaxSize: 0x0098
class UMovieGraphOutputNode : public UMovieGraphNode
{ 
public:
};

/// Struct /Script/MovieRenderPipelineCore.MovieGraphPinProperties
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMovieGraphPinProperties
{ 
	FName                                              Label;                                                      // 0x0000   (0x0008)  
	EMovieGraphValueType                               Type;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	class UObject*                                     TypeObject;                                                 // 0x0010   (0x0008)  
	bool                                               bAllowMultipleConnections;                                  // 0x0018   (0x0001)  
	bool                                               bIsBranch;                                                  // 0x0019   (0x0001)  
	bool                                               bIsBuiltIn;                                                 // 0x001A   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x001B   (0x0005)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphPin
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UMovieGraphPin : public UObject
{ 
public:
	class UMovieGraphNode*                             Node;                                                       // 0x0028   (0x0008)  
	FMovieGraphPinProperties                           Properties;                                                 // 0x0030   (0x0020)  
	TArray<class UMovieGraphEdge*>                     Edges;                                                      // 0x0050   (0x0010)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphPin.GetConnectedNodes
	// TArray<UMovieGraphNode*> GetConnectedNodes();                                                                            // [0x7e7f220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineBase
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UMoviePipelineBase : public UObject
{ 
public:
	SDK_UNDEFINED(16,1166) /* FMulticastInlineDelegate */ __um(OnMoviePipelineWorkFinishedDelegate);               // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1167) /* FMulticastInlineDelegate */ __um(OnMoviePipelineShotWorkFinishedDelegate);           // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0048   (0x0030)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBase.Shutdown
	// void Shutdown(bool bIsError);                                                                                            // [0x533c660] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBase.RequestShutdown
	// void RequestShutdown(bool bIsError);                                                                                     // [0x59d29d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBase.IsShutdownRequested
	// bool IsShutdownRequested();                                                                                              // [0x59d3260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBase.GetPipelineState
	// EMovieRenderPipelineState GetPipelineState();                                                                            // [0x5336a10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphPipeline
/// Size: 0x01C8 (456 bytes) (0x000078 - 0x0001C8) align 8 MaxSize: 0x01C8
class UMovieGraphPipeline : public UMoviePipelineBase
{ 
public:
	TArray<class UMovieGraphTimeStepBase*>             GraphTimeStepInstances;                                     // 0x0078   (0x0010)  
	class UMovieGraphTimeStepBase*                     PendingTimeStepInstance;                                    // 0x0088   (0x0008)  
	class UMovieGraphTimeStepBase*                     GraphTimeStepInstance;                                      // 0x0090   (0x0008)  
	class UMovieGraphRendererBase*                     GraphRendererInstance;                                      // 0x0098   (0x0008)  
	class UMovieGraphDataSourceBase*                   GraphDataSourceInstance;                                    // 0x00A0   (0x0008)  
	class UMovieGraphAudioRendererBase*                GraphAudioRendererInstance;                                 // 0x00A8   (0x0008)  
	class UMovieGraphEvaluatedConfig*                  PostRenderEvaluatedGraph;                                   // 0x00B0   (0x0008)  
	class UMoviePipelineExecutorJob*                   CurrentJob;                                                 // 0x00B8   (0x0008)  
	class UMoviePipelineExecutorJob*                   CurrentJobDuplicate;                                        // 0x00C0   (0x0008)  
	TArray<class UMoviePipelineExecutorShot*>          ActiveShotList;                                             // 0x00C8   (0x0010)  
	class UClass*                                      PreviewWidgetClassToUse;                                    // 0x00D8   (0x0008)  
	class UMovieGraphRenderPreviewWidget*              PreviewWidget;                                              // 0x00E0   (0x0008)  
	TArray<class UMovieGraphScriptBase*>               CurrentScriptInstances;                                     // 0x00E8   (0x0010)  
	SDK_UNDEFINED(80,1168) /* TSet<UMovieGraphFileOutputNode*> */ __um(OutputNodesDataSentTo);                     // 0x00F8   (0x0050)  
	unsigned char                                      UnknownData00_6[0x70];                                      // 0x0148   (0x0070)  MISSED
	class UMovieGraphEngineTimeStep*                   CustomEngineTimeStep;                                       // 0x01B8   (0x0008)  
	class UEngineCustomTimeStep*                       PrevCustomEngineTimeStep;                                   // 0x01C0   (0x0008)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphPipeline.SetInitializationTime
	// void SetInitializationTime(FDateTime& InDateTime);                                                                       // [0x7e800f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphPipeline.OnMoviePipelineFinishedImpl
	// void OnMoviePipelineFinishedImpl();                                                                                      // [0x576f990] Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphPipeline.Initialize
	// void Initialize(class UMoviePipelineExecutorJob* InJob, FMovieGraphInitConfig& InitConfig);                              // [0x7e7f6b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphPipeline.GetTimeStepInstance
	// class UMovieGraphTimeStepBase* GetTimeStepInstance();                                                                    // [0x7e7f680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphPipeline.GetRendererInstance
	// class UMovieGraphRendererBase* GetRendererInstance();                                                                    // [0x7e7f660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphPipeline.GetInitializationTimeOffset
	// FTimespan GetInitializationTimeOffset();                                                                                 // [0x57ea470] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphPipeline.GetInitializationTime
	// FDateTime GetInitializationTime();                                                                                       // [0x57a5810] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphPipeline.GetCurrentTraversalContext
	// FMovieGraphTraversalContext GetCurrentTraversalContext(bool bForShot);                                                   // [0x7e7f2a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphPipeline.GetCurrentJob
	// class UMoviePipelineExecutorJob* GetCurrentJob();                                                                        // [0x5ccf5d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphProjectSettings
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UMovieGraphProjectSettings : public UDeveloperSettings
{ 
public:
	TArray<FMovieGraphNamedResolution>                 DefaultNamedResolutions;                                    // 0x0038   (0x0010)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphRemoveRenderSettingNode
/// Size: 0x00A0 (160 bytes) (0x000098 - 0x0000A0) align 8 MaxSize: 0x00A0
class UMovieGraphRemoveRenderSettingNode : public UMovieGraphNode
{ 
public:
	class UClass*                                      NodeType;                                                   // 0x0098   (0x0008)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphRenderLayerNode
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieGraphRenderLayerNode : public UMovieGraphSettingNode
{ 
public:
	bool                                               bOverride_LayerName : 1;                                    // 0x0098:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	FString                                            LayerName;                                                  // 0x00A0   (0x0010)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphConditionGroupQueryBase
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UMovieGraphConditionGroupQueryBase : public UObject
{ 
public:
	EMovieGraphConditionGroupQueryOpType               OpType;                                                     // 0x0028   (0x0001)  
	bool                                               bIsEnabled;                                                 // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x002A   (0x0006)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphConditionGroupQueryBase.ShouldHidePropertyNames
	// bool ShouldHidePropertyNames();                                                                                          // [0x54430c0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConditionGroupQueryBase.SetOperationType
	// void SetOperationType(EMovieGraphConditionGroupQueryOpType OperationType);                                               // [0x7e80350] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConditionGroupQueryBase.SetEnabled
	// void SetEnabled(bool bEnabled);                                                                                          // [0x7e7ffd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConditionGroupQueryBase.IsFirstConditionGroupQuery
	// bool IsFirstConditionGroupQuery();                                                                                       // [0x7e7f7f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConditionGroupQueryBase.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x7e7f790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConditionGroupQueryBase.IsEditorOnlyQuery
	// bool IsEditorOnlyQuery();                                                                                                // [0x545df10] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConditionGroupQueryBase.GetOperationType
	// EMovieGraphConditionGroupQueryOpType GetOperationType();                                                                 // [0x7e7f510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConditionGroupQueryBase.Evaluate
	// void Evaluate(TArray<AActor*>& InActorsToQuery, class UWorld* InWorld, TSet<AActor*>& OutMatchingActors);                // [0x7e7ede0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphConditionGroupQuery_Actor
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UMovieGraphConditionGroupQuery_Actor : public UMovieGraphConditionGroupQueryBase
{ 
public:
	SDK_UNDEFINED(16,1169) /* TArray<TWeakObjectPtr<AActor*>> */ __um(ActorsToMatch);                              // 0x0030   (0x0010)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphConditionGroupQuery_ActorTagName
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UMovieGraphConditionGroupQuery_ActorTagName : public UMovieGraphConditionGroupQueryBase
{ 
public:
	FString                                            TagsToMatch;                                                // 0x0030   (0x0010)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphConditionGroupQuery_ActorName
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UMovieGraphConditionGroupQuery_ActorName : public UMovieGraphConditionGroupQueryBase
{ 
public:
	FString                                            WildcardSearch;                                             // 0x0030   (0x0010)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphConditionGroupQuery_ActorType
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UMovieGraphConditionGroupQuery_ActorType : public UMovieGraphConditionGroupQueryBase
{ 
public:
	TArray<class UClass*>                              ActorTypes;                                                 // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphConditionGroupQuery_ComponentTagName
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UMovieGraphConditionGroupQuery_ComponentTagName : public UMovieGraphConditionGroupQueryBase
{ 
public:
	FString                                            TagsToMatch;                                                // 0x0030   (0x0010)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphConditionGroupQuery_ComponentType
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UMovieGraphConditionGroupQuery_ComponentType : public UMovieGraphConditionGroupQueryBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	TArray<class UClass*>                              ComponentTypes;                                             // 0x0040   (0x0010)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphConditionGroupQuery_EditorFolder
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UMovieGraphConditionGroupQuery_EditorFolder : public UMovieGraphConditionGroupQueryBase
{ 
public:
	TArray<FName>                                      FolderPaths;                                                // 0x0030   (0x0010)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphConditionGroupQuery_Sublevel
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UMovieGraphConditionGroupQuery_Sublevel : public UMovieGraphConditionGroupQueryBase
{ 
public:
	SDK_UNDEFINED(16,1170) /* TArray<TWeakObjectPtr<UWorld*>> */ __um(Sublevels);                                  // 0x0030   (0x0010)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphConditionGroup
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x0000F0) align 8 MaxSize: 0x00F0
class UMovieGraphConditionGroup : public UObject
{ 
public:
	FGuid                                              ID;                                                         // 0x0028   (0x0010)  
	EMovieGraphConditionGroupOpType                    OpType;                                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<class UMovieGraphConditionGroupQueryBase*>  Queries;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(80,1171) /* TSet<AActor*> */         __um(QueryResult);                                          // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,1172) /* TSet<AActor*> */         __um(EvaluationResult);                                     // 0x00A0   (0x0050)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphConditionGroup.SetOperationType
	// void SetOperationType(EMovieGraphConditionGroupOpType OperationType);                                                    // [0x7e802d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConditionGroup.RemoveQuery
	// bool RemoveQuery(class UMovieGraphConditionGroupQueryBase* InQuery);                                                     // [0x7e7fb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConditionGroup.MoveQueryToIndex
	// bool MoveQueryToIndex(class UMovieGraphConditionGroupQueryBase* InQuery, int32_t NewIndex);                              // [0x7e7f920] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConditionGroup.IsFirstConditionGroup
	// bool IsFirstConditionGroup();                                                                                            // [0x7e7f7c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConditionGroup.GetQueries
	// TArray<UMovieGraphConditionGroupQueryBase*> GetQueries();                                                                // [0x7e7f540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConditionGroup.GetOperationType
	// EMovieGraphConditionGroupOpType GetOperationType();                                                                      // [0x7e7f4e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConditionGroup.Evaluate
	// TSet<AActor*> Evaluate(class UWorld* InWorld);                                                                           // [0x7e7ecc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphConditionGroup.AddQuery
	// class UMovieGraphConditionGroupQueryBase* AddQuery(class UClass*& InQueryType, int32_t InsertIndex);                     // [0x7e7e960] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphCollection
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UMovieGraphCollection : public UObject
{ 
public:
	FString                                            CollectionName;                                             // 0x0028   (0x0010)  
	TArray<class UMovieGraphConditionGroup*>           ConditionGroups;                                            // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphCollection.SetCollectionName
	// void SetCollectionName(FString InName);                                                                                  // [0x7e7fdd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphCollection.RemoveConditionGroup
	// bool RemoveConditionGroup(class UMovieGraphConditionGroup* InConditionGroup);                                            // [0x7e7f9f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphCollection.MoveConditionGroupToIndex
	// bool MoveConditionGroupToIndex(class UMovieGraphConditionGroup* InConditionGroup, int32_t NewIndex);                     // [0x7e7f850] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphCollection.GetConditionGroups
	// TArray<UMovieGraphConditionGroup*> GetConditionGroups();                                                                 // [0x7e7f190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphCollection.GetCollectionName
	// FString GetCollectionName();                                                                                             // [0x7e7f090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphCollection.Evaluate
	// TSet<AActor*> Evaluate(class UWorld* InWorld);                                                                           // [0x7e7eba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphCollection.AddConditionGroup
	// class UMovieGraphConditionGroup* AddConditionGroup();                                                                    // [0x7e7e8a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphCollectionModifier
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UMovieGraphCollectionModifier : public UObject
{ 
public:
	TArray<class UMovieGraphCollection*>               Collections;                                                // 0x0028   (0x0010)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphCollectionModifier.SetCollections
	// void SetCollections(TArray<UMovieGraphCollection*> InCollections);                                                       // [0x7e7fe70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphCollectionModifier.GetCollections
	// TArray<UMovieGraphCollection*> GetCollections();                                                                         // [0x7e7f0d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphCollectionModifier.AddCollection
	// void AddCollection(class UMovieGraphCollection* Collection);                                                             // [0x7e7e810] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphMaterialModifier
/// Size: 0x00B8 (184 bytes) (0x000038 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMovieGraphMaterialModifier : public UMovieGraphCollectionModifier
{ 
public:
	unsigned char                                      UnknownData00_8[0x50];                                      // 0x0038   (0x0050)  MISSED
	bool                                               bOverride_Material : 1;                                     // 0x0088:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	TWeakObjectPtr<class UMaterialInterface*>          Material;                                                   // 0x0090   (0x0008)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x0098   (0x0020)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphMaterialModifier.UndoModifier
	// void UndoModifier();                                                                                                     // [0x545e350] Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphMaterialModifier.SetMaterial
	// void SetMaterial(TWeakObjectPtr<UMaterialInterface*> InMaterial);                                                        // [0x7e80190] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphMaterialModifier.ApplyModifier
	// void ApplyModifier(class UWorld* World);                                                                                 // [0x7e7a220] Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphRenderPropertyModifier
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UMovieGraphRenderPropertyModifier : public UMovieGraphCollectionModifier
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0038   (0x0010)  MISSED
	bool                                               bOverride_bIsHidden : 1;                                    // 0x0048:0 (0x0001)  
	bool                                               bOverride_bCastsShadows : 1;                                // 0x0048:1 (0x0001)  
	bool                                               bOverride_bCastShadowWhileHidden : 1;                       // 0x0048:2 (0x0001)  
	bool                                               bOverride_bAffectIndirectLightingWhileHidden : 1;           // 0x0048:3 (0x0001)  
	bool                                               bOverride_bHoldout : 1;                                     // 0x0048:4 (0x0001)  
	bool                                               bIsHidden : 1;                                              // 0x0048:5 (0x0001)  
	bool                                               bCastsShadows : 1;                                          // 0x0048:6 (0x0001)  
	bool                                               bCastShadowWhileHidden : 1;                                 // 0x0048:7 (0x0001)  
	bool                                               bAffectIndirectLightingWhileHidden : 1;                     // 0x0049:0 (0x0001)  
	bool                                               bHoldout : 1;                                               // 0x0049:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x004A   (0x0006)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderPropertyModifier.UndoModifier
	// void UndoModifier();                                                                                                     // [0x545e350] Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderPropertyModifier.SetHidden
	// void SetHidden(bool bInIsHidden);                                                                                        // [0x7e80060] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderPropertyModifier.IsHidden
	// bool IsHidden();                                                                                                         // [0x7e7f820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderPropertyModifier.ApplyModifier
	// void ApplyModifier(class UWorld* World);                                                                                 // [0x7e7a220] Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphRenderLayer
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UMovieGraphRenderLayer : public UObject
{ 
public:
	FName                                              RenderLayerName;                                            // 0x0028   (0x0008)  
	TArray<class UMovieGraphCollectionModifier*>       Modifiers;                                                  // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderLayer.SetRenderLayerName
	// void SetRenderLayerName(FName& NewName);                                                                                 // [0x7e803d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderLayer.Revert
	// void Revert();                                                                                                           // [0x7e7fc80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderLayer.RemoveModifier
	// void RemoveModifier(class UMovieGraphCollectionModifier* Modifier);                                                      // [0x7e7fa90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderLayer.GetRenderLayerName
	// FName GetRenderLayerName();                                                                                              // [0x6087ad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderLayer.GetModifiers
	// TArray<UMovieGraphCollectionModifier*> GetModifiers();                                                                   // [0x7e7f420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderLayer.GetCollectionByName
	// class UMovieGraphCollection* GetCollectionByName(FString Name);                                                          // [0x7e7efe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderLayer.Apply
	// void Apply(class UWorld* World);                                                                                         // [0x7e7eaf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderLayer.AddModifier
	// void AddModifier(class UMovieGraphCollectionModifier* Modifier);                                                         // [0x7e7e8d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphRenderLayerSubsystem
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UMovieGraphRenderLayerSubsystem : public UWorldSubsystem
{ 
public:
	TArray<class UMovieGraphRenderLayer*>              RenderLayers;                                               // 0x0030   (0x0010)  
	class UMovieGraphRenderLayer*                      ActiveRenderLayer;                                          // 0x0040   (0x0008)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderLayerSubsystem.SetActiveRenderLayerByObj
	// void SetActiveRenderLayerByObj(class UMovieGraphRenderLayer* RenderLayer);                                               // [0x7e7fd40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderLayerSubsystem.SetActiveRenderLayerByName
	// void SetActiveRenderLayerByName(FName& RenderLayerName);                                                                 // [0x7e7fca0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderLayerSubsystem.Reset
	// void Reset();                                                                                                            // [0x7e7fc60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderLayerSubsystem.RemoveRenderLayer
	// void RemoveRenderLayer(FString RenderLayerName);                                                                         // [0x7e7fbc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderLayerSubsystem.GetRenderLayers
	// TArray<UMovieGraphRenderLayer*> GetRenderLayers();                                                                       // [0x7e7f5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderLayerSubsystem.GetFromWorld
	// class UMovieGraphRenderLayerSubsystem* GetFromWorld(class UWorld* World);                                                // [0x7e7f390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderLayerSubsystem.GetActiveRenderLayer
	// class UMovieGraphRenderLayer* GetActiveRenderLayer();                                                                    // [0x4f9fc60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderLayerSubsystem.ClearActiveRenderLayer
	// void ClearActiveRenderLayer();                                                                                           // [0x7e7eb80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderLayerSubsystem.AddRenderLayer
	// bool AddRenderLayer(class UMovieGraphRenderLayer* RenderLayer);                                                          // [0x7e7ea50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphSamplingMethodNode
/// Size: 0x00C8 (200 bytes) (0x000098 - 0x0000C8) align 8 MaxSize: 0x00C8
class UMovieGraphSamplingMethodNode : public UMovieGraphSettingNode
{ 
public:
	bool                                               bOverride_SamplingMethodClass : 1;                          // 0x0098:0 (0x0001)  
	bool                                               bOverride_TemporalSampleCount : 1;                          // 0x0098:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	FSoftClassPath                                     SamplingMethodClass;                                        // 0x00A0   (0x0020)  
	int32_t                                            TemporalSampleCount;                                        // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00C4   (0x0004)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphSelectNode
/// Size: 0x00A8 (168 bytes) (0x000098 - 0x0000A8) align 8 MaxSize: 0x00A8
class UMovieGraphSelectNode : public UMovieGraphNode
{ 
public:
	class UMovieGraphValueContainer*                   SelectOptions;                                              // 0x0098   (0x0008)  
	class UMovieGraphValueContainer*                   SelectedOption;                                             // 0x00A0   (0x0008)  
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphSequenceDataSource
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UMovieGraphSequenceDataSource : public UMovieGraphDataSourceBase
{ 
public:
	class ALevelSequenceActor*                         LevelSequenceActor;                                         // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphSetCVarValueNode
/// Size: 0x00B8 (184 bytes) (0x000098 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMovieGraphSetCVarValueNode : public UMovieGraphSettingNode
{ 
public:
	bool                                               bOverride_Name : 1;                                         // 0x0098:0 (0x0001)  
	bool                                               bOverride_Value : 1;                                        // 0x0098:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	FString                                            Name;                                                       // 0x00A0   (0x0010)  
	float                                              Value;                                                      // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphShowFlags
/// Size: 0x0100 (256 bytes) (0x000028 - 0x000100) align 8 MaxSize: 0x0100
class UMovieGraphShowFlags : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	SDK_UNDEFINED(80,1173) /* TSet<uint32_t> */        __um(OverriddenShowFlags);                                  // 0x0030   (0x0050)  
	TMap<uint32_t, bool>                               ShowFlagEnableState;                                        // 0x0080   (0x0050)  
	unsigned char                                      UnknownData01_7[0x30];                                      // 0x00D0   (0x0030)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphSubgraphNode
/// Size: 0x00C0 (192 bytes) (0x000098 - 0x0000C0) align 8 MaxSize: 0x00C0
class UMovieGraphSubgraphNode : public UMovieGraphNode
{ 
public:
	TWeakObjectPtr<class UMovieGraphConfig*>           SubgraphAsset;                                              // 0x0098   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x00A0   (0x0020)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphSubgraphNode.SetSubGraphAsset
	// void SetSubGraphAsset(TWeakObjectPtr<UMovieGraphConfig*>& InSubgraphAsset);                                              // [0x7e84800] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphSubgraphNode.GetSubgraphAsset
	// class UMovieGraphConfig* GetSubgraphAsset();                                                                             // [0x7e82e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphUIRendererNode
/// Size: 0x0110 (272 bytes) (0x000110 - 0x000110) align 8 MaxSize: 0x0110
class UMovieGraphUIRendererNode : public UMovieGraphWidgetRendererBaseNode
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphVariableNode
/// Size: 0x00C0 (192 bytes) (0x000098 - 0x0000C0) align 8 MaxSize: 0x00C0
class UMovieGraphVariableNode : public UMovieGraphNode
{ 
public:
	class UMovieGraphVariable*                         GraphVariable;                                              // 0x0098   (0x0008)  
	FMovieGraphPinProperties                           OutputPin;                                                  // 0x00A0   (0x0020)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphVariableNode.SetVariable
	// void SetVariable(class UMovieGraphVariable* InVariable);                                                                 // [0x7e85ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieGraphVariableNode.GetVariable
	// class UMovieGraphVariable* GetVariable();                                                                                // [0x7e7f660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphWarmUpSettingNode
/// Size: 0x00A8 (168 bytes) (0x000098 - 0x0000A8) align 8 MaxSize: 0x00A8
class UMovieGraphWarmUpSettingNode : public UMovieGraphSettingNode
{ 
public:
	bool                                               bOverride_NumWarmUpFrames : 1;                              // 0x0098:0 (0x0001)  
	bool                                               bOverride_bEmulateMotionBlur : 1;                           // 0x0098:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0099   (0x0003)  MISSED
	int32_t                                            NumWarmUpFrames;                                            // 0x009C   (0x0004)  
	bool                                               bEmulateMotionBlur;                                         // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UMovieJobVariableAssignmentContainer : public UObject
{ 
public:
	FInstancedPropertyBag                              Value;                                                      // 0x0028   (0x0010)  
	TWeakObjectPtr<class UMovieGraphConfig*>           GraphPreset;                                                // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetVariableAssignmentEnableState
	// bool SetVariableAssignmentEnableState(class UMovieGraphVariable* InGraphVariable, bool bIsEnabled);                      // [0x7e85d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueText
	// bool SetValueText(class UMovieGraphVariable* InGraphVariable, FText& InValue);                                           // [0x7e85a80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueString
	// bool SetValueString(class UMovieGraphVariable* InGraphVariable, FString InValue);                                        // [0x7e858d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueSerializedString
	// bool SetValueSerializedString(class UMovieGraphVariable* InGraphVariable, FString NewValue);                             // [0x7e85730] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueObject
	// bool SetValueObject(class UMovieGraphVariable* InGraphVariable, class UObject* InValue);                                 // [0x7e84c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueName
	// bool SetValueName(class UMovieGraphVariable* InGraphVariable, FName InValue);                                            // [0x7e855b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueInt64
	// bool SetValueInt64(class UMovieGraphVariable* InGraphVariable, int64_t InValue);                                         // [0x7e85440] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueInt32
	// bool SetValueInt32(class UMovieGraphVariable* InGraphVariable, int32_t InValue);                                         // [0x7e852d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueFloat
	// bool SetValueFloat(class UMovieGraphVariable* InGraphVariable, float InValue);                                           // [0x7e85160] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueEnum
	// bool SetValueEnum(class UMovieGraphVariable* InGraphVariable, char InValue, class UEnum* Enum);                          // [0x7e84fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueDouble
	// bool SetValueDouble(class UMovieGraphVariable* InGraphVariable, double InValue);                                         // [0x7e84e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueClass
	// bool SetValueClass(class UMovieGraphVariable* InGraphVariable, class UClass* InValue);                                   // [0x7e84c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueByte
	// bool SetValueByte(class UMovieGraphVariable* InGraphVariable, char InValue);                                             // [0x7e84ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueBool
	// bool SetValueBool(class UMovieGraphVariable* InGraphVariable, bool bInValue);                                            // [0x7e84970] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetGraphConfig
	// void SetGraphConfig(TWeakObjectPtr<UMovieGraphConfig*>& InGraphConfig);                                                  // [0x7e84730] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetVariableAssignmentEnableState
	// bool GetVariableAssignmentEnableState(class UMovieGraphVariable* InGraphVariable, bool& bOutIsEnabled);                  // [0x7e84650] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueTypeObject
	// class UObject* GetValueTypeObject(class UMovieGraphVariable* InGraphVariable);                                           // [0x7e845b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueType
	// EMovieGraphValueType GetValueType(class UMovieGraphVariable* InGraphVariable);                                           // [0x7e844e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueText
	// bool GetValueText(class UMovieGraphVariable* InGraphVariable, FText& OutValue);                                          // [0x7e843b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueString
	// bool GetValueString(class UMovieGraphVariable* InGraphVariable, FString& OutValue);                                      // [0x7e841f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueSerializedString
	// FString GetValueSerializedString(class UMovieGraphVariable* InGraphVariable);                                            // [0x7e84050] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueObject
	// bool GetValueObject(class UMovieGraphVariable* InGraphVariable, class UObject* OutValue, class UClass* RequestedClass);  // [0x7e83ec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueName
	// bool GetValueName(class UMovieGraphVariable* InGraphVariable, FName& OutValue);                                          // [0x7e83d10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueInt64
	// bool GetValueInt64(class UMovieGraphVariable* InGraphVariable, int64_t& OutValue);                                       // [0x7e83b80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueInt32
	// bool GetValueInt32(class UMovieGraphVariable* InGraphVariable, int32_t& OutValue);                                       // [0x7e839f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueFloat
	// bool GetValueFloat(class UMovieGraphVariable* InGraphVariable, float& OutValue);                                         // [0x7e83860] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueEnum
	// bool GetValueEnum(class UMovieGraphVariable* InGraphVariable, char& OutValue, class UEnum* RequestedEnum);               // [0x7e83690] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueDouble
	// bool GetValueDouble(class UMovieGraphVariable* InGraphVariable, double& OutValue);                                       // [0x7e834c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueContainerType
	// EMovieGraphContainerType GetValueContainerType(class UMovieGraphVariable* InGraphVariable);                              // [0x7e83370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueClass
	// bool GetValueClass(class UMovieGraphVariable* InGraphVariable, class UClass*& OutValue);                                 // [0x7e83260] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueByte
	// bool GetValueByte(class UMovieGraphVariable* InGraphVariable, char& OutValue);                                           // [0x7e830d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueBool
	// bool GetValueBool(class UMovieGraphVariable* InGraphVariable, bool& bOutValue);                                          // [0x7e82f40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineSetting
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UMoviePipelineSetting : public UObject
{ 
public:
	TWeakObjectPtr<class UMoviePipeline*>              CachedPipeline;                                             // 0x0028   (0x0008)  
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x0031   (0x0017)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting.SetIsEnabled
	// void SetIsEnabled(bool bInEnabled);                                                                                      // [0x7f0b400] Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x540ea30] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLineArgs
	// void BuildNewProcessCommandLineArgs(TArray<FString>& InOutUnrealURLParams, TArray<FString>& InOutCommandLineArgs, TArray<FString>& InOutDeviceProfileCvars, TArray<FString>& InOutExecCmds); // [0x7f089a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine
	// void BuildNewProcessCommandLine(FString& InOutUnrealURLParams, FString& InOutCommandLineArgs);                           // [0x7f08880] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCameraSetting
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UMoviePipelineCameraSetting : public UMoviePipelineSetting
{ 
public:
	EMoviePipelineShutterTiming                        ShutterTiming;                                              // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              OverscanPercentage;                                         // 0x004C   (0x0004)  
	bool                                               bRenderAllCameras;                                          // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineGameMode
/// Size: 0x0328 (808 bytes) (0x000328 - 0x000328) align 8 MaxSize: 0x0328
class AMoviePipelineGameMode : public AGameModeBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineHighResSetting
/// Size: 0x0068 (104 bytes) (0x000048 - 0x000068) align 8 MaxSize: 0x0068
class UMoviePipelineHighResSetting : public UMoviePipelineSetting
{ 
public:
	int32_t                                            TileCount;                                                  // 0x0048   (0x0004)  
	float                                              TextureSharpnessBias;                                       // 0x004C   (0x0004)  
	float                                              OverlapRatio;                                               // 0x0050   (0x0004)  
	bool                                               bOverrideSubSurfaceScattering;                              // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	int32_t                                            BurleySampleCount;                                          // 0x0058   (0x0004)  
	bool                                               bAllocateHistoryPerTile;                                    // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_7[0xB];                                       // 0x005D   (0x000B)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
{ 
public:
	bool                                               bCloseEditor;                                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            AdditionalCommandLineArguments;                             // 0x0040   (0x0010)  
	FString                                            InheritedCommandLineArguments;                              // 0x0050   (0x0010)  
	int32_t                                            InitialDelayFrameCount;                                     // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineOutputBase
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UMoviePipelineOutputBase : public UMoviePipelineSetting
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase
/// Size: 0x0060 (96 bytes) (0x000048 - 0x000060) align 8 MaxSize: 0x0060
class UMoviePipelineSetting_BlueprintBase : public UMoviePipelineSetting
{ 
public:
	FText                                              CategoryText;                                               // 0x0048   (0x0018)  
	bool                                               bIsValidOnPrimary;                                          // 0x0058   (0x0001)  
	bool                                               bIsValidOnShots;                                            // 0x0059   (0x0001)  
	bool                                               bCanBeDisabled;                                             // 0x005A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x005B   (0x0005)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveTeardownForPipelineImpl
	// void ReceiveTeardownForPipelineImpl(class UMoviePipeline* InPipeline);                                                   // [0x35d7f00] Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveSetupForPipelineImpl
	// void ReceiveSetupForPipelineImpl(class UMoviePipeline* InPipeline);                                                      // [0x35d7f00] Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveGetFormatArguments
	// FMoviePipelineFormatArgs ReceiveGetFormatArguments(FMoviePipelineFormatArgs& InOutFormatArgs);                           // [0x7eabed0] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.OnEngineTickBeginFrame
	// void OnEngineTickBeginFrame();                                                                                           // [0x35d7f00] Event|Public|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineViewFamilySetting
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UMoviePipelineViewFamilySetting : public UMoviePipelineSetting
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MovieRenderDebugWidget
/// Size: 0x02E0 (736 bytes) (0x0002E0 - 0x0002E0) align 8 MaxSize: 0x02E0
class UMovieRenderDebugWidget : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline
	// void OnInitializedForPipeline(class UMoviePipeline* ForPipeline);                                                        // [0x35d7f00] Event|Public|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineCore.MovieGraphRenderPreviewWidget
/// Size: 0x02E0 (736 bytes) (0x0002E0 - 0x0002E0) align 8 MaxSize: 0x02E0
class UMovieGraphRenderPreviewWidget : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MovieGraphRenderPreviewWidget.OnInitializedForPipeline
	// void OnInitializedForPipeline(class UMovieGraphPipeline* InPipeline);                                                    // [0x35d7f00] Event|Public|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipeline
/// Size: 0x0420 (1056 bytes) (0x000078 - 0x000420) align 8 MaxSize: 0x0420
class UMoviePipeline : public UMoviePipelineBase
{ 
public:
	SDK_UNDEFINED(16,1174) /* FMulticastInlineDelegate */ __um(OnMoviePipelineFinishedDelegate);                   // 0x0078   (0x0010)  
	class UMoviePipelineCustomTimeStep*                CustomTimeStep;                                             // 0x0088   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0090   (0x0010)  MISSED
	class UEngineCustomTimeStep*                       CachedPrevCustomTimeStep;                                   // 0x00A0   (0x0008)  
	class ULevelSequence*                              TargetSequence;                                             // 0x00A8   (0x0008)  
	class ALevelSequenceActor*                         LevelSequenceActor;                                         // 0x00B0   (0x0008)  
	class UMovieRenderDebugWidget*                     DebugWidget;                                                // 0x00B8   (0x0008)  
	class UTexture*                                    PreviewTexture;                                             // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x260];                                     // 0x00C8   (0x0260)  MISSED
	class UClass*                                      DebugWidgetClass;                                           // 0x0328   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0330   (0x0008)  MISSED
	class UMoviePipelineExecutorJob*                   CurrentJob;                                                 // 0x0338   (0x0008)  
	unsigned char                                      UnknownData03_7[0xE0];                                      // 0x0340   (0x00E0)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.SetInitializationTime
	// void SetInitializationTime(FDateTime& InDateTime);                                                                       // [0x7ee0f50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.OnMoviePipelineFinishedImpl
	// void OnMoviePipelineFinishedImpl();                                                                                      // [0x576f990] Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.Initialize
	// void Initialize(class UMoviePipelineExecutorJob* InJob);                                                                 // [0x7ee0790] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture
	// class UTexture* GetPreviewTexture();                                                                                     // [0x5ccf5d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetPipelinePrimaryConfig
	// class UMoviePipelinePrimaryConfig* GetPipelinePrimaryConfig();                                                           // [0x7ee06c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig
	// class UMoviePipelinePrimaryConfig* GetPipelineMasterConfig();                                                            // [0x7ee06c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetInitializationTimeOffset
	// FTimespan GetInitializationTimeOffset();                                                                                 // [0x7edfc80] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetInitializationTime
	// FDateTime GetInitializationTime();                                                                                       // [0x7edfc60] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipeline.GetCurrentJob
	// class UMoviePipelineExecutorJob* GetCurrentJob();                                                                        // [0x7edf1c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCustomTimeStep
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
/// Size: 0x0068 (104 bytes) (0x000048 - 0x000068) align 8 MaxSize: 0x0068
class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
{ 
public:
	int32_t                                            SpatialSampleCount;                                         // 0x0048   (0x0004)  
	int32_t                                            TemporalSampleCount;                                        // 0x004C   (0x0004)  
	bool                                               bOverrideAntiAliasing;                                      // 0x0050   (0x0001)  
	TEnumAsByte<EAntiAliasingMethod>                   AntiAliasingMethod;                                         // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0052   (0x0002)  MISSED
	int32_t                                            RenderWarmUpCount;                                          // 0x0054   (0x0004)  
	bool                                               bUseCameraCutForWarmUp;                                     // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	int32_t                                            EngineWarmUpCount;                                          // 0x005C   (0x0004)  
	bool                                               bRenderWarmUpFrames;                                        // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence
	// void UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob, bool& bShotsChanged); // [0x7ee0ff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber
	// int32_t ResolveVersionNumber(FMoviePipelineFilenameResolveParams InParams, bool bGetNextVersion);                        // [0x7ee0cc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments
	// void ResolveFilenameFormatArguments(FString InFormatString, FMoviePipelineFilenameResolveParams& InParams, FString& OutFinalPath, FMoviePipelineFormatArgs& OutMergedFormatArgs); // [0x7ee08c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.LoadManifestFileFromString
	// class UMoviePipelineQueue* LoadManifestFileFromString(FString InManifestFilePath);                                       // [0x7ee0820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetRootTimecode
	// FTimecode GetRootTimecode(class UMoviePipeline* InMoviePipeline);                                                        // [0x7ee0180] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetRootFrameNumber
	// FFrameNumber GetRootFrameNumber(class UMoviePipeline* InMoviePipeline);                                                  // [0x7ee0070] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState
	// EMovieRenderPipelineState GetPipelineState(class UMoviePipeline* InPipeline);                                            // [0x7ee06f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts
	// void GetOverallSegmentCounts(class UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount);   // [0x7ee0590] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames
	// void GetOverallOutputFrames(class UMoviePipeline* InMoviePipeline, int32_t& OutCurrentIndex, int32_t& OutTotalCount);    // [0x7ee0420] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMoviePipelineEngineChangelistLabel
	// FText GetMoviePipelineEngineChangelistLabel(class UMoviePipeline* InMoviePipeline);                                      // [0x7ee0230] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode
	// FTimecode GetMasterTimecode(class UMoviePipeline* InMoviePipeline);                                                      // [0x7ee0180] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber
	// FFrameNumber GetMasterFrameNumber(class UMoviePipeline* InMoviePipeline);                                                // [0x7ee0070] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName
	// FString GetMapPackageName(class UMoviePipelineExecutorJob* InJob);                                                       // [0x7edfee0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName
	// FText GetJobName(class UMoviePipeline* InMoviePipeline);                                                                 // [0x7edfe20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime
	// FDateTime GetJobInitializationTime(class UMoviePipeline* InMoviePipeline);                                               // [0x7edfd80] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor
	// FText GetJobAuthor(class UMoviePipeline* InMoviePipeline);                                                               // [0x7edfca0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining
	// bool GetEstimatedTimeRemaining(class UMoviePipeline* InPipeline, FTimespan& OutEstimate);                                // [0x7edfad0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution
	// FIntPoint GetEffectiveOutputResolution(class UMoviePipelinePrimaryConfig* InPrimaryConfig, class UMoviePipelineExecutorShot* InPipelineExecutorShot); // [0x7edf7e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode
	// FTimecode GetCurrentShotTimecode(class UMoviePipeline* InMoviePipeline);                                                 // [0x7edf730] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber
	// FFrameNumber GetCurrentShotFrameNumber(class UMoviePipeline* InMoviePipeline);                                           // [0x7edf640] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSequence
	// class ULevelSequence* GetCurrentSequence(class UMoviePipeline* InMoviePipeline);                                         // [0x7edf5a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics
	// FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(class UMoviePipeline* InMoviePipeline);                    // [0x7edf480] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState
	// EMovieRenderShotState GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline);                                     // [0x7edf3c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName
	// void GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, FText& OutOuterName, FText& OutInnerName);             // [0x7edf1e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance
	// float GetCurrentFocusDistance(class UMoviePipeline* InMoviePipeline);                                                    // [0x7edf0b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength
	// float GetCurrentFocalLength(class UMoviePipeline* InMoviePipeline);                                                      // [0x7edefa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentExecutorShot
	// class UMoviePipelineExecutorShot* GetCurrentExecutorShot(class UMoviePipeline* InMoviePipeline);                         // [0x7edeef0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture
	// float GetCurrentAperture(class UMoviePipeline* InMoviePipeline);                                                         // [0x7ededf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage
	// float GetCompletionPercentage(class UMoviePipeline* InPipeline);                                                         // [0x7edecf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot
	// class UMoviePipelineSetting* FindOrGetDefaultSettingForShot(class UClass* InSettingType, class UMoviePipelinePrimaryConfig* InPrimaryConfig, class UMoviePipelineExecutorShot* InShot); // [0x7edea70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence
	// class UMovieSceneSequence* DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence);               // [0x7ede730] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineColorSetting
/// Size: 0x00F0 (240 bytes) (0x000048 - 0x0000F0) align 8 MaxSize: 0x00F0
class UMoviePipelineColorSetting : public UMoviePipelineSetting
{ 
public:
	FOpenColorIODisplayConfiguration                   OCIOConfiguration;                                          // 0x0048   (0x00A0)  
	bool                                               bDisableToneCurve;                                          // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCommandLineEncoder
/// Size: 0x0088 (136 bytes) (0x000048 - 0x000088) align 8 MaxSize: 0x0088
class UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting
{ 
public:
	FString                                            FileNameFormatOverride;                                     // 0x0048   (0x0010)  
	EMoviePipelineEncodeQuality                        Quality;                                                    // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0059   (0x0007)  MISSED
	FString                                            AdditionalCommandLineArgs;                                  // 0x0060   (0x0010)  
	bool                                               bDeleteSourceFiles;                                         // 0x0070   (0x0001)  
	bool                                               bSkipEncodeOnRenderCanceled;                                // 0x0071   (0x0001)  
	bool                                               bWriteEachFrameDuration;                                    // 0x0072   (0x0001)  
	unsigned char                                      UnknownData01_7[0x15];                                      // 0x0073   (0x0015)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings
/// Size: 0x00F8 (248 bytes) (0x000038 - 0x0000F8) align 8 MaxSize: 0x00F8
class UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings
{ 
public:
	FString                                            ExecutablePath;                                             // 0x0038   (0x0010)  
	FText                                              CodecHelpText;                                              // 0x0048   (0x0018)  
	FString                                            VideoCodec;                                                 // 0x0058   (0x0010)  
	FString                                            AudioCodec;                                                 // 0x0068   (0x0010)  
	FString                                            OutputFileExtension;                                        // 0x0078   (0x0010)  
	FString                                            CommandLineFormat;                                          // 0x0088   (0x0010)  
	FString                                            VideoInputStringFormat;                                     // 0x0098   (0x0010)  
	FString                                            AudioInputStringFormat;                                     // 0x00A8   (0x0010)  
	FString                                            EncodeSettings_Low;                                         // 0x00B8   (0x0010)  
	FString                                            EncodeSettings_Med;                                         // 0x00C8   (0x0010)  
	FString                                            EncodeSettings_High;                                        // 0x00D8   (0x0010)  
	FString                                            EncodeSettings_Epic;                                        // 0x00E8   (0x0010)  
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineConfigBase
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UMoviePipelineConfigBase : public UObject
{ 
public:
	FString                                            DisplayName;                                                // 0x0028   (0x0010)  
	TArray<class UMoviePipelineSetting*>               Settings;                                                   // 0x0038   (0x0010)  
	TWeakObjectPtr<class UMoviePipelineConfigBase*>    ConfigOrigin;                                               // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.SetConfigOrigin
	// void SetConfigOrigin(class UMoviePipelineConfigBase* InConfig);                                                          // [0x7f0aea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting
	// void RemoveSetting(class UMoviePipelineSetting* InSetting);                                                              // [0x7e7a220] Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings
	// TArray<UMoviePipelineSetting*> GetUserSettings();                                                                        // [0x7f09fd0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.GetConfigOrigin
	// class UMoviePipelineConfigBase* GetConfigOrigin();                                                                       // [0x7f09900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass
	// TArray<UMoviePipelineSetting*> FindSettingsByClass(class UClass* InClass, bool bIncludeDisabledSettings, bool bExactMatch); // [0x7f094e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass
	// class UMoviePipelineSetting* FindSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings, bool bExactMatch); // [0x7f093a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass
	// class UMoviePipelineSetting* FindOrAddSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings, bool bExactMatch); // [0x7f09260] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom
	// void CopyFrom(class UMoviePipelineConfigBase* InConfig);                                                                 // [0x7f08d20] Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineDebugSettings
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UMoviePipelineDebugSettings : public UMoviePipelineSetting
{ 
public:
	bool                                               bWriteAllSamples;                                           // 0x0048   (0x0001)  
	bool                                               bCaptureFramesWithRenderDoc;                                // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x004A   (0x0002)  MISSED
	int32_t                                            CaptureFrame;                                               // 0x004C   (0x0004)  
	bool                                               bCaptureUnrealInsightsTrace;                                // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase
/// Size: 0x0118 (280 bytes) (0x000028 - 0x000118) align 8 MaxSize: 0x0118
class UMoviePipelineExecutorBase : public UObject
{ 
public:
	SDK_UNDEFINED(16,1175) /* FMulticastInlineDelegate */ __um(OnExecutorFinishedDelegate);                        // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,1176) /* FMulticastInlineDelegate */ __um(OnExecutorErroredDelegate);                         // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0060   (0x0020)  MISSED
	SDK_UNDEFINED(16,1177) /* FMulticastInlineDelegate */ __um(SocketMessageRecievedDelegate);                     // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,1178) /* FMulticastInlineDelegate */ __um(HTTPResponseRecievedDelegate);                      // 0x0090   (0x0010)  
	class UClass*                                      DebugWidgetClass;                                           // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00A8   (0x0010)  MISSED
	FString                                            UserData;                                                   // 0x00B8   (0x0010)  
	class UClass*                                      TargetPipelineClass;                                        // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData03_7[0x48];                                      // 0x00D0   (0x0048)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress
	// void SetStatusProgress(float InProgress);                                                                                // [0x7f0be80] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage
	// void SetStatusMessage(FString InStatus);                                                                                 // [0x7f0bd40] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass
	// void SetMoviePipelineClass(class UClass* InPipelineClass);                                                               // [0x7f0b6d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage
	// bool SendSocketMessage(FString InMessage);                                                                               // [0x7f0ad10] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest
	// int32_t SendHTTPRequest(FString InURL, FString InVerb, FString InMessage, TMap<FString, FString>& InHeaders);            // [0x7f0ab00] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorFinishedImpl
	// void OnExecutorFinishedImpl();                                                                                           // [0x545e330] Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl
	// void OnExecutorErroredImpl(class UMoviePipeline* ErroredPipeline, bool bFatal, FText ErrorReason);                       // [0x7f0a3f0] Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnBeginFrame
	// void OnBeginFrame();                                                                                                     // [0x5337a60] Native|Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected
	// bool IsSocketConnected();                                                                                                // [0x7f0a280] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering
	// bool IsRendering();                                                                                                      // [0x5336a10] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress
	// float GetStatusProgress();                                                                                               // [0x79c6ad0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage
	// FString GetStatusMessage();                                                                                              // [0x596fbd0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute
	// void Execute(class UMoviePipelineQueue* InPipelineQueue);                                                                // [0x79bd410] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.DisconnectSocket
	// void DisconnectSocket();                                                                                                 // [0x7f08fe0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket
	// bool ConnectSocket(FString InHostName, int32_t InPort);                                                                  // [0x7f08c30] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelCurrentJob
	// void CancelCurrentJob();                                                                                                 // [0x5701020] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelAllJobs
	// void CancelAllJobs();                                                                                                    // [0x59d3390] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
/// Size: 0x0080 (128 bytes) (0x000048 - 0x000080) align 8 MaxSize: 0x0080
class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0048   (0x0008)  MISSED
	FString                                            FileNameFormatOverride;                                     // 0x0050   (0x0010)  
	FCPXMLExportDataSource                             DataSource;                                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1F];                                      // 0x0061   (0x001F)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
/// Size: 0x0130 (304 bytes) (0x000048 - 0x000130) align 8 MaxSize: 0x0130
class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
{ 
public:
	class UClass*                                      GameModeOverride;                                           // 0x0048   (0x0008)  
	bool                                               bCinematicQualitySettings;                                  // 0x0050   (0x0001)  
	EMoviePipelineTextureStreamingMethod               TextureStreaming;                                           // 0x0051   (0x0001)  
	bool                                               bUseLODZero;                                                // 0x0052   (0x0001)  
	bool                                               bDisableHLODs;                                              // 0x0053   (0x0001)  
	bool                                               bUseHighQualityShadows;                                     // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	int32_t                                            ShadowDistanceScale;                                        // 0x0058   (0x0004)  
	float                                              ShadowRadiusThreshold;                                      // 0x005C   (0x0004)  
	bool                                               bOverrideViewDistanceScale;                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            ViewDistanceScale;                                          // 0x0064   (0x0004)  
	bool                                               bFlushGrassStreaming;                                       // 0x0068   (0x0001)  
	bool                                               bFlushStreamingManagers;                                    // 0x0069   (0x0001)  
	bool                                               bOverrideVirtualTextureFeedbackFactor;                      // 0x006A   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x006B   (0x0001)  MISSED
	int32_t                                            VirtualTextureFeedbackFactor;                               // 0x006C   (0x0004)  
	unsigned char                                      UnknownData03_7[0xC0];                                      // 0x0070   (0x00C0)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
/// Size: 0x0140 (320 bytes) (0x000118 - 0x000140) align 8 MaxSize: 0x0140
class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
{ 
public:
	class UMoviePipelineQueue*                         Queue;                                                      // 0x0118   (0x0008)  
	class UMoviePipelineBase*                          ActiveMoviePipeline;                                        // 0x0120   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0128   (0x0018)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineInProcessExecutor
/// Size: 0x0188 (392 bytes) (0x000140 - 0x000188) align 8 MaxSize: 0x0188
class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
{ 
public:
	bool                                               bUseCurrentLevel;                                           // 0x0140   (0x0001)  
	unsigned char                                      UnknownData00_7[0x47];                                      // 0x0141   (0x0047)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineOutputSetting
/// Size: 0x00B0 (176 bytes) (0x000048 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMoviePipelineOutputSetting : public UMoviePipelineSetting
{ 
public:
	FDirectoryPath                                     OutputDirectory;                                            // 0x0048   (0x0010)  
	FString                                            FileNameFormat;                                             // 0x0058   (0x0010)  
	FIntPoint                                          OutputResolution;                                           // 0x0068   (0x0008)  
	bool                                               bUseCustomFrameRate;                                        // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	FFrameRate                                         OutputFrameRate;                                            // 0x0074   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	bool                                               bOverrideExistingOutput;                                    // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	int32_t                                            HandleFrameCount;                                           // 0x0084   (0x0004)  
	int32_t                                            OutputFrameStep;                                            // 0x0088   (0x0004)  
	bool                                               bUseCustomPlaybackRange;                                    // 0x008C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x008D   (0x0003)  MISSED
	int32_t                                            CustomStartFrame;                                           // 0x0090   (0x0004)  
	int32_t                                            CustomEndFrame;                                             // 0x0094   (0x0004)  
	int32_t                                            VersionNumber;                                              // 0x0098   (0x0004)  
	bool                                               bAutoVersion;                                               // 0x009C   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x009D   (0x0003)  MISSED
	int32_t                                            ZeroPadFrameNumbers;                                        // 0x00A0   (0x0004)  
	int32_t                                            FrameNumberOffset;                                          // 0x00A4   (0x0004)  
	bool                                               bFlushDiskWritesPerShot;                                    // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelinePrimaryConfig
/// Size: 0x00E0 (224 bytes) (0x000078 - 0x0000E0) align 8 MaxSize: 0x00E0
class UMoviePipelinePrimaryConfig : public UMoviePipelineConfigBase
{ 
public:
	TMap<FString, class UMoviePipelineShotConfig*>     PerShotConfigMapping;                                       // 0x0078   (0x0050)  
	class UMoviePipelineOutputSetting*                 OutputSetting;                                              // 0x00C8   (0x0008)  
	TArray<class UMoviePipelineSetting*>               TransientSettings;                                          // 0x00D0   (0x0010)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePrimaryConfig.InitializeTransientSettings
	// void InitializeTransientSettings();                                                                                      // [0x7f0a1a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetTransientSettings
	// TArray<UMoviePipelineSetting*> GetTransientSettings();                                                                   // [0x7f0a0d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetEffectiveFrameRate
	// FFrameRate GetEffectiveFrameRate(class ULevelSequence* InSequence);                                                      // [0x7f099a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetAllSettings
	// TArray<UMoviePipelineSetting*> GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings);            // [0x7f09690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
/// Size: 0x0130 (304 bytes) (0x000118 - 0x000130) align 8 MaxSize: 0x0130
class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
{ 
public:
	class UClass*                                      ExecutorClass;                                              // 0x0118   (0x0008)  
	class UMoviePipelineQueue*                         PipelineQueue;                                              // 0x0120   (0x0008)  
	class UWorld*                                      LastLoadedWorld;                                            // 0x0128   (0x0008)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad
	// void OnMapLoad(class UWorld* InWorld);                                                                                   // [0x7f0a540] Native|Event|Public|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld
	// class UWorld* GetLastLoadedWorld();                                                                                      // [0x7f09b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed
	// void ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue);                                                         // [0x7f091d0] Native|Event|Public|BlueprintEvent 
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineSidecarCamera
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMoviePipelineSidecarCamera
{ 
	FGuid                                              BindingID;                                                  // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
	FString                                            Name;                                                       // 0x0018   (0x0010)  
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot
/// Size: 0x01D0 (464 bytes) (0x000028 - 0x0001D0) align 8 MaxSize: 0x01D0
class UMoviePipelineExecutorShot : public UObject
{ 
public:
	bool                                               bEnabled;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FString                                            OuterName;                                                  // 0x0030   (0x0010)  
	FString                                            InnerName;                                                  // 0x0040   (0x0010)  
	TArray<FMoviePipelineSidecarCamera>                SidecarCameras;                                             // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_6[0xE0];                                      // 0x0060   (0x00E0)  MISSED
	float                                              Progress;                                                   // 0x0140   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0144   (0x0004)  MISSED
	FString                                            StatusMessage;                                              // 0x0148   (0x0010)  
	class UMoviePipelineShotConfig*                    ShotOverrideConfig;                                         // 0x0158   (0x0008)  
	TWeakObjectPtr<class UMoviePipelineShotConfig*>    ShotOverridePresetOrigin;                                   // 0x0160   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0168   (0x0020)  MISSED
	TWeakObjectPtr<class UMovieGraphConfig*>           GraphPreset;                                                // 0x0188   (0x0008)  
	unsigned char                                      UnknownData04_6[0x20];                                      // 0x0190   (0x0020)  MISSED
	TArray<class UMovieJobVariableAssignmentContainer*> GraphVariableAssignments;                                  // 0x01B0   (0x0010)  
	TArray<class UMovieJobVariableAssignmentContainer*> PrimaryGraphVariableAssignments;                           // 0x01C0   (0x0010)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender
	// bool ShouldRender();                                                                                                     // [0x59d3370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress
	// void SetStatusProgress(float InProgress);                                                                                // [0x7f0bf10] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage
	// void SetStatusMessage(FString InStatus);                                                                                 // [0x7f0bde0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin
	// void SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset);                                              // [0x7f0bb90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration
	// void SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset);                                             // [0x7f0ba80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetGraphPreset
	// void SetGraphPreset(class UMovieGraphConfig* InGraphPreset, bool bUpdateVariableAssignments);                            // [0x7f0b2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.IsUsingGraphConfiguration
	// bool IsUsingGraphConfiguration();                                                                                        // [0x7f0a340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress
	// float GetStatusProgress();                                                                                               // [0x7f0a090] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage
	// FString GetStatusMessage();                                                                                              // [0x7f09fd0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin
	// class UMoviePipelineShotConfig* GetShotOverridePresetOrigin();                                                           // [0x7f09e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration
	// class UMoviePipelineShotConfig* GetShotOverrideConfiguration();                                                          // [0x5ae68b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetOrCreateJobVariableAssignmentsForGraph
	// class UMovieJobVariableAssignmentContainer* GetOrCreateJobVariableAssignmentsForGraph(class UMovieGraphConfig* InGraph, bool bIsForPrimaryOverrides); // [0x7f09c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetGraphPreset
	// class UMovieGraphConfig* GetGraphPreset();                                                                               // [0x7f09af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetCameraName
	// FString GetCameraName(int32_t InCameraIndex);                                                                            // [0x7f097c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig
	// class UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(class UClass* InConfigType);                               // [0x7f087d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob
/// Size: 0x0158 (344 bytes) (0x000028 - 0x000158) align 8 MaxSize: 0x0158
class UMoviePipelineExecutorJob : public UObject
{ 
public:
	FString                                            JobName;                                                    // 0x0028   (0x0010)  
	FSoftObjectPath                                    Sequence;                                                   // 0x0038   (0x0020)  
	FSoftObjectPath                                    Map;                                                        // 0x0058   (0x0020)  
	FString                                            author;                                                     // 0x0078   (0x0010)  
	FString                                            Comment;                                                    // 0x0088   (0x0010)  
	TArray<class UMoviePipelineExecutorShot*>          ShotInfo;                                                   // 0x0098   (0x0010)  
	FString                                            UserData;                                                   // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00B8   (0x0018)  MISSED
	FString                                            StatusMessage;                                              // 0x00D0   (0x0010)  
	float                                              StatusProgress;                                             // 0x00E0   (0x0004)  
	bool                                               bIsConsumed;                                                // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00E5   (0x0003)  MISSED
	class UMoviePipelinePrimaryConfig*                 Configuration;                                              // 0x00E8   (0x0008)  
	TWeakObjectPtr<class UMoviePipelinePrimaryConfig*> PresetOrigin;                                               // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x00F8   (0x0020)  MISSED
	bool                                               bEnabled;                                                   // 0x0118   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0119   (0x0007)  MISSED
	TWeakObjectPtr<class UMovieGraphConfig*>           GraphPreset;                                                // 0x0120   (0x0008)  
	unsigned char                                      UnknownData04_6[0x20];                                      // 0x0128   (0x0020)  MISSED
	TArray<class UMovieJobVariableAssignmentContainer*> GraphVariableAssignments;                                  // 0x0148   (0x0010)  


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress
	// void SetStatusProgress(float InProgress);                                                                                // [0x7f0bf10] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage
	// void SetStatusMessage(FString InStatus);                                                                                 // [0x7f0bde0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence
	// void SetSequence(FSoftObjectPath InSequence);                                                                            // [0x7f0b980] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin
	// void SetPresetOrigin(class UMoviePipelinePrimaryConfig* InPreset);                                                       // [0x7f0b770] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetIsEnabled
	// void SetIsEnabled(bool bInEnabled);                                                                                      // [0x7f0b370] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetGraphPreset
	// void SetGraphPreset(class UMovieGraphConfig* InGraphPreset, bool bUpdateVariableAssignments);                            // [0x7f0b1d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed
	// void SetConsumed(bool bInConsumed);                                                                                      // [0x7f0b140] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration
	// void SetConfiguration(class UMoviePipelinePrimaryConfig* InPreset);                                                      // [0x7f0af80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.OnDuplicated
	// void OnDuplicated();                                                                                                     // [0x42e0210] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.IsUsingGraphConfiguration
	// bool IsUsingGraphConfiguration();                                                                                        // [0x7f0a2d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x7f0a1c0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed
	// bool IsConsumed();                                                                                                       // [0x55210e0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress
	// float GetStatusProgress();                                                                                               // [0x7f0a050] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage
	// FString GetStatusMessage();                                                                                              // [0x7f09f50] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin
	// class UMoviePipelinePrimaryConfig* GetPresetOrigin();                                                                    // [0x7f09d50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetOrCreateJobVariableAssignmentsForGraph
	// class UMovieJobVariableAssignmentContainer* GetOrCreateJobVariableAssignmentsForGraph(class UMovieGraphConfig* InGraph); // [0x7f09b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetGraphPreset
	// class UMovieGraphConfig* GetGraphPreset();                                                                               // [0x7f09a70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration
	// class UMoviePipelinePrimaryConfig* GetConfiguration();                                                                   // [0x7f09980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineQueue
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UMoviePipelineQueue : public UObject
{ 
public:
	TArray<class UMoviePipelineExecutorJob*>           Jobs;                                                       // 0x0028   (0x0010)  
	TWeakObjectPtr<class UMoviePipelineQueue*>         QueueOrigin;                                                // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0040   (0x0028)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.SetQueueOrigin
	// void SetQueueOrigin(class UMoviePipelineQueue* InConfig);                                                                // [0x7f0b8a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.SetJobIndex
	// void SetJobIndex(class UMoviePipelineExecutorJob* InJob, int32_t Index);                                                 // [0x7f0b490] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.GetQueueOrigin
	// class UMoviePipelineQueue* GetQueueOrigin();                                                                             // [0x7f09df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.GetJobs
	// TArray<UMoviePipelineExecutorJob*> GetJobs();                                                                            // [0x7e7f0d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob
	// class UMoviePipelineExecutorJob* DuplicateJob(class UMoviePipelineExecutorJob* InJob);                                   // [0x7f09020] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob
	// void DeleteJob(class UMoviePipelineExecutorJob* InJob);                                                                  // [0x7f08f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.DeleteAllJobs
	// void DeleteAllJobs();                                                                                                    // [0x7f08ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom
	// void CopyFrom(class UMoviePipelineQueue* InQueue);                                                                       // [0x7f08db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob
	// class UMoviePipelineExecutorJob* AllocateNewJob(class UClass* InJobType);                                                // [0x7f08720] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
/// Size: 0x00A0 (160 bytes) (0x000030 - 0x0000A0) align 8 MaxSize: 0x00A0
class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
{ 
public:
	SDK_UNDEFINED(16,1179) /* FMulticastInlineDelegate */ __um(OnRenderFinished);                                  // 0x0030   (0x0010)  
	class UMoviePipelineExecutorBase*                  ActiveExecutor;                                             // 0x0040   (0x0008)  
	class UMoviePipelineQueue*                         CurrentQueue;                                               // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0050   (0x0050)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.SetConfiguration
	// void SetConfiguration(class UClass* InProgressWidgetClass, bool bRenderPlayerViewport);                                  // [0x7f0b040] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance
	// void RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor);                                      // [0x7f0a940] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor
	// class UMoviePipelineExecutorBase* RenderQueueWithExecutor(class UClass* InExecutorType);                                 // [0x7f0a7d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderJob
	// void RenderJob(class UMoviePipelineExecutorJob* InJob);                                                                  // [0x7f0a5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering
	// bool IsRendering();                                                                                                      // [0x7f0a1f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue
	// class UMoviePipelineQueue* GetQueue();                                                                                   // [0x7f09dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor
	// class UMoviePipelineExecutorBase* GetActiveExecutor();                                                                   // [0x4f9fc60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.AllocateJob
	// class UMoviePipelineExecutorJob* AllocateJob(class ULevelSequence* InSequence);                                          // [0x7f08460] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineRenderPass
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UMoviePipelineRenderPass : public UMoviePipelineSetting
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineShotConfig
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UMoviePipelineShotConfig : public UMoviePipelineConfigBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineCore.MoviePipelineVideoOutputBase
/// Size: 0x0090 (144 bytes) (0x000048 - 0x000090) align 8 MaxSize: 0x0090
class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0048   (0x0048)  MISSED
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelinePassIdentifier
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMoviePipelinePassIdentifier
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            CameraName;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineRenderPassOutputData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMoviePipelineRenderPassOutputData
{ 
	TArray<FString>                                    FilePaths;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineShotOutputData
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FMoviePipelineShotOutputData
{ 
	TWeakObjectPtr<class UMoviePipelineExecutorShot*>  Shot;                                                       // 0x0000   (0x0008)  
	TMap<FMoviePipelinePassIdentifier, FMoviePipelineRenderPassOutputData> RenderPassData;                         // 0x0008   (0x0050)  
};

/// Struct /Script/MovieRenderPipelineCore.MovieGraphRenderDataIdentifier
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FMovieGraphRenderDataIdentifier
{ 
	FName                                              RootBranchName;                                             // 0x0000   (0x0008)  
	FString                                            LayerName;                                                  // 0x0008   (0x0010)  
	FString                                            RendererName;                                               // 0x0018   (0x0010)  
	FString                                            SubResourceName;                                            // 0x0028   (0x0010)  
	FString                                            CameraName;                                                 // 0x0038   (0x0010)  
};

/// Struct /Script/MovieRenderPipelineCore.MovieGraphRenderLayerOutputData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMovieGraphRenderLayerOutputData
{ 
	TArray<FString>                                    FilePaths;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/MovieRenderPipelineCore.MovieGraphRenderOutputData
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FMovieGraphRenderOutputData
{ 
	TWeakObjectPtr<class UMoviePipelineExecutorShot*>  Shot;                                                       // 0x0000   (0x0008)  
	TMap<FMovieGraphRenderDataIdentifier, FMovieGraphRenderLayerOutputData> RenderLayerData;                       // 0x0008   (0x0050)  
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineOutputData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FMoviePipelineOutputData
{ 
	class UMoviePipelineBase*                          Pipeline;                                                   // 0x0000   (0x0008)  
	class UMoviePipelineExecutorJob*                   Job;                                                        // 0x0008   (0x0008)  
	bool                                               bSuccess;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	TArray<FMoviePipelineShotOutputData>               ShotData;                                                   // 0x0018   (0x0010)  
	TArray<FMovieGraphRenderOutputData>                GraphData;                                                  // 0x0028   (0x0010)  
};

/// Struct /Script/MovieRenderPipelineCore.MovieGraphEvaluationContext_VisitedNodeInfo
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FMovieGraphEvaluationContext_VisitedNodeInfo
{ 
	SDK_UNDEFINED(80,1180) /* TSet<UMovieGraphNode*> */ __um(VisitedNodes);                                        // 0x0000   (0x0050)  
};

/// Struct /Script/MovieRenderPipelineCore.MovieGraphTraversalContext
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FMovieGraphTraversalContext
{ 
	int32_t                                            ShotIndex;                                                  // 0x0000   (0x0004)  
	int32_t                                            ShotCount;                                                  // 0x0004   (0x0004)  
	class UMoviePipelineExecutorJob*                   Job;                                                        // 0x0008   (0x0008)  
	class UMoviePipelineExecutorShot*                  Shot;                                                       // 0x0010   (0x0008)  
	class UMovieGraphConfig*                           RootGraph;                                                  // 0x0018   (0x0008)  
	FMovieGraphRenderDataIdentifier                    RenderDataIdentifier;                                       // 0x0020   (0x0048)  
	FMovieGraphTimeStepData                            Time;                                                       // 0x0068   (0x0068)  
};

/// Struct /Script/MovieRenderPipelineCore.MovieGraphEvaluationContext
/// Size: 0x0160 (352 bytes) (0x000000 - 0x000160) align 8 MaxSize: 0x0160
struct FMovieGraphEvaluationContext
{ 
	FMovieGraphTraversalContext                        UserContext;                                                // 0x0000   (0x00D0)  
	TMap<class UMovieGraphConfig*, FMovieGraphEvaluationContext_VisitedNodeInfo> VisitedNodesByOwningGraph;        // 0x00D0   (0x0050)  
	class UMovieGraphPin*                              PinBeingFollowed;                                           // 0x0120   (0x0008)  
	TArray<class UMovieGraphSubgraphNode*>             SubgraphStack;                                              // 0x0128   (0x0010)  
	bool                                               bCircularGraphReferenceFound;                               // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0139   (0x0007)  MISSED
	FText                                              TraversalError;                                             // 0x0140   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0158   (0x0008)  MISSED
};

/// Struct /Script/MovieRenderPipelineCore.MovieGraphImagePreviewData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FMovieGraphImagePreviewData
{ 
	class UTexture*                                    Texture;                                                    // 0x0000   (0x0008)  
	FMovieGraphRenderDataIdentifier                    Identifier;                                                 // 0x0008   (0x0048)  
};

/// Struct /Script/MovieRenderPipelineCore.MovieGraphInitConfig
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMovieGraphInitConfig
{ 
	class UClass*                                      RendererClass;                                              // 0x0000   (0x0008)  
	class UClass*                                      DataSourceClass;                                            // 0x0008   (0x0008)  
	class UClass*                                      AudioRendererClass;                                         // 0x0010   (0x0008)  
	bool                                               bRenderViewport;                                            // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/MovieRenderPipelineCore.MovieGraphResolveArgs
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FMovieGraphResolveArgs
{ 
	TMap<FString, FString>                             FilenameArguments;                                          // 0x0000   (0x0050)  
	TMap<FString, FString>                             FileMetadata;                                               // 0x0050   (0x0050)  
};

/// Struct /Script/MovieRenderPipelineCore.MovieGraphFilenameResolveParams
/// Size: 0x0158 (344 bytes) (0x000000 - 0x000158) align 8 MaxSize: 0x0158
struct FMovieGraphFilenameResolveParams
{ 
	FMovieGraphRenderDataIdentifier                    RenderDataIdentifier;                                       // 0x0000   (0x0048)  
	int32_t                                            RootFrameNumber;                                            // 0x0048   (0x0004)  
	int32_t                                            ShotFrameNumber;                                            // 0x004C   (0x0004)  
	int32_t                                            RootFrameNumberRel;                                         // 0x0050   (0x0004)  
	int32_t                                            ShotFrameNumberRel;                                         // 0x0054   (0x0004)  
	TMap<FString, FString>                             FileMetadata;                                               // 0x0058   (0x0050)  
	int32_t                                            Version;                                                    // 0x00A8   (0x0004)  
	bool                                               bForceRelativeFrameNumbers;                                 // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
	FString                                            FileNameOverride;                                           // 0x00B0   (0x0010)  
	bool                                               bEnsureAbsolutePath;                                        // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
	FDateTime                                          InitializationTime;                                         // 0x00C8   (0x0008)  
	FTimespan                                          InitializationTimeOffset;                                   // 0x00D0   (0x0008)  
	int32_t                                            ZeroPadFrameNumberCount;                                    // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TMap<FString, FString>                             FileNameFormatOverrides;                                    // 0x00E0   (0x0050)  
	class UMoviePipelineExecutorJob*                   Job;                                                        // 0x0130   (0x0008)  
	class UMoviePipelineExecutorShot*                  Shot;                                                       // 0x0138   (0x0008)  
	class UMovieGraphEvaluatedConfig*                  EvaluatedConfig;                                            // 0x0140   (0x0008)  
	int32_t                                            FrameNumberOffset;                                          // 0x0148   (0x0004)  
	FFrameRate                                         DefaultFrameRate;                                           // 0x014C   (0x0008)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x0154   (0x0004)  MISSED
};

/// Struct /Script/MovieRenderPipelineCore.MovieGraphBranch
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMovieGraphBranch
{ 
	FName                                              BranchName;                                                 // 0x0000   (0x0008)  
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineSegmentWorkMetrics
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMoviePipelineSegmentWorkMetrics
{ 
	FString                                            SegmentName;                                                // 0x0000   (0x0010)  
	int32_t                                            OutputFrameIndex;                                           // 0x0010   (0x0004)  
	int32_t                                            TotalOutputFrameCount;                                      // 0x0014   (0x0004)  
	int32_t                                            OutputSubSampleIndex;                                       // 0x0018   (0x0004)  
	int32_t                                            TotalSubSampleCount;                                        // 0x001C   (0x0004)  
	int32_t                                            EngineWarmUpFrameIndex;                                     // 0x0020   (0x0004)  
	int32_t                                            TotalEngineWarmUpFrameCount;                                // 0x0024   (0x0004)  
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineCameraCutInfo
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FMoviePipelineCameraCutInfo
{ 
	unsigned char                                      UnknownData00_2[0xC8];                                      // 0x0000   (0x00C8)  MISSED
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineFormatArgs
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FMoviePipelineFormatArgs
{ 
	TMap<FString, FString>                             FilenameArguments;                                          // 0x0000   (0x0050)  
	TMap<FString, FString>                             FileMetadata;                                               // 0x0050   (0x0050)  
	class UMoviePipelineExecutorJob*                   InJob;                                                      // 0x00A0   (0x0008)  
};

/// Struct /Script/MovieRenderPipelineCore.MoviePipelineFilenameResolveParams
/// Size: 0x0120 (288 bytes) (0x000000 - 0x000120) align 8 MaxSize: 0x0120
struct FMoviePipelineFilenameResolveParams
{ 
	int32_t                                            FrameNumber;                                                // 0x0000   (0x0004)  
	int32_t                                            FrameNumberShot;                                            // 0x0004   (0x0004)  
	int32_t                                            FrameNumberRel;                                             // 0x0008   (0x0004)  
	int32_t                                            FrameNumberShotRel;                                         // 0x000C   (0x0004)  
	FString                                            CameraNameOverride;                                         // 0x0010   (0x0010)  
	FString                                            ShotNameOverride;                                           // 0x0020   (0x0010)  
	int32_t                                            ZeroPadFrameNumberCount;                                    // 0x0030   (0x0004)  
	bool                                               bForceRelativeFrameNumbers;                                 // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	FString                                            FileNameOverride;                                           // 0x0038   (0x0010)  
	TMap<FString, FString>                             FileNameFormatOverrides;                                    // 0x0048   (0x0050)  
	TMap<FString, FString>                             FileMetadata;                                               // 0x0098   (0x0050)  
	FDateTime                                          InitializationTime;                                         // 0x00E8   (0x0008)  
	FTimespan                                          InitializationTimeOffset;                                   // 0x00F0   (0x0008)  
	int32_t                                            InitializationVersion;                                      // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
	class UMoviePipelineExecutorJob*                   Job;                                                        // 0x0100   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0108   (0x0008)  MISSED
	class UMoviePipelineExecutorShot*                  ShotOverride;                                               // 0x0110   (0x0008)  
	int32_t                                            AdditionalFrameNumberOffset;                                // 0x0118   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x011C   (0x0004)  MISSED
};

#pragma pack(pop)


