
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

#pragma pack(push, 0x1)

/// Enum /Script/OpenColorIO.EOpenColorIOViewTransformDirection
/// Size: 0x01 (1 bytes)
enum class EOpenColorIOViewTransformDirection : uint8_t
{
	EOpenColorIOViewTransformDirection__Forward                                      = 0,
	EOpenColorIOViewTransformDirection__Inverse                                      = 1
};

/// Class /Script/OpenColorIO.OpenColorIOSettings
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UOpenColorIOSettings : public UDeveloperSettings
{ 
public:
	bool                                               bUseLegacyProcessor : 1;                                    // 0x0038:0 (0x0001)  
	bool                                               bUse32fLUT : 1;                                             // 0x0038:1 (0x0001)  
	bool                                               bSupportInverseViewTransforms : 1;                          // 0x0038:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/OpenColorIO.OpenColorIOBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
	// bool ApplyColorSpaceTransform(class UObject* WorldContextObject, FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget); // [0x7ec6dd0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OpenColorIO.OpenColorIOColorTransform
/// Size: 0x0108 (264 bytes) (0x000028 - 0x000108) align 8 MaxSize: 0x0108
class UOpenColorIOColorTransform : public UObject
{ 
public:
	bool                                               bIsDisplayViewType;                                         // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FString                                            SourceColorSpace;                                           // 0x0030   (0x0010)  
	FString                                            DestinationColorSpace;                                      // 0x0040   (0x0010)  
	FString                                            Display;                                                    // 0x0050   (0x0010)  
	FString                                            View;                                                       // 0x0060   (0x0010)  
	EOpenColorIOViewTransformDirection                 DisplayViewDirection;                                       // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	TMap<int32_t, class UTexture*>                     Textures;                                                   // 0x0078   (0x0050)  
	unsigned char                                      UnknownData02_7[0x40];                                      // 0x00C8   (0x0040)  MISSED
};

/// Struct /Script/OpenColorIO.OpenColorIOColorSpace
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FOpenColorIOColorSpace
{ 
	FString                                            ColorSpaceName;                                             // 0x0000   (0x0010)  
	int32_t                                            ColorSpaceIndex;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            FamilyName;                                                 // 0x0018   (0x0010)  
};

/// Struct /Script/OpenColorIO.OpenColorIODisplayView
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FOpenColorIODisplayView
{ 
	FString                                            Display;                                                    // 0x0000   (0x0010)  
	FString                                            View;                                                       // 0x0010   (0x0010)  
};

/// Class /Script/OpenColorIO.OpenColorIOConfiguration
/// Size: 0x00F8 (248 bytes) (0x000028 - 0x0000F8) align 8 MaxSize: 0x00F8
class UOpenColorIOConfiguration : public UObject
{ 
public:
	FFilePath                                          ConfigurationFile;                                          // 0x0028   (0x0010)  
	TArray<FOpenColorIOColorSpace>                     DesiredColorSpaces;                                         // 0x0038   (0x0010)  
	TArray<FOpenColorIODisplayView>                    DesiredDisplayViews;                                        // 0x0048   (0x0010)  
	TMap<FString, FString>                             Context;                                                    // 0x0058   (0x0050)  
	TArray<class UOpenColorIOColorTransform*>          ColorTransforms;                                            // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x00B8   (0x0030)  MISSED
	FString                                            ConfigHash;                                                 // 0x00E8   (0x0010)  


	/// Functions
	// Function /Script/OpenColorIO.OpenColorIOConfiguration.ReloadExistingColorspaces
	// void ReloadExistingColorspaces(bool bForce);                                                                             // [0x7ec7ae0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOpenColorIODisplayExtensionWrapper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
	// void SetSceneExtensionIsActiveFunctions(TArray<FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions);                  // [0x7ec7f00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
	// void SetSceneExtensionIsActiveFunction(FSceneViewExtensionIsActiveFunctor& IsActiveFunction);                            // [0x7ec7e10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
	// void SetOpenColorIOConfiguration(FOpenColorIODisplayConfiguration InDisplayConfiguration);                               // [0x7ec7c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension
	// void RemoveSceneExtension();                                                                                             // [0x7ec7b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.GetOpenColorIOConfiguration
	// FOpenColorIODisplayConfiguration GetOpenColorIOConfiguration();                                                          // [0x7ec7950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
	// class UOpenColorIODisplayExtensionWrapper* CreateOpenColorIODisplayExtension(FOpenColorIODisplayConfiguration InDisplayConfiguration, FSceneViewExtensionIsActiveFunctor& IsActiveFunction); // [0x7ec76d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateInGameOpenColorIODisplayExtension
	// class UOpenColorIODisplayExtensionWrapper* CreateInGameOpenColorIODisplayExtension(FOpenColorIODisplayConfiguration InDisplayConfiguration); // [0x7ec73c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OpenColorIO.OpenColorIOColorConversionSettings
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FOpenColorIOColorConversionSettings
{ 
	class UOpenColorIOConfiguration*                   ConfigurationSource;                                        // 0x0000   (0x0008)  
	FOpenColorIOColorSpace                             SourceColorSpace;                                           // 0x0008   (0x0028)  
	FOpenColorIOColorSpace                             DestinationColorSpace;                                      // 0x0030   (0x0028)  
	FOpenColorIODisplayView                            DestinationDisplayView;                                     // 0x0058   (0x0020)  
	EOpenColorIOViewTransformDirection                 DisplayViewDirection;                                       // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1F];                                      // 0x0079   (0x001F)  MISSED
};

/// Struct /Script/OpenColorIO.OpenColorIODisplayConfiguration
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FOpenColorIODisplayConfiguration
{ 
	bool                                               bIsEnabled;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FOpenColorIOColorConversionSettings                ColorConfiguration;                                         // 0x0008   (0x0098)  
};

#pragma pack(pop)


