
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore

#pragma pack(push, 0x1)

/// Enum /Script/HeadMountedDisplay.EOrientPositionSelector
/// Size: 0x01 (1 bytes)
enum class EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation                                             = 0,
	EOrientPositionSelector__Position                                                = 1,
	EOrientPositionSelector__OrientationAndPosition                                  = 2
};

/// Enum /Script/HeadMountedDisplay.EHMDTrackingOrigin
/// Size: 0x01 (1 bytes)
enum class EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__View                                                         = 0,
	EHMDTrackingOrigin__LocalFloor                                                   = 1,
	EHMDTrackingOrigin__Local                                                        = 2,
	EHMDTrackingOrigin__Stage                                                        = 3,
	EHMDTrackingOrigin__CustomOpenXR                                                 = 4
};

/// Enum /Script/HeadMountedDisplay.EHMDWornState
/// Size: 0x01 (1 bytes)
enum class EHMDWornState : uint8_t
{
	EHMDWornState__Unknown                                                           = 0,
	EHMDWornState__Worn                                                              = 1,
	EHMDWornState__NotWorn                                                           = 2
};

/// Enum /Script/HeadMountedDisplay.EXRDeviceConnectionResult
/// Size: 0x01 (1 bytes)
enum class EXRDeviceConnectionResult : uint8_t
{
	EXRDeviceConnectionResult__NoTrackingSystem                                      = 0,
	EXRDeviceConnectionResult__FeatureNotSupported                                   = 1,
	EXRDeviceConnectionResult__NoValidViewport                                       = 2,
	EXRDeviceConnectionResult__MiscFailure                                           = 3,
	EXRDeviceConnectionResult__Success                                               = 4
};

/// Enum /Script/HeadMountedDisplay.EXRSystemFlags
/// Size: 0x01 (1 bytes)
enum class EXRSystemFlags : uint8_t
{
	EXRSystemFlags__NoFlags                                                          = 0,
	EXRSystemFlags__IsAR                                                             = 1,
	EXRSystemFlags__IsTablet                                                         = 2,
	EXRSystemFlags__IsHeadMounted                                                    = 4,
	EXRSystemFlags__SupportsHandTracking                                             = 8
};

/// Enum /Script/HeadMountedDisplay.ESpectatorScreenMode
/// Size: 0x01 (1 bytes)
enum class ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled                                                   = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed                                       = 1,
	ESpectatorScreenMode__Undistorted                                                = 2,
	ESpectatorScreenMode__Distorted                                                  = 3,
	ESpectatorScreenMode__SingleEye                                                  = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill                                     = 5,
	ESpectatorScreenMode__Texture                                                    = 6,
	ESpectatorScreenMode__TexturePlusEye                                             = 7
};

/// Enum /Script/HeadMountedDisplay.EXRTrackedDeviceType
/// Size: 0x01 (1 bytes)
enum class EXRTrackedDeviceType : uint8_t
{
	EXRTrackedDeviceType__HeadMountedDisplay                                         = 0,
	EXRTrackedDeviceType__Controller                                                 = 1,
	EXRTrackedDeviceType__TrackingReference                                          = 2,
	EXRTrackedDeviceType__Tracker                                                    = 3,
	EXRTrackedDeviceType__Other                                                      = 4,
	EXRTrackedDeviceType__Invalid                                                    = 254,
	EXRTrackedDeviceType__Any                                                        = 255
};

/// Enum /Script/HeadMountedDisplay.EHandKeypoint
/// Size: 0x01 (1 bytes)
enum class EHandKeypoint : uint8_t
{
	EHandKeypoint__Palm                                                              = 0,
	EHandKeypoint__Wrist                                                             = 1,
	EHandKeypoint__ThumbMetacarpal                                                   = 2,
	EHandKeypoint__ThumbProximal                                                     = 3,
	EHandKeypoint__ThumbDistal                                                       = 4,
	EHandKeypoint__ThumbTip                                                          = 5,
	EHandKeypoint__IndexMetacarpal                                                   = 6,
	EHandKeypoint__IndexProximal                                                     = 7,
	EHandKeypoint__IndexIntermediate                                                 = 8,
	EHandKeypoint__IndexDistal                                                       = 9,
	EHandKeypoint__IndexTip                                                          = 10,
	EHandKeypoint__MiddleMetacarpal                                                  = 11,
	EHandKeypoint__MiddleProximal                                                    = 12,
	EHandKeypoint__MiddleIntermediate                                                = 13,
	EHandKeypoint__MiddleDistal                                                      = 14,
	EHandKeypoint__MiddleTip                                                         = 15,
	EHandKeypoint__RingMetacarpal                                                    = 16,
	EHandKeypoint__RingProximal                                                      = 17,
	EHandKeypoint__RingIntermediate                                                  = 18,
	EHandKeypoint__RingDistal                                                        = 19,
	EHandKeypoint__RingTip                                                           = 20,
	EHandKeypoint__LittleMetacarpal                                                  = 21,
	EHandKeypoint__LittleProximal                                                    = 22,
	EHandKeypoint__LittleIntermediate                                                = 23,
	EHandKeypoint__LittleDistal                                                      = 24,
	EHandKeypoint__LittleTip                                                         = 25
};

/// Enum /Script/HeadMountedDisplay.EXRVisualType
/// Size: 0x01 (1 bytes)
enum class EXRVisualType : uint8_t
{
	EXRVisualType__Controller                                                        = 0,
	EXRVisualType__Hand                                                              = 1
};

/// Enum /Script/HeadMountedDisplay.ETrackingStatus
/// Size: 0x01 (1 bytes)
enum class ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked                                                      = 0,
	ETrackingStatus__InertialOnly                                                    = 1,
	ETrackingStatus__Tracked                                                         = 2
};

/// Class /Script/HeadMountedDisplay.HandKeypointConversion
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UHandKeypointConversion : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32
	// int32_t Conv_HandKeypointToInt32(EHandKeypoint Input);                                                                   // [0x4b8db60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/HeadMountedDisplay.MotionControllerComponent
/// Size: 0x0660 (1632 bytes) (0x000518 - 0x000660) align 16 MaxSize: 0x0660
class UMotionControllerComponent : public UPrimitiveComponent
{ 
public:
	int32_t                                            playerIndex;                                                // 0x0518   (0x0004)  
	FName                                              MotionSource;                                               // 0x051C   (0x0008)  
	bool                                               bDisableLowLatencyUpdate : 1;                               // 0x0524:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0525   (0x0003)  MISSED
	ETrackingStatus                                    CurrentTrackingStatus;                                      // 0x0528   (0x0001)  
	unsigned char                                      UnknownData01_7[0x137];                                     // 0x0529   (0x0137)  MISSED


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	// void SetTrackingSource(EControllerHand NewSource);                                                                       // [0x4b8e200] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	// void SetTrackingMotionSource(FName NewSource);                                                                           // [0x4b8e130] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	// void SetAssociatedPlayerIndex(int32_t NewPlayer);                                                                        // [0x4b8e070] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	// void OnMotionControllerUpdated();                                                                                        // [0x35d7f00] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.IsTracked
	// bool IsTracked();                                                                                                        // [0x4b8e050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	// EControllerHand GetTrackingSource();                                                                                     // [0x4b8e000] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	// float GetParameterValue(FName InName, bool& bValueFound);                                                                // [0x4b8def0] Final|RequiredAPI|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetLinearVelocity
	// bool GetLinearVelocity(FVector& OutLinearVelocity);                                                                      // [0x4b8de50] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetLinearAcceleration
	// bool GetLinearAcceleration(FVector& OutLinearAcceleration);                                                              // [0x4b8ddb0] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
	// FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound);                                                     // [0x4b8dc80] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetAngularVelocity
	// bool GetAngularVelocity(FRotator& OutAngularVelocity);                                                                   // [0x4b8dbe0] Final|RequiredAPI|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/HeadMountedDisplay.XRHMDData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FXRHMDData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x0008)  
	FGuid                                              ApplicationInstanceID;                                      // 0x000C   (0x0010)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FVector                                            Position;                                                   // 0x0020   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0040   (0x0020)  
};

/// Struct /Script/HeadMountedDisplay.XRMotionControllerData
/// Size: 0x0120 (288 bytes) (0x000000 - 0x000120) align 16 MaxSize: 0x0120
struct FXRMotionControllerData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x0008)  
	FGuid                                              ApplicationInstanceID;                                      // 0x000C   (0x0010)  
	EXRVisualType                                      DeviceVisualType;                                           // 0x001C   (0x0001)  
	EControllerHand                                    HandIndex;                                                  // 0x001D   (0x0001)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x001E   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x001F   (0x0001)  MISSED
	FVector                                            GripPosition;                                               // 0x0020   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	FQuat                                              GripRotation;                                               // 0x0040   (0x0020)  
	FVector                                            AimPosition;                                                // 0x0060   (0x0018)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0078   (0x0008)  MISSED
	FQuat                                              AimRotation;                                                // 0x0080   (0x0020)  
	FVector                                            PalmPosition;                                               // 0x00A0   (0x0018)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FQuat                                              PalmRotation;                                               // 0x00C0   (0x0020)  
	TArray<FVector>                                    HandKeyPositions;                                           // 0x00E0   (0x0010)  
	TArray<FQuat>                                      HandKeyRotations;                                           // 0x00F0   (0x0010)  
	TArray<float>                                      HandKeyRadii;                                               // 0x0100   (0x0010)  
	bool                                               bIsGrasped;                                                 // 0x0110   (0x0001)  
	unsigned char                                      UnknownData05_7[0xF];                                       // 0x0111   (0x000F)  MISSED
};

/// Struct /Script/HeadMountedDisplay.XRDeviceId
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FXRDeviceId
{ 
	FName                                              SystemName;                                                 // 0x0000   (0x0008)  
	int32_t                                            DeviceID;                                                   // 0x0008   (0x0004)  
};

#pragma pack(pop)


