
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
/// dependency: SlateCore

#pragma pack(push, 0x1)

/// Class /Script/SlateRHIRenderer.SlateFXSubsystem
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x0000D0) align 8 MaxSize: 0x00D0
class USlateFXSubsystem : public UEngineSubsystem
{ 
public:
	TMap<ESlatePostRT, class USlateRHIPostBufferProcessor*> SlatePostBufferProcessors;                             // 0x0030   (0x0050)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0080   (0x0050)  MISSED


	/// Functions
	// Function /Script/SlateRHIRenderer.SlateFXSubsystem.GetSlatePostProcessor
	// class USlateRHIPostBufferProcessor* GetSlatePostProcessor(ESlatePostRT InPostBufferBit);                                 // [0x4ee4e20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SlateRHIRenderer.SlateRHIPostBufferProcessor
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USlateRHIPostBufferProcessor : public UObject
{ 
public:
};

/// Class /Script/SlateRHIRenderer.SlatePostBufferBlur
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class USlatePostBufferBlur : public USlateRHIPostBufferProcessor
{ 
public:
	float                                              GaussianBlurStrength;                                       // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x14];                                      // 0x002C   (0x0014)  MISSED
};

/// Struct /Script/SlateRHIRenderer.SlatePostSettings
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FSlatePostSettings
{ 
	bool                                               bEnabled : 1;                                               // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UClass*                                      PostProcessorClass;                                         // 0x0008   (0x0008)  
	FString                                            PathToSlatePostRT;                                          // 0x0010   (0x0010)  
	class UTextureRenderTarget2D*                      CachedSlatePostRT;                                          // 0x0020   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/SlateRHIRenderer.SlateRHIRendererSettings
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class USlateRHIRendererSettings : public UDeveloperSettings
{ 
public:
	TMap<ESlatePostRT, FSlatePostSettings>             SlatePostSettings;                                          // 0x0038   (0x0050)  


	/// Functions
	// Function /Script/SlateRHIRenderer.SlateRHIRendererSettings.GetSlatePostSetting
	// FSlatePostSettings GetSlatePostSetting(ESlatePostRT InPostBufferBit);                                                    // [0x4ee4eb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SlateRHIRenderer.SlateRHIRendererSettings.GetMutableSlatePostSetting
	// FSlatePostSettings GetMutableSlatePostSetting(ESlatePostRT InPostBufferBit);                                             // [0x4ee4d30] Final|Native|Public|BlueprintCallable 
};

#pragma pack(pop)


