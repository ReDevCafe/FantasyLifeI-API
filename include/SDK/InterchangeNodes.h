
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: InterchangeCore

#pragma pack(push, 0x1)

/// Enum /Script/InterchangeNodes.EInterchangeAnimationPayLoadType
/// Size: 0x01 (1 bytes)
enum class EInterchangeAnimationPayLoadType : uint8_t
{
	EInterchangeAnimationPayLoadType__NONE                                           = 0,
	EInterchangeAnimationPayLoadType__CURVE                                          = 1,
	EInterchangeAnimationPayLoadType__MORPHTARGETCURVE                               = 2,
	EInterchangeAnimationPayLoadType__STEPCURVE                                      = 3,
	EInterchangeAnimationPayLoadType__BAKED                                          = 4,
	EInterchangeAnimationPayLoadType__MORPHTARGETCURVEWEIGHTINSTANCE                 = 5
};

/// Enum /Script/InterchangeNodes.EInterchangeAnimatedProperty
/// Size: 0x01 (1 bytes)
enum class EInterchangeAnimatedProperty : uint8_t
{
	EInterchangeAnimatedProperty__None                                               = 0,
	EInterchangeAnimatedProperty__Visibility                                         = 1
};

/// Enum /Script/InterchangeNodes.EInterchangeCameraProjectionType
/// Size: 0x01 (1 bytes)
enum class EInterchangeCameraProjectionType : uint8_t
{
	EInterchangeCameraProjectionType__Perspective                                    = 0,
	EInterchangeCameraProjectionType__Orthographic                                   = 1
};

/// Enum /Script/InterchangeNodes.EInterchangeLightUnits
/// Size: 0x01 (1 bytes)
enum class EInterchangeLightUnits : uint8_t
{
	EInterchangeLightUnits__Unitless                                                 = 0,
	EInterchangeLightUnits__Candelas                                                 = 1,
	EInterchangeLightUnits__Lumens                                                   = 2,
	EInterchangeLightUnits__EV                                                       = 3
};

/// Enum /Script/InterchangeNodes.EInterchangeTextureWrapMode
/// Size: 0x01 (1 bytes)
enum class EInterchangeTextureWrapMode : uint8_t
{
	EInterchangeTextureWrapMode__Wrap                                                = 0,
	EInterchangeTextureWrapMode__Clamp                                               = 1,
	EInterchangeTextureWrapMode__Mirror                                              = 2
};

/// Enum /Script/InterchangeNodes.EInterchangeTextureFilterMode
/// Size: 0x01 (1 bytes)
enum class EInterchangeTextureFilterMode : uint8_t
{
	EInterchangeTextureFilterMode__Nearest                                           = 0,
	EInterchangeTextureFilterMode__Bilinear                                          = 1,
	EInterchangeTextureFilterMode__Trilinear                                         = 2,
	EInterchangeTextureFilterMode__Default                                           = 3
};

/// Enum /Script/InterchangeNodes.EInterchangeMeshPayLoadType
/// Size: 0x01 (1 bytes)
enum class EInterchangeMeshPayLoadType : uint8_t
{
	EInterchangeMeshPayLoadType__NONE                                                = 0,
	EInterchangeMeshPayLoadType__STATIC                                              = 1,
	EInterchangeMeshPayLoadType__SKELETAL                                            = 2,
	EInterchangeMeshPayLoadType__MORPHTARGET                                         = 3
};

/// Class /Script/InterchangeNodes.InterchangeAnimationTrackSetNode
/// Size: 0x0090 (144 bytes) (0x000060 - 0x000090) align 8 MaxSize: 0x0090
class UInterchangeAnimationTrackSetNode : public UInterchangeBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0060   (0x0030)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.SetCustomFrameRate
	// bool SetCustomFrameRate(float& AttributeValue);                                                                          // [0x801b5a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.RemoveCustomAnimationTrackUid
	// bool RemoveCustomAnimationTrackUid(FString AnimationTrackUid);                                                           // [0x801a530] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomFrameRate
	// bool GetCustomFrameRate(float& AttributeValue);                                                                          // [0x80196f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUids
	// void GetCustomAnimationTrackUids(TArray<FString>& OutAnimationTrackUids);                                                // [0x8018f10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUidCount
	// int32_t GetCustomAnimationTrackUidCount();                                                                               // [0x8018ee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUid
	// void GetCustomAnimationTrackUid(int32_t Index, FString& OutAnimationTrackUid);                                           // [0x8018df0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetNode.AddCustomAnimationTrackUid
	// bool AddCustomAnimationTrackUid(FString AnimationTrackUid);                                                              // [0x80189a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeNodes.InterchangeAnimationTrackBaseNode
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UInterchangeAnimationTrackBaseNode : public UInterchangeBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0060   (0x0010)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackBaseNode.SetCustomCompletionMode
	// bool SetCustomCompletionMode(int32_t& AttributeValue);                                                                   // [0x801add0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackBaseNode.GetCustomCompletionMode
	// bool GetCustomCompletionMode(int32_t& AttributeValue);                                                                   // [0x80190e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode
/// Size: 0x00B0 (176 bytes) (0x000070 - 0x0000B0) align 8 MaxSize: 0x00B0
class UInterchangeAnimationTrackSetInstanceNode : public UInterchangeAnimationTrackBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0070   (0x0040)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomTrackSetDependencyUid
	// bool SetCustomTrackSetDependencyUid(FString AttributeValue);                                                             // [0x801bf80] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomTimeScale
	// bool SetCustomTimeScale(float& AttributeValue);                                                                          // [0x801bed0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomStartFrame
	// bool SetCustomStartFrame(int32_t& AttributeValue);                                                                       // [0x801bd70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomDuration
	// bool SetCustomDuration(int32_t& AttributeValue);                                                                         // [0x801ae80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomTrackSetDependencyUid
	// bool GetCustomTrackSetDependencyUid(FString& AttributeValue);                                                            // [0x8019f20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomTimeScale
	// bool GetCustomTimeScale(float& AttributeValue);                                                                          // [0x8019e70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomStartFrame
	// bool GetCustomStartFrame(int32_t& AttributeValue);                                                                       // [0x8019d10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomDuration
	// bool GetCustomDuration(int32_t& AttributeValue);                                                                         // [0x8019190] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeAnimationTrackNode
/// Size: 0x00D0 (208 bytes) (0x000070 - 0x0000D0) align 8 MaxSize: 0x00D0
class UInterchangeAnimationTrackNode : public UInterchangeAnimationTrackBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0070   (0x0060)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.SetCustomTargetedProperty
	// bool SetCustomTargetedProperty(int32_t& TargetedProperty);                                                               // [0x801be20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.SetCustomPropertyTrack
	// bool SetCustomPropertyTrack(FName& PropertyTrack);                                                                       // [0x801b930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.SetCustomFrameCount
	// bool SetCustomFrameCount(int32_t& AttributeValue);                                                                       // [0x801b4f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.SetCustomAnimationPayloadKey
	// bool SetCustomAnimationPayloadKey(FString InUniqueId, EInterchangeAnimationPayLoadType& InType);                         // [0x801a950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.SetCustomActorDependencyUid
	// bool SetCustomActorDependencyUid(FString DependencyUid);                                                                 // [0x801a8a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomTargetedProperty
	// bool GetCustomTargetedProperty(int32_t& TargetedProperty);                                                               // [0x8019dc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomPropertyTrack
	// bool GetCustomPropertyTrack(FName& PropertyTrack);                                                                       // [0x80199a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomFrameCount
	// bool GetCustomFrameCount(int32_t& AttributeValue);                                                                       // [0x8019640] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomAnimationPayloadKey
	// bool GetCustomAnimationPayloadKey(FInterchangeAnimationPayLoadKey& AnimationPayLoadKey);                                 // [0x8018b10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeAnimationTrackNode.GetCustomActorDependencyUid
	// bool GetCustomActorDependencyUid(FString& DependencyUid);                                                                // [0x8018a50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeTransformAnimationTrackNode
/// Size: 0x00E0 (224 bytes) (0x0000D0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UInterchangeTransformAnimationTrackNode : public UInterchangeAnimationTrackNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00D0   (0x0010)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeTransformAnimationTrackNode.SetCustomUsedChannels
	// bool SetCustomUsedChannels(int32_t& AttributeValue);                                                                     // [0x801c030] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTransformAnimationTrackNode.GetCustomUsedChannels
	// bool GetCustomUsedChannels(int32_t& AttributeValue);                                                                     // [0x8019fe0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode
/// Size: 0x0290 (656 bytes) (0x000070 - 0x000290) align 8 MaxSize: 0x0290
class UInterchangeSkeletalAnimationTrackNode : public UInterchangeAnimationTrackBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x220];                                     // 0x0070   (0x0220)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomSkeletonNodeUid
	// bool SetCustomSkeletonNodeUid(FString AttributeValue);                                                                   // [0x801bcc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationStopTime
	// bool SetCustomAnimationStopTime(double& StopTime);                                                                       // [0x801abb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationStartTime
	// bool SetCustomAnimationStartTime(double& StartTime);                                                                     // [0x801ab00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationSampleRate
	// bool SetCustomAnimationSampleRate(double& SampleRate);                                                                   // [0x801aa50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetAnimationPayloadKeyForSceneNodeUid
	// bool SetAnimationPayloadKeyForSceneNodeUid(FString SceneNodeUid, FString InUniqueId, EInterchangeAnimationPayLoadType& InType); // [0x801a740] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetAnimationPayloadKeyForMorphTargetNodeUid
	// bool SetAnimationPayloadKeyForMorphTargetNodeUid(FString MorphTargetNodeUid, FString InUniqueId, EInterchangeAnimationPayLoadType& InType); // [0x801a5e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetSceneNodeAnimationPayloadKeys
	// void GetSceneNodeAnimationPayloadKeys(TMap<FString, FString>& OutSceneNodeAnimationPayloadKeyUids, TMap<FString, char>& OutSceneNodeAnimationPayloadKeyTypes); // [0x801a360] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetMorphTargetNodeAnimationPayloadKeys
	// void GetMorphTargetNodeAnimationPayloadKeys(TMap<FString, FString>& OutMorphTargetNodeAnimationPayloadKeyUids, TMap<FString, char>& OutMorphTargetNodeAnimationPayloadKeyTypes); // [0x801a190] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomSkeletonNodeUid
	// bool GetCustomSkeletonNodeUid(FString& AttributeValue);                                                                  // [0x8019c50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationStopTime
	// bool GetCustomAnimationStopTime(double& StopTime);                                                                       // [0x8018d40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationStartTime
	// bool GetCustomAnimationStartTime(double& StartTime);                                                                     // [0x8018c90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationSampleRate
	// bool GetCustomAnimationSampleRate(double& SampleRate);                                                                   // [0x8018be0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangePhysicalCameraNode
/// Size: 0x00A0 (160 bytes) (0x000060 - 0x0000A0) align 8 MaxSize: 0x00A0
class UInterchangePhysicalCameraNode : public UInterchangeBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0060   (0x0040)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.SetCustomSensorWidth
	// bool SetCustomSensorWidth(float& AttributeValue);                                                                        // [0x801bb50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.SetCustomSensorHeight
	// bool SetCustomSensorHeight(float& AttributeValue);                                                                       // [0x801b9e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.SetCustomFocalLength
	// bool SetCustomFocalLength(float& AttributeValue);                                                                        // [0x801b380] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.SetCustomEnableDepthOfField
	// bool SetCustomEnableDepthOfField(bool& AttributeValue);                                                                  // [0x801af30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.GetCustomSensorWidth
	// bool GetCustomSensorWidth(float& AttributeValue);                                                                        // [0x8019b50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.GetCustomSensorHeight
	// bool GetCustomSensorHeight(float& AttributeValue);                                                                       // [0x8019a50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.GetCustomFocalLength
	// bool GetCustomFocalLength(float& AttributeValue);                                                                        // [0x8019540] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangePhysicalCameraNode.GetCustomEnableDepthOfField
	// bool GetCustomEnableDepthOfField(bool& AttributeValue);                                                                  // [0x8019240] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeStandardCameraNode
/// Size: 0x00C0 (192 bytes) (0x000060 - 0x0000C0) align 8 MaxSize: 0x00C0
class UInterchangeStandardCameraNode : public UInterchangeBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0060   (0x0060)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomWidth
	// bool SetCustomWidth(float& AttributeValue);                                                                              // [0x801c0e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomProjectionMode
	// bool SetCustomProjectionMode(EInterchangeCameraProjectionType& AttributeValue);                                          // [0x801b7c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomNearClipPlane
	// bool SetCustomNearClipPlane(float& AttributeValue);                                                                      // [0x801b650] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomFieldOfView
	// bool SetCustomFieldOfView(float& AttributeValue);                                                                        // [0x801b210] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomFarClipPlane
	// bool SetCustomFarClipPlane(float& AttributeValue);                                                                       // [0x801b0a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.SetCustomAspectRatio
	// bool SetCustomAspectRatio(float& AttributeValue);                                                                        // [0x801ac60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomWidth
	// bool GetCustomWidth(float& AttributeValue);                                                                              // [0x801a090] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomProjectionMode
	// bool GetCustomProjectionMode(EInterchangeCameraProjectionType& AttributeValue);                                          // [0x80198a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomNearClipPlane
	// bool GetCustomNearClipPlane(float& AttributeValue);                                                                      // [0x80197a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomFieldOfView
	// bool GetCustomFieldOfView(float& AttributeValue);                                                                        // [0x8019440] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomFarClipPlane
	// bool GetCustomFarClipPlane(float& AttributeValue);                                                                       // [0x8019340] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeStandardCameraNode.GetCustomAspectRatio
	// bool GetCustomAspectRatio(float& AttributeValue);                                                                        // [0x8018fe0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeShaderNode
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UInterchangeShaderNode : public UInterchangeBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0060   (0x0010)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeShaderNode.SetCustomShaderType
	// bool SetCustomShaderType(FString AttributeValue);                                                                        // [0x803f800] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderNode.GetCustomShaderType
	// bool GetCustomShaderType(FString& AttributeValue);                                                                       // [0x803c770] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderNode.AddStringInput
	// bool AddStringInput(FString InputName, FString AttributeValue, bool bIsAParameter);                                      // [0x803ae50] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderNode.AddLinearColorInput
	// bool AddLinearColorInput(FString InputName, FLinearColor& AttributeValue, bool bIsAParameter);                           // [0x803ac20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderNode.AddFloatInput
	// bool AddFloatInput(FString InputName, float& AttributeValue, bool bIsAParameter);                                        // [0x803aa90] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/InterchangeNodes.InterchangeDecalMaterialNode
/// Size: 0x0090 (144 bytes) (0x000070 - 0x000090) align 8 MaxSize: 0x0090
class UInterchangeDecalMaterialNode : public UInterchangeShaderNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0070   (0x0020)  MISSED
};

/// Class /Script/InterchangeNodes.InterchangeDecalNode
/// Size: 0x0090 (144 bytes) (0x000060 - 0x000090) align 8 MaxSize: 0x0090
class UInterchangeDecalNode : public UInterchangeBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0060   (0x0030)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeDecalNode.SetCustomSortOrder
	// bool SetCustomSortOrder(int32_t& AttributeValue);                                                                        // [0x802ed70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.SetCustomDecalSize
	// bool SetCustomDecalSize(FVector& AttributeValue);                                                                        // [0x802d030] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.SetCustomDecalMaterialPathName
	// bool SetCustomDecalMaterialPathName(FString AttributeValue);                                                             // [0x802cea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.GetCustomSortOrder
	// bool GetCustomSortOrder(int32_t& AttributeValue);                                                                        // [0x802aac0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.GetCustomDecalSize
	// bool GetCustomDecalSize(FVector& AttributeValue);                                                                        // [0x80294e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeDecalNode.GetCustomDecalMaterialPathName
	// bool GetCustomDecalMaterialPathName(FString& AttributeValue);                                                            // [0x80293c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeBaseLightNode
/// Size: 0x00A0 (160 bytes) (0x000060 - 0x0000A0) align 8 MaxSize: 0x00A0
class UInterchangeBaseLightNode : public UInterchangeBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0060   (0x0040)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.SetCustomUseTemperature
	// bool SetCustomUseTemperature(bool AttributeValue);                                                                       // [0x802f820] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.SetCustomTemperature
	// bool SetCustomTemperature(float AttributeValue);                                                                         // [0x802f1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.SetCustomLightColor
	// bool SetCustomLightColor(FLinearColor& AttributeValue);                                                                  // [0x802e2c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.SetCustomIntensity
	// bool SetCustomIntensity(float AttributeValue);                                                                           // [0x802dfd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.GetCustomUseTemperature
	// bool GetCustomUseTemperature(bool& AttributeValue);                                                                      // [0x802b1b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.GetCustomTemperature
	// bool GetCustomTemperature(float& AttributeValue);                                                                        // [0x802adb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.GetCustomLightColor
	// bool GetCustomLightColor(FLinearColor& AttributeValue);                                                                  // [0x802a3b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeBaseLightNode.GetCustomIntensity
	// bool GetCustomIntensity(float& AttributeValue);                                                                          // [0x802a1b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeLightNode
/// Size: 0x0100 (256 bytes) (0x0000A0 - 0x000100) align 8 MaxSize: 0x0100
class UInterchangeLightNode : public UInterchangeBaseLightNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x00A0   (0x0060)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomUseIESBrightness
	// bool SetCustomUseIESBrightness(bool& AttributeValue, bool bAddApplyDelegate);                                            // [0x802f4d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomRotation
	// bool SetCustomRotation(FRotator& AttributeValue, bool bAddApplyDelegate);                                                // [0x802ea30] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomIntensityUnits
	// bool SetCustomIntensityUnits(EInterchangeLightUnits& AttributeValue);                                                    // [0x802e150] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomIESTexture
	// bool SetCustomIESTexture(FString AttributeValue);                                                                        // [0x802dcc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomIESBrightnessScale
	// bool SetCustomIESBrightnessScale(float& AttributeValue, bool bAddApplyDelegate);                                         // [0x802daf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.SetCustomAttenuationRadius
	// bool SetCustomAttenuationRadius(float AttributeValue);                                                                   // [0x802cba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomUseIESBrightness
	// bool GetCustomUseIESBrightness(bool& AttributeValue);                                                                    // [0x802afb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomRotation
	// bool GetCustomRotation(FRotator& AttributeValue);                                                                        // [0x802a8c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomIntensityUnits
	// bool GetCustomIntensityUnits(EInterchangeLightUnits& AttributeValue);                                                    // [0x802a2b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomIESTexture
	// bool GetCustomIESTexture(FString& AttributeValue);                                                                       // [0x8029f90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomIESBrightnessScale
	// bool GetCustomIESBrightnessScale(float& AttributeValue);                                                                 // [0x8029e90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeLightNode.GetCustomAttenuationRadius
	// bool GetCustomAttenuationRadius(float& AttributeValue);                                                                  // [0x80291b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangePointLightNode
/// Size: 0x0120 (288 bytes) (0x000100 - 0x000120) align 8 MaxSize: 0x0120
class UInterchangePointLightNode : public UInterchangeLightNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0100   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangePointLightNode.SetCustomUseInverseSquaredFalloff
	// bool SetCustomUseInverseSquaredFalloff(bool AttributeValue);                                                             // [0x802f6a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePointLightNode.SetCustomLightFalloffExponent
	// bool SetCustomLightFalloffExponent(float AttributeValue);                                                                // [0x802e430] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangePointLightNode.GetCustomUseInverseSquaredFalloff
	// bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue);                                                            // [0x802b0b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangePointLightNode.GetCustomLightFalloffExponent
	// bool GetCustomLightFalloffExponent(float& AttributeValue);                                                               // [0x802a4b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeSpotLightNode
/// Size: 0x0140 (320 bytes) (0x000120 - 0x000140) align 8 MaxSize: 0x0140
class UInterchangeSpotLightNode : public UInterchangePointLightNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0120   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeSpotLightNode.SetCustomOuterConeAngle
	// bool SetCustomOuterConeAngle(float AttributeValue);                                                                      // [0x802e5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSpotLightNode.SetCustomInnerConeAngle
	// bool SetCustomInnerConeAngle(float AttributeValue);                                                                      // [0x802de50] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSpotLightNode.GetCustomOuterConeAngle
	// bool GetCustomOuterConeAngle(float& AttributeValue);                                                                     // [0x802a5b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSpotLightNode.GetCustomInnerConeAngle
	// bool GetCustomInnerConeAngle(float& AttributeValue);                                                                     // [0x802a0b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeRectLightNode
/// Size: 0x0120 (288 bytes) (0x000100 - 0x000120) align 8 MaxSize: 0x0120
class UInterchangeRectLightNode : public UInterchangeLightNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0100   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeRectLightNode.SetCustomSourceWidth
	// bool SetCustomSourceWidth(float AttributeValue);                                                                         // [0x802f060] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeRectLightNode.SetCustomSourceHeight
	// bool SetCustomSourceHeight(float AttributeValue);                                                                        // [0x802eee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeRectLightNode.GetCustomSourceWidth
	// bool GetCustomSourceWidth(float& AttributeValue);                                                                        // [0x802acb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeRectLightNode.GetCustomSourceHeight
	// bool GetCustomSourceHeight(float& AttributeValue);                                                                       // [0x802abb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeDirectionalLightNode
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align 8 MaxSize: 0x00A0
class UInterchangeDirectionalLightNode : public UInterchangeBaseLightNode
{ 
public:
};

/// Class /Script/InterchangeNodes.InterchangeTextureNode
/// Size: 0x0090 (144 bytes) (0x000060 - 0x000090) align 8 MaxSize: 0x0090
class UInterchangeTextureNode : public UInterchangeBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0060   (0x0030)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeTextureNode.SetPayLoadKey
	// void SetPayLoadKey(FString PayloadKey);                                                                                  // [0x8030100] Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.SetCustomSRGB
	// bool SetCustomSRGB(bool& AttributeValue);                                                                                // [0x802ec00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.SetCustomFilter
	// bool SetCustomFilter(EInterchangeTextureFilterMode& AttributeValue);                                                     // [0x802d250] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.SetCustombFlipGreenChannel
	// bool SetCustombFlipGreenChannel(bool& AttributeValue);                                                                   // [0x802fbc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.GetCustomSRGB
	// bool GetCustomSRGB(bool& AttributeValue);                                                                                // [0x802a9c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.GetCustomFilter
	// bool GetCustomFilter(EInterchangeTextureFilterMode& AttributeValue);                                                     // [0x8029890] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeTextureNode.GetCustombFlipGreenChannel
	// bool GetCustombFlipGreenChannel(bool& AttributeValue);                                                                   // [0x802b650] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeTexture2DArrayNode
/// Size: 0x0090 (144 bytes) (0x000090 - 0x000090) align 8 MaxSize: 0x0090
class UInterchangeTexture2DArrayNode : public UInterchangeTextureNode
{ 
public:
};

/// Class /Script/InterchangeNodes.InterchangeTextureCubeArrayNode
/// Size: 0x0090 (144 bytes) (0x000090 - 0x000090) align 8 MaxSize: 0x0090
class UInterchangeTextureCubeArrayNode : public UInterchangeTextureNode
{ 
public:
};

/// Class /Script/InterchangeNodes.InterchangeTextureCubeNode
/// Size: 0x0090 (144 bytes) (0x000090 - 0x000090) align 8 MaxSize: 0x0090
class UInterchangeTextureCubeNode : public UInterchangeTextureNode
{ 
public:
};

/// Class /Script/InterchangeNodes.InterchangeTextureLightProfileNode
/// Size: 0x0090 (144 bytes) (0x000090 - 0x000090) align 8 MaxSize: 0x0090
class UInterchangeTextureLightProfileNode : public UInterchangeTextureNode
{ 
public:
};

/// Class /Script/InterchangeNodes.InterchangeVariantSetNode
/// Size: 0x00A0 (160 bytes) (0x000060 - 0x0000A0) align 8 MaxSize: 0x00A0
class UInterchangeVariantSetNode : public UInterchangeBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0060   (0x0040)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.SetCustomVariantsPayloadKey
	// bool SetCustomVariantsPayloadKey(FString PayloadKey);                                                                    // [0x802f9a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.SetCustomDisplayText
	// bool SetCustomDisplayText(FString AttributeValue);                                                                       // [0x802d1a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.RemoveCustomDependencyUid
	// bool RemoveCustomDependencyUid(FString DependencyUid);                                                                   // [0x802c780] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomVariantsPayloadKey
	// bool GetCustomVariantsPayloadKey(FString& PayloadKey);                                                                   // [0x802b4a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomDisplayText
	// bool GetCustomDisplayText(FString& AttributeValue);                                                                      // [0x80297d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUids
	// void GetCustomDependencyUids(TArray<FString>& OutDependencyUids);                                                        // [0x8029700] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUidCount
	// int32_t GetCustomDependencyUidCount();                                                                                   // [0x80296d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUid
	// void GetCustomDependencyUid(int32_t Index, FString& OutDependencyUid);                                                   // [0x80295e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeVariantSetNode.AddCustomDependencyUid
	// bool AddCustomDependencyUid(FString DependencyUid);                                                                      // [0x8028be0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeNodes.InterchangeSceneVariantSetsNode
/// Size: 0x0080 (128 bytes) (0x000060 - 0x000080) align 8 MaxSize: 0x0080
class UInterchangeSceneVariantSetsNode : public UInterchangeBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0060   (0x0020)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeSceneVariantSetsNode.RemoveCustomVariantSetUid
	// bool RemoveCustomVariantSetUid(FString VariantUid);                                                                      // [0x802c830] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUids
	// void GetCustomVariantSetUids(TArray<FString>& OutVariantUids);                                                           // [0x802b3d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUidCount
	// int32_t GetCustomVariantSetUidCount();                                                                                   // [0x802b3a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUid
	// void GetCustomVariantSetUid(int32_t Index, FString& OutVariantUid);                                                      // [0x802b2b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneVariantSetsNode.AddCustomVariantSetUid
	// bool AddCustomVariantSetUid(FString VariantUid);                                                                         // [0x8028c90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeNodes.InterchangeVolumeTextureNode
/// Size: 0x0090 (144 bytes) (0x000090 - 0x000090) align 8 MaxSize: 0x0090
class UInterchangeVolumeTextureNode : public UInterchangeTextureNode
{ 
public:
};

/// Class /Script/InterchangeNodes.InterchangeMaterialInstanceNode
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UInterchangeMaterialInstanceNode : public UInterchangeBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0060   (0x0010)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.SetCustomParent
	// bool SetCustomParent(FString AttributeValue);                                                                            // [0x802e730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetVectorParameterValue
	// bool GetVectorParameterValue(FString ParameterName, FLinearColor& AttributeValue);                                       // [0x802c530] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetTextureParameterValue
	// bool GetTextureParameterValue(FString ParameterName, FString& AttributeValue);                                           // [0x802c3f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetStaticSwitchParameterValue
	// bool GetStaticSwitchParameterValue(FString ParameterName, bool& AttributeValue);                                         // [0x802c2d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetScalarParameterValue
	// bool GetScalarParameterValue(FString ParameterName, float& AttributeValue);                                              // [0x802bac0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.GetCustomParent
	// bool GetCustomParent(FString& AttributeValue);                                                                           // [0x802a6b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.AddVectorParameterValue
	// bool AddVectorParameterValue(FString ParameterName, FLinearColor& AttributeValue);                                       // [0x8029080] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.AddTextureParameterValue
	// bool AddTextureParameterValue(FString ParameterName, FString AttributeValue);                                            // [0x8028f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.AddStaticSwitchParameterValue
	// bool AddStaticSwitchParameterValue(FString ParameterName, bool AttributeValue);                                          // [0x8028e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMaterialInstanceNode.AddScalarParameterValue
	// bool AddScalarParameterValue(FString ParameterName, float AttributeValue);                                               // [0x8028d40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeNodes.InterchangeMeshNode
/// Size: 0x01E8 (488 bytes) (0x000060 - 0x0001E8) align 8 MaxSize: 0x01E8
class UInterchangeMeshNode : public UInterchangeBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x188];                                     // 0x0060   (0x0188)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetSlotMaterialDependencyUid
	// bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);                                      // [0x8030410] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetSkinnedMesh
	// bool SetSkinnedMesh(bool bIsSkinnedMesh);                                                                                // [0x8030300] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetSkeletonDependencyUid
	// bool SetSkeletonDependencyUid(FString DependencyUid);                                                                    // [0x8030250] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetSceneInstanceUid
	// bool SetSceneInstanceUid(FString DependencyUid);                                                                         // [0x80301a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetPayLoadKey
	// void SetPayLoadKey(FString PayloadKey, EInterchangeMeshPayLoadType& PayloadType);                                        // [0x8030010] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetMorphTargetName
	// bool SetMorphTargetName(FString MorphTargetName);                                                                        // [0x802fef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetMorphTargetDependencyUid
	// bool SetMorphTargetDependencyUid(FString DependencyUid);                                                                 // [0x802fe40] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetMorphTarget
	// bool SetMorphTarget(bool bIsMorphTarget);                                                                                // [0x802fd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomVertexCount
	// bool SetCustomVertexCount(int32_t& AttributeValue);                                                                      // [0x802fa50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomUVCount
	// bool SetCustomUVCount(int32_t& AttributeValue);                                                                          // [0x802f360] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomPolygonCount
	// bool SetCustomPolygonCount(int32_t& AttributeValue);                                                                     // [0x802e8c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexTangent
	// bool SetCustomHasVertexTangent(bool& AttributeValue);                                                                    // [0x802d980] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexNormal
	// bool SetCustomHasVertexNormal(bool& AttributeValue);                                                                     // [0x802d810] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexColor
	// bool SetCustomHasVertexColor(bool& AttributeValue);                                                                      // [0x802d6a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexBinormal
	// bool SetCustomHasVertexBinormal(bool& AttributeValue);                                                                   // [0x802d530] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomHasSmoothGroup
	// bool SetCustomHasSmoothGroup(bool& AttributeValue);                                                                      // [0x802d3c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.SetCustomBoundingBox
	// bool SetCustomBoundingBox(FBox& AttributeValue);                                                                         // [0x802cd20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.RemoveSlotMaterialDependencyUid
	// bool RemoveSlotMaterialDependencyUid(FString SlotName);                                                                  // [0x802caf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.RemoveSkeletonDependencyUid
	// bool RemoveSkeletonDependencyUid(FString DependencyUid);                                                                 // [0x802ca40] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.RemoveSceneInstanceUid
	// bool RemoveSceneInstanceUid(FString DependencyUid);                                                                      // [0x802c990] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.RemoveMorphTargetDependencyUid
	// bool RemoveMorphTargetDependencyUid(FString DependencyUid);                                                              // [0x802c8e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.IsSkinnedMesh
	// bool IsSkinnedMesh();                                                                                                    // [0x802c750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.IsMorphTarget
	// bool IsMorphTarget();                                                                                                    // [0x802c660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSlotMaterialDependencyUid
	// bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);                                     // [0x802c1b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSlotMaterialDependencies
	// void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies);                                       // [0x802c000] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSkeletonDependency
	// void GetSkeletonDependency(int32_t Index, FString& OutDependency);                                                       // [0x802bf10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSkeletonDependencies
	// void GetSkeletonDependencies(TArray<FString>& OutDependencies);                                                          // [0x802be30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSkeletonDependeciesCount
	// int32_t GetSkeletonDependeciesCount();                                                                                   // [0x802bdf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUidsCount
	// int32_t GetSceneInstanceUidsCount();                                                                                     // [0x802bdb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUids
	// void GetSceneInstanceUids(TArray<FString>& OutDependencies);                                                             // [0x802bcd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUid
	// void GetSceneInstanceUid(int32_t Index, FString& OutDependency);                                                         // [0x802bbe0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetMorphTargetName
	// bool GetMorphTargetName(FString& OutMorphTargetName);                                                                    // [0x802b960] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependency
	// void GetMorphTargetDependency(int32_t Index, FString& OutDependency);                                                    // [0x802b870] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependencies
	// void GetMorphTargetDependencies(TArray<FString>& OutDependencies);                                                       // [0x802b790] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependeciesCount
	// int32_t GetMorphTargetDependeciesCount();                                                                                // [0x802b750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomVertexCount
	// bool GetCustomVertexCount(int32_t& AttributeValue);                                                                      // [0x802b560] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomUVCount
	// bool GetCustomUVCount(int32_t& AttributeValue);                                                                          // [0x802aeb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomPolygonCount
	// bool GetCustomPolygonCount(int32_t& AttributeValue);                                                                     // [0x802a7d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexTangent
	// bool GetCustomHasVertexTangent(bool& AttributeValue);                                                                    // [0x8029d90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexNormal
	// bool GetCustomHasVertexNormal(bool& AttributeValue);                                                                     // [0x8029c90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexColor
	// bool GetCustomHasVertexColor(bool& AttributeValue);                                                                      // [0x8029b90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexBinormal
	// bool GetCustomHasVertexBinormal(bool& AttributeValue);                                                                   // [0x8029a90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomHasSmoothGroup
	// bool GetCustomHasSmoothGroup(bool& AttributeValue);                                                                      // [0x8029990] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeMeshNode.GetCustomBoundingBox
	// bool GetCustomBoundingBox(FBox& AttributeValue);                                                                         // [0x80292b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeSceneNode
/// Size: 0x0320 (800 bytes) (0x000060 - 0x000320) align 16 MaxSize: 0x0320
class UInterchangeSceneNode : public UInterchangeBaseNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x2C0];                                     // 0x0060   (0x02C0)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetSlotMaterialDependencyUid
	// bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);                                      // [0x80402d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetMorphTargetCurveWeight
	// bool SetMorphTargetCurveWeight(FString MorphTargetName, float& Weight);                                                  // [0x80401a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomTimeZeroLocalTransform
	// bool SetCustomTimeZeroLocalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& AttributeValue, bool bResetCache); // [0x803f990] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomLocalTransform
	// bool SetCustomLocalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& AttributeValue, bool bResetCache); // [0x803f0e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomGeometricTransform
	// bool SetCustomGeometricTransform(FTransform& AttributeValue);                                                            // [0x803eda0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomBindPoseLocalTransform
	// bool SetCustomBindPoseLocalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& AttributeValue, bool bResetCache); // [0x803e9e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomAssetInstanceUid
	// bool SetCustomAssetInstanceUid(FString AttributeValue);                                                                  // [0x803e850] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.SetCustomAnimationAssetUidToPlay
	// bool SetCustomAnimationAssetUidToPlay(FString AttributeValue);                                                           // [0x803e6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.RemoveSpecializedType
	// bool RemoveSpecializedType(FString SpecializedType);                                                                     // [0x803e610] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.RemoveSlotMaterialDependencyUid
	// bool RemoveSlotMaterialDependencyUid(FString SlotName);                                                                  // [0x803e560] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.IsSpecializedTypeContains
	// bool IsSpecializedTypeContains(FString SpecializedType);                                                                 // [0x803dfb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSpecializedTypes
	// void GetSpecializedTypes(TArray<FString>& OutSpecializedTypes);                                                          // [0x803d8d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSpecializedTypeCount
	// int32_t GetSpecializedTypeCount();                                                                                       // [0x803d890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSpecializedType
	// void GetSpecializedType(int32_t Index, FString& OutSpecializedType);                                                     // [0x803d7a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSlotMaterialDependencyUid
	// bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);                                     // [0x803d590] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetSlotMaterialDependencies
	// void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies);                                       // [0x803d3e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetMorphTargetCurveWeights
	// void GetMorphTargetCurveWeights(TMap<FString, float>& OutMorphTargetCurveWeights);                                       // [0x803d230] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomTimeZeroLocalTransform
	// bool GetCustomTimeZeroLocalTransform(FTransform& AttributeValue);                                                        // [0x803cac0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomTimeZeroGlobalTransform
	// bool GetCustomTimeZeroGlobalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache); // [0x803c890] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomLocalTransform
	// bool GetCustomLocalTransform(FTransform& AttributeValue);                                                                // [0x803c210] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomGlobalTransform
	// bool GetCustomGlobalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache); // [0x803bee0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomGeometricTransform
	// bool GetCustomGeometricTransform(FTransform& AttributeValue);                                                            // [0x803bd80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomBindPoseLocalTransform
	// bool GetCustomBindPoseLocalTransform(FTransform& AttributeValue);                                                        // [0x803ba40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomBindPoseGlobalTransform
	// bool GetCustomBindPoseGlobalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache); // [0x803b810] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomAssetInstanceUid
	// bool GetCustomAssetInstanceUid(FString& AttributeValue);                                                                 // [0x803b6f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.GetCustomAnimationAssetUidToPlay
	// bool GetCustomAnimationAssetUidToPlay(FString& AttributeValue);                                                          // [0x803b5d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeSceneNode.AddSpecializedType
	// bool AddSpecializedType(FString SpecializedType);                                                                        // [0x803ada0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeNodes.InterchangeShaderPortsAPI
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInterchangeShaderPortsAPI : public UObject
{ 
public:


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.MakeInputValueKey
	// FString MakeInputValueKey(FString InputName);                                                                            // [0x803e480] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.MakeInputParameterKey
	// FString MakeInputParameterKey(FString InputName);                                                                        // [0x803e3a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.MakeInputName
	// FString MakeInputName(FString InputKey);                                                                                 // [0x803e220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.MakeInputConnectionKey
	// FString MakeInputConnectionKey(FString InputName);                                                                       // [0x803e140] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.IsAParameter
	// bool IsAParameter(FString AttributeKey);                                                                                 // [0x803dd20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.IsAnInput
	// bool IsAnInput(FString AttributeKey);                                                                                    // [0x803df10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.HasParameter
	// bool HasParameter(class UInterchangeBaseNode* InterchangeNode, FName& InInputName);                                      // [0x803db90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.HasInput
	// bool HasInput(class UInterchangeBaseNode* InterchangeNode, FName& InInputName);                                          // [0x803d9b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.GetInputConnection
	// bool GetInputConnection(class UInterchangeBaseNode* InterchangeNode, FString InputName, FString& OutExpressionUid, FString& OutputName); // [0x803d020] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.GatherInputs
	// void GatherInputs(class UInterchangeBaseNode* InterchangeNode, TArray<FString>& OutInputNames);                          // [0x803b4c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.ConnectOuputToInputByName
	// bool ConnectOuputToInputByName(class UInterchangeBaseNode* InterchangeNode, FString InputName, FString ExpressionUid, FString OutputName); // [0x803b2a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.ConnectOuputToInputByIndex
	// bool ConnectOuputToInputByIndex(class UInterchangeBaseNode* InterchangeNode, FString InputName, FString ExpressionUid, int32_t OutputIndex); // [0x803b120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderPortsAPI.ConnectDefaultOuputToInput
	// bool ConnectDefaultOuputToInput(class UInterchangeBaseNode* InterchangeNode, FString InputName, FString ExpressionUid);  // [0x803afc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/InterchangeNodes.InterchangeFunctionCallShaderNode
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UInterchangeFunctionCallShaderNode : public UInterchangeShaderNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0070   (0x0010)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeFunctionCallShaderNode.SetCustomMaterialFunction
	// bool SetCustomMaterialFunction(FString AttributeValue);                                                                  // [0x803f330] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeFunctionCallShaderNode.GetCustomMaterialFunction
	// bool GetCustomMaterialFunction(FString& AttributeValue);                                                                 // [0x803c370] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeShaderGraphNode
/// Size: 0x00D0 (208 bytes) (0x000070 - 0x0000D0) align 8 MaxSize: 0x00D0
class UInterchangeShaderGraphNode : public UInterchangeShaderNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0070   (0x0060)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomTwoSidedTransmission
	// bool SetCustomTwoSidedTransmission(bool& AttributeValue);                                                                // [0x803fd50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomTwoSided
	// bool SetCustomTwoSided(bool& AttributeValue);                                                                            // [0x803fbe0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomScreenSpaceReflections
	// bool SetCustomScreenSpaceReflections(bool& AttributeValue);                                                              // [0x803f690] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomOpacityMaskClipValue
	// bool SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate);                                       // [0x803f4c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomIsAShaderFunction
	// bool SetCustomIsAShaderFunction(bool& AttributeValue);                                                                   // [0x803ef70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.SetCustomBlendMode
	// bool SetCustomBlendMode(int32_t AttributeValue);                                                                         // [0x803ec30] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomTwoSidedTransmission
	// bool GetCustomTwoSidedTransmission(bool& AttributeValue);                                                                // [0x803cd20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomTwoSided
	// bool GetCustomTwoSided(bool& AttributeValue);                                                                            // [0x803cc20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomScreenSpaceReflections
	// bool GetCustomScreenSpaceReflections(bool& AttributeValue);                                                              // [0x803c670] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomOpacityMaskClipValue
	// bool GetCustomOpacityMaskClipValue(float& AttributeValue);                                                               // [0x803c490] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomIsAShaderFunction
	// bool GetCustomIsAShaderFunction(bool& AttributeValue);                                                                   // [0x803c110] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeShaderGraphNode.GetCustomBlendMode
	// bool GetCustomBlendMode(int32_t& AttributeValue);                                                                        // [0x803bba0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeTexture2DNode
/// Size: 0x0128 (296 bytes) (0x000090 - 0x000128) align 8 MaxSize: 0x0128
class UInterchangeTexture2DNode : public UInterchangeTextureNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x0090   (0x0098)  MISSED


	/// Functions
	// Function /Script/InterchangeNodes.InterchangeTexture2DNode.SetCustomWrapV
	// bool SetCustomWrapV(EInterchangeTextureWrapMode& AttributeValue);                                                        // [0x8040030] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTexture2DNode.SetCustomWrapU
	// bool SetCustomWrapU(EInterchangeTextureWrapMode& AttributeValue);                                                        // [0x803fec0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeNodes.InterchangeTexture2DNode.GetSourceBlocks
	// TMap<int32_t, FString> GetSourceBlocks();                                                                                // [0x803d6b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeTexture2DNode.GetCustomWrapV
	// bool GetCustomWrapV(EInterchangeTextureWrapMode& AttributeValue);                                                        // [0x803cf20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeNodes.InterchangeTexture2DNode.GetCustomWrapU
	// bool GetCustomWrapU(EInterchangeTextureWrapMode& AttributeValue);                                                        // [0x803ce20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeNodes.InterchangeTextureBlurNode
/// Size: 0x0128 (296 bytes) (0x000128 - 0x000128) align 8 MaxSize: 0x0128
class UInterchangeTextureBlurNode : public UInterchangeTexture2DNode
{ 
public:
};

/// Struct /Script/InterchangeNodes.InterchangeAnimationPayLoadKey
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInterchangeAnimationPayLoadKey
{ 
	FString                                            UniqueID;                                                   // 0x0000   (0x0010)  
	EInterchangeAnimationPayLoadType                   Type;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/InterchangeNodes.InterchangeMeshPayLoadKey
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInterchangeMeshPayLoadKey
{ 
	FString                                            UniqueID;                                                   // 0x0000   (0x0010)  
	EInterchangeMeshPayLoadType                        Type;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

#pragma pack(pop)


