
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieRenderPipelineCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget
/// Size: 0x02E0 (736 bytes) (0x0002E0 - 0x0002E0) align 8 MaxSize: 0x02E0
class UMoviePipelineBurnInWidget : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted
	// void OnOutputFrameStarted(class UMoviePipeline* ForPipeline);                                                            // [0x35d7f00] Event|Public|BlueprintEvent 
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineBurnInSetting
/// Size: 0x00B0 (176 bytes) (0x000048 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass
{ 
public:
	FSoftClassPath                                     BurnInClass;                                                // 0x0048   (0x0020)  
	bool                                               bCompositeOntoFinalImage;                                   // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2F];                                      // 0x0069   (0x002F)  MISSED
	class UTextureRenderTarget2D*                      RenderTarget;                                               // 0x0098   (0x0008)  
	TArray<class UMoviePipelineBurnInWidget*>          BurnInWidgetInstances;                                      // 0x00A0   (0x0010)  
};

/// Struct /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableEntry
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMoviePipelineConsoleVariableEntry
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	float                                              Value;                                                      // 0x0010   (0x0004)  
	bool                                               bIsEnabled;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting
/// Size: 0x00F8 (248 bytes) (0x000048 - 0x0000F8) align 8 MaxSize: 0x00F8
class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
{ 
public:
	SDK_UNDEFINED(16,1181) /* TArray<TScriptInterface<Class>> */ __um(ConsoleVariablePresets);                     // 0x0048   (0x0010)  
	TMap<FString, float>                               ConsoleVariables;                                           // 0x0058   (0x0050)  
	TArray<FString>                                    StartConsoleCommands;                                       // 0x00A8   (0x0010)  
	TArray<FString>                                    EndConsoleCommands;                                         // 0x00B8   (0x0010)  
	TArray<FMoviePipelineConsoleVariableEntry>         CVars;                                                      // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x00D8   (0x0020)  MISSED


	/// Functions
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.UpdateConsoleVariableEnableState
	// bool UpdateConsoleVariableEnableState(FString Name, bool bIsEnabled);                                                    // [0x7f118a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.RemoveConsoleVariable
	// bool RemoveConsoleVariable(FString Name, bool bRemoveAllInstances);                                                      // [0x7f11740] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.GetConsoleVariables
	// TArray<FMoviePipelineConsoleVariableEntry> GetConsoleVariables();                                                        // [0x7f115a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.AddOrUpdateConsoleVariable
	// bool AddOrUpdateConsoleVariable(FString Name, float Value);                                                              // [0x7f113c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting.AddConsoleVariable
	// bool AddConsoleVariable(FString Name, float Value);                                                                      // [0x7f11220] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieRenderPipelineSettings.MoviePipelineWidgetRenderer
/// Size: 0x0068 (104 bytes) (0x000048 - 0x000068) align 8 MaxSize: 0x0068
class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
{ 
public:
	bool                                               bCompositeOntoFinalImage;                                   // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0049   (0x0017)  MISSED
	class UTextureRenderTarget2D*                      RenderTarget;                                               // 0x0060   (0x0008)  
};

#pragma pack(pop)


