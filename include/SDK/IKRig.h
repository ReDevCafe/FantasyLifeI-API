
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PBIK

#pragma pack(push, 0x1)

/// Enum /Script/IKRig.EPinBoneType
/// Size: 0x01 (1 bytes)
enum class EPinBoneType : uint8_t
{
	EPinBoneType__FullTransform                                                      = 0,
	EPinBoneType__TranslateOnly                                                      = 1,
	EPinBoneType__RotateOnly                                                         = 2,
	EPinBoneType__ScaleOnly                                                          = 3
};

/// Enum /Script/IKRig.ERootMotionSource
/// Size: 0x01 (1 bytes)
enum class ERootMotionSource : uint8_t
{
	ERootMotionSource__CopyFromSourceRoot                                            = 0,
	ERootMotionSource__GenerateFromTargetPelvis                                      = 1
};

/// Enum /Script/IKRig.ERootMotionHeightSource
/// Size: 0x01 (1 bytes)
enum class ERootMotionHeightSource : uint8_t
{
	ERootMotionHeightSource__CopyHeightFromSource                                    = 0,
	ERootMotionHeightSource__SnapToGround                                            = 1
};

/// Enum /Script/IKRig.ERetargetSourceOrTarget
/// Size: 0x01 (1 bytes)
enum class ERetargetSourceOrTarget : uint8_t
{
	ERetargetSourceOrTarget__Source                                                  = 0,
	ERetargetSourceOrTarget__Target                                                  = 1
};

/// Enum /Script/IKRig.ERetargetTranslationMode
/// Size: 0x01 (1 bytes)
enum class ERetargetTranslationMode : uint8_t
{
	ERetargetTranslationMode__None                                                   = 0,
	ERetargetTranslationMode__GloballyScaled                                         = 1,
	ERetargetTranslationMode__Absolute                                               = 2
};

/// Enum /Script/IKRig.ERetargetRotationMode
/// Size: 0x01 (1 bytes)
enum class ERetargetRotationMode : uint8_t
{
	ERetargetRotationMode__Interpolated                                              = 0,
	ERetargetRotationMode__OneToOne                                                  = 1,
	ERetargetRotationMode__OneToOneReversed                                          = 2,
	ERetargetRotationMode__None                                                      = 3
};

/// Enum /Script/IKRig.EBasicAxis
/// Size: 0x04 (4 bytes)
enum class EBasicAxis : uint32_t
{
	EBasicAxis__X                                                                    = 0,
	EBasicAxis__Y                                                                    = 1,
	EBasicAxis__Z                                                                    = 2,
	EBasicAxis__NegX                                                                 = 3,
	EBasicAxis__NegY                                                                 = 4,
	EBasicAxis__NegZ                                                                 = 5
};

/// Enum /Script/IKRig.EWarpingDirectionSource
/// Size: 0x04 (4 bytes)
enum class EWarpingDirectionSource : uint32_t
{
	EWarpingDirectionSource__Goals                                                   = 0,
	EWarpingDirectionSource__Chain                                                   = 1,
	EWarpingDirectionSource__RootBone                                                = 2
};

/// Enum /Script/IKRig.EIKRigGoalSpace
/// Size: 0x01 (1 bytes)
enum class EIKRigGoalSpace : uint8_t
{
	EIKRigGoalSpace__Component                                                       = 0,
	EIKRigGoalSpace__Additive                                                        = 1,
	EIKRigGoalSpace__World                                                           = 2
};

/// Enum /Script/IKRig.EIKRigGoalTransformSource
/// Size: 0x01 (1 bytes)
enum class EIKRigGoalTransformSource : uint8_t
{
	EIKRigGoalTransformSource__Manual                                                = 0,
	EIKRigGoalTransformSource__Bone                                                  = 1,
	EIKRigGoalTransformSource__ActorComponent                                        = 2
};

/// Class /Script/IKRig.RetargetOpBase
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class URetargetOpBase : public UObject
{ 
public:
	bool                                               bIsEnabled;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/IKRig.CurveRemapPair
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FCurveRemapPair
{ 
	FName                                              SourceCurve;                                                // 0x0000   (0x0008)  
	FName                                              TargetCurve;                                                // 0x0008   (0x0008)  
};

/// Class /Script/IKRig.CurveRemapOp
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UCurveRemapOp : public URetargetOpBase
{ 
public:
	TArray<FCurveRemapPair>                            CurvesToRemap;                                              // 0x0030   (0x0010)  
	bool                                               bCopyAllSourceCurves;                                       // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Class /Script/IKRig.RetargetOpStack
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class URetargetOpStack : public UObject
{ 
public:
	TArray<class URetargetOpBase*>                     RetargetOps;                                                // 0x0028   (0x0010)  
};

/// Class /Script/IKRig.IKGoalCreatorInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UIKGoalCreatorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/IKRig.IKGoalCreatorInterface.AddIKGoals
	// void AddIKGoals(TMap<FName, FIKRigGoal>& OutGoals);                                                                      // [0x8676470] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/IKRig.PinBoneData
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FPinBoneData
{ 
	FName                                              BoneToPin;                                                  // 0x0000   (0x0008)  
	FName                                              BoneToPinTo;                                                // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_7[0x70];                                      // 0x0010   (0x0070)  MISSED
};

/// Class /Script/IKRig.PinBoneOp
/// Size: 0x0110 (272 bytes) (0x000030 - 0x000110) align 16 MaxSize: 0x0110
class UPinBoneOp : public URetargetOpBase
{ 
public:
	TArray<FPinBoneData>                               BonesToPin;                                                 // 0x0030   (0x0010)  
	ERetargetSourceOrTarget                            PinTo;                                                      // 0x0040   (0x0001)  
	EPinBoneType                                       PinType;                                                    // 0x0041   (0x0001)  
	bool                                               bMaintainOffset;                                            // 0x0042   (0x0001)  
	unsigned char                                      UnknownData00_6[0xD];                                       // 0x0043   (0x000D)  MISSED
	FTransform                                         GlobalOffset;                                               // 0x0050   (0x0060)  
	FTransform                                         LocalOffset;                                                // 0x00B0   (0x0060)  
};

/// Class /Script/IKRig.RootMotionGeneratorOp
/// Size: 0x0250 (592 bytes) (0x000030 - 0x000250) align 16 MaxSize: 0x0250
class URootMotionGeneratorOp : public URetargetOpBase
{ 
public:
	FName                                              SourceRootBone;                                             // 0x0030   (0x0008)  
	FName                                              TargetRootBone;                                             // 0x0038   (0x0008)  
	FName                                              TargetPelvisBone;                                           // 0x0040   (0x0008)  
	ERootMotionSource                                  RootMotionSource;                                           // 0x0048   (0x0001)  
	ERootMotionHeightSource                            RootHeightSource;                                           // 0x0049   (0x0001)  
	bool                                               bPropagateToNonRetargetedChildren;                          // 0x004A   (0x0001)  
	bool                                               bMaintainOffsetFromPelvis;                                  // 0x004B   (0x0001)  
	bool                                               bRotateWithPelvis;                                          // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	FTransform                                         GlobalOffset;                                               // 0x0050   (0x0060)  
	unsigned char                                      UnknownData01_7[0x1A0];                                     // 0x00B0   (0x01A0)  MISSED
};

/// Class /Script/IKRig.IKRigComponent
/// Size: 0x00B8 (184 bytes) (0x0000A0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UIKRigComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/IKRig.IKRigComponent.SetIKRigGoalTransform
	// void SetIKRigGoalTransform(FName GoalName, FTransform Transform, float PositionAlpha, float RotationAlpha);              // [0x86786f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
	// void SetIKRigGoalPositionAndRotation(FName GoalName, FVector Position, FQuat Rotation, float PositionAlpha, float RotationAlpha); // [0x8678490] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/IKRig.IKRigComponent.SetIKRigGoal
	// void SetIKRigGoal(FIKRigGoal& Goal);                                                                                     // [0x8678370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRigComponent.ClearAllGoals
	// void ClearAllGoals();                                                                                                    // [0x86765b0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/IKRig.TargetChainFKSettings
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FTargetChainFKSettings
{ 
	bool                                               EnableFK;                                                   // 0x0000   (0x0001)  
	ERetargetRotationMode                              RotationMode;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              RotationAlpha;                                              // 0x0004   (0x0004)  
	ERetargetTranslationMode                           TranslationMode;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              TranslationAlpha;                                           // 0x000C   (0x0004)  
	float                                              PoleVectorMatching;                                         // 0x0010   (0x0004)  
	bool                                               PoleVectorMaintainOffset;                                   // 0x0014   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              PoleVectorOffset;                                           // 0x0018   (0x0004)  
};

/// Struct /Script/IKRig.TargetChainIKSettings
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FTargetChainIKSettings
{ 
	bool                                               EnableIK;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              BlendToSource;                                              // 0x0004   (0x0004)  
	FVector                                            BlendToSourceWeights;                                       // 0x0008   (0x0018)  
	FVector                                            StaticOffset;                                               // 0x0020   (0x0018)  
	FVector                                            StaticLocalOffset;                                          // 0x0038   (0x0018)  
	FRotator                                           StaticRotationOffset;                                       // 0x0050   (0x0018)  
	float                                              ScaleVertical;                                              // 0x0068   (0x0004)  
	float                                              Extension;                                                  // 0x006C   (0x0004)  
	bool                                               bAffectedByIKWarping;                                       // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/IKRig.TargetChainSpeedPlantSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FTargetChainSpeedPlantSettings
{ 
	bool                                               EnableSpeedPlanting;                                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              SpeedCurveName;                                             // 0x0004   (0x0008)  
	float                                              SpeedThreshold;                                             // 0x000C   (0x0004)  
	float                                              UnplantStiffness;                                           // 0x0010   (0x0004)  
	float                                              UnplantCriticalDamping;                                     // 0x0014   (0x0004)  
};

/// Struct /Script/IKRig.TargetChainSettings
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FTargetChainSettings
{ 
	FTargetChainFKSettings                             FK;                                                         // 0x0000   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FTargetChainIKSettings                             IK;                                                         // 0x0020   (0x0078)  
	FTargetChainSpeedPlantSettings                     SpeedPlanting;                                              // 0x0098   (0x0018)  
};

/// Class /Script/IKRig.RetargetChainSettings
/// Size: 0x00E8 (232 bytes) (0x000028 - 0x0000E8) align 8 MaxSize: 0x00E8
class URetargetChainSettings : public UObject
{ 
public:
	FName                                              SourceChain;                                                // 0x0028   (0x0008)  
	FName                                              TargetChain;                                                // 0x0030   (0x0008)  
	FTargetChainSettings                               Settings;                                                   // 0x0038   (0x00B0)  
};

/// Struct /Script/IKRig.TargetRootSettings
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FTargetRootSettings
{ 
	float                                              RotationAlpha;                                              // 0x0000   (0x0004)  
	float                                              TranslationAlpha;                                           // 0x0004   (0x0004)  
	float                                              BlendToSource;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            BlendToSourceWeights;                                       // 0x0010   (0x0018)  
	float                                              ScaleHorizontal;                                            // 0x0028   (0x0004)  
	float                                              ScaleVertical;                                              // 0x002C   (0x0004)  
	FVector                                            TranslationOffset;                                          // 0x0030   (0x0018)  
	FRotator                                           RotationOffset;                                             // 0x0048   (0x0018)  
	float                                              AffectIKHorizontal;                                         // 0x0060   (0x0004)  
	float                                              AffectIKVertical;                                           // 0x0064   (0x0004)  
};

/// Class /Script/IKRig.RetargetRootSettings
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class URetargetRootSettings : public UObject
{ 
public:
	FTargetRootSettings                                Settings;                                                   // 0x0028   (0x0068)  
};

/// Struct /Script/IKRig.RetargetGlobalSettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FRetargetGlobalSettings
{ 
	bool                                               bEnableRoot;                                                // 0x0000   (0x0001)  
	bool                                               bEnableFK;                                                  // 0x0001   (0x0001)  
	bool                                               bEnableIK;                                                  // 0x0002   (0x0001)  
	bool                                               bEnablePost;                                                // 0x0003   (0x0001)  
	bool                                               bWarping;                                                   // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	EWarpingDirectionSource                            DirectionSource;                                            // 0x0008   (0x0004)  
	EBasicAxis                                         ForwardDirection;                                           // 0x000C   (0x0004)  
	FName                                              DirectionChain;                                             // 0x0010   (0x0008)  
	float                                              WarpForwards;                                               // 0x0018   (0x0004)  
	float                                              SidewaysOffset;                                             // 0x001C   (0x0004)  
	float                                              WarpSplay;                                                  // 0x0020   (0x0004)  
};

/// Class /Script/IKRig.IKRetargetGlobalSettings
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UIKRetargetGlobalSettings : public UObject
{ 
public:
	FRetargetGlobalSettings                            Settings;                                                   // 0x0028   (0x0024)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/IKRig.RetargetChainMap
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FRetargetChainMap
{ 
	FName                                              SourceChain;                                                // 0x0000   (0x0008)  
	FName                                              TargetChain;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/IKRig.RetargetProfile
/// Size: 0x0108 (264 bytes) (0x000000 - 0x000108) align 8 MaxSize: 0x0108
struct FRetargetProfile
{ 
	bool                                               bApplyTargetRetargetPose;                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              TargetRetargetPoseName;                                     // 0x0004   (0x0008)  
	bool                                               bApplySourceRetargetPose;                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	FName                                              SourceRetargetPoseName;                                     // 0x0010   (0x0008)  
	bool                                               bApplyChainSettings;                                        // 0x0018   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0019   (0x0007)  MISSED
	TMap<FName, FTargetChainSettings>                  ChainSettings;                                              // 0x0020   (0x0050)  
	bool                                               bApplyRootSettings;                                         // 0x0070   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	FTargetRootSettings                                RootSettings;                                               // 0x0078   (0x0068)  
	bool                                               bApplyGlobalSettings;                                       // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x00E1   (0x0003)  MISSED
	FRetargetGlobalSettings                            GlobalSettings;                                             // 0x00E4   (0x0024)  
};

/// Struct /Script/IKRig.IKRetargetPose
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FIKRetargetPose
{ 
	FVector                                            RootTranslationOffset;                                      // 0x0000   (0x0018)  
	TMap<FName, FQuat>                                 BoneRotationOffsets;                                        // 0x0018   (0x0050)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Class /Script/IKRig.IKRetargeter
/// Size: 0x0218 (536 bytes) (0x000028 - 0x000218) align 8 MaxSize: 0x0218
class UIKRetargeter : public UObject
{ 
public:
	int32_t                                            Version;                                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TWeakObjectPtr<class UIKRigDefinition*>            SourceIKRigAsset;                                           // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0038   (0x0020)  MISSED
	TWeakObjectPtr<class UIKRigDefinition*>            TargetIKRigAsset;                                           // 0x0058   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0060   (0x0020)  MISSED
	TArray<FRetargetChainMap>                          ChainMapping;                                               // 0x0080   (0x0010)  
	TArray<class URetargetChainSettings*>              ChainSettings;                                              // 0x0090   (0x0010)  
	class URetargetRootSettings*                       RootSettings;                                               // 0x00A0   (0x0008)  
	class UIKRetargetGlobalSettings*                   GlobalSettings;                                             // 0x00A8   (0x0008)  
	class URetargetOpStack*                            OpStack;                                                    // 0x00B0   (0x0008)  
	TMap<FName, FRetargetProfile>                      Profiles;                                                   // 0x00B8   (0x0050)  
	FName                                              CurrentProfile;                                             // 0x0108   (0x0008)  
	TMap<FName, FIKRetargetPose>                       SourceRetargetPoses;                                        // 0x0110   (0x0050)  
	TMap<FName, FIKRetargetPose>                       TargetRetargetPoses;                                        // 0x0160   (0x0050)  
	FName                                              CurrentSourceRetargetPose;                                  // 0x01B0   (0x0008)  
	FName                                              CurrentTargetRetargetPose;                                  // 0x01B8   (0x0008)  
	TMap<FName, FIKRetargetPose>                       RetargetPoses;                                              // 0x01C0   (0x0050)  
	FName                                              CurrentRetargetPose;                                        // 0x0210   (0x0008)  


	/// Functions
	// Function /Script/IKRig.IKRetargeter.SetRootSettingsInRetargetProfile
	// void SetRootSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetRootSettings& RootSettings);             // [0x8678960] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile
	// void SetGlobalSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FRetargetGlobalSettings& GlobalSettings);     // [0x86781f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile
	// void SetChainSpeedPlantSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainSpeedPlantSettings& SpeedPlantSettings, FName TargetChainName); // [0x8677fb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainSettingsInRetargetProfile
	// void SetChainSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainSettings& ChainSettings, FName TargetChainName); // [0x8677d70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile
	// void SetChainIKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainIKSettings& IKSettings, FName TargetChainName); // [0x8677ab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile
	// void SetChainFKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainFKSettings& FKSettings, FName TargetChainName); // [0x8677860] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.HasTargetIKRig
	// bool HasTargetIKRig();                                                                                                   // [0x86777b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/IKRig.IKRetargeter.HasSourceIKRig
	// bool HasSourceIKRig();                                                                                                   // [0x8677700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile
	// FTargetRootSettings GetRootSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile);                               // [0x86775c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset
	// void GetRootSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, FName OptionalProfileName, FTargetRootSettings& OutSettings); // [0x86772d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile
	// FRetargetGlobalSettings GetGlobalSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile);                         // [0x86771d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset
	// void GetGlobalSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, FName OptionalProfileName, FRetargetGlobalSettings& OutSettings); // [0x8676fe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset
	// FTargetChainSettings GetChainUsingGoalFromRetargetAsset(class UIKRetargeter* RetargetAsset, FName IKGoalName);           // [0x8676c90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile
	// FTargetChainSettings GetChainSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile, FName TargetChainName);      // [0x86769d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset
	// FTargetChainSettings GetChainSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, FName TargetChainName, FName OptionalProfileName); // [0x86765e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/IKRig.IKRetargetProcessor
/// Size: 0x03A0 (928 bytes) (0x000028 - 0x0003A0) align 16 MaxSize: 0x03A0
class UIKRetargetProcessor : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x160];                                     // 0x0028   (0x0160)  MISSED
	class UIKRigProcessor*                             IKRigProcessor;                                             // 0x0188   (0x0008)  
	unsigned char                                      UnknownData01_6[0x1F8];                                     // 0x0190   (0x01F8)  MISSED
	TArray<class URetargetOpBase*>                     OpStack;                                                    // 0x0388   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0398   (0x0008)  MISSED
};

/// Class /Script/IKRig.IKRigEffectorGoal
/// Size: 0x0100 (256 bytes) (0x000028 - 0x000100) align 16 MaxSize: 0x0100
class UIKRigEffectorGoal : public UObject
{ 
public:
	FName                                              GoalName;                                                   // 0x0028   (0x0008)  
	FName                                              BoneName;                                                   // 0x0030   (0x0008)  
	float                                              PositionAlpha;                                              // 0x0038   (0x0004)  
	float                                              RotationAlpha;                                              // 0x003C   (0x0004)  
	FTransform                                         CurrentTransform;                                           // 0x0040   (0x0060)  
	FTransform                                         InitialTransform;                                           // 0x00A0   (0x0060)  
};

/// Struct /Script/IKRig.IKRigSkeleton
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FIKRigSkeleton
{ 
	TArray<FName>                                      BoneNames;                                                  // 0x0000   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0010   (0x0010)  
	TArray<FName>                                      ExcludedBones;                                              // 0x0020   (0x0010)  
	TArray<FTransform>                                 CurrentPoseGlobal;                                          // 0x0030   (0x0010)  
	TArray<FTransform>                                 CurrentPoseLocal;                                           // 0x0040   (0x0010)  
	TArray<FTransform>                                 RefPoseGlobal;                                              // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Struct /Script/IKRig.BoneChain
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FBoneChain
{ 
	FName                                              ChainName;                                                  // 0x0000   (0x0008)  
	FBoneReference                                     StartBone;                                                  // 0x0008   (0x0010)  
	FBoneReference                                     EndBone;                                                    // 0x0018   (0x0010)  
	FName                                              IKGoalName;                                                 // 0x0028   (0x0008)  
};

/// Struct /Script/IKRig.RetargetDefinition
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRetargetDefinition
{ 
	FName                                              RootBone;                                                   // 0x0000   (0x0008)  
	TArray<FBoneChain>                                 BoneChains;                                                 // 0x0008   (0x0010)  
};

/// Class /Script/IKRig.IKRigDefinition
/// Size: 0x0100 (256 bytes) (0x000028 - 0x000100) align 8 MaxSize: 0x0100
class UIKRigDefinition : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	TWeakObjectPtr<class USkeletalMesh*>               PreviewSkeletalMesh;                                        // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0038   (0x0020)  MISSED
	FIKRigSkeleton                                     Skeleton;                                                   // 0x0058   (0x0070)  
	TArray<class UIKRigEffectorGoal*>                  Goals;                                                      // 0x00C8   (0x0010)  
	TArray<class UIKRigSolver*>                        Solvers;                                                    // 0x00D8   (0x0010)  
	FRetargetDefinition                                RetargetDefinition;                                         // 0x00E8   (0x0018)  
};

/// Class /Script/IKRig.IKRigProcessor
/// Size: 0x0148 (328 bytes) (0x000028 - 0x000148) align 8 MaxSize: 0x0148
class UIKRigProcessor : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x38];                                      // 0x0028   (0x0038)  MISSED
	TArray<class UIKRigSolver*>                        Solvers;                                                    // 0x0060   (0x0010)  
	unsigned char                                      UnknownData01_7[0xD8];                                      // 0x0070   (0x00D8)  MISSED
};

/// Class /Script/IKRig.IKRigSolver
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UIKRigSolver : public UObject
{ 
public:
	bool                                               bIsEnabled;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/IKRig.IKRig_BodyMoverEffector
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UIKRig_BodyMoverEffector : public UObject
{ 
public:
	FName                                              GoalName;                                                   // 0x0028   (0x0008)  
	FName                                              BoneName;                                                   // 0x0030   (0x0008)  
	float                                              InfluenceMultiplier;                                        // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/IKRig.IKRig_BodyMover
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UIKRig_BodyMover : public UIKRigSolver
{ 
public:
	FName                                              RootBone;                                                   // 0x0030   (0x0008)  
	float                                              PositionAlpha;                                              // 0x0038   (0x0004)  
	float                                              PositionPositiveX;                                          // 0x003C   (0x0004)  
	float                                              PositionNegativeX;                                          // 0x0040   (0x0004)  
	float                                              PositionPositiveY;                                          // 0x0044   (0x0004)  
	float                                              PositionNegativeY;                                          // 0x0048   (0x0004)  
	float                                              PositionPositiveZ;                                          // 0x004C   (0x0004)  
	float                                              PositionNegativeZ;                                          // 0x0050   (0x0004)  
	float                                              RotationAlpha;                                              // 0x0054   (0x0004)  
	float                                              RotateXAlpha;                                               // 0x0058   (0x0004)  
	float                                              RotateYAlpha;                                               // 0x005C   (0x0004)  
	float                                              RotateZAlpha;                                               // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	TArray<class UIKRig_BodyMoverEffector*>            Effectors;                                                  // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/IKRig.IKRig_LimbEffector
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UIKRig_LimbEffector : public UObject
{ 
public:
	FName                                              GoalName;                                                   // 0x0028   (0x0008)  
	FName                                              BoneName;                                                   // 0x0030   (0x0008)  
};

/// Class /Script/IKRig.IKRig_LimbSolver
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UIKRig_LimbSolver : public UIKRigSolver
{ 
public:
	FName                                              RootName;                                                   // 0x0030   (0x0008)  
	float                                              ReachPrecision;                                             // 0x0038   (0x0004)  
	TEnumAsByte<EAxis>                                 HingeRotationAxis;                                          // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x0040   (0x0004)  
	bool                                               bEnableLimit;                                               // 0x0044   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	float                                              MinRotationAngle;                                           // 0x0048   (0x0004)  
	bool                                               bAveragePull;                                               // 0x004C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	float                                              PullDistribution;                                           // 0x0050   (0x0004)  
	float                                              ReachStepAlpha;                                             // 0x0054   (0x0004)  
	bool                                               bEnableTwistCorrection;                                     // 0x0058   (0x0001)  
	TEnumAsByte<EAxis>                                 EndBoneForwardAxis;                                         // 0x0059   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x005A   (0x0006)  MISSED
	class UIKRig_LimbEffector*                         Effector;                                                   // 0x0060   (0x0008)  
	unsigned char                                      UnknownData04_7[0x28];                                      // 0x0068   (0x0028)  MISSED
};

/// Class /Script/IKRig.IKRig_FBIKEffector
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UIKRig_FBIKEffector : public UObject
{ 
public:
	FName                                              GoalName;                                                   // 0x0028   (0x0008)  
	FName                                              BoneName;                                                   // 0x0030   (0x0008)  
	int32_t                                            ChainDepth;                                                 // 0x0038   (0x0004)  
	float                                              StrengthAlpha;                                              // 0x003C   (0x0004)  
	float                                              PullChainAlpha;                                             // 0x0040   (0x0004)  
	float                                              PinRotation;                                                // 0x0044   (0x0004)  
	int32_t                                            IndexInSolver;                                              // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/IKRig.IKRig_FBIKBoneSettings
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UIKRig_FBIKBoneSettings : public UObject
{ 
public:
	FName                                              bone;                                                       // 0x0028   (0x0008)  
	float                                              RotationStiffness;                                          // 0x0030   (0x0004)  
	float                                              PositionStiffness;                                          // 0x0034   (0x0004)  
	EPBIKLimitType                                     X;                                                          // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              minX;                                                       // 0x003C   (0x0004)  
	float                                              maxX;                                                       // 0x0040   (0x0004)  
	EPBIKLimitType                                     Y;                                                          // 0x0044   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	float                                              minY;                                                       // 0x0048   (0x0004)  
	float                                              maxY;                                                       // 0x004C   (0x0004)  
	EPBIKLimitType                                     Z;                                                          // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              MinZ;                                                       // 0x0054   (0x0004)  
	float                                              MaxZ;                                                       // 0x0058   (0x0004)  
	bool                                               bUsePreferredAngles;                                        // 0x005C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	FVector                                            PreferredAngles;                                            // 0x0060   (0x0018)  
};

/// Class /Script/IKRig.IKRigFBIKSolver
/// Size: 0x00F0 (240 bytes) (0x000030 - 0x0000F0) align 8 MaxSize: 0x00F0
class UIKRigFBIKSolver : public UIKRigSolver
{ 
public:
	FName                                              RootBone;                                                   // 0x0030   (0x0008)  
	int32_t                                            Iterations;                                                 // 0x0038   (0x0004)  
	int32_t                                            SubIterations;                                              // 0x003C   (0x0004)  
	float                                              MassMultiplier;                                             // 0x0040   (0x0004)  
	bool                                               bAllowStretch;                                              // 0x0044   (0x0001)  
	EPBIKRootBehavior                                  RootBehavior;                                               // 0x0045   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0046   (0x0002)  MISSED
	FRootPrePullSettings                               PrePullRootSettings;                                        // 0x0048   (0x0020)  
	float                                              PullChainAlpha;                                             // 0x0068   (0x0004)  
	float                                              MaxAngle;                                                   // 0x006C   (0x0004)  
	float                                              OverRelaxation;                                             // 0x0070   (0x0004)  
	bool                                               bStartSolveFromInputPose;                                   // 0x0074   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0075   (0x0003)  MISSED
	TArray<class UIKRig_FBIKEffector*>                 Effectors;                                                  // 0x0078   (0x0010)  
	TArray<class UIKRig_FBIKBoneSettings*>             BoneSettings;                                               // 0x0088   (0x0010)  
	unsigned char                                      UnknownData02_7[0x58];                                      // 0x0098   (0x0058)  MISSED
};

/// Class /Script/IKRig.IKRig_PoleSolverEffector
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UIKRig_PoleSolverEffector : public UObject
{ 
public:
	FName                                              GoalName;                                                   // 0x0028   (0x0008)  
	FName                                              BoneName;                                                   // 0x0030   (0x0008)  
	float                                              Alpha;                                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/IKRig.IKRig_PoleSolver
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UIKRig_PoleSolver : public UIKRigSolver
{ 
public:
	FName                                              RootName;                                                   // 0x0030   (0x0008)  
	FName                                              EndName;                                                    // 0x0038   (0x0008)  
	class UIKRig_PoleSolverEffector*                   Effector;                                                   // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0048   (0x0020)  MISSED
};

/// Class /Script/IKRig.IKRig_SetTransformEffector
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UIKRig_SetTransformEffector : public UObject
{ 
public:
	bool                                               bEnablePosition;                                            // 0x0028   (0x0001)  
	bool                                               bEnableRotation;                                            // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	float                                              Alpha;                                                      // 0x002C   (0x0004)  
};

/// Class /Script/IKRig.IKRig_SetTransform
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UIKRig_SetTransform : public UIKRigSolver
{ 
public:
	FName                                              Goal;                                                       // 0x0030   (0x0008)  
	FName                                              RootBone;                                                   // 0x0038   (0x0008)  
	class UIKRig_SetTransformEffector*                 Effector;                                                   // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Struct /Script/IKRig.IKRigGoal
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FIKRigGoal
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	EIKRigGoalTransformSource                          TransformSource;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	FBoneReference                                     SourceBone;                                                 // 0x000C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x0020   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0038   (0x0018)  
	float                                              PositionAlpha;                                              // 0x0050   (0x0004)  
	float                                              RotationAlpha;                                              // 0x0054   (0x0004)  
	EIKRigGoalSpace                                    PositionSpace;                                              // 0x0058   (0x0001)  
	EIKRigGoalSpace                                    RotationSpace;                                              // 0x0059   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x005A   (0x0006)  MISSED
	FVector                                            FinalBlendedPosition;                                       // 0x0060   (0x0018)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0078   (0x0008)  MISSED
	FQuat                                              FinalBlendedRotation;                                       // 0x0080   (0x0020)  
};

/// Struct /Script/IKRig.AnimNode_IKRig
/// Size: 0x01E0 (480 bytes) (0x000058 - 0x0001E0) align 8 MaxSize: 0x01E0
struct FAnimNode_IKRig : FAnimNode_CustomProperty
{ 
	FPoseLink                                          Source;                                                     // 0x0058   (0x0010)  
	class UIKRigDefinition*                            RigDefinitionAsset;                                         // 0x0068   (0x0008)  
	TArray<FIKRigGoal>                                 Goals;                                                      // 0x0070   (0x0010)  
	bool                                               bStartFromRefPose;                                          // 0x0080   (0x0001)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0081   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x0082   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0083   (0x0001)  MISSED
	float                                              Alpha;                                                      // 0x0084   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0088   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0090   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x00D8   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x00E0   (0x0030)  
	class UIKRigProcessor*                             IKRigProcessor;                                             // 0x0110   (0x0008)  
	unsigned char                                      UnknownData01_6[0xC0];                                      // 0x0118   (0x00C0)  MISSED
	float                                              ActualAlpha;                                                // 0x01D8   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x01DC   (0x0004)  MISSED
};

/// Struct /Script/IKRig.AnimNode_RetargetPoseFromMesh
/// Size: 0x01E0 (480 bytes) (0x000010 - 0x0001E0) align 8 MaxSize: 0x01E0
struct FAnimNode_RetargetPoseFromMesh : FAnimNode_Base
{ 
	TWeakObjectPtr<class USkeletalMeshComponent*>      SourceMeshComponent;                                        // 0x0010   (0x0008)  
	bool                                               bUseAttachedParent;                                         // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
	class UIKRetargeter*                               IKRetargeterAsset;                                          // 0x0020   (0x0008)  
	FRetargetProfile                                   CustomRetargetProfile;                                      // 0x0028   (0x0108)  
	bool                                               bSuppressWarnings;                                          // 0x0130   (0x0001)  
	bool                                               bCopyCurves;                                                // 0x0131   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0132   (0x0002)  MISSED
	int32_t                                            LODThreshold;                                               // 0x0134   (0x0004)  
	int32_t                                            LODThresholdForIK;                                          // 0x0138   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	class UIKRetargetProcessor*                        Processor;                                                  // 0x0140   (0x0008)  
	unsigned char                                      UnknownData03_7[0x98];                                      // 0x0148   (0x0098)  MISSED
};

/// Struct /Script/IKRig.IKRigGoalContainer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FIKRigGoalContainer
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/IKRig.GoalBone
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FGoalBone
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/IKRig.IKRigInputSkeleton
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FIKRigInputSkeleton
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/IKRig.LimbSolverSettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FLimbSolverSettings
{ 
	float                                              ReachPrecision;                                             // 0x0000   (0x0004)  
	TEnumAsByte<EAxis>                                 HingeRotationAxis;                                          // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x0008   (0x0004)  
	bool                                               bEnableLimit;                                               // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              MinRotationAngle;                                           // 0x0010   (0x0004)  
	bool                                               bAveragePull;                                               // 0x0014   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              PullDistribution;                                           // 0x0018   (0x0004)  
	float                                              ReachStepAlpha;                                             // 0x001C   (0x0004)  
	bool                                               bEnableTwistCorrection;                                     // 0x0020   (0x0001)  
	TEnumAsByte<EAxis>                                 EndBoneForwardAxis;                                         // 0x0021   (0x0001)  
	unsigned char                                      UnknownData03_7[0x2];                                       // 0x0022   (0x0002)  MISSED
};

/// Struct /Script/IKRig.LimbLink
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FLimbLink
{ 
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x0000   (0x0068)  MISSED
};

/// Struct /Script/IKRig.LimbSolver
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLimbSolver
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

#pragma pack(pop)


