
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/KawaiiPhysics.EPlanarConstraint
/// Size: 0x01 (1 bytes)
enum class EPlanarConstraint : uint8_t
{
	EPlanarConstraint__None                                                          = 0,
	EPlanarConstraint__X                                                             = 1,
	EPlanarConstraint__Y                                                             = 2,
	EPlanarConstraint__Z                                                             = 3
};

/// Enum /Script/KawaiiPhysics.EBoneForwardAxis
/// Size: 0x01 (1 bytes)
enum class EBoneForwardAxis : uint8_t
{
	EBoneForwardAxis__X_Positive                                                     = 0,
	EBoneForwardAxis__X_Negative                                                     = 1,
	EBoneForwardAxis__Y_Positive                                                     = 2,
	EBoneForwardAxis__Y_Negative                                                     = 3,
	EBoneForwardAxis__Z_Positive                                                     = 4,
	EBoneForwardAxis__Z_Negative                                                     = 5
};

/// Enum /Script/KawaiiPhysics.ECollisionLimitType
/// Size: 0x01 (1 bytes)
enum class ECollisionLimitType : uint8_t
{
	ECollisionLimitType__None                                                        = 0,
	ECollisionLimitType__Spherical                                                   = 1,
	ECollisionLimitType__Capsule                                                     = 2,
	ECollisionLimitType__Planar                                                      = 3
};

/// Enum /Script/KawaiiPhysics.EXPBDComplianceType
/// Size: 0x01 (1 bytes)
enum class EXPBDComplianceType : uint8_t
{
	EXPBDComplianceType__Concrete                                                    = 0,
	EXPBDComplianceType__Wood                                                        = 1,
	EXPBDComplianceType__Leather                                                     = 2,
	EXPBDComplianceType__Tendon                                                      = 3,
	EXPBDComplianceType__Rubber                                                      = 4,
	EXPBDComplianceType__Muscle                                                      = 5,
	EXPBDComplianceType__Fat                                                         = 6
};

/// Struct /Script/KawaiiPhysics.ModifyBoneConstraintData
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FModifyBoneConstraintData
{ 
	FName                                              BoneName1;                                                  // 0x0000   (0x0008)  
	FName                                              BoneName2;                                                  // 0x0008   (0x0008)  
	bool                                               bOverrideCompliance;                                        // 0x0010   (0x0001)  
	EXPBDComplianceType                                ComplianceType;                                             // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0012   (0x0002)  MISSED
};

/// Class /Script/KawaiiPhysics.KawaiiPhysicsBoneConstraintsDataAsset
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UKawaiiPhysicsBoneConstraintsDataAsset : public UDataAsset
{ 
public:
	TArray<FModifyBoneConstraintData>                  BoneConstraintsData;                                        // 0x0030   (0x0010)  
};

/// Class /Script/KawaiiPhysics.KawaiiPhysicsLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UKawaiiPhysicsLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetWindScale
	// FKawaiiPhysicsReference SetWindScale(FKawaiiPhysicsReference& KawaiiPhysics, float WindScale);                           // [0x85db190] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetTeleportRotationThreshold
	// FKawaiiPhysicsReference SetTeleportRotationThreshold(FKawaiiPhysicsReference& KawaiiPhysics, float TeleportRotationThreshold); // [0x85db090] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetTeleportDistanceThreshold
	// FKawaiiPhysicsReference SetTeleportDistanceThreshold(FKawaiiPhysicsReference& KawaiiPhysics, float TeleportDistanceThreshold); // [0x85daf90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetPhysicsSettings
	// FKawaiiPhysicsReference SetPhysicsSettings(FKawaiiPhysicsReference& KawaiiPhysics, FKawaiiPhysicsSettings& PhysicsSettings); // [0x85dae70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetNeedWarmUp
	// FKawaiiPhysicsReference SetNeedWarmUp(FKawaiiPhysicsReference& KawaiiPhysics, bool NeedWarmUp);                          // [0x85dad70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetGravity
	// FKawaiiPhysicsReference SetGravity(FKawaiiPhysicsReference& KawaiiPhysics, FVector Gravity);                             // [0x85dac60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetEnableWind
	// FKawaiiPhysicsReference SetEnableWind(FKawaiiPhysicsReference& KawaiiPhysics, bool EnableWind);                          // [0x85dab60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetDummyBoneLength
	// FKawaiiPhysicsReference SetDummyBoneLength(FKawaiiPhysicsReference& KawaiiPhysics, float DummyBoneLength);               // [0x85daa60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.SetAllowWorldCollision
	// FKawaiiPhysicsReference SetAllowWorldCollision(FKawaiiPhysicsReference& KawaiiPhysics, bool AllowWorldCollision);        // [0x85da960] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.ResetDynamics
	// FKawaiiPhysicsReference ResetDynamics(FKawaiiPhysicsReference& KawaiiPhysics);                                           // [0x85da8c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetWindScale
	// float GetWindScale(FKawaiiPhysicsReference& KawaiiPhysics);                                                              // [0x85da820] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetTeleportRotationThreshold
	// float GetTeleportRotationThreshold(FKawaiiPhysicsReference& KawaiiPhysics);                                              // [0x85da780] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetTeleportDistanceThreshold
	// float GetTeleportDistanceThreshold(FKawaiiPhysicsReference& KawaiiPhysics);                                              // [0x85da6e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetPhysicsSettings
	// FKawaiiPhysicsSettings GetPhysicsSettings(FKawaiiPhysicsReference& KawaiiPhysics);                                       // [0x85da630] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetNeedWarmUp
	// bool GetNeedWarmUp(FKawaiiPhysicsReference& KawaiiPhysics);                                                              // [0x85da590] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetGravity
	// FVector GetGravity(FKawaiiPhysicsReference& KawaiiPhysics);                                                              // [0x85da4e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetEnableWind
	// bool GetEnableWind(FKawaiiPhysicsReference& KawaiiPhysics);                                                              // [0x85da440] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetDummyBoneLength
	// float GetDummyBoneLength(FKawaiiPhysicsReference& KawaiiPhysics);                                                        // [0x85da3a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.GetAllowWorldCollision
	// bool GetAllowWorldCollision(FKawaiiPhysicsReference& KawaiiPhysics);                                                     // [0x85da300] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.ConvertToKawaiiPhysicsPure
	// void ConvertToKawaiiPhysicsPure(FAnimNodeReference& Node, FKawaiiPhysicsReference& KawaiiPhysics, bool& Result);         // [0x85da190] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/KawaiiPhysics.KawaiiPhysicsLibrary.ConvertToKawaiiPhysics
	// FKawaiiPhysicsReference ConvertToKawaiiPhysics(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);    // [0x85da090] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/KawaiiPhysics.CollisionLimitBase
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 MaxSize: 0x0088
struct FCollisionLimitBase
{ 
	FBoneReference                                     DrivingBone;                                                // 0x0000   (0x0010)  
	FVector                                            offsetLocation;                                             // 0x0010   (0x0018)  
	FRotator                                           OffsetRotation;                                             // 0x0028   (0x0018)  
	FVector                                            Location;                                                   // 0x0040   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0060   (0x0020)  
	bool                                               bEnable;                                                    // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Struct /Script/KawaiiPhysics.SphericalLimit
/// Size: 0x0090 (144 bytes) (0x000088 - 0x000090) align 16 MaxSize: 0x0090
struct FSphericalLimit : FCollisionLimitBase
{ 
	float                                              Radius;                                                     // 0x0088   (0x0004)  
	ESphericalLimitType                                LimitType;                                                  // 0x008C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x008D   (0x0003)  MISSED
};

/// Struct /Script/KawaiiPhysics.CapsuleLimit
/// Size: 0x0090 (144 bytes) (0x000088 - 0x000090) align 16 MaxSize: 0x0090
struct FCapsuleLimit : FCollisionLimitBase
{ 
	float                                              Radius;                                                     // 0x0088   (0x0004)  
	float                                              Length;                                                     // 0x008C   (0x0004)  
};

/// Struct /Script/KawaiiPhysics.PlanarLimit
/// Size: 0x00B0 (176 bytes) (0x000088 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FPlanarLimit : FCollisionLimitBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0088   (0x0008)  MISSED
	FPlane                                             Plane;                                                      // 0x0090   (0x0020)  
};

/// Class /Script/KawaiiPhysics.KawaiiPhysicsLimitsDataAsset
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UKawaiiPhysicsLimitsDataAsset : public UDataAsset
{ 
public:
	TArray<FSphericalLimit>                            SphericalLimits;                                            // 0x0030   (0x0010)  
	TArray<FCapsuleLimit>                              CapsuleLimits;                                              // 0x0040   (0x0010)  
	TArray<FPlanarLimit>                               PlanarLimits;                                               // 0x0050   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysicsSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FKawaiiPhysicsSettings
{ 
	float                                              Damping;                                                    // 0x0000   (0x0004)  
	float                                              WorldDampingLocation;                                       // 0x0004   (0x0004)  
	float                                              WorldDampingRotation;                                       // 0x0008   (0x0004)  
	float                                              Stiffness;                                                  // 0x000C   (0x0004)  
	float                                              Radius;                                                     // 0x0010   (0x0004)  
	float                                              LimitAngle;                                                 // 0x0014   (0x0004)  
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysicsModifyBone
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FKawaiiPhysicsModifyBone
{ 
	FBoneReference                                     BoneRef;                                                    // 0x0000   (0x0010)  
	int32_t                                            ParentIndex;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<int32_t>                                    ChildIndexs;                                                // 0x0018   (0x0010)  
	FKawaiiPhysicsSettings                             PhysicsSettings;                                            // 0x0028   (0x0018)  
	FVector                                            Location;                                                   // 0x0040   (0x0018)  
	FVector                                            PrevLocation;                                               // 0x0058   (0x0018)  
	FQuat                                              PrevRotation;                                               // 0x0070   (0x0020)  
	FVector                                            PoseLocation;                                               // 0x0090   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
	FQuat                                              PoseRotation;                                               // 0x00B0   (0x0020)  
	FVector                                            PoseScale;                                                  // 0x00D0   (0x0018)  
	float                                              LengthFromRoot;                                             // 0x00E8   (0x0004)  
	bool                                               bDummy;                                                     // 0x00EC   (0x0001)  
	bool                                               bSkipSimulate;                                              // 0x00ED   (0x0001)  
	unsigned char                                      UnknownData02_7[0x2];                                       // 0x00EE   (0x0002)  MISSED
};

/// Struct /Script/KawaiiPhysics.ModifyBoneConstraint
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 MaxSize: 0x0038
struct FModifyBoneConstraint
{ 
	FBoneReference                                     Bone1;                                                      // 0x0000   (0x0010)  
	FBoneReference                                     Bone2;                                                      // 0x0010   (0x0010)  
	bool                                               bOverrideCompliance;                                        // 0x0020   (0x0001)  
	EXPBDComplianceType                                ComplianceType;                                             // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0022   (0x0002)  MISSED
	int32_t                                            ModifyBoneIndex1;                                           // 0x0024   (0x0004)  
	int32_t                                            ModifyBoneIndex2;                                           // 0x0028   (0x0004)  
	float                                              Length;                                                     // 0x002C   (0x0004)  
	bool                                               bIsDummy;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              Lambda;                                                     // 0x0034   (0x0004)  
};

/// Struct /Script/KawaiiPhysics.AnimNode_KawaiiPhysics
/// Size: 0x07F0 (2032 bytes) (0x0000C8 - 0x0007F0) align 16 MaxSize: 0x07F0
struct FAnimNode_KawaiiPhysics : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     RootBone;                                                   // 0x00C8   (0x0010)  
	TArray<FBoneReference>                             ExcludeBones;                                               // 0x00D8   (0x0010)  
	int32_t                                            TargetFrameRate;                                            // 0x00E8   (0x0004)  
	bool                                               OverrideTargetFramerate;                                    // 0x00EC   (0x0001)  
	bool                                               bNeedWarmUp;                                                // 0x00ED   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00EE   (0x0002)  MISSED
	int32_t                                            WarmUpFrames;                                               // 0x00F0   (0x0004)  
	FKawaiiPhysicsSettings                             PhysicsSettings;                                            // 0x00F4   (0x0018)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x010C   (0x0004)  MISSED
	class UCurveFloat*                                 DampingCurve;                                               // 0x0110   (0x0008)  
	class UCurveFloat*                                 WorldDampingLocationCurve;                                  // 0x0118   (0x0008)  
	class UCurveFloat*                                 WorldDampingRotationCurve;                                  // 0x0120   (0x0008)  
	class UCurveFloat*                                 StiffnessCurve;                                             // 0x0128   (0x0008)  
	class UCurveFloat*                                 RadiusCurve;                                                // 0x0130   (0x0008)  
	class UCurveFloat*                                 LimitAngleCurve;                                            // 0x0138   (0x0008)  
	FRuntimeFloatCurve                                 DampingCurveData;                                           // 0x0140   (0x0088)  
	FRuntimeFloatCurve                                 WorldDampingLocationCurveData;                              // 0x01C8   (0x0088)  
	FRuntimeFloatCurve                                 WorldDampingRotationCurveData;                              // 0x0250   (0x0088)  
	FRuntimeFloatCurve                                 StiffnessCurveData;                                         // 0x02D8   (0x0088)  
	FRuntimeFloatCurve                                 RadiusCurveData;                                            // 0x0360   (0x0088)  
	FRuntimeFloatCurve                                 LimitAngleCurveData;                                        // 0x03E8   (0x0088)  
	bool                                               bUpdatePhysicsSettingsInGame;                               // 0x0470   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0471   (0x0003)  MISSED
	float                                              DummyBoneLength;                                            // 0x0474   (0x0004)  
	EBoneForwardAxis                                   BoneForwardAxis;                                            // 0x0478   (0x0001)  
	EPlanarConstraint                                  PlanarConstraint;                                           // 0x0479   (0x0001)  
	bool                                               ResetBoneTransformWhenBoneNotFound;                         // 0x047A   (0x0001)  
	unsigned char                                      UnknownData03_6[0x5];                                       // 0x047B   (0x0005)  MISSED
	TArray<FSphericalLimit>                            SphericalLimits;                                            // 0x0480   (0x0010)  
	TArray<FCapsuleLimit>                              CapsuleLimits;                                              // 0x0490   (0x0010)  
	TArray<FPlanarLimit>                               PlanarLimits;                                               // 0x04A0   (0x0010)  
	EXPBDComplianceType                                BoneConstraintGlobalComplianceType;                         // 0x04B0   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x04B1   (0x0003)  MISSED
	int32_t                                            BoneConstraintIterationCountBeforeCollision;                // 0x04B4   (0x0004)  
	int32_t                                            BoneConstraintIterationCountAfterCollision;                 // 0x04B8   (0x0004)  
	bool                                               bAutoAddChildDummyBoneConstraint;                           // 0x04BC   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x04BD   (0x0003)  MISSED
	TArray<FModifyBoneConstraint>                      BoneConstraints;                                            // 0x04C0   (0x0010)  
	class UKawaiiPhysicsBoneConstraintsDataAsset*      BoneConstraintsDataAsset;                                   // 0x04D0   (0x0008)  
	TArray<FModifyBoneConstraint>                      BoneConstraintsData;                                        // 0x04D8   (0x0010)  
	TArray<FModifyBoneConstraint>                      MergedBoneConstraints;                                      // 0x04E8   (0x0010)  
	class UKawaiiPhysicsLimitsDataAsset*               LimitsDataAsset;                                            // 0x04F8   (0x0008)  
	TArray<FSphericalLimit>                            SphericalLimitsData;                                        // 0x0500   (0x0010)  
	TArray<FCapsuleLimit>                              CapsuleLimitsData;                                          // 0x0510   (0x0010)  
	TArray<FPlanarLimit>                               PlanarLimitsData;                                           // 0x0520   (0x0010)  
	float                                              TeleportDistanceThreshold;                                  // 0x0530   (0x0004)  
	float                                              TeleportRotationThreshold;                                  // 0x0534   (0x0004)  
	FVector                                            Gravity;                                                    // 0x0538   (0x0018)  
	bool                                               bEnableWind;                                                // 0x0550   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x0551   (0x0003)  MISSED
	float                                              WindScale;                                                  // 0x0554   (0x0004)  
	bool                                               bAllowWorldCollision;                                       // 0x0558   (0x0001)  
	bool                                               bOverrideCollisionParams;                                   // 0x0559   (0x0001)  
	unsigned char                                      UnknownData07_6[0x6];                                       // 0x055A   (0x0006)  MISSED
	FBodyInstance                                      CollisionChannelSettings;                                   // 0x0560   (0x0198)  
	bool                                               bIgnoreSelfComponent;                                       // 0x06F8   (0x0001)  
	unsigned char                                      UnknownData08_6[0x7];                                       // 0x06F9   (0x0007)  MISSED
	TArray<FBoneReference>                             IgnoreBones;                                                // 0x0700   (0x0010)  
	TArray<FName>                                      IgnoreBoneNamePrefix;                                       // 0x0710   (0x0010)  
	TArray<FKawaiiPhysicsModifyBone>                   ModifyBones;                                                // 0x0720   (0x0010)  
	float                                              TotalBoneLength;                                            // 0x0730   (0x0004)  
	unsigned char                                      UnknownData09_6[0xC];                                       // 0x0734   (0x000C)  MISSED
	FTransform                                         PreSkelCompTransform;                                       // 0x0740   (0x0060)  
	bool                                               bInitPhysicsSettings;                                       // 0x07A0   (0x0001)  
	unsigned char                                      UnknownData10_7[0x4F];                                      // 0x07A1   (0x004F)  MISSED
};

/// Struct /Script/KawaiiPhysics.RegexPatternBoneSet
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRegexPatternBoneSet
{ 
	FString                                            RegexPatternBone1;                                          // 0x0000   (0x0010)  
	FString                                            RegexPatternBone2;                                          // 0x0010   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysicsReference
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FKawaiiPhysicsReference : FAnimNodeReference
{ 
};

/// Struct /Script/KawaiiPhysics.CollisionLimitDataBase
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FCollisionLimitDataBase
{ 
	FName                                              DrivingBoneName;                                            // 0x0000   (0x0008)  
	FVector                                            offsetLocation;                                             // 0x0008   (0x0018)  
	FRotator                                           OffsetRotation;                                             // 0x0020   (0x0018)  
	FVector                                            Location;                                                   // 0x0038   (0x0018)  
	FQuat                                              Rotation;                                                   // 0x0050   (0x0020)  
	FGuid                                              Guid;                                                       // 0x0070   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.SphericalLimitData
/// Size: 0x0090 (144 bytes) (0x000080 - 0x000090) align 16 MaxSize: 0x0090
struct FSphericalLimitData : FCollisionLimitDataBase
{ 
	float                                              Radius;                                                     // 0x0080   (0x0004)  
	ESphericalLimitType                                LimitType;                                                  // 0x0084   (0x0001)  
	unsigned char                                      UnknownData00_7[0xB];                                       // 0x0085   (0x000B)  MISSED
};

/// Struct /Script/KawaiiPhysics.CapsuleLimitData
/// Size: 0x0090 (144 bytes) (0x000080 - 0x000090) align 16 MaxSize: 0x0090
struct FCapsuleLimitData : FCollisionLimitDataBase
{ 
	float                                              Radius;                                                     // 0x0080   (0x0004)  
	float                                              Length;                                                     // 0x0084   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/KawaiiPhysics.PlanarLimitData
/// Size: 0x00A0 (160 bytes) (0x000080 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FPlanarLimitData : FCollisionLimitDataBase
{ 
	FPlane                                             Plane;                                                      // 0x0080   (0x0020)  
};

#pragma pack(pop)


