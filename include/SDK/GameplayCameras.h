
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: TemplateSequence

#pragma pack(push, 0x1)

/// Enum /Script/GameplayCameras.ECameraNodeInstantiationState
/// Size: 0x01 (1 bytes)
enum class ECameraNodeInstantiationState : uint8_t
{
	ECameraNodeInstantiationState__None                                              = 0,
	ECameraNodeInstantiationState__HasInstantiations                                 = 1,
	ECameraNodeInstantiationState__IsInstantiated                                    = 2
};

/// Enum /Script/GameplayCameras.EOscillatorWaveform
/// Size: 0x01 (1 bytes)
enum class EOscillatorWaveform : uint8_t
{
	EOscillatorWaveform__SineWave                                                    = 0,
	EOscillatorWaveform__PerlinNoise                                                 = 1
};

/// Enum /Script/GameplayCameras.EInitialOscillatorOffset
/// Size: 0x01 (1 bytes)
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom                                                                 = 0,
	EOO_OffsetZero                                                                   = 1
};

/// Enum /Script/GameplayCameras.ECameraAnimationPlaySpace
/// Size: 0x01 (1 bytes)
enum class ECameraAnimationPlaySpace : uint8_t
{
	ECameraAnimationPlaySpace__CameraLocal                                           = 0,
	ECameraAnimationPlaySpace__World                                                 = 1,
	ECameraAnimationPlaySpace__UserDefined                                           = 2
};

/// Enum /Script/GameplayCameras.ECameraAnimationEasingType
/// Size: 0x01 (1 bytes)
enum class ECameraAnimationEasingType : uint8_t
{
	ECameraAnimationEasingType__Linear                                               = 0,
	ECameraAnimationEasingType__Sinusoidal                                           = 1,
	ECameraAnimationEasingType__Quadratic                                            = 2,
	ECameraAnimationEasingType__Cubic                                                = 3,
	ECameraAnimationEasingType__Quartic                                              = 4,
	ECameraAnimationEasingType__Quintic                                              = 5,
	ECameraAnimationEasingType__Exponential                                          = 6,
	ECameraAnimationEasingType__Circular                                             = 7
};

/// Enum /Script/GameplayCameras.ECameraNodeFlags
/// Size: 0x01 (1 bytes)
enum class ECameraNodeFlags : uint8_t
{
	ECameraNodeFlags__None                                                           = 0,
	ECameraNodeFlags__RequiresReset                                                  = 1
};

/// Enum /Script/GameplayCameras.ECameraModeLayer
/// Size: 0x01 (1 bytes)
enum class ECameraModeLayer : uint8_t
{
	ECameraModeLayer__Base                                                           = 0,
	ECameraModeLayer__Main                                                           = 1,
	ECameraModeLayer__Global                                                         = 2,
	ECameraModeLayer__Visual                                                         = 3,
	ECameraModeLayer__User0                                                          = 4,
	ECameraModeLayer__User1                                                          = 5,
	ECameraModeLayer__User2                                                          = 6
};

/// Enum /Script/GameplayCameras.ESmoothCameraBlendType
/// Size: 0x04 (4 bytes)
enum class ESmoothCameraBlendType : uint32_t
{
	ESmoothCameraBlendType__SmoothStep                                               = 0,
	ESmoothCameraBlendType__SmootherStep                                             = 1
};

/// Enum /Script/GameplayCameras.EInitialWaveOscillatorOffsetType
/// Size: 0x01 (1 bytes)
enum class EInitialWaveOscillatorOffsetType : uint8_t
{
	EInitialWaveOscillatorOffsetType__Random                                         = 0,
	EInitialWaveOscillatorOffsetType__Zero                                           = 1
};

/// Class /Script/GameplayCameras.CameraInstantiableObject
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UCameraInstantiableObject : public UObject
{ 
public:
};

/// Struct /Script/GameplayCameras.FOscillator
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FFOscillator
{ 
	float                                              Amplitude;                                                  // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	TEnumAsByte<EInitialOscillatorOffset>              InitialOffset;                                              // 0x0008   (0x0001)  
	EOscillatorWaveform                                Waveform;                                                   // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/GameplayCameras.ROscillator
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FROscillator
{ 
	FFOscillator                                       Pitch;                                                      // 0x0000   (0x000C)  
	FFOscillator                                       Yaw;                                                        // 0x000C   (0x000C)  
	FFOscillator                                       Roll;                                                       // 0x0018   (0x000C)  
};

/// Struct /Script/GameplayCameras.VOscillator
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FVOscillator
{ 
	FFOscillator                                       X;                                                          // 0x0000   (0x000C)  
	FFOscillator                                       Y;                                                          // 0x000C   (0x000C)  
	FFOscillator                                       Z;                                                          // 0x0018   (0x000C)  
};

/// Class /Script/GameplayCameras.LegacyCameraShake
/// Size: 0x01F0 (496 bytes) (0x0000D8 - 0x0001F0) align 16 MaxSize: 0x01F0
class ULegacyCameraShake : public UCameraShakeBase
{ 
public:
	float                                              OscillationDuration;                                        // 0x00D8   (0x0004)  
	float                                              OscillationBlendInTime;                                     // 0x00DC   (0x0004)  
	float                                              OscillationBlendOutTime;                                    // 0x00E0   (0x0004)  
	FROscillator                                       RotOscillation;                                             // 0x00E4   (0x0024)  
	FVOscillator                                       LocOscillation;                                             // 0x0108   (0x0024)  
	FFOscillator                                       FOVOscillation;                                             // 0x012C   (0x000C)  
	float                                              AnimPlayRate;                                               // 0x0138   (0x0004)  
	float                                              AnimScale;                                                  // 0x013C   (0x0004)  
	float                                              AnimBlendInTime;                                            // 0x0140   (0x0004)  
	float                                              AnimBlendOutTime;                                           // 0x0144   (0x0004)  
	float                                              RandomAnimSegmentDuration;                                  // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x014C   (0x0004)  MISSED
	class UCameraAnimationSequence*                    AnimSequence;                                               // 0x0150   (0x0008)  
	bool                                               bRandomAnimSegment : 1;                                     // 0x0158:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0159   (0x0003)  MISSED
	float                                              OscillatorTimeRemaining;                                    // 0x015C   (0x0004)  
	unsigned char                                      UnknownData02_6[0x78];                                      // 0x0160   (0x0078)  MISSED
	class USequenceCameraShakePattern*                 SequenceShakePattern;                                       // 0x01D8   (0x0008)  
	unsigned char                                      UnknownData03_7[0x10];                                      // 0x01E0   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayCameras.LegacyCameraShake.StartLegacyCameraShakeFromSource
	// class ULegacyCameraShake* StartLegacyCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot); // [0x65e9dd0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayCameras.LegacyCameraShake.StartLegacyCameraShake
	// class ULegacyCameraShake* StartLegacyCameraShake(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot); // [0x65e9b90] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayCameras.LegacyCameraShake.ReceiveStopShake
	// void ReceiveStopShake(bool bImmediately);                                                                                // [0x35d7f00] Event|Public|BlueprintEvent 
	// Function /Script/GameplayCameras.LegacyCameraShake.ReceivePlayShake
	// void ReceivePlayShake(float Scale);                                                                                      // [0x35d7f00] Event|Public|BlueprintEvent 
	// Function /Script/GameplayCameras.LegacyCameraShake.ReceiveIsFinished
	// bool ReceiveIsFinished();                                                                                                // [0x5975650] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/GameplayCameras.LegacyCameraShake.BlueprintUpdateCameraShake
	// void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);     // [0x35d7f00] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameplayCameras.LegacyCameraShakePattern
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULegacyCameraShakePattern : public UCameraShakePattern
{ 
public:
};

/// Class /Script/GameplayCameras.LegacyCameraShakeFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULegacyCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayCameras.LegacyCameraShakeFunctionLibrary.Conv_LegacyCameraShake
	// class ULegacyCameraShake* Conv_LegacyCameraShake(class UCameraShakeBase* CameraShake);                                   // [0x65e8b90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/GameplayCameras.CameraAnimationParams
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FCameraAnimationParams
{ 
	float                                              PlayRate;                                                   // 0x0000   (0x0004)  
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	ECameraAnimationEasingType                         EaseInType;                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              EaseInDuration;                                             // 0x000C   (0x0004)  
	ECameraAnimationEasingType                         EaseOutType;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              EaseOutDuration;                                            // 0x0014   (0x0004)  
	bool                                               bLoop;                                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	int32_t                                            StartOffset;                                                // 0x001C   (0x0004)  
	bool                                               bRandomStartTime;                                           // 0x0020   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              DurationOverride;                                           // 0x0024   (0x0004)  
	ECameraAnimationPlaySpace                          PlaySpace;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FRotator                                           UserPlaySpaceRot;                                           // 0x0030   (0x0018)  
};

/// Struct /Script/GameplayCameras.CameraAnimationHandle
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 2 MaxSize: 0x0004
struct FCameraAnimationHandle
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/GameplayCameras.ActiveCameraAnimationInfo
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FActiveCameraAnimationInfo
{ 
	class UCameraAnimationSequence*                    Sequence;                                                   // 0x0000   (0x0008)  
	FCameraAnimationParams                             Params;                                                     // 0x0008   (0x0048)  
	FCameraAnimationHandle                             Handle;                                                     // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	class UCameraAnimationSequencePlayer*              Player;                                                     // 0x0058   (0x0008)  
	class UCameraAnimationSequenceCameraStandIn*       CameraStandIn;                                              // 0x0060   (0x0008)  
	float                                              EaseInCurrentTime;                                          // 0x0068   (0x0004)  
	float                                              EaseOutCurrentTime;                                         // 0x006C   (0x0004)  
	bool                                               bIsEasingIn;                                                // 0x0070   (0x0001)  
	bool                                               bIsEasingOut;                                               // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0072   (0x0006)  MISSED
};

/// Class /Script/GameplayCameras.CameraAnimationCameraModifier
/// Size: 0x0060 (96 bytes) (0x000048 - 0x000060) align 8 MaxSize: 0x0060
class UCameraAnimationCameraModifier : public UCameraModifier
{ 
public:
	TArray<FActiveCameraAnimationInfo>                 ActiveAnimations;                                           // 0x0048   (0x0010)  
	uint16_t                                           NextInstanceSerialNumber;                                   // 0x0058   (0x0002)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x005A   (0x0006)  MISSED


	/// Functions
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation
	// void StopCameraAnimation(FCameraAnimationHandle& Handle, bool bImmediate);                                               // [0x65ea4d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
	// void StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate);                               // [0x65ea200] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
	// void StopAllCameraAnimations(bool bImmediate);                                                                           // [0x65ea040] Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
	// FCameraAnimationHandle PlayCameraAnimation(class UCameraAnimationSequence* Sequence, FCameraAnimationParams Params);     // [0x65e9180] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
	// bool IsCameraAnimationActive(FCameraAnimationHandle& Handle);                                                            // [0x65e8f10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
	// class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController(class APlayerController* PlayerController); // [0x65e8e30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
	// class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID(class UObject* WorldContextObject, int32_t ControllerId); // [0x65e8d20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
	// class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier(class UObject* WorldContextObject, int32_t playerIndex); // [0x65e8c10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GameplayCameras.GameplayCamerasFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayCamerasFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraShakePlaySpace
	// ECameraShakePlaySpace Conv_CameraShakePlaySpace(ECameraAnimationPlaySpace CameraAnimationPlaySpace);                     // [0x65e8ae0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationPlaySpace
	// ECameraAnimationPlaySpace Conv_CameraAnimationPlaySpace(ECameraShakePlaySpace CameraShakePlaySpace);                     // [0x65e8ae0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationCameraModifier
	// class UCameraAnimationCameraModifier* Conv_CameraAnimationCameraModifier(class APlayerCameraManager* PlayerCameraManager); // [0x65e89e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GameplayCameras.CameraNode
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UCameraNode : public UCameraInstantiableObject
{ 
public:
	bool                                               bIsEnabled;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/GameplayCameras.BlendCameraNode
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UBlendCameraNode : public UCameraNode
{ 
public:
};

/// Class /Script/GameplayCameras.BlendStackCameraNode
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UBlendStackCameraNode : public UCameraNode
{ 
public:
	bool                                               bAutoPop;                                                   // 0x0030   (0x0001)  
	bool                                               bBlendFirstCameraMode;                                      // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_7[0x16];                                      // 0x0032   (0x0016)  MISSED
};

/// Class /Script/GameplayCameras.BlendStackRootCameraNode
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UBlendStackRootCameraNode : public UCameraNode
{ 
public:
	class UBlendCameraNode*                            Blend;                                                      // 0x0030   (0x0008)  
	class UCameraNode*                                 RootNode;                                                   // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Struct /Script/GameplayCameras.CameraModeTransition
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FCameraModeTransition
{ 
	TArray<class UCameraModeTransitionCondition*>      Conditions;                                                 // 0x0000   (0x0010)  
	class UBlendCameraNode*                            Blend;                                                      // 0x0010   (0x0008)  
};

/// Class /Script/GameplayCameras.CameraAsset
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UCameraAsset : public UObject
{ 
public:
	class UCameraDirector*                             CameraDirector;                                             // 0x0028   (0x0008)  
	TArray<FCameraModeTransition>                      EnterTransitions;                                           // 0x0030   (0x0010)  
	TArray<FCameraModeTransition>                      ExitTransitions;                                            // 0x0040   (0x0010)  
};

/// Class /Script/GameplayCameras.CameraDirector
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UCameraDirector : public UObject
{ 
public:
};

/// Class /Script/GameplayCameras.CameraEvaluationContext
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class UCameraEvaluationContext : public UObject
{ 
public:
	class UCameraAsset*                                CameraAsset;                                                // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x78];                                      // 0x0030   (0x0078)  MISSED
};

/// Class /Script/GameplayCameras.CameraMode
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UCameraMode : public UObject
{ 
public:
	class UCameraNode*                                 RootNode;                                                   // 0x0028   (0x0008)  
	TArray<FCameraModeTransition>                      EnterTransitions;                                           // 0x0030   (0x0010)  
	TArray<FCameraModeTransition>                      ExitTransitions;                                            // 0x0040   (0x0010)  
};

/// Class /Script/GameplayCameras.CameraModeTransitionCondition
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UCameraModeTransitionCondition : public UObject
{ 
public:
};

/// Class /Script/GameplayCameras.CameraSystemEvaluator
/// Size: 0x0188 (392 bytes) (0x000028 - 0x000188) align 8 MaxSize: 0x0188
class UCameraSystemEvaluator : public UObject
{ 
public:
	class URootCameraNode*                             RootNode;                                                   // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x158];                                     // 0x0030   (0x0158)  MISSED
};

/// Class /Script/GameplayCameras.RootCameraNode
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class URootCameraNode : public UCameraNode
{ 
public:
};

/// Class /Script/GameplayCameras.DefaultRootCameraNode
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UDefaultRootCameraNode : public URootCameraNode
{ 
public:
	class UCameraNode*                                 BaseLayer;                                                  // 0x0030   (0x0008)  
	class UCameraNode*                                 MainLayer;                                                  // 0x0038   (0x0008)  
	class UCameraNode*                                 GlobalLayer;                                                // 0x0040   (0x0008)  
	class UCameraNode*                                 VisualLayer;                                                // 0x0048   (0x0008)  
};

/// Class /Script/GameplayCameras.SingleCameraDirector
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class USingleCameraDirector : public UCameraDirector
{ 
public:
	class UCameraMode*                                 CameraMode;                                                 // 0x0028   (0x0008)  
};

/// Class /Script/GameplayCameras.GameplayCameraActor
/// Size: 0x02A0 (672 bytes) (0x000290 - 0x0002A0) align 8 MaxSize: 0x02A0
class AGameplayCameraActor : public AActor
{ 
public:
	class USceneComponent*                             SceneComponent;                                             // 0x0290   (0x0008)  
	class UGameplayCameraComponent*                    CameraComponent;                                            // 0x0298   (0x0008)  


	/// Functions
	// Function /Script/GameplayCameras.GameplayCameraActor.GetSceneComponent
	// class USceneComponent* GetSceneComponent();                                                                              // [0x4fa0150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayCameras.GameplayCameraActor.GetCameraComponent
	// class UGameplayCameraComponent* GetCameraComponent();                                                                    // [0x5452bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GameplayCameras.GameplayCameraComponent
/// Size: 0x0240 (576 bytes) (0x000230 - 0x000240) align 16 MaxSize: 0x0240
class UGameplayCameraComponent : public USceneComponent
{ 
public:
	class UCameraAsset*                                Camera;                                                     // 0x0230   (0x0008)  
	class UGameplayCameraComponentEvaluationContext*   EvaluationContext;                                          // 0x0238   (0x0008)  


	/// Functions
	// Function /Script/GameplayCameras.GameplayCameraComponent.ActivateCamera
	// void ActivateCamera(int32_t playerIndex);                                                                                // [0x65e8820] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayCameras.GameplayCameraComponentEvaluationContext
/// Size: 0x00A8 (168 bytes) (0x0000A8 - 0x0000A8) align 8 MaxSize: 0x00A8
class UGameplayCameraComponentEvaluationContext : public UCameraEvaluationContext
{ 
public:
};

/// Class /Script/GameplayCameras.GameplayCameraSystemActor
/// Size: 0x02A0 (672 bytes) (0x000290 - 0x0002A0) align 8 MaxSize: 0x02A0
class AGameplayCameraSystemActor : public AActor
{ 
public:
	class UGameplayCameraSystemComponent*              CameraSystemComponent;                                      // 0x0290   (0x0008)  
	TEnumAsByte<EAutoReceiveInput>                     AutoActivateForPlayer;                                      // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0299   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayCameras.GameplayCameraSystemActor.GetCameraSystemComponent
	// class UGameplayCameraSystemComponent* GetCameraSystemComponent();                                                        // [0x4fa0150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayCameras.GameplayCameraSystemActor.ActivateForPlayer
	// void ActivateForPlayer(int32_t playerIndex);                                                                             // [0x65e8910] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayCameras.GameplayCameraSystemComponent
/// Size: 0x0240 (576 bytes) (0x000230 - 0x000240) align 16 MaxSize: 0x0240
class UGameplayCameraSystemComponent : public USceneComponent
{ 
public:
	class UCameraSystemEvaluator*                      Evaluator;                                                  // 0x0230   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0238   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayCameras.GameplayCameraSystemComponent.GetCameraSystemEvaluator
	// class UCameraSystemEvaluator* GetCameraSystemEvaluator();                                                                // [0x57ea130] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GameplayCameras.GameplayCamerasSubsystem
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UGameplayCamerasSubsystem : public UWorldSubsystem
{ 
public:


	/// Functions
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation
	// void StopCameraAnimation(class APlayerController* PlayerController, FCameraAnimationHandle& Handle, bool bImmediate);    // [0x65ea5b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf
	// void StopAllCameraAnimationsOf(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, bool bImmediate); // [0x65ea320] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations
	// void StopAllCameraAnimations(class APlayerController* PlayerController, bool bImmediate);                                // [0x65ea0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation
	// FCameraAnimationHandle PlayCameraAnimation(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, FCameraAnimationParams Params); // [0x65e9630] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive
	// bool IsCameraAnimationActive(class APlayerController* PlayerController, FCameraAnimationHandle& Handle);                 // [0x65e9000] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GameplayCameras.SimpleBlendCameraNode
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class USimpleBlendCameraNode : public UBlendCameraNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/GameplayCameras.SimpleFixedTimeBlendCameraNode
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class USimpleFixedTimeBlendCameraNode : public USimpleBlendCameraNode
{ 
public:
	float                                              BlendTime;                                                  // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/GameplayCameras.LinearBlendCameraNode
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class ULinearBlendCameraNode : public USimpleFixedTimeBlendCameraNode
{ 
public:
};

/// Class /Script/GameplayCameras.PopBlendCameraNode
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UPopBlendCameraNode : public UBlendCameraNode
{ 
public:
};

/// Class /Script/GameplayCameras.SmoothBlendCameraNode
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class USmoothBlendCameraNode : public USimpleFixedTimeBlendCameraNode
{ 
public:
	ESmoothCameraBlendType                             BlendType;                                                  // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/GameplayCameras.ArrayCameraNode
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UArrayCameraNode : public UCameraNode
{ 
public:
	TArray<class UCameraNode*>                         Children;                                                   // 0x0030   (0x0010)  
};

/// Class /Script/GameplayCameras.OffsetCameraNode
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UOffsetCameraNode : public UCameraNode
{ 
public:
	FVector3d                                          Offset;                                                     // 0x0030   (0x0018)  
};

/// Class /Script/GameplayCameras.CompositeCameraShakePattern
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UCompositeCameraShakePattern : public UCameraShakePattern
{ 
public:
	TArray<class UCameraShakePattern*>                 ChildPatterns;                                              // 0x0028   (0x0010)  
};

/// Class /Script/GameplayCameras.DefaultCameraShakeBase
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align 16 MaxSize: 0x00E0
class UDefaultCameraShakeBase : public UCameraShakeBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Class /Script/GameplayCameras.SimpleCameraShakePattern
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class USimpleCameraShakePattern : public UCameraShakePattern
{ 
public:
	float                                              Duration;                                                   // 0x0028   (0x0004)  
	float                                              BlendInTime;                                                // 0x002C   (0x0004)  
	float                                              BlendOutTime;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x24];                                      // 0x0034   (0x0024)  MISSED
};

/// Struct /Script/GameplayCameras.PerlinNoiseShaker
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPerlinNoiseShaker
{ 
	float                                              Amplitude;                                                  // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
};

/// Class /Script/GameplayCameras.PerlinNoiseCameraShakePattern
/// Size: 0x00D8 (216 bytes) (0x000058 - 0x0000D8) align 8 MaxSize: 0x00D8
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{ 
public:
	float                                              LocationAmplitudeMultiplier;                                // 0x0058   (0x0004)  
	float                                              LocationFrequencyMultiplier;                                // 0x005C   (0x0004)  
	FPerlinNoiseShaker                                 X;                                                          // 0x0060   (0x0008)  
	FPerlinNoiseShaker                                 Y;                                                          // 0x0068   (0x0008)  
	FPerlinNoiseShaker                                 Z;                                                          // 0x0070   (0x0008)  
	float                                              RotationAmplitudeMultiplier;                                // 0x0078   (0x0004)  
	float                                              RotationFrequencyMultiplier;                                // 0x007C   (0x0004)  
	FPerlinNoiseShaker                                 Pitch;                                                      // 0x0080   (0x0008)  
	FPerlinNoiseShaker                                 Yaw;                                                        // 0x0088   (0x0008)  
	FPerlinNoiseShaker                                 Roll;                                                       // 0x0090   (0x0008)  
	FPerlinNoiseShaker                                 FOV;                                                        // 0x0098   (0x0008)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x00A0   (0x0038)  MISSED
};

/// Struct /Script/GameplayCameras.WaveOscillator
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FWaveOscillator
{ 
	float                                              Amplitude;                                                  // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	EInitialWaveOscillatorOffsetType                   InitialOffsetType;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/GameplayCameras.WaveOscillatorCameraShakePattern
/// Size: 0x00F8 (248 bytes) (0x000058 - 0x0000F8) align 8 MaxSize: 0x00F8
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{ 
public:
	float                                              LocationAmplitudeMultiplier;                                // 0x0058   (0x0004)  
	float                                              LocationFrequencyMultiplier;                                // 0x005C   (0x0004)  
	FWaveOscillator                                    X;                                                          // 0x0060   (0x000C)  
	FWaveOscillator                                    Y;                                                          // 0x006C   (0x000C)  
	FWaveOscillator                                    Z;                                                          // 0x0078   (0x000C)  
	float                                              RotationAmplitudeMultiplier;                                // 0x0084   (0x0004)  
	float                                              RotationFrequencyMultiplier;                                // 0x0088   (0x0004)  
	FWaveOscillator                                    Pitch;                                                      // 0x008C   (0x000C)  
	FWaveOscillator                                    Yaw;                                                        // 0x0098   (0x000C)  
	FWaveOscillator                                    Roll;                                                       // 0x00A4   (0x000C)  
	FWaveOscillator                                    FOV;                                                        // 0x00B0   (0x000C)  
	unsigned char                                      UnknownData00_7[0x3C];                                      // 0x00BC   (0x003C)  MISSED
};

/// Class /Script/GameplayCameras.TestCameraShake
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align 16 MaxSize: 0x00E0
class UTestCameraShake : public UCameraShakeBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Class /Script/GameplayCameras.ConstantCameraShakePattern
/// Size: 0x0088 (136 bytes) (0x000058 - 0x000088) align 8 MaxSize: 0x0088
class UConstantCameraShakePattern : public USimpleCameraShakePattern
{ 
public:
	FVector                                            LocationOffset;                                             // 0x0058   (0x0018)  
	FRotator                                           RotationOffset;                                             // 0x0070   (0x0018)  
};

/// Struct /Script/GameplayCameras.CameraPose
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FCameraPose
{ 
	FVector3d                                          Location;                                                   // 0x0000   (0x0018)  
	FRotator3d                                         Rotation;                                                   // 0x0018   (0x0018)  
	double                                             TargetDistance;                                             // 0x0030   (0x0008)  
	float                                              FieldOfView;                                                // 0x0038   (0x0004)  
	float                                              AspectRatio;                                                // 0x003C   (0x0004)  
	float                                              FocalLength;                                                // 0x0040   (0x0004)  
	float                                              Aperture;                                                   // 0x0044   (0x0004)  
	float                                              FocusDistance;                                              // 0x0048   (0x0004)  
	float                                              SensorWidth;                                                // 0x004C   (0x0004)  
	float                                              SensorHeight;                                               // 0x0050   (0x0004)  
	float                                              SqueezeFactor;                                              // 0x0054   (0x0004)  
	float                                              NearClippingPlane;                                          // 0x0058   (0x0004)  
	float                                              FarClippingPlane;                                           // 0x005C   (0x0004)  
	bool                                               bConstrainAspectRatio;                                      // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0061   (0x000F)  MISSED
};

#pragma pack(pop)


