
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
/// dependency: InterchangeCore

#pragma pack(push, 0x1)

/// Enum /Script/InterchangeFactoryNodes.EInterchangeSkeletalMeshContentType
/// Size: 0x01 (1 bytes)
enum class EInterchangeSkeletalMeshContentType : uint8_t
{
	EInterchangeSkeletalMeshContentType__All                                         = 0,
	EInterchangeSkeletalMeshContentType__Geometry                                    = 1,
	EInterchangeSkeletalMeshContentType__SkinningWeights                             = 2
};

/// Class /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode
/// Size: 0x0180 (384 bytes) (0x000140 - 0x000180) align 8 MaxSize: 0x0180
class UInterchangeActorFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0140   (0x0040)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomMobility
	// bool SetCustomMobility(char& AttributeValue, bool bAddApplyDelegate);                                                    // [0x7faab10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomLocalTransform
	// bool SetCustomLocalTransform(FTransform& AttributeValue, bool bAddApplyDelegate);                                        // [0x7fa92e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomGlobalTransform
	// bool SetCustomGlobalTransform(FTransform& AttributeValue, bool bAddApplyDelegate);                                       // [0x7fa92e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomActorClassName
	// bool SetCustomActorClassName(FString AttributeValue);                                                                    // [0x7fa74a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomMobility
	// bool GetCustomMobility(char& AttributeValue);                                                                            // [0x7fa1a50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomLocalTransform
	// bool GetCustomLocalTransform(FTransform& AttributeValue);                                                                // [0x7fa0930] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomGlobalTransform
	// bool GetCustomGlobalTransform(FTransform& AttributeValue);                                                               // [0x7fa0930] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomActorClassName
	// bool GetCustomActorClassName(FString& AttributeValue);                                                                   // [0x7f9f070] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode
/// Size: 0x01C0 (448 bytes) (0x000180 - 0x0001C0) align 8 MaxSize: 0x01C0
class UInterchangePhysicalCameraFactoryNode : public UInterchangeActorFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0180   (0x0040)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomSensorWidth
	// bool SetCustomSensorWidth(float& AttributeValue, bool bAddApplyDelegate);                                                // [0x7f6e190] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomSensorHeight
	// bool SetCustomSensorHeight(float& AttributeValue, bool bAddApplyDelegate);                                               // [0x7f6e0a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomFocusMethod
	// bool SetCustomFocusMethod(ECameraFocusMethod& AttributeValue, bool bAddApplyDelegate);                                   // [0x7f6d4e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomFocalLength
	// bool SetCustomFocalLength(float& AttributeValue, bool bAddApplyDelegate);                                                // [0x7f6d3f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomSensorWidth
	// bool GetCustomSensorWidth(float& AttributeValue);                                                                        // [0x7f6c650] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomSensorHeight
	// bool GetCustomSensorHeight(float& AttributeValue);                                                                       // [0x7f6c550] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomFocusMethod
	// bool GetCustomFocusMethod(ECameraFocusMethod& AttributeValue);                                                           // [0x7f6bac0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomFocalLength
	// bool GetCustomFocalLength(float& AttributeValue);                                                                        // [0x7f6b9c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode
/// Size: 0x01E0 (480 bytes) (0x000180 - 0x0001E0) align 8 MaxSize: 0x01E0
class UInterchangeStandardCameraFactoryNode : public UInterchangeActorFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0180   (0x0060)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomWidth
	// bool SetCustomWidth(float& AttributeValue, bool bAddApplyDelegate);                                                      // [0x7f6e890] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomProjectionMode
	// bool SetCustomProjectionMode(TEnumAsByte<ECameraProjectionMode>& AttributeValue, bool bAddApplyDelegate);                // [0x7f6dec0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomNearClipPlane
	// bool SetCustomNearClipPlane(float& AttributeValue, bool bAddApplyDelegate);                                              // [0x7f6dc50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomFieldOfView
	// bool SetCustomFieldOfView(float& AttributeValue, bool bAddApplyDelegate);                                                // [0x7f6d300] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomFarClipPlane
	// bool SetCustomFarClipPlane(float& AttributeValue, bool bAddApplyDelegate);                                               // [0x7f6d210] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomAspectRatio
	// bool SetCustomAspectRatio(float& AttributeValue, bool bAddApplyDelegate);                                                // [0x7f6ce00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomWidth
	// bool GetCustomWidth(float& AttributeValue);                                                                              // [0x7f6cc20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomProjectionMode
	// bool GetCustomProjectionMode(TEnumAsByte<ECameraProjectionMode>& AttributeValue);                                        // [0x7f6c3b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomNearClipPlane
	// bool GetCustomNearClipPlane(float& AttributeValue);                                                                      // [0x7f6c140] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomFieldOfView
	// bool GetCustomFieldOfView(float& AttributeValue);                                                                        // [0x7f6b8c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomFarClipPlane
	// bool GetCustomFarClipPlane(float& AttributeValue);                                                                       // [0x7f6b7c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomAspectRatio
	// bool GetCustomAspectRatio(float& AttributeValue);                                                                        // [0x7f6b3f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode
/// Size: 0x01B0 (432 bytes) (0x000180 - 0x0001B0) align 8 MaxSize: 0x01B0
class UInterchangeDecalActorFactoryNode : public UInterchangeActorFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0180   (0x0030)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.SetCustomSortOrder
	// bool SetCustomSortOrder(int32_t& AttributeValue, bool bAddApplyDelegate);                                                // [0x7f6e280] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.SetCustomDecalSize
	// bool SetCustomDecalSize(FVector& AttributeValue, bool bAddApplyDelegate);                                                // [0x7f6d070] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.SetCustomDecalMaterialPathName
	// bool SetCustomDecalMaterialPathName(FString AttributeValue);                                                             // [0x7f6cfc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x7f6cd20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.GetCustomSortOrder
	// bool GetCustomSortOrder(int32_t& AttributeValue);                                                                        // [0x7f6c750] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.GetCustomDecalSize
	// bool GetCustomDecalSize(FVector& AttributeValue);                                                                        // [0x7f6b660] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalActorFactoryNode.GetCustomDecalMaterialPathName
	// bool GetCustomDecalMaterialPathName(FString& AttributeValue);                                                            // [0x7f6b5a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeBaseMaterialFactoryNode
/// Size: 0x0150 (336 bytes) (0x000140 - 0x000150) align 8 MaxSize: 0x0150
class UInterchangeBaseMaterialFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseMaterialFactoryNode.SetCustomIsMaterialImportEnabled
	// bool SetCustomIsMaterialImportEnabled(bool& AttributeValue);                                                             // [0x7faa160] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseMaterialFactoryNode.GetCustomIsMaterialImportEnabled
	// bool GetCustomIsMaterialImportEnabled(bool& AttributeValue);                                                             // [0x7fa13d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode
/// Size: 0x0170 (368 bytes) (0x000150 - 0x000170) align 8 MaxSize: 0x0170
class UInterchangeDecalMaterialFactoryNode : public UInterchangeBaseMaterialFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0150   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.SetCustomNormalTexturePath
	// bool SetCustomNormalTexturePath(FString AttributeValue);                                                                 // [0x7f6dd40] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.SetCustomDiffuseTexturePath
	// bool SetCustomDiffuseTexturePath(FString AttributeValue);                                                                // [0x7f6d160] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x7f6cd20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.GetCustomNormalTexturePath
	// bool GetCustomNormalTexturePath(FString& AttributeValue);                                                                // [0x7f6c240] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeDecalMaterialFactoryNode.GetCustomDiffuseTexturePath
	// bool GetCustomDiffuseTexturePath(FString& AttributeValue);                                                               // [0x7f6b700] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode
/// Size: 0x0170 (368 bytes) (0x000140 - 0x000170) align 8 MaxSize: 0x0170
class UInterchangeLevelSequenceFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0140   (0x0030)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.SetCustomFrameRate
	// bool SetCustomFrameRate(float& AttributeValue);                                                                          // [0x7f6d5d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.RemoveCustomAnimationTrackUid
	// bool RemoveCustomAnimationTrackUid(FString AnimationTrackUid);                                                           // [0x7f6cd50] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x7f6cd20] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetCustomFrameRate
	// bool GetCustomFrameRate(float& AttributeValue);                                                                          // [0x7f6bbc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetCustomAnimationTrackUids
	// void GetCustomAnimationTrackUids(TArray<FString>& OutAnimationTrackUids);                                                // [0x7f6b320] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetCustomAnimationTrackUidCount
	// int32_t GetCustomAnimationTrackUidCount();                                                                               // [0x7f6b2f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.GetCustomAnimationTrackUid
	// void GetCustomAnimationTrackUid(int32_t Index, FString& OutAnimationTrackUid);                                           // [0x7f6b200] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLevelSequenceFactoryNode.AddCustomAnimationTrackUid
	// bool AddCustomAnimationTrackUid(FString AnimationTrackUid);                                                              // [0x7f6b150] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode
/// Size: 0x01C0 (448 bytes) (0x000180 - 0x0001C0) align 8 MaxSize: 0x01C0
class UInterchangeBaseLightFactoryNode : public UInterchangeActorFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0180   (0x0040)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomUseTemperature
	// bool SetCustomUseTemperature(bool AttributeValue, bool bAddApplyDelegate);                                               // [0x7f6e7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomTemperature
	// bool SetCustomTemperature(float AttributeValue, bool bAddApplyDelegate);                                                 // [0x7f6e510] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomLightColor
	// bool SetCustomLightColor(FColor& AttributeValue, bool bAddApplyDelegate);                                                // [0x7f6da90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomIntensity
	// bool SetCustomIntensity(float AttributeValue, bool bAddApplyDelegate);                                                   // [0x7f6d8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomUseTemperature
	// bool GetCustomUseTemperature(bool& AttributeValue);                                                                      // [0x7f6cb70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomTemperature
	// bool GetCustomTemperature(float& AttributeValue);                                                                        // [0x7f6c960] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomLightColor
	// bool GetCustomLightColor(FColor& AttributeValue);                                                                        // [0x7f6bff0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomIntensity
	// bool GetCustomIntensity(float& AttributeValue);                                                                          // [0x7f6be90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeDirectionalLightFactoryNode
/// Size: 0x01C0 (448 bytes) (0x0001C0 - 0x0001C0) align 8 MaxSize: 0x01C0
class UInterchangeDirectionalLightFactoryNode : public UInterchangeBaseLightFactoryNode
{ 
public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode
/// Size: 0x0220 (544 bytes) (0x0001C0 - 0x000220) align 8 MaxSize: 0x0220
class UInterchangeLightFactoryNode : public UInterchangeBaseLightFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x01C0   (0x0060)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomUseIESBrightness
	// bool SetCustomUseIESBrightness(bool& AttributeValue, bool bAddApplyDelegate);                                            // [0x7f6e5e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomRotation
	// bool SetCustomRotation(FRotator& AttributeValue, bool bAddApplyDelegate);                                                // [0x7f6dfb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomIntensityUnits
	// bool SetCustomIntensityUnits(ELightUnits AttributeValue, bool bAddApplyDelegate);                                        // [0x7f6d9c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomIESTexture
	// bool SetCustomIESTexture(FString AttributeValue);                                                                        // [0x7f6d770] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomIESBrightnessScale
	// bool SetCustomIESBrightnessScale(float& AttributeValue, bool bAddApplyDelegate);                                         // [0x7f6d680] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomAttenuationRadius
	// bool SetCustomAttenuationRadius(float AttributeValue, bool bAddApplyDelegate);                                           // [0x7f6cef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomUseIESBrightness
	// bool GetCustomUseIESBrightness(bool& AttributeValue);                                                                    // [0x7f6ca10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomRotation
	// bool GetCustomRotation(FRotator& AttributeValue);                                                                        // [0x7f6c4b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomIntensityUnits
	// bool GetCustomIntensityUnits(ELightUnits& AttributeValue);                                                               // [0x7f6bf40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomIESTexture
	// bool GetCustomIESTexture(FString& AttributeValue);                                                                       // [0x7f6bd20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomIESBrightnessScale
	// bool GetCustomIESBrightnessScale(float& AttributeValue);                                                                 // [0x7f6bc70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomAttenuationRadius
	// bool GetCustomAttenuationRadius(float& AttributeValue);                                                                  // [0x7f6b4f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode
/// Size: 0x0240 (576 bytes) (0x000220 - 0x000240) align 8 MaxSize: 0x0240
class UInterchangeRectLightFactoryNode : public UInterchangeLightFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0220   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode.SetCustomSourceWidth
	// bool SetCustomSourceWidth(float AttributeValue, bool bAddApplyDelegate);                                                 // [0x7f6e440] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode.SetCustomSourceHeight
	// bool SetCustomSourceHeight(float AttributeValue, bool bAddApplyDelegate);                                                // [0x7f6e370] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode.GetCustomSourceWidth
	// bool GetCustomSourceWidth(float& AttributeValue);                                                                        // [0x7f6c8b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeRectLightFactoryNode.GetCustomSourceHeight
	// bool GetCustomSourceHeight(float& AttributeValue);                                                                       // [0x7f6c800] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode
/// Size: 0x0240 (576 bytes) (0x000220 - 0x000240) align 8 MaxSize: 0x0240
class UInterchangePointLightFactoryNode : public UInterchangeLightFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0220   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode.SetCustomUseInverseSquaredFalloff
	// bool SetCustomUseInverseSquaredFalloff(bool AttributeValue, bool bAddApplyDelegate);                                     // [0x7f6e6d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode.SetCustomLightFalloffExponent
	// bool SetCustomLightFalloffExponent(float AttributeValue, bool bAddApplyDelegate);                                        // [0x7f6db80] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode.GetCustomUseInverseSquaredFalloff
	// bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue);                                                            // [0x7f6cac0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePointLightFactoryNode.GetCustomLightFalloffExponent
	// bool GetCustomLightFalloffExponent(float& AttributeValue);                                                               // [0x7f6c090] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode
/// Size: 0x0260 (608 bytes) (0x000240 - 0x000260) align 8 MaxSize: 0x0260
class UInterchangeSpotLightFactoryNode : public UInterchangePointLightFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0240   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.SetCustomOuterConeAngle
	// bool SetCustomOuterConeAngle(float AttributeValue, bool bAddApplyDelegate);                                              // [0x7f6ddf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.SetCustomInnerConeAngle
	// bool SetCustomInnerConeAngle(float AttributeValue, bool bAddApplyDelegate);                                              // [0x7f6d820] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.GetCustomOuterConeAngle
	// bool GetCustomOuterConeAngle(float& AttributeValue);                                                                     // [0x7f6c300] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.GetCustomInnerConeAngle
	// bool GetCustomInnerConeAngle(float& AttributeValue);                                                                     // [0x7f6bde0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode
/// Size: 0x0170 (368 bytes) (0x000140 - 0x000170) align 8 MaxSize: 0x0170
class UInterchangePhysicsAssetFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0140   (0x0030)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.SetCustomSkeletalMeshUid
	// bool SetCustomSkeletalMeshUid(FString AttributeValue);                                                                   // [0x7f7d400] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.InitializePhysicsAssetNode
	// void InitializePhysicsAssetNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);                           // [0x7f78cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x7f6cd20] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.GetCustomSkeletalMeshUid
	// bool GetCustomSkeletalMeshUid(FString& AttributeValue);                                                                  // [0x7f77e50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode
/// Size: 0x0160 (352 bytes) (0x000140 - 0x000160) align 8 MaxSize: 0x0160
class UInterchangeSceneVariantSetsFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0140   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.RemoveCustomVariantSetUid
	// bool RemoveCustomVariantSetUid(FString VariantUid);                                                                      // [0x7f79350] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x7f6cd20] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUids
	// void GetCustomVariantSetUids(TArray<FString>& OutVariantUids);                                                           // [0x7f782b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUidCount
	// int32_t GetCustomVariantSetUidCount();                                                                                   // [0x7f78280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUid
	// void GetCustomVariantSetUid(int32_t Index, FString& OutVariantUid);                                                      // [0x7f78190] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.AddCustomVariantSetUid
	// bool AddCustomVariantSetUid(FString VariantUid);                                                                         // [0x7f757c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode
/// Size: 0x0190 (400 bytes) (0x000140 - 0x000190) align 8 MaxSize: 0x0190
class UInterchangeSkeletonFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0140   (0x0050)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomUseTimeZeroForBindPose
	// bool SetCustomUseTimeZeroForBindPose(bool& AttributeValue);                                                              // [0x7f7d720] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomSkeletalMeshFactoryNodeUid
	// bool SetCustomSkeletalMeshFactoryNodeUid(FString AttributeValue);                                                        // [0x7f7d270] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomRootJointUid
	// bool SetCustomRootJointUid(FString AttributeValue);                                                                      // [0x7f7cef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.InitializeSkeletonNode
	// void InitializeSkeletonNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);                               // [0x7f78ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x7f6cd20] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomUseTimeZeroForBindPose
	// bool GetCustomUseTimeZeroForBindPose(bool& AttributeValue);                                                              // [0x7f78090] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomSkeletalMeshFactoryNodeUid
	// bool GetCustomSkeletalMeshFactoryNodeUid(FString& AttributeValue);                                                       // [0x7f77d30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomRootJointUid
	// bool GetCustomRootJointUid(FString& AttributeValue);                                                                     // [0x7f77b10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode
/// Size: 0x03D0 (976 bytes) (0x000140 - 0x0003D0) align 8 MaxSize: 0x03D0
class UInterchangeTextureFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x290];                                     // 0x0140   (0x0290)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomVirtualTextureStreaming
	// bool SetCustomVirtualTextureStreaming(bool& AttributeValue, bool bAddApplyDelegate);                                     // [0x7f7d890] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomTranslatedTextureNodeUid
	// bool SetCustomTranslatedTextureNodeUid(FString AttributeValue);                                                          // [0x7f7d590] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomSRGB
	// bool SetCustomSRGB(bool& AttributeValue, bool bAddApplyDelegate);                                                        // [0x7f7d080] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPreferCompressedSourceData
	// bool SetCustomPreferCompressedSourceData(bool& AttributeValue);                                                          // [0x7f7cd80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPowerOfTwoMode
	// bool SetCustomPowerOfTwoMode(char& AttributeValue, bool bAddApplyDelegate);                                              // [0x7f7cbb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPaddingColor
	// bool SetCustomPaddingColor(FColor& AttributeValue, bool bAddApplyDelegate);                                              // [0x7f7c9f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMipLoadOptions
	// bool SetCustomMipLoadOptions(char& AttributeValue, bool bAddApplyDelegate);                                              // [0x7f7c800] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMipGenSettings
	// bool SetCustomMipGenSettings(char& AttributeValue, bool bAddApplyDelegate);                                              // [0x7f7c630] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMaxTextureSize
	// bool SetCustomMaxTextureSize(int32_t& AttributeValue, bool bAddApplyDelegate);                                           // [0x7f7c460] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLossyCompressionAmount
	// bool SetCustomLossyCompressionAmount(char& AttributeValue, bool bAddApplyDelegate);                                      // [0x7f7c290] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLODGroup
	// bool SetCustomLODGroup(char& AttributeValue, bool bAddApplyDelegate);                                                    // [0x7f7c0a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLODBias
	// bool SetCustomLODBias(int32_t& AttributeValue, bool bAddApplyDelegate);                                                  // [0x7f7beb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomFilter
	// bool SetCustomFilter(char& AttributeValue, bool bAddApplyDelegate);                                                      // [0x7f7bcc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDownscaleOptions
	// bool SetCustomDownscaleOptions(char& AttributeValue, bool bAddApplyDelegate);                                            // [0x7f7bad0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDownscale
	// bool SetCustomDownscale(float& AttributeValue, bool bAddApplyDelegate);                                                  // [0x7f7b9e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDeferCompression
	// bool SetCustomDeferCompression(bool& AttributeValue, bool bAddApplyDelegate);                                            // [0x7f7b810] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionSettings
	// bool SetCustomCompressionSettings(char& AttributeValue, bool bAddApplyDelegate);                                         // [0x7f7b620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionQuality
	// bool SetCustomCompressionQuality(char& AttributeValue, bool bAddApplyDelegate);                                          // [0x7f7b450] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionNoAlpha
	// bool SetCustomCompressionNoAlpha(bool& AttributeValue, bool bAddApplyDelegate);                                          // [0x7f7b280] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompositeTextureMode
	// bool SetCustomCompositeTextureMode(char& AttributeValue, bool bAddApplyDelegate);                                        // [0x7f7b0b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompositePower
	// bool SetCustomCompositePower(float& AttributeValue, bool bAddApplyDelegate);                                             // [0x7f7aee0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomChromaKeyThreshold
	// bool SetCustomChromaKeyThreshold(float& AttributeValue, bool bAddApplyDelegate);                                         // [0x7f7ad10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomChromaKeyColor
	// bool SetCustomChromaKeyColor(FColor& AttributeValue, bool bAddApplyDelegate);                                            // [0x7f7ab50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombUseLegacyGamma
	// bool SetCustombUseLegacyGamma(bool& AttributeValue, bool bAddApplyDelegate);                                             // [0x7f7e1c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombPreserveBorder
	// bool SetCustombPreserveBorder(bool& AttributeValue, bool bAddApplyDelegate);                                             // [0x7f7dff0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombFlipGreenChannel
	// bool SetCustombFlipGreenChannel(bool& AttributeValue, bool bAddApplyDelegate);                                           // [0x7f7de20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombDoScaleMipsForAlphaCoverage
	// bool SetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue, bool bAddApplyDelegate);                                // [0x7f7dc50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombChromaKeyTexture
	// bool SetCustombChromaKeyTexture(bool& AttributeValue, bool bAddApplyDelegate);                                           // [0x7f7da80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAlphaCoverageThresholds
	// bool SetCustomAlphaCoverageThresholds(FVector4& AttributeValue, bool bAddApplyDelegate);                                 // [0x7f7a970] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAllowNonPowerOfTwo
	// bool SetCustomAllowNonPowerOfTwo(bool& AttributeValue);                                                                  // [0x7f7a800] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustVibrance
	// bool SetCustomAdjustVibrance(float& AttributeValue, bool bAddApplyDelegate);                                             // [0x7f7a630] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustSaturation
	// bool SetCustomAdjustSaturation(float& AttributeValue, bool bAddApplyDelegate);                                           // [0x7f7a460] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustRGBCurve
	// bool SetCustomAdjustRGBCurve(float& AttributeValue, bool bAddApplyDelegate);                                             // [0x7f7a290] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustMinAlpha
	// bool SetCustomAdjustMinAlpha(float& AttributeValue, bool bAddApplyDelegate);                                             // [0x7f7a0c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustMaxAlpha
	// bool SetCustomAdjustMaxAlpha(float& AttributeValue, bool bAddApplyDelegate);                                             // [0x7f79ef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustHue
	// bool SetCustomAdjustHue(float& AttributeValue, bool bAddApplyDelegate);                                                  // [0x7f79d20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustBrightnessCurve
	// bool SetCustomAdjustBrightnessCurve(float& AttributeValue, bool bAddApplyDelegate);                                      // [0x7f79b50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustBrightness
	// bool SetCustomAdjustBrightness(float& AttributeValue, bool bAddApplyDelegate);                                           // [0x7f79980] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.InitializeTextureNode
	// void InitializeTextureNode(FString UniqueID, FString DisplayLabel, FString InAssetName);                                 // [0x7f79130] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x7f6cd20] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomVirtualTextureStreaming
	// bool GetCustomVirtualTextureStreaming(bool& AttributeValue);                                                             // [0x7f78380] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomTranslatedTextureNodeUid
	// bool GetCustomTranslatedTextureNodeUid(FString& AttributeValue);                                                         // [0x7f77f70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomSRGB
	// bool GetCustomSRGB(bool& AttributeValue);                                                                                // [0x7f77c30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPreferCompressedSourceData
	// bool GetCustomPreferCompressedSourceData(bool& AttributeValue);                                                          // [0x7f77a10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPowerOfTwoMode
	// bool GetCustomPowerOfTwoMode(char& AttributeValue);                                                                      // [0x7f77910] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPaddingColor
	// bool GetCustomPaddingColor(FColor& AttributeValue);                                                                      // [0x7f77820] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMipLoadOptions
	// bool GetCustomMipLoadOptions(char& AttributeValue);                                                                      // [0x7f77720] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMipGenSettings
	// bool GetCustomMipGenSettings(char& AttributeValue);                                                                      // [0x7f77620] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMaxTextureSize
	// bool GetCustomMaxTextureSize(int32_t& AttributeValue);                                                                   // [0x7f77520] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLossyCompressionAmount
	// bool GetCustomLossyCompressionAmount(char& AttributeValue);                                                              // [0x7f77420] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLODGroup
	// bool GetCustomLODGroup(char& AttributeValue);                                                                            // [0x7f77320] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLODBias
	// bool GetCustomLODBias(int32_t& AttributeValue);                                                                          // [0x7f77220] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomFilter
	// bool GetCustomFilter(char& AttributeValue);                                                                              // [0x7f77120] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDownscaleOptions
	// bool GetCustomDownscaleOptions(char& AttributeValue);                                                                    // [0x7f77020] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDownscale
	// bool GetCustomDownscale(float& AttributeValue);                                                                          // [0x7f76f70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDeferCompression
	// bool GetCustomDeferCompression(bool& AttributeValue);                                                                    // [0x7f76e70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionSettings
	// bool GetCustomCompressionSettings(char& AttributeValue);                                                                 // [0x7f76d70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionQuality
	// bool GetCustomCompressionQuality(char& AttributeValue);                                                                  // [0x7f76c70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionNoAlpha
	// bool GetCustomCompressionNoAlpha(bool& AttributeValue);                                                                  // [0x7f76b70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompositeTextureMode
	// bool GetCustomCompositeTextureMode(char& AttributeValue);                                                                // [0x7f76a70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompositePower
	// bool GetCustomCompositePower(float& AttributeValue);                                                                     // [0x7f76970] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomChromaKeyThreshold
	// bool GetCustomChromaKeyThreshold(float& AttributeValue);                                                                 // [0x7f76870] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomChromaKeyColor
	// bool GetCustomChromaKeyColor(FColor& AttributeValue);                                                                    // [0x7f76780] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombUseLegacyGamma
	// bool GetCustombUseLegacyGamma(bool& AttributeValue);                                                                     // [0x7f78880] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombPreserveBorder
	// bool GetCustombPreserveBorder(bool& AttributeValue);                                                                     // [0x7f78780] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombFlipGreenChannel
	// bool GetCustombFlipGreenChannel(bool& AttributeValue);                                                                   // [0x7f78680] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombDoScaleMipsForAlphaCoverage
	// bool GetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue);                                                        // [0x7f78580] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombChromaKeyTexture
	// bool GetCustombChromaKeyTexture(bool& AttributeValue);                                                                   // [0x7f78480] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAlphaCoverageThresholds
	// bool GetCustomAlphaCoverageThresholds(FVector4& AttributeValue);                                                         // [0x7f76670] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAllowNonPowerOfTwo
	// bool GetCustomAllowNonPowerOfTwo(bool& AttributeValue);                                                                  // [0x7f76570] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustVibrance
	// bool GetCustomAdjustVibrance(float& AttributeValue);                                                                     // [0x7f76470] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustSaturation
	// bool GetCustomAdjustSaturation(float& AttributeValue);                                                                   // [0x7f76370] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustRGBCurve
	// bool GetCustomAdjustRGBCurve(float& AttributeValue);                                                                     // [0x7f76270] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustMinAlpha
	// bool GetCustomAdjustMinAlpha(float& AttributeValue);                                                                     // [0x7f76170] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustMaxAlpha
	// bool GetCustomAdjustMaxAlpha(float& AttributeValue);                                                                     // [0x7f76070] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustHue
	// bool GetCustomAdjustHue(float& AttributeValue);                                                                          // [0x7f75f70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustBrightnessCurve
	// bool GetCustomAdjustBrightnessCurve(float& AttributeValue);                                                              // [0x7f75e70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustBrightness
	// bool GetCustomAdjustBrightness(float& AttributeValue);                                                                   // [0x7f75d70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode
/// Size: 0x0400 (1024 bytes) (0x0003D0 - 0x000400) align 8 MaxSize: 0x0400
class UInterchangeTexture2DArrayFactoryNode : public UInterchangeTextureFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x03D0   (0x0030)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.SetCustomAddressZ
	// bool SetCustomAddressZ(char AttributeValue, bool bAddApplyDelegate);                                                     // [0x7f797c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressZ
	// bool GetCustomAddressZ(char& AttributeValue);                                                                            // [0x7f75c70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressY
	// bool GetCustomAddressY(char& AttributeValue);                                                                            // [0x7f75a70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressX
	// bool GetCustomAddressX(char& AttributeValue);                                                                            // [0x7f75870] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode
/// Size: 0x0468 (1128 bytes) (0x0003D0 - 0x000468) align 8 MaxSize: 0x0468
class UInterchangeTexture2DFactoryNode : public UInterchangeTextureFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x03D0   (0x0098)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlocks
	// void SetSourceBlocks(TMap<int32_t, FString>& InSourceBlocks);                                                            // [0x7f7e5b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlockByCoordinates
	// void SetSourceBlockByCoordinates(int32_t X, int32_t Y, FString InSourceFile);                                            // [0x7f7e480] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlock
	// void SetSourceBlock(int32_t BlockIndex, FString InSourceFile);                                                           // [0x7f7e390] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetCustomAddressY
	// bool SetCustomAddressY(TEnumAsByte<TextureAddress> AttributeValue, bool bAddApplyDelegate);                              // [0x7f795e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetCustomAddressX
	// bool SetCustomAddressX(TEnumAsByte<TextureAddress> AttributeValue, bool bAddApplyDelegate);                              // [0x7f79400] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlocks
	// TMap<int32_t, FString> GetSourceBlocks();                                                                                // [0x7f78bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlockByCoordinates
	// bool GetSourceBlockByCoordinates(int32_t X, int32_t Y, FString& OutSourceFile);                                          // [0x7f78a80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlock
	// bool GetSourceBlock(int32_t BlockIndex, FString& OutSourceFile);                                                         // [0x7f78980] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetCustomAddressY
	// bool GetCustomAddressY(TEnumAsByte<TextureAddress>& AttributeValue);                                                     // [0x7f75b70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetCustomAddressX
	// bool GetCustomAddressX(TEnumAsByte<TextureAddress>& AttributeValue);                                                     // [0x7f75970] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureCubeArrayFactoryNode
/// Size: 0x03D0 (976 bytes) (0x0003D0 - 0x0003D0) align 8 MaxSize: 0x03D0
class UInterchangeTextureCubeArrayFactoryNode : public UInterchangeTextureFactoryNode
{ 
public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureCubeFactoryNode
/// Size: 0x03D0 (976 bytes) (0x0003D0 - 0x0003D0) align 8 MaxSize: 0x03D0
class UInterchangeTextureCubeFactoryNode : public UInterchangeTextureFactoryNode
{ 
public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode
/// Size: 0x0488 (1160 bytes) (0x000468 - 0x000488) align 8 MaxSize: 0x0488
class UInterchangeTextureLightProfileFactoryNode : public UInterchangeTexture2DFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0468   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.SetCustomTextureMultiplier
	// bool SetCustomTextureMultiplier(float AttributeValue, bool bAddApplyDelegate);                                           // [0x7fac460] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.SetCustomBrightness
	// bool SetCustomBrightness(float AttributeValue, bool bAddApplyDelegate);                                                  // [0x7fa7c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.GetCustomTextureMultiplier
	// bool GetCustomTextureMultiplier(float& AttributeValue);                                                                  // [0x7fa2ed0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.GetCustomBrightness
	// bool GetCustomBrightness(float& AttributeValue);                                                                         // [0x7f9f630] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeVolumeTextureFactoryNode
/// Size: 0x03D0 (976 bytes) (0x0003D0 - 0x0003D0) align 8 MaxSize: 0x03D0
class UInterchangeVolumeTextureFactoryNode : public UInterchangeTextureFactoryNode
{ 
public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode
/// Size: 0x0480 (1152 bytes) (0x000140 - 0x000480) align 8 MaxSize: 0x0480
class UInterchangeAnimSequenceFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x340];                                     // 0x0140   (0x0340)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomSkeletonSoftObjectPath
	// bool SetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue);                                                   // [0x7fabdf0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomSkeletonFactoryNodeUid
	// bool SetCustomSkeletonFactoryNodeUid(FString AttributeValue);                                                            // [0x7fabc60] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomRemoveCurveRedundantKeys
	// bool SetCustomRemoveCurveRedundantKeys(bool& AttributeValue);                                                            // [0x7fab6a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomMaterialDriveParameterOnCustomAttribute
	// bool SetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue);                                             // [0x7faa610] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksSampleRate
	// bool SetCustomImportBoneTracksSampleRate(double& AttributeValue);                                                        // [0x7fa99f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksRangeStop
	// bool SetCustomImportBoneTracksRangeStop(double& AttributeValue);                                                         // [0x7fa9880] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksRangeStart
	// bool SetCustomImportBoneTracksRangeStart(double& AttributeValue);                                                        // [0x7fa9710] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracks
	// bool SetCustomImportBoneTracks(bool& AttributeValue);                                                                    // [0x7fa95a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportAttributeCurves
	// bool SetCustomImportAttributeCurves(bool& AttributeValue);                                                               // [0x7fa9430] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDoNotImportCurveWithZero
	// bool SetCustomDoNotImportCurveWithZero(bool& AttributeValue);                                                            // [0x7fa8920] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingNonCurveCustomAttributes
	// bool SetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue);                                              // [0x7fa85b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingMorphTargetCurves
	// bool SetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue);                                                     // [0x7fa8440] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingCustomAttributeCurves
	// bool SetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue);                                                 // [0x7fa82d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomAddCurveMetadataToSkeleton
	// bool SetCustomAddCurveMetadataToSkeleton(bool& AttributeValue);                                                          // [0x7fa7630] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimationPayloadKeysForSceneNodeUids
	// void SetAnimationPayloadKeysForSceneNodeUids(TMap<FString, FString>& SceneNodeAnimationPayloadKeyUids, TMap<FString, char>& SceneNodeAnimationPayloadKeyTypes); // [0x7fa7110] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimationPayloadKeysForMorphTargetNodeUids
	// void SetAnimationPayloadKeysForMorphTargetNodeUids(TMap<FString, FString>& MorphTargetAnimationPayloadKeyUids, TMap<FString, char>& MorphTargetAnimationPayloadKeyTypes); // [0x7fa6f40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedMaterialCurveSuffixe
	// bool SetAnimatedMaterialCurveSuffixe(FString MaterialCurveSuffixe);                                                      // [0x7fa6e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedAttributeStepCurveName
	// bool SetAnimatedAttributeStepCurveName(FString AttributeStepCurveName);                                                  // [0x7fa6de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedAttributeCurveName
	// bool SetAnimatedAttributeCurveName(FString AttributeCurveName);                                                          // [0x7fa6d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedMaterialCurveSuffixe
	// bool RemoveAnimatedMaterialCurveSuffixe(FString MaterialCurveSuffixe);                                                   // [0x7fa65e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedAttributeStepCurveName
	// bool RemoveAnimatedAttributeStepCurveName(FString AttributeStepCurveName);                                               // [0x7fa6530] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedAttributeCurveName
	// bool RemoveAnimatedAttributeCurveName(FString AttributeCurveName);                                                       // [0x7fa6480] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.InitializeAnimSequenceNode
	// void InitializeAnimSequenceNode(FString UniqueID, FString DisplayLabel);                                                 // [0x7fa5d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetSceneNodeAnimationPayloadKeys
	// void GetSceneNodeAnimationPayloadKeys(TMap<FString, FInterchangeAnimationPayLoadKey>& OutSceneNodeAnimationPayloadKeys); // [0x7fa4f90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x7f6cd20] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetMorphTargetNodeAnimationPayloadKeys
	// void GetMorphTargetNodeAnimationPayloadKeys(TMap<FString, FInterchangeAnimationPayLoadKey>& OutMorphTargetNodeAnimationPayloads); // [0x7fa4690] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomSkeletonSoftObjectPath
	// bool GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue);                                                   // [0x7fa2970] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomSkeletonFactoryNodeUid
	// bool GetCustomSkeletonFactoryNodeUid(FString& AttributeValue);                                                           // [0x7fa2850] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomRemoveCurveRedundantKeys
	// bool GetCustomRemoveCurveRedundantKeys(bool& AttributeValue);                                                            // [0x7fa2370] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomMaterialDriveParameterOnCustomAttribute
	// bool GetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue);                                             // [0x7fa1630] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksSampleRate
	// bool GetCustomImportBoneTracksSampleRate(double& AttributeValue);                                                        // [0x7fa0e40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksRangeStop
	// bool GetCustomImportBoneTracksRangeStop(double& AttributeValue);                                                         // [0x7fa0d40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksRangeStart
	// bool GetCustomImportBoneTracksRangeStart(double& AttributeValue);                                                        // [0x7fa0c40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracks
	// bool GetCustomImportBoneTracks(bool& AttributeValue);                                                                    // [0x7fa0b40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportAttributeCurves
	// bool GetCustomImportAttributeCurves(bool& AttributeValue);                                                               // [0x7fa0a40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDoNotImportCurveWithZero
	// bool GetCustomDoNotImportCurveWithZero(bool& AttributeValue);                                                            // [0x7fa0150] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingNonCurveCustomAttributes
	// bool GetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue);                                              // [0x7f9fe30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingMorphTargetCurves
	// bool GetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue);                                                     // [0x7f9fd30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingCustomAttributeCurves
	// bool GetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue);                                                 // [0x7f9fc30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomAddCurveMetadataToSkeleton
	// bool GetCustomAddCurveMetadataToSkeleton(bool& AttributeValue);                                                          // [0x7f9f130] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixesCount
	// int32_t GetAnimatedMaterialCurveSuffixesCount();                                                                         // [0x7f9e390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixes
	// void GetAnimatedMaterialCurveSuffixes(TArray<FString>& OutMaterialCurveSuffixes);                                        // [0x7f9e2b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixe
	// void GetAnimatedMaterialCurveSuffixe(int32_t Index, FString& OutMaterialCurveSuffixe);                                   // [0x7f9e1c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveNamesCount
	// int32_t GetAnimatedAttributeStepCurveNamesCount();                                                                       // [0x7f9e180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveNames
	// void GetAnimatedAttributeStepCurveNames(TArray<FString>& OutAttributeStepCurveNames);                                    // [0x7f9e0a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveName
	// void GetAnimatedAttributeStepCurveName(int32_t Index, FString& OutAttributeStepCurveName);                               // [0x7f9dfb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveNamesCount
	// int32_t GetAnimatedAttributeCurveNamesCount();                                                                           // [0x7f9df70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveNames
	// void GetAnimatedAttributeCurveNames(TArray<FString>& OutAttributeCurveNames);                                            // [0x7f9de90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveName
	// void GetAnimatedAttributeCurveName(int32_t Index, FString& OutAttributeCurveName);                                       // [0x7f9dda0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode
/// Size: 0x0160 (352 bytes) (0x000140 - 0x000160) align 8 MaxSize: 0x0160
class UInterchangeCommonPipelineDataFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0140   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.SetCustomGlobalOffsetTransform
	// bool SetCustomGlobalOffsetTransform(class UInterchangeBaseNodeContainer* NodeContainer, FTransform& AttributeValue);     // [0x7fa90c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.SetBakeMeshes
	// bool SetBakeMeshes(class UInterchangeBaseNodeContainer* NodeContainer, bool& AttributeValue);                            // [0x7fa72e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.GetCustomGlobalOffsetTransform
	// bool GetCustomGlobalOffsetTransform(FTransform& AttributeValue);                                                         // [0x7fa07d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.GetBakeMeshes
	// bool GetBakeMeshes(bool& AttributeValue);                                                                                // [0x7f9e530] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode
/// Size: 0x01C0 (448 bytes) (0x000150 - 0x0001C0) align 8 MaxSize: 0x01C0
class UInterchangeMaterialFactoryNode : public UInterchangeBaseMaterialFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0150   (0x0070)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomTwoSided
	// bool SetCustomTwoSided(bool& AttributeValue, bool bAddApplyDelegate);                                                    // [0x7facae0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomTranslucencyLightingMode
	// bool SetCustomTranslucencyLightingMode(TEnumAsByte<ETranslucencyLightingMode>& AttributeValue, bool bAddApplyDelegate);  // [0x7fac8f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomShadingModel
	// bool SetCustomShadingModel(TEnumAsByte<EMaterialShadingModel>& AttributeValue, bool bAddApplyDelegate);                  // [0x7faba70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomScreenSpaceReflections
	// bool SetCustomScreenSpaceReflections(bool& AttributeValue);                                                              // [0x7fab900] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomRefractionMethod
	// bool SetCustomRefractionMethod(TEnumAsByte<ERefractionMode>& AttributeValue, bool bAddApplyDelegate);                    // [0x7fab4b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomOpacityMaskClipValue
	// bool SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate);                                       // [0x7faadd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomBlendMode
	// bool SetCustomBlendMode(TEnumAsByte<EBlendMode>& AttributeValue, bool bAddApplyDelegate);                                // [0x7fa7930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetTransmissionColorConnection
	// bool GetTransmissionColorConnection(FString& ExpressionNodeUid, FString& OutputName);                                    // [0x7fa5c20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetTangentConnection
	// bool GetTangentConnection(FString& ExpressionNodeUid, FString& OutputName);                                              // [0x7fa5ac0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetSubsurfaceConnection
	// bool GetSubsurfaceConnection(FString& ExpressionNodeUid, FString& OutputName);                                           // [0x7fa5960] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetSpecularConnection
	// bool GetSpecularConnection(FString& ExpressionNodeUid, FString& OutputName);                                             // [0x7fa56e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetRoughnessConnection
	// bool GetRoughnessConnection(FString& ExpressionNodeUid, FString& OutputName);                                            // [0x7fa4e30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetRefractionConnection
	// bool GetRefractionConnection(FString& ExpressionNodeUid, FString& OutputName);                                           // [0x7fa4cd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetOpacityConnection
	// bool GetOpacityConnection(FString& ExpressionNodeUid, FString& OutputName);                                              // [0x7fa4b70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetOcclusionConnection
	// bool GetOcclusionConnection(FString& ExpressionNodeUid, FString& OutputName);                                            // [0x7fa4910] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x7f6cd20] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetNormalConnection
	// bool GetNormalConnection(FString& ExpressionNodeUid, FString& OutputName);                                               // [0x7fa47b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetMetallicConnection
	// bool GetMetallicConnection(FString& ExpressionNodeUid, FString& OutputName);                                             // [0x7fa4530] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetFuzzColorConnection
	// bool GetFuzzColorConnection(FString& ExpressionNodeUid, FString& OutputName);                                            // [0x7fa3f00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetEmissiveColorConnection
	// bool GetEmissiveColorConnection(FString& ExpressionNodeUid, FString& OutputName);                                        // [0x7fa3da0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomTwoSided
	// bool GetCustomTwoSided(bool& AttributeValue);                                                                            // [0x7fa34b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomTranslucencyLightingMode
	// bool GetCustomTranslucencyLightingMode(TEnumAsByte<ETranslucencyLightingMode>& AttributeValue);                          // [0x7fa32d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomShadingModel
	// bool GetCustomShadingModel(TEnumAsByte<EMaterialShadingModel>& AttributeValue);                                          // [0x7fa2670] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomScreenSpaceReflections
	// bool GetCustomScreenSpaceReflections(bool& AttributeValue);                                                              // [0x7fa2570] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomRefractionMethod
	// bool GetCustomRefractionMethod(TEnumAsByte<ERefractionMode>& AttributeValue);                                            // [0x7fa2190] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomOpacityMaskClipValue
	// bool GetCustomOpacityMaskClipValue(float& AttributeValue);                                                               // [0x7fa1c50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomBlendMode
	// bool GetCustomBlendMode(TEnumAsByte<EBlendMode>& AttributeValue);                                                        // [0x7f9f350] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClothConnection
	// bool GetClothConnection(FString& ExpressionNodeUid, FString& OutputName);                                                // [0x7f9edf0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatRoughnessConnection
	// bool GetClearCoatRoughnessConnection(FString& ExpressionNodeUid, FString& OutputName);                                   // [0x7f9ec90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatNormalConnection
	// bool GetClearCoatNormalConnection(FString& ExpressionNodeUid, FString& OutputName);                                      // [0x7f9eb30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatConnection
	// bool GetClearCoatConnection(FString& ExpressionNodeUid, FString& OutputName);                                            // [0x7f9e9d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetBaseColorConnection
	// bool GetBaseColorConnection(FString& ExpressionNodeUid, FString& OutputName);                                            // [0x7f9e630] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetAnisotropyConnection
	// bool GetAnisotropyConnection(FString& ExpressionNodeUid, FString& OutputName);                                           // [0x7f9e3d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToTransmissionColor
	// bool ConnectToTransmissionColor(FString AttributeValue);                                                                 // [0x7f9dcd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToTangent
	// bool ConnectToTangent(FString ExpressionNodeUid);                                                                        // [0x7f9dc00] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToSubsurface
	// bool ConnectToSubsurface(FString ExpressionNodeUid);                                                                     // [0x7f9db30] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToSpecular
	// bool ConnectToSpecular(FString ExpressionNodeUid);                                                                       // [0x7f9da60] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToRoughness
	// bool ConnectToRoughness(FString ExpressionNodeUid);                                                                      // [0x7f9d990] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToRefraction
	// bool ConnectToRefraction(FString AttributeValue);                                                                        // [0x7f9d8c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToOpacity
	// bool ConnectToOpacity(FString AttributeValue);                                                                           // [0x7f9d7f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToOcclusion
	// bool ConnectToOcclusion(FString AttributeValue);                                                                         // [0x7f9d720] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToNormal
	// bool ConnectToNormal(FString ExpressionNodeUid);                                                                         // [0x7f9d650] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToMetallic
	// bool ConnectToMetallic(FString AttributeValue);                                                                          // [0x7f9d580] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToFuzzColor
	// bool ConnectToFuzzColor(FString AttributeValue);                                                                         // [0x7f9d4b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToEmissiveColor
	// bool ConnectToEmissiveColor(FString ExpressionNodeUid);                                                                  // [0x7f9d3e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToCloth
	// bool ConnectToCloth(FString AttributeValue);                                                                             // [0x7f9d310] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoatRoughness
	// bool ConnectToClearCoatRoughness(FString AttributeValue);                                                                // [0x7f9d240] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoatNormal
	// bool ConnectToClearCoatNormal(FString AttributeValue);                                                                   // [0x7f9d170] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoat
	// bool ConnectToClearCoat(FString AttributeValue);                                                                         // [0x7f9d0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToBaseColor
	// bool ConnectToBaseColor(FString AttributeValue);                                                                         // [0x7f9cfd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToAnisotropy
	// bool ConnectToAnisotropy(FString ExpressionNodeUid);                                                                     // [0x7f9cf00] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToTransmissionColor
	// bool ConnectOutputToTransmissionColor(FString ExpressionNodeUid, FString OutputName);                                    // [0x7f9cdd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToTangent
	// bool ConnectOutputToTangent(FString ExpressionNodeUid, FString OutputName);                                              // [0x7f9cca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToSubsurface
	// bool ConnectOutputToSubsurface(FString ExpressionNodeUid, FString OutputName);                                           // [0x7f9cb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToSpecular
	// bool ConnectOutputToSpecular(FString ExpressionNodeUid, FString OutputName);                                             // [0x7f9ca40] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToRoughness
	// bool ConnectOutputToRoughness(FString ExpressionNodeUid, FString OutputName);                                            // [0x7f9c910] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToRefraction
	// bool ConnectOutputToRefraction(FString ExpressionNodeUid, FString OutputName);                                           // [0x7f9c7e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToOpacity
	// bool ConnectOutputToOpacity(FString ExpressionNodeUid, FString OutputName);                                              // [0x7f9c6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToOcclusion
	// bool ConnectOutputToOcclusion(FString ExpressionNodeUid, FString OutputName);                                            // [0x7f9c580] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToNormal
	// bool ConnectOutputToNormal(FString ExpressionNodeUid, FString OutputName);                                               // [0x7f9c450] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToMetallic
	// bool ConnectOutputToMetallic(FString ExpressionNodeUid, FString OutputName);                                             // [0x7f9c320] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToFuzzColor
	// bool ConnectOutputToFuzzColor(FString ExpressionNodeUid, FString OutputName);                                            // [0x7f9c1f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToEmissiveColor
	// bool ConnectOutputToEmissiveColor(FString ExpressionNodeUid, FString OutputName);                                        // [0x7f9c0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToCloth
	// bool ConnectOutputToCloth(FString ExpressionNodeUid, FString OutputName);                                                // [0x7f9bf90] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoatRoughness
	// bool ConnectOutputToClearCoatRoughness(FString ExpressionNodeUid, FString OutputName);                                   // [0x7f9be60] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoatNormal
	// bool ConnectOutputToClearCoatNormal(FString ExpressionNodeUid, FString OutputName);                                      // [0x7f9bd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoat
	// bool ConnectOutputToClearCoat(FString ExpressionNodeUid, FString OutputName);                                            // [0x7f9bc00] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToBaseColor
	// bool ConnectOutputToBaseColor(FString ExpressionNodeUid, FString OutputName);                                            // [0x7f9bad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToAnisotropy
	// bool ConnectOutputToAnisotropy(FString ExpressionNodeUid, FString OutputName);                                           // [0x7f9b9a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode
/// Size: 0x0150 (336 bytes) (0x000140 - 0x000150) align 8 MaxSize: 0x0150
class UInterchangeMaterialExpressionFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode.SetCustomExpressionClassName
	// bool SetCustomExpressionClassName(FString AttributeValue);                                                               // [0x7fa8b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode.GetCustomExpressionClassName
	// bool GetCustomExpressionClassName(FString& AttributeValue);                                                              // [0x7fa0350] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode
/// Size: 0x0170 (368 bytes) (0x000150 - 0x000170) align 8 MaxSize: 0x0170
class UInterchangeMaterialInstanceFactoryNode : public UInterchangeBaseMaterialFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0150   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.SetCustomParent
	// bool SetCustomParent(FString AttributeValue);                                                                            // [0x7faafc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.SetCustomInstanceClassName
	// bool SetCustomInstanceClassName(FString AttributeValue);                                                                 // [0x7fa9fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.GetCustomParent
	// bool GetCustomParent(FString& AttributeValue);                                                                           // [0x7fa1d50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.GetCustomInstanceClassName
	// bool GetCustomInstanceClassName(FString& AttributeValue);                                                                // [0x7fa1310] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode
/// Size: 0x0160 (352 bytes) (0x000150 - 0x000160) align 8 MaxSize: 0x0160
class UInterchangeMaterialFunctionCallExpressionFactoryNode : public UInterchangeMaterialExpressionFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0150   (0x0010)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode.SetCustomMaterialFunctionDependency
	// bool SetCustomMaterialFunctionDependency(FString AttributeValue);                                                        // [0x7faa780] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode.GetCustomMaterialFunctionDependency
	// bool GetCustomMaterialFunctionDependency(FString& AttributeValue);                                                       // [0x7fa1730] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode
/// Size: 0x0150 (336 bytes) (0x000150 - 0x000150) align 8 MaxSize: 0x0150
class UInterchangeMaterialFunctionFactoryNode : public UInterchangeBaseMaterialFactoryNode
{ 
public:


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x7f6cd20] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode.GetInputConnection
	// bool GetInputConnection(FString InputName, FString& ExpressionNodeUid, FString& OutputName);                             // [0x7fa4160] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode
/// Size: 0x0218 (536 bytes) (0x000180 - 0x000218) align 8 MaxSize: 0x0218
class UInterchangeMeshActorFactoryNode : public UInterchangeActorFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x0180   (0x0098)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetSlotMaterialDependencyUid
	// bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);                                      // [0x7fad8d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetCustomGeometricTransform
	// bool SetCustomGeometricTransform(FTransform& AttributeValue);                                                            // [0x7fa8ef0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetCustomAnimationAssetUidToPlay
	// bool SetCustomAnimationAssetUidToPlay(FString AttributeValue);                                                           // [0x7fa77a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.RemoveSlotMaterialDependencyUid
	// bool RemoveSlotMaterialDependencyUid(FString SlotName);                                                                  // [0x7fa6a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetSlotMaterialDependencyUid
	// bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);                                     // [0x7fa5380] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetSlotMaterialDependencies
	// void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies);                                       // [0x7fa50b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetCustomGeometricTransform
	// bool GetCustomGeometricTransform(FTransform& AttributeValue);                                                            // [0x7fa0670] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetCustomAnimationAssetUidToPlay
	// bool GetCustomAnimationAssetUidToPlay(FString& AttributeValue);                                                          // [0x7f9f230] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode
/// Size: 0x02C0 (704 bytes) (0x000140 - 0x0002C0) align 8 MaxSize: 0x02C0
class UInterchangeMeshFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x180];                                     // 0x0140   (0x0180)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetSlotMaterialDependencyUid
	// bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);                                      // [0x7fada00] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorReplace
	// bool SetCustomVertexColorReplace(bool& AttributeValue);                                                                  // [0x7fad460] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorOverride
	// bool SetCustomVertexColorOverride(FColor& AttributeValue);                                                               // [0x7fad2f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorIgnore
	// bool SetCustomVertexColorIgnore(bool& AttributeValue);                                                                   // [0x7fad180] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseMikkTSpace
	// bool SetCustomUseMikkTSpace(bool& AttributeValue, bool bAddApplyDelegate);                                               // [0x7fad090] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseHighPrecisionTangentBasis
	// bool SetCustomUseHighPrecisionTangentBasis(bool& AttributeValue, bool bAddApplyDelegate);                                // [0x7facfa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseFullPrecisionUVs
	// bool SetCustomUseFullPrecisionUVs(bool& AttributeValue, bool bAddApplyDelegate);                                         // [0x7facdc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseBackwardsCompatibleF16TruncUVs
	// bool SetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue, bool bAddApplyDelegate);                           // [0x7faccd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRemoveDegenerates
	// bool SetCustomRemoveDegenerates(bool& AttributeValue, bool bAddApplyDelegate);                                           // [0x7fab810] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRecomputeTangents
	// bool SetCustomRecomputeTangents(bool& AttributeValue, bool bAddApplyDelegate);                                           // [0x7fab3c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRecomputeNormals
	// bool SetCustomRecomputeNormals(bool& AttributeValue, bool bAddApplyDelegate);                                            // [0x7fab2d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomLODGroup
	// bool SetCustomLODGroup(FName& AttributeValue, bool bAddApplyDelegate);                                                   // [0x7faa440] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomKeepSectionsSeparate
	// bool SetCustomKeepSectionsSeparate(bool& AttributeValue);                                                                // [0x7faa2d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomComputeWeightedNormals
	// bool SetCustomComputeWeightedNormals(bool& AttributeValue, bool bAddApplyDelegate);                                      // [0x7fa8070] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.ResetSlotMaterialDependencies
	// bool ResetSlotMaterialDependencies();                                                                                    // [0x7fa6ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.RemoveSlotMaterialDependencyUid
	// bool RemoveSlotMaterialDependencyUid(FString SlotName);                                                                  // [0x7fa6ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.RemoveLodDataUniqueId
	// bool RemoveLodDataUniqueId(FString LodDataUniqueId);                                                                     // [0x7fa68a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetSlotMaterialDependencyUid
	// bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);                                     // [0x7fa54a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetSlotMaterialDependencies
	// void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies);                                       // [0x7fa5260] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetLodDataUniqueIds
	// void GetLodDataUniqueIds(TArray<FString>& OutLodDataUniqueIds);                                                          // [0x7fa4330] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetLodDataCount
	// int32_t GetLodDataCount();                                                                                               // [0x7fa42f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorReplace
	// bool GetCustomVertexColorReplace(bool& AttributeValue);                                                                  // [0x7fa3ca0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorOverride
	// bool GetCustomVertexColorOverride(FColor& AttributeValue);                                                               // [0x7fa3bb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorIgnore
	// bool GetCustomVertexColorIgnore(bool& AttributeValue);                                                                   // [0x7fa3ab0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseMikkTSpace
	// bool GetCustomUseMikkTSpace(bool& AttributeValue);                                                                       // [0x7fa39b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseHighPrecisionTangentBasis
	// bool GetCustomUseHighPrecisionTangentBasis(bool& AttributeValue);                                                        // [0x7fa38b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseFullPrecisionUVs
	// bool GetCustomUseFullPrecisionUVs(bool& AttributeValue);                                                                 // [0x7fa36b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseBackwardsCompatibleF16TruncUVs
	// bool GetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue);                                                   // [0x7fa35b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRemoveDegenerates
	// bool GetCustomRemoveDegenerates(bool& AttributeValue);                                                                   // [0x7fa2470] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRecomputeTangents
	// bool GetCustomRecomputeTangents(bool& AttributeValue);                                                                   // [0x7fa2090] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRecomputeNormals
	// bool GetCustomRecomputeNormals(bool& AttributeValue);                                                                    // [0x7fa1f90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomLODGroup
	// bool GetCustomLODGroup(FName& AttributeValue);                                                                           // [0x7fa1580] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomKeepSectionsSeparate
	// bool GetCustomKeepSectionsSeparate(bool& AttributeValue);                                                                // [0x7fa14d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomComputeWeightedNormals
	// bool GetCustomComputeWeightedNormals(bool& AttributeValue);                                                              // [0x7f9fa30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeMeshFactoryNode.AddLodDataUniqueId
	// bool AddLodDataUniqueId(FString LodDataUniqueId);                                                                        // [0x7f9b600] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSceneImportAssetFactoryNode
/// Size: 0x0140 (320 bytes) (0x000140 - 0x000140) align 8 MaxSize: 0x0140
class UInterchangeSceneImportAssetFactoryNode : public UInterchangeFactoryBaseNode
{ 
public:
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode
/// Size: 0x0398 (920 bytes) (0x0002C0 - 0x000398) align 8 MaxSize: 0x0398
class UInterchangeSkeletalMeshFactoryNode : public UInterchangeMeshFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0xD8];                                      // 0x02C0   (0x00D8)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomUseHighPrecisionSkinWeights
	// bool SetCustomUseHighPrecisionSkinWeights(bool& AttributeValue, bool bAddApplyDelegate);                                 // [0x7faceb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdUV
	// bool SetCustomThresholdUV(float& AttributeValue, bool bAddApplyDelegate);                                                // [0x7fac800] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdTangentNormal
	// bool SetCustomThresholdTangentNormal(float& AttributeValue, bool bAddApplyDelegate);                                     // [0x7fac710] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdPosition
	// bool SetCustomThresholdPosition(float& AttributeValue, bool bAddApplyDelegate);                                          // [0x7fac620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomSkeletonSoftObjectPath
	// bool SetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue);                                                   // [0x7fabf70] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomPhysicAssetSoftObjectPath
	// bool SetCustomPhysicAssetSoftObjectPath(FSoftObjectPath& AttributeValue);                                                // [0x7fab150] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomMorphThresholdPosition
	// bool SetCustomMorphThresholdPosition(float& AttributeValue, bool bAddApplyDelegate);                                     // [0x7faace0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportVertexAttributes
	// bool SetCustomImportVertexAttributes(bool& AttributeValue);                                                              // [0x7fa9e60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportMorphTarget
	// bool SetCustomImportMorphTarget(bool& AttributeValue);                                                                   // [0x7fa9cf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportContentType
	// bool SetCustomImportContentType(EInterchangeSkeletalMeshContentType& AttributeValue);                                    // [0x7fa9b60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomCreatePhysicsAsset
	// bool SetCustomCreatePhysicsAsset(bool& AttributeValue);                                                                  // [0x7fa8160] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomBoneInfluenceLimit
	// bool SetCustomBoneInfluenceLimit(int32_t& AttributeValue, bool bAddApplyDelegate);                                       // [0x7fa7b20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.InitializeSkeletalMeshNode
	// void InitializeSkeletalMeshNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);                           // [0x7fa5e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x7f6cd20] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomUseHighPrecisionSkinWeights
	// bool GetCustomUseHighPrecisionSkinWeights(bool& AttributeValue);                                                         // [0x7fa37b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdUV
	// bool GetCustomThresholdUV(float& AttributeValue);                                                                        // [0x7fa31d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdTangentNormal
	// bool GetCustomThresholdTangentNormal(float& AttributeValue);                                                             // [0x7fa30d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdPosition
	// bool GetCustomThresholdPosition(float& AttributeValue);                                                                  // [0x7fa2fd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomSkeletonSoftObjectPath
	// bool GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue);                                                   // [0x7fa2a90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomPhysicAssetSoftObjectPath
	// bool GetCustomPhysicAssetSoftObjectPath(FSoftObjectPath& AttributeValue);                                                // [0x7fa1e70] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomMorphThresholdPosition
	// bool GetCustomMorphThresholdPosition(float& AttributeValue);                                                             // [0x7fa1b50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportVertexAttributes
	// bool GetCustomImportVertexAttributes(bool& AttributeValue);                                                              // [0x7fa1210] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportMorphTarget
	// bool GetCustomImportMorphTarget(bool& AttributeValue);                                                                   // [0x7fa1110] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportContentType
	// bool GetCustomImportContentType(EInterchangeSkeletalMeshContentType& AttributeValue);                                    // [0x7fa0f40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomCreatePhysicsAsset
	// bool GetCustomCreatePhysicsAsset(bool& AttributeValue);                                                                  // [0x7f9fb30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomBoneInfluenceLimit
	// bool GetCustomBoneInfluenceLimit(int32_t& AttributeValue);                                                               // [0x7f9f530] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode
/// Size: 0x0170 (368 bytes) (0x000140 - 0x000170) align 8 MaxSize: 0x0170
class UInterchangeSkeletalMeshLodDataNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0140   (0x0030)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.SetCustomSkeletonUid
	// bool SetCustomSkeletonUid(FString AttributeValue);                                                                       // [0x7fac0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.RemoveMeshUid
	// bool RemoveMeshUid(FString MeshName);                                                                                    // [0x7f2add0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.RemoveAllMeshes
	// bool RemoveAllMeshes();                                                                                                  // [0x7fa63c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetMeshUidsCount
	// int32_t GetMeshUidsCount();                                                                                              // [0x7f2a1f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetMeshUids
	// void GetMeshUids(TArray<FString>& OutMeshNames);                                                                         // [0x7f2a110] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetCustomSkeletonUid
	// bool GetCustomSkeletonUid(FString& AttributeValue);                                                                      // [0x7fa2bb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.AddMeshUid
	// bool AddMeshUid(FString MeshName);                                                                                       // [0x7f2e5e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode
/// Size: 0x03A8 (936 bytes) (0x0002C0 - 0x0003A8) align 8 MaxSize: 0x03A8
class UInterchangeStaticMeshFactoryNode : public UInterchangeMeshFactoryNode
{ 
public:
	unsigned char                                      UnknownData00_1[0xE8];                                      // 0x02C0   (0x00E8)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomSupportFaceRemap
	// bool SetCustomSupportFaceRemap(bool& AttributeValue, bool bAddApplyDelegate);                                            // [0x7fac370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomSrcLightmapIndex
	// bool SetCustomSrcLightmapIndex(int32_t& AttributeValue, bool bAddApplyDelegate);                                         // [0x7fac280] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomMinLightmapResolution
	// bool SetCustomMinLightmapResolution(int32_t& AttributeValue, bool bAddApplyDelegate);                                    // [0x7faaa20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomMaxLumenMeshCards
	// bool SetCustomMaxLumenMeshCards(int32_t& AttributeValue, bool bAddApplyDelegate);                                        // [0x7faa930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomGenerateLightmapUVs
	// bool SetCustomGenerateLightmapUVs(bool& AttributeValue, bool bAddApplyDelegate);                                         // [0x7fa8e00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomGenerateDistanceFieldAsIfTwoSided
	// bool SetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue, bool bAddApplyDelegate);                           // [0x7fa8d10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDstLightmapIndex
	// bool SetCustomDstLightmapIndex(int32_t& AttributeValue, bool bAddApplyDelegate);                                         // [0x7fa8a90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDistanceFieldResolutionScale
	// bool SetCustomDistanceFieldResolutionScale(float& AttributeValue, bool bAddApplyDelegate);                               // [0x7fa8830] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDistanceFieldReplacementMesh
	// bool SetCustomDistanceFieldReplacementMesh(FSoftObjectPath& AttributeValue, bool bAddApplyDelegate);                     // [0x7fa8720] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildScale3D
	// bool SetCustomBuildScale3D(FVector& AttributeValue, bool bAddApplyDelegate);                                             // [0x7fa7f80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildReversedIndexBuffer
	// bool SetCustomBuildReversedIndexBuffer(bool& AttributeValue, bool bAddApplyDelegate);                                    // [0x7fa7e90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildNanite
	// bool SetCustomBuildNanite(bool& AttributeValue, bool bAddApplyDelegate);                                                 // [0x7fa7dd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.RemoveSocketUd
	// bool RemoveSocketUd(FString SocketUid);                                                                                  // [0x7fa6b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.InitializeStaticMeshNode
	// void InitializeStaticMeshNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);                             // [0x7fa60c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetSocketUids
	// void GetSocketUids(TArray<FString>& OutSocketUids);                                                                      // [0x7fa5600] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetSocketUidCount
	// int32_t GetSocketUidCount();                                                                                             // [0x7fa55c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetObjectClass
	// class UClass* GetObjectClass();                                                                                          // [0x7f6cd20] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomSupportFaceRemap
	// bool GetCustomSupportFaceRemap(bool& AttributeValue);                                                                    // [0x7fa2dd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomSrcLightmapIndex
	// bool GetCustomSrcLightmapIndex(int32_t& AttributeValue);                                                                 // [0x7fa2cd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomMinLightmapResolution
	// bool GetCustomMinLightmapResolution(int32_t& AttributeValue);                                                            // [0x7fa1950] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomMaxLumenMeshCards
	// bool GetCustomMaxLumenMeshCards(int32_t& AttributeValue);                                                                // [0x7fa1850] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomGenerateLightmapUVs
	// bool GetCustomGenerateLightmapUVs(bool& AttributeValue);                                                                 // [0x7fa0570] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomGenerateDistanceFieldAsIfTwoSided
	// bool GetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue);                                                   // [0x7fa0470] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDstLightmapIndex
	// bool GetCustomDstLightmapIndex(int32_t& AttributeValue);                                                                 // [0x7fa0250] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDistanceFieldResolutionScale
	// bool GetCustomDistanceFieldResolutionScale(float& AttributeValue);                                                       // [0x7fa0050] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDistanceFieldReplacementMesh
	// bool GetCustomDistanceFieldReplacementMesh(FSoftObjectPath& AttributeValue);                                             // [0x7f9ff30] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildScale3D
	// bool GetCustomBuildScale3D(FVector& AttributeValue);                                                                     // [0x7f9f930] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildReversedIndexBuffer
	// bool GetCustomBuildReversedIndexBuffer(bool& AttributeValue);                                                            // [0x7f9f830] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildNanite
	// bool GetCustomBuildNanite(bool& AttributeValue);                                                                         // [0x7f9f730] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.AddSocketUids
	// bool AddSocketUids(TArray<FString>& InSocketUids);                                                                       // [0x7f9b810] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.AddSocketUid
	// bool AddSocketUid(FString SocketUid);                                                                                    // [0x7f9b760] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode
/// Size: 0x0200 (512 bytes) (0x000140 - 0x000200) align 8 MaxSize: 0x0200
class UInterchangeStaticMeshLodDataNode : public UInterchangeFactoryBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x0140   (0x00C0)  MISSED


	/// Functions
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.SetOneConvexHullPerUCX
	// bool SetOneConvexHullPerUCX(bool AttributeValue);                                                                        // [0x7fad750] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.SetImportCollision
	// bool SetImportCollision(bool AttributeValue);                                                                            // [0x7fad5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveSphereCollisionMeshUid
	// bool RemoveSphereCollisionMeshUid(FString MeshName);                                                                     // [0x7fa6c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveMeshUid
	// bool RemoveMeshUid(FString MeshName);                                                                                    // [0x7fa6950] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveConvexCollisionMeshUid
	// bool RemoveConvexCollisionMeshUid(FString MeshName);                                                                     // [0x7fa67f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveCapsuleCollisionMeshUid
	// bool RemoveCapsuleCollisionMeshUid(FString MeshName);                                                                    // [0x7fa6740] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveBoxCollisionMeshUid
	// bool RemoveBoxCollisionMeshUid(FString MeshName);                                                                        // [0x7fa6690] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllSphereCollisionMeshes
	// bool RemoveAllSphereCollisionMeshes();                                                                                   // [0x7fa6440] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllMeshes
	// bool RemoveAllMeshes();                                                                                                  // [0x7fa6400] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllConvexCollisionMeshes
	// bool RemoveAllConvexCollisionMeshes();                                                                                   // [0x7fa6380] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllCapsuleCollisionMeshes
	// bool RemoveAllCapsuleCollisionMeshes();                                                                                  // [0x7fa6340] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllBoxCollisionMeshes
	// bool RemoveAllBoxCollisionMeshes();                                                                                      // [0x7fa6300] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetSphereCollisionMeshUidsCount
	// int32_t GetSphereCollisionMeshUidsCount();                                                                               // [0x7fa5920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetSphereCollisionMeshUids
	// void GetSphereCollisionMeshUids(TArray<FString>& OutMeshNames);                                                          // [0x7fa5840] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetOneConvexHullPerUCX
	// bool GetOneConvexHullPerUCX(bool& AttributeValue);                                                                       // [0x7fa4a70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetMeshUidsCount
	// int32_t GetMeshUidsCount();                                                                                              // [0x7fa44f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetMeshUids
	// void GetMeshUids(TArray<FString>& OutMeshNames);                                                                         // [0x7fa4410] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetImportCollision
	// bool GetImportCollision(bool& AttributeValue);                                                                           // [0x7fa4060] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetConvexCollisionMeshUidsCount
	// int32_t GetConvexCollisionMeshUidsCount();                                                                               // [0x7f9f030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetConvexCollisionMeshUids
	// void GetConvexCollisionMeshUids(TArray<FString>& OutMeshNames);                                                          // [0x7f9ef50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetCapsuleCollisionMeshUidsCount
	// int32_t GetCapsuleCollisionMeshUidsCount();                                                                              // [0x7f9e990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetCapsuleCollisionMeshUids
	// void GetCapsuleCollisionMeshUids(TArray<FString>& OutMeshNames);                                                         // [0x7f9e8b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetBoxCollisionMeshUidsCount
	// int32_t GetBoxCollisionMeshUidsCount();                                                                                  // [0x7f9e870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetBoxCollisionMeshUids
	// void GetBoxCollisionMeshUids(TArray<FString>& OutMeshNames);                                                             // [0x7f9e790] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddSphereCollisionMeshUid
	// bool AddSphereCollisionMeshUid(FString MeshName);                                                                        // [0x7f9b8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddMeshUid
	// bool AddMeshUid(FString MeshName);                                                                                       // [0x7f9b6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddConvexCollisionMeshUid
	// bool AddConvexCollisionMeshUid(FString MeshName);                                                                        // [0x7f9b550] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddCapsuleCollisionMeshUid
	// bool AddCapsuleCollisionMeshUid(FString MeshName);                                                                       // [0x7f9b4a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddBoxCollisionMeshUid
	// bool AddBoxCollisionMeshUid(FString MeshName);                                                                           // [0x7f9b3f0] Final|Native|Public|BlueprintCallable 
};

#pragma pack(pop)


