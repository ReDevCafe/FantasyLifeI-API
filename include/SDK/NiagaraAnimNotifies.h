
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara

#pragma pack(push, 0x1)

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{ 
public:
	class UNiagaraSystem*                              Template;                                                   // 0x0030   (0x0008)  
	FName                                              SocketName;                                                 // 0x0038   (0x0008)  
	FVector                                            LocationOffset;                                             // 0x0040   (0x0018)  
	FRotator                                           RotationOffset;                                             // 0x0058   (0x0018)  
	bool                                               bApplyRateScaleAsTimeDilation;                              // 0x0070   (0x0001)  
	bool                                               bDestroyAtEnd;                                              // 0x0071   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0072   (0x0006)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect
	// class UFXSystemComponent* GetSpawnedEffect(class UMeshComponent* meshComp);                                              // [0x79b57d0] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
};

/// Struct /Script/NiagaraAnimNotifies.CurveParameterPair
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FCurveParameterPair
{ 
	FName                                              AnimCurveName;                                              // 0x0000   (0x0008)  
	FName                                              UserVariableName;                                           // 0x0008   (0x0008)  
};

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
/// Size: 0x00E8 (232 bytes) (0x000078 - 0x0000E8) align 8 MaxSize: 0x00E8
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{ 
public:
	bool                                               bEnableNormalizedNotifyProgress;                            // 0x0078   (0x0001)  
	bool                                               bApplyRateScaleToProgress;                                  // 0x0079   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x007A   (0x0002)  MISSED
	FName                                              NotifyProgressUserParameter;                                // 0x007C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	TArray<FCurveParameterPair>                        AnimCurves;                                                 // 0x0088   (0x0010)  
	unsigned char                                      UnknownData02_7[0x50];                                      // 0x0098   (0x0050)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress
	// float GetNotifyProgress(class UMeshComponent* meshComp);                                                                 // [0x79b5730] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
/// Size: 0x00D0 (208 bytes) (0x000038 - 0x0000D0) align 16 MaxSize: 0x00D0
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{ 
public:
	class UNiagaraSystem*                              Template;                                                   // 0x0038   (0x0008)  
	FVector                                            LocationOffset;                                             // 0x0040   (0x0018)  
	FRotator                                           RotationOffset;                                             // 0x0058   (0x0018)  
	FVector                                            Scale;                                                      // 0x0070   (0x0018)  
	bool                                               bAbsoluteScale;                                             // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x37];                                      // 0x0089   (0x0037)  MISSED
	bool                                               Attached : 1;                                               // 0x00C0:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C1   (0x0003)  MISSED
	FName                                              SocketName;                                                 // 0x00C4   (0x0008)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00CC   (0x0004)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
	// class UFXSystemComponent* GetSpawnedEffect();                                                                            // [0x576f850] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
};

#pragma pack(pop)


