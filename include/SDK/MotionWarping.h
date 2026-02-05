
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/MotionWarping.ERootMotionModifierState
/// Size: 0x01 (1 bytes)
enum class ERootMotionModifierState : uint8_t
{
	ERootMotionModifierState__Waiting                                                = 0,
	ERootMotionModifierState__Active                                                 = 1,
	ERootMotionModifierState__MarkedForRemoval                                       = 2,
	ERootMotionModifierState__Disabled                                               = 3
};

/// Enum /Script/MotionWarping.EMotionWarpRotationType
/// Size: 0x01 (1 bytes)
enum class EMotionWarpRotationType : uint8_t
{
	EMotionWarpRotationType__Default                                                 = 0,
	EMotionWarpRotationType__Facing                                                  = 1
};

/// Enum /Script/MotionWarping.EMotionWarpRotationMethod
/// Size: 0x01 (1 bytes)
enum class EMotionWarpRotationMethod : uint8_t
{
	EMotionWarpRotationMethod__Slerp                                                 = 0,
	EMotionWarpRotationMethod__SlerpWithClampedRate                                  = 1,
	EMotionWarpRotationMethod__ConstantRate                                          = 2
};

/// Enum /Script/MotionWarping.EWarpPointAnimProvider
/// Size: 0x01 (1 bytes)
enum class EWarpPointAnimProvider : uint8_t
{
	EWarpPointAnimProvider__None                                                     = 0,
	EWarpPointAnimProvider__Static                                                   = 1,
	EWarpPointAnimProvider__Bone                                                     = 2
};

/// Class /Script/MotionWarping.AnimNotifyState_MotionWarping
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UAnimNotifyState_MotionWarping : public UAnimNotifyState
{ 
public:
	class URootMotionModifier*                         RootMotionModifier;                                         // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpUpdate
	// void OnWarpUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);                // [0x35d7f00] Event|Public|BlueprintEvent|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd
	// void OnWarpEnd(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);                   // [0x35d7f00] Event|Public|BlueprintEvent|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin
	// void OnWarpBegin(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);                 // [0x35d7f00] Event|Public|BlueprintEvent|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate
	// void OnRootMotionModifierUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);  // [0x65fb920] Final|Native|Public|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate
	// void OnRootMotionModifierDeactivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier); // [0x65fb820] Final|Native|Public|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate
	// void OnRootMotionModifierActivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier); // [0x65fb720] Final|Native|Public|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier
	// class URootMotionModifier* AddRootMotionModifier(class UMotionWarpingComponent* MotionWarpingComp, class UAnimSequenceBase* Animation, float StartTime, float EndTime); // [0x65fa540] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/MotionWarping.MotionWarpingUtilities
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsFromAnimation
	// void GetMotionWarpingWindowsFromAnimation(class UAnimSequenceBase* Animation, TArray<FMotionWarpingWindowData>& OutWindows); // [0x65fb510] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsForWarpTargetFromAnimation
	// void GetMotionWarpingWindowsForWarpTargetFromAnimation(class UAnimSequenceBase* Animation, FName WarpTargetName, TArray<FMotionWarpingWindowData>& OutWindows); // [0x65fb240] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingUtilities.ExtractRootMotionFromAnimation
	// FTransform ExtractRootMotionFromAnimation(class UAnimSequenceBase* Animation, float StartTime, float EndTime);           // [0x65fb0d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/MotionWarping.MotionWarpingTarget
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FMotionWarpingTarget
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0020   (0x0018)  
	TWeakObjectPtr<class USceneComponent*>             Component;                                                  // 0x0038   (0x0008)  
	FName                                              BoneName;                                                   // 0x0040   (0x0008)  
	bool                                               bFollowComponent;                                           // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	FVector                                            LocationOffset;                                             // 0x0050   (0x0018)  
	FRotator                                           RotationOffset;                                             // 0x0068   (0x0018)  
};

/// Class /Script/MotionWarping.MotionWarpingComponent
/// Size: 0x00E0 (224 bytes) (0x0000A0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UMotionWarpingComponent : public UActorComponent
{ 
public:
	bool                                               bSearchForWindowsInAnimsWithinMontages;                     // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
	SDK_UNDEFINED(16,506) /* FMulticastInlineDelegate */ __um(OnPreUpdate);                                        // 0x00A8   (0x0010)  
	TWeakObjectPtr<class ACharacter*>                  CharacterOwner;                                             // 0x00B8   (0x0008)  
	TArray<class URootMotionModifier*>                 Modifiers;                                                  // 0x00C0   (0x0010)  
	TArray<FMotionWarpingTarget>                       WarpTargets;                                                // 0x00D0   (0x0010)  


	/// Functions
	// Function /Script/MotionWarping.MotionWarpingComponent.RemoveWarpTarget
	// int32_t RemoveWarpTarget(FName WarpTargetName);                                                                          // [0x65fba80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.RemoveAllWarpTargets
	// int32_t RemoveAllWarpTargets();                                                                                          // [0x65fba20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.DisableAllRootMotionModifiers
	// void DisableAllRootMotionModifiers();                                                                                    // [0x65fb040] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromTransform
	// void AddOrUpdateWarpTargetFromTransform(FName WarpTargetName, FTransform TargetTransform);                               // [0x65fa3e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocationAndRotation
	// void AddOrUpdateWarpTargetFromLocationAndRotation(FName WarpTargetName, FVector TargetLocation, FRotator TargetRotation); // [0x65fa240] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocation
	// void AddOrUpdateWarpTargetFromLocation(FName WarpTargetName, FVector TargetLocation);                                    // [0x65fa110] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromComponent
	// void AddOrUpdateWarpTargetFromComponent(FName WarpTargetName, class USceneComponent* Component, FName BoneName, bool bFollowComponent, FVector LocationOffset, FRotator RotationOffset); // [0x65f9ed0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTarget
	// void AddOrUpdateWarpTarget(FMotionWarpingTarget& WarpTarget);                                                            // [0x65f9da0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MotionWarping.RootMotionModifier
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x0000F0) align 16 MaxSize: 0x00E8
class URootMotionModifier : public UObject
{ 
public:
	TWeakObjectPtr<class UAnimSequenceBase*>           Animation;                                                  // 0x0028   (0x0008)  
	float                                              StartTime;                                                  // 0x0030   (0x0004)  
	float                                              EndTime;                                                    // 0x0034   (0x0004)  
	float                                              PreviousPosition;                                           // 0x0038   (0x0004)  
	float                                              CurrentPosition;                                            // 0x003C   (0x0004)  
	float                                              Weight;                                                     // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0044   (0x000C)  MISSED
	FTransform                                         StartTransform;                                             // 0x0050   (0x0060)  
	float                                              ActualStartTime;                                            // 0x00B0   (0x0004)  
	SDK_UNDEFINED(16,507) /* FDelegateProperty */      __um(OnActivateDelegate);                                   // 0x00B4   (0x0010)  
	SDK_UNDEFINED(16,508) /* FDelegateProperty */      __um(OnUpdateDelegate);                                     // 0x00C4   (0x0010)  
	SDK_UNDEFINED(16,509) /* FDelegateProperty */      __um(OnDeactivateDelegate);                                 // 0x00D4   (0x0010)  
	ERootMotionModifierState                           State;                                                      // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x00E5   (0x0003)  MISSED
};

/// Class /Script/MotionWarping.RootMotionModifier_Warp
/// Size: 0x0260 (608 bytes) (0x0000E8 - 0x000260) align 16 MaxSize: 0x0260
class URootMotionModifier_Warp : public URootMotionModifier
{ 
public:
	FName                                              WarpTargetName;                                             // 0x00E8   (0x0008)  
	EWarpPointAnimProvider                             WarpPointAnimProvider;                                      // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x00F1   (0x000F)  MISSED
	FTransform                                         WarpPointAnimTransform;                                     // 0x0100   (0x0060)  
	FName                                              WarpPointAnimBoneName;                                      // 0x0160   (0x0008)  
	bool                                               bWarpTranslation;                                           // 0x0168   (0x0001)  
	bool                                               bIgnoreZAxis;                                               // 0x0169   (0x0001)  
	EAlphaBlendOption                                  AddTranslationEasingFunc;                                   // 0x016A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x016B   (0x0005)  MISSED
	class UCurveFloat*                                 AddTranslationEasingCurve;                                  // 0x0170   (0x0008)  
	bool                                               bWarpRotation;                                              // 0x0178   (0x0001)  
	EMotionWarpRotationType                            RotationType;                                               // 0x0179   (0x0001)  
	EMotionWarpRotationMethod                          RotationMethod;                                             // 0x017A   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x017B   (0x0001)  MISSED
	float                                              WarpRotationTimeMultiplier;                                 // 0x017C   (0x0004)  
	float                                              WarpMaxRotationRate;                                        // 0x0180   (0x0004)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x0184   (0x000C)  MISSED
	FTransform                                         CachedTargetTransform;                                      // 0x0190   (0x0060)  
	unsigned char                                      UnknownData04_7[0x70];                                      // 0x01F0   (0x0070)  MISSED
};

/// Class /Script/MotionWarping.RootMotionModifier_SimpleWarp
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 16 MaxSize: 0x0260
class URootMotionModifier_SimpleWarp : public URootMotionModifier_Warp
{ 
public:
};

/// Class /Script/MotionWarping.RootMotionModifier_Scale
/// Size: 0x0100 (256 bytes) (0x0000E8 - 0x000100) align 16 MaxSize: 0x0100
class URootMotionModifier_Scale : public URootMotionModifier
{ 
public:
	FVector                                            Scale;                                                      // 0x00E8   (0x0018)  


	/// Functions
	// Function /Script/MotionWarping.RootMotionModifier_Scale.AddRootMotionModifierScale
	// class URootMotionModifier_Scale* AddRootMotionModifierScale(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* inAnimation, float InStartTime, float InEndTime, FVector InScale); // [0x65fa6a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MotionWarping.RootMotionModifier_AdjustmentBlendWarp
/// Size: 0x03C0 (960 bytes) (0x000260 - 0x0003C0) align 16 MaxSize: 0x03C0
class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
{ 
public:
	bool                                               bWarpIKBones;                                               // 0x0260   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0261   (0x0007)  MISSED
	TArray<FName>                                      IKBones;                                                    // 0x0268   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0278   (0x0008)  MISSED
	FTransform                                         CachedMeshTransform;                                        // 0x0280   (0x0060)  
	FTransform                                         CachedMeshRelativeTransform;                                // 0x02E0   (0x0060)  
	FTransform                                         CachedRootMotion;                                           // 0x0340   (0x0060)  
	FAnimSequenceTrackContainer                        Result;                                                     // 0x03A0   (0x0020)  
};

/// Class /Script/MotionWarping.RootMotionModifier_SkewWarp
/// Size: 0x0260 (608 bytes) (0x000260 - 0x000260) align 16 MaxSize: 0x0260
class URootMotionModifier_SkewWarp : public URootMotionModifier_Warp
{ 
public:


	/// Functions
	// Function /Script/MotionWarping.RootMotionModifier_SkewWarp.AddRootMotionModifierSkewWarp
	// class URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* inAnimation, float InStartTime, float InEndTime, FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, FTransform InWarpPointAnimTransform, FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, EMotionWarpRotationMethod InRotationMethod, float InWarpRotationTimeMultiplier, float InWarpMaxRotationRate); // [0x65fa980] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/MotionWarping.MotionWarpingWindowData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMotionWarpingWindowData
{ 
	class UAnimNotifyState_MotionWarping*              AnimNotify;                                                 // 0x0000   (0x0008)  
	float                                              StartTime;                                                  // 0x0008   (0x0004)  
	float                                              EndTime;                                                    // 0x000C   (0x0004)  
};

/// Struct /Script/MotionWarping.MotionWarpingUpdateContext
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FMotionWarpingUpdateContext
{ 
	TWeakObjectPtr<class UAnimSequenceBase*>           Animation;                                                  // 0x0000   (0x0008)  
	float                                              PreviousPosition;                                           // 0x0008   (0x0004)  
	float                                              CurrentPosition;                                            // 0x000C   (0x0004)  
	float                                              Weight;                                                     // 0x0010   (0x0004)  
	float                                              PlayRate;                                                   // 0x0014   (0x0004)  
	float                                              DeltaSeconds;                                               // 0x0018   (0x0004)  
};

/// Struct /Script/MotionWarping.MotionDeltaTrack
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FMotionDeltaTrack
{ 
	TArray<FTransform>                                 BoneTransformTrack;                                         // 0x0000   (0x0010)  
	TArray<FVector>                                    DeltaTranslationTrack;                                      // 0x0010   (0x0010)  
	TArray<FRotator>                                   DeltaRotationTrack;                                         // 0x0020   (0x0010)  
	FVector                                            TotalTranslation;                                           // 0x0030   (0x0018)  
	FRotator                                           TotalRotation;                                              // 0x0048   (0x0018)  
};

/// Struct /Script/MotionWarping.MotionDeltaTrackContainer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMotionDeltaTrackContainer
{ 
	TArray<FMotionDeltaTrack>                          Tracks;                                                     // 0x0000   (0x0010)  
};

#pragma pack(pop)


