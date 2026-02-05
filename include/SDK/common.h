
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DP1Project
/// dependency: Engine
/// dependency: GameplayAbilities
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Game/common/map/BP_MapGlobalParam.BP_MapGlobalParam_C
/// Size: 0x0178 (376 bytes) (0x000178 - 0x000178) align 8 MaxSize: 0x0178
class UBP_MapGlobalParam_C : public UMapGlobalParam
{ 
public:
};

/// Class /Game/common/event/_bluePrints/BP_EventGlobalParam.BP_EventGlobalParam_C
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UBP_EventGlobalParam_C : public UEventGlobalParam
{ 
public:
};

/// Class /Game/common/sound/BP_SoundGlobalParam.BP_SoundGlobalParam_C
/// Size: 0x00B8 (184 bytes) (0x0000B8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UBP_SoundGlobalParam_C : public USoundGlobalParam
{ 
public:
};

/// Class /Game/common/rpg/BP_RpgGlobalParam.BP_RpgGlobalParam_C
/// Size: 0x02D0 (720 bytes) (0x0002D0 - 0x0002D0) align 8 MaxSize: 0x02D0
class UBP_RpgGlobalParam_C : public URpgGlobalParam
{ 
public:
};

/// Class /Game/common/battle/BP_BattleGlobalParam.BP_BattleGlobalParam_C
/// Size: 0x0480 (1152 bytes) (0x000480 - 0x000480) align 8 MaxSize: 0x0480
class UBP_BattleGlobalParam_C : public UBattleGlobalParam
{ 
public:
};

/// Class /Game/common/chara/_bluePrints/BP_CharaGlobalParam.BP_CharaGlobalParam_C
/// Size: 0x0270 (624 bytes) (0x000270 - 0x000270) align 8 MaxSize: 0x0270
class UBP_CharaGlobalParam_C : public UCharaGlobalParam
{ 
public:
};

/// Class /Game/common/chara/_bluePrints/BP_ScnCharacter.BP_ScnCharacter_C
/// Size: 0x0FF8 (4088 bytes) (0x000FC0 - 0x000FF8) align 16 MaxSize: 0x0FF8
class ABP_ScnCharacter_C : public AScnCharaActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0FC0   (0x0008)  
	class UGameCapsuleCollisionComponent*              _0_0_0tP_0_0_;                                              // 0x0FC8   (0x0008)  
	class ULookIKComponent*                            LookIK;                                                     // 0x0FD0   (0x0008)  
	float                                              ________0_1_1B039EB1437BE6C618BABEA814F5DBA6;               // 0x0FD8   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    _________Direction_1B039EB1437BE6C618BABEA814F5DBA6;        // 0x0FDC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0FDD   (0x0003)  MISSED
	class UTimelineComponent*                          __a0q__;                                                    // 0x0FE0   (0x0008)  
	TArray<double>                                     Threshould_Table;                                           // 0x0FE8   (0x0010)  


	/// Functions
	// Function /Game/common/chara/_bluePrints/BP_ScnCharacter.BP_ScnCharacter_C.=刟0q_󤖔�0�0_
	// void __a0q__0_0_0_0_();                                                                                                  // [0x35d7f00] BlueprintEvent       
	// Function /Game/common/chara/_bluePrints/BP_ScnCharacter.BP_ScnCharacter_C.SetupAnimUpdateRate
	// void SetupAnimUpdateRate(class ACharaModelActor* _actor);                                                                // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/chara/_bluePrints/BP_ScnCharacter.BP_ScnCharacter_C.FuncRaycastShadow
	// void FuncRaycastShadow();                                                                                                // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/chara/_bluePrints/BP_ScnCharacter.BP_ScnCharacter_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/chara/_bluePrints/BP_ScnCharacter.BP_ScnCharacter_C.SetSkinColor
	// void SetSkinColor(class USkeletalMeshComponent* _meshComp, FColor& _color);                                              // [0x35d7f00] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/chara/_bluePrints/BP_ScnCharacter.BP_ScnCharacter_C.SetHairColor
	// void SetHairColor(class USkeletalMeshComponent* _meshComp, FColor& _color);                                              // [0x35d7f00] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/chara/_bluePrints/BP_ScnCharacter.BP_ScnCharacter_C.SetEyeColor
	// void SetEyeColor(class USkeletalMeshComponent* _meshComp, FColor& _color);                                               // [0x35d7f00] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/chara/_bluePrints/BP_ScnCharacter.BP_ScnCharacter_C.ExecuteUbergraph_BP_ScnCharacter
	// void ExecuteUbergraph_BP_ScnCharacter(int32_t EntryPoint);                                                               // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/gameplayAbility/GA_MoveTo.GA_MoveTo_C
/// Size: 0x03F0 (1008 bytes) (0x0003E8 - 0x0003F0) align 8 MaxSize: 0x03F0
class UGA_MoveTo_C : public UGAMoveTo
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03E8   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_MoveTo.GA_MoveTo_C.OnFail_C6BC441E4743D3A51A7AD8BDF2DCB770
	// void OnFail_C6BC441E4743D3A51A7AD8BDF2DCB770(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_MoveTo.GA_MoveTo_C.OnSuccess_C6BC441E4743D3A51A7AD8BDF2DCB770
	// void OnSuccess_C6BC441E4743D3A51A7AD8BDF2DCB770(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_MoveTo.GA_MoveTo_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_MoveTo.GA_MoveTo_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_MoveTo.GA_MoveTo_C.ExecuteUbergraph_GA_MoveTo
	// void ExecuteUbergraph_GA_MoveTo(int32_t EntryPoint);                                                                     // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_Revive.GA_Revive_C
/// Size: 0x03D0 (976 bytes) (0x0003C8 - 0x0003D0) align 8 MaxSize: 0x03D0
class UGA_Revive_C : public UGARevive
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03C8   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_Revive.GA_Revive_C.OnFinish_E83DC1F34300BD767FB337A194886090
	// void OnFinish_E83DC1F34300BD767FB337A194886090();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Revive.GA_Revive_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Revive.GA_Revive_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Revive.GA_Revive_C.ExecuteUbergraph_GA_Revive
	// void ExecuteUbergraph_GA_Revive(int32_t EntryPoint);                                                                     // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_Death.GA_Death_C
/// Size: 0x0410 (1040 bytes) (0x000408 - 0x000410) align 8 MaxSize: 0x0410
class UGA_Death_C : public UGADeath
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0408   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_Death.GA_Death_C.Removed_F3C7D4184E84A31E0E4DC19BEB8A3E4B
	// void Removed_F3C7D4184E84A31E0E4DC19BEB8A3E4B();                                                                         // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Death.GA_Death_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Death.GA_Death_C.ExecuteUbergraph_GA_Death
	// void ExecuteUbergraph_GA_Death(int32_t EntryPoint);                                                                      // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/gameplayAbility/GA_Damage.GA_Damage_C
/// Size: 0x0438 (1080 bytes) (0x000428 - 0x000438) align 8 MaxSize: 0x0438
class UGA_Damage_C : public UGADamage
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0428   (0x0008)  
	double                                             _0_0_0_0_0_0_;                                              // 0x0430   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_Damage.GA_Damage_C.OnFinshed_67FDE9C042050104CF90ED96D7414EBE
	// void OnFinshed_67FDE9C042050104CF90ED96D7414EBE();                                                                       // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Damage.GA_Damage_C.OnFinish_67B21AB143284D0C355A15B1AE6DC1C7
	// void OnFinish_67B21AB143284D0C355A15B1AE6DC1C7();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Damage.GA_Damage_C.O
	// void O();                                                                                                                // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Damage.GA_Damage_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Damage.GA_Damage_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Damage.GA_Damage_C.ExecuteUbergraph_GA_Damage
	// void ExecuteUbergraph_GA_Damage(int32_t EntryPoint);                                                                     // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/gameplayAbility/GA_Jump.GA_Jump_C
/// Size: 0x05A9 (1449 bytes) (0x0004B8 - 0x0005A9) align 8 MaxSize: 0x05A9
class UGA_Jump_C : public UGAJump
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04B8   (0x0008)  
	FRotator                                           NextRot;                                                    // 0x04C0   (0x0018)  
	FRotator                                           RotBuff;                                                    // 0x04D8   (0x0018)  
	FVector                                            ClimbPointLocation;                                         // 0x04F0   (0x0018)  
	FVector                                            FloorTopLocation;                                           // 0x0508   (0x0018)  
	FVector                                            RootLocation;                                               // 0x0520   (0x0018)  
	bool                                               isHit;                                                      // 0x0538   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0539   (0x0007)  MISSED
	double                                             Height;                                                     // 0x0540   (0x0008)  
	bool                                               IsOnce;                                                     // 0x0548   (0x0001)  
	bool                                               isJump;                                                     // 0x0549   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x054A   (0x0006)  MISSED
	FVector                                            WallHitPos;                                                 // 0x0550   (0x0018)  
	FVector                                            Hit_Normal;                                                 // 0x0568   (0x0018)  
	TArray<EGameObjectChannel>                         Object_Channels;                                            // 0x0580   (0x0010)  
	bool                                               IsWatarOut;                                                 // 0x0590   (0x0001)  
	bool                                               CanClimbAndLanding;                                         // 0x0591   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0592   (0x0006)  MISSED
	SDK_UNDEFINED(16,661) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(Object_Types);                          // 0x0598   (0x0010)  
	bool                                               LandAble;                                                   // 0x05A8   (0x0001)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.^梙�:y 
	// void __h__y(class AActor* newParam, bool& Result);                                                                       // [0x35d7f00] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.]n0TM
	// void __n0_TM();                                                                                                          // [0x35d7f00] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.򋒔�0
	// void _0_0_0();                                                                                                           // [0x35d7f00] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.鹹誖HQk0湒砙i
	// void _y_RHQk0____i(bool& IsMovementClear);                                                                               // [0x35d7f00] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.󪪶񍰾�0񩜬
	// FVector _0_0_0_0_0_0_0();                                                                                                // [0x35d7f00] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.顅jMOnx01
	// bool _v_jMOn_x01(FVector TargetPosition);                                                                                // [0x35d7f00] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.]洊貧
	// FVector ______(FVector FloorPosition);                                                                                   // [0x35d7f00] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.􌢾򈎄�0�0
	// void _0_0_0_0_0_0(FVector TargetLocation, FRotator TargetRotation);                                                      // [0x35d7f00] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.@w0W颯�
	// void _w0W_S_(double LimitClimb, FHitResult& OutHit, bool& isHit, double& Height, bool& CanLanding);                      // [0x35d7f00] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.]{v�0-N
	// void ___v_0_N(FVector FloorPoint);                                                                                       // [0x35d7f00] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.]{v�0�0@w
	// void ___v_0_0_w(FVector FloorPoint, double Forward, bool IsOnlyForward);                                                 // [0x35d7f00] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.]{v�0�0�0�
	// void ___v_0_0_0_(double Height, bool& IsClimbUp);                                                                        // [0x35d7f00] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.OnFinish_52A7D9CA496F9B3DD977A488A9EB4748
	// void OnFinish_52A7D9CA496F9B3DD977A488A9EB4748();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.OnFinish_D0DF9D9D494748541D24E399549F2BCA
	// void OnFinish_D0DF9D9D494748541D24E399549F2BCA();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.OnFinish_FCF7373E461D15C4D4EDA68A1A9F0A49
	// void OnFinish_FCF7373E461D15C4D4EDA68A1A9F0A49();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.OnFinish_5E4D31A44E899DEBE894399FD8A90F6D
	// void OnFinish_5E4D31A44E899DEBE894399FD8A90F6D();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.OnFinish_D0EF9F9147C03F9A93649D8B19058DE5
	// void OnFinish_D0EF9F9147C03F9A93649D8B19058DE5();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.OnFinish_54F4D93040B8E231615DAB9AC2DD3591
	// void OnFinish_54F4D93040B8E231615DAB9AC2DD3591();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Jump.GA_Jump_C.ExecuteUbergraph_GA_Jump
	// void ExecuteUbergraph_GA_Jump(int32_t EntryPoint);                                                                       // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/gameplayAbility/GA_RideOnVehicle.GA_RideOnVehicle_C
/// Size: 0x0458 (1112 bytes) (0x000440 - 0x000458) align 8 MaxSize: 0x0458
class UGA_RideOnVehicle_C : public UGABattleCommandBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0440   (0x0008)  
	double                                             NewVar;                                                     // 0x0448   (0x0008)  
	double                                             NewVar0;                                                    // 0x0450   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_RideOnVehicle.GA_RideOnVehicle_C.OnFinish_7560EFE24F760F6EBCAE51B631201F8F
	// void OnFinish_7560EFE24F760F6EBCAE51B631201F8F();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_RideOnVehicle.GA_RideOnVehicle_C.OnFinish_2F9536FD4D92D7B55FF088AC34AC12AD
	// void OnFinish_2F9536FD4D92D7B55FF088AC34AC12AD();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_RideOnVehicle.GA_RideOnVehicle_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_RideOnVehicle.GA_RideOnVehicle_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_RideOnVehicle.GA_RideOnVehicle_C.ExecuteUbergraph_GA_RideOnVehicle
	// void ExecuteUbergraph_GA_RideOnVehicle(int32_t EntryPoint);                                                              // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_BattleActionCommand.GA_BattleActionCommand_C
/// Size: 0x0528 (1320 bytes) (0x0004B8 - 0x000528) align 8 MaxSize: 0x0528
class UGA_BattleActionCommand_C : public UGABattleActionCommand
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04B8   (0x0008)  
	double                                             Timer;                                                      // 0x04C0   (0x0008)  
	bool                                               isSuccess;                                                  // 0x04C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x04C9   (0x0007)  MISSED
	FVector                                            targetPos;                                                  // 0x04D0   (0x0018)  
	FVector                                            DstPos;                                                     // 0x04E8   (0x0018)  
	FVector                                            RemovePos;                                                  // 0x0500   (0x0018)  
	bool                                               isCommandPlay;                                              // 0x0518   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0519   (0x0007)  MISSED
	double                                             attackHeight;                                               // 0x0520   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_BattleActionCommand.GA_BattleActionCommand_C.OnFail_5D3BA5F84AC29544C52DE5882689BDF8
	// void OnFail_5D3BA5F84AC29544C52DE5882689BDF8(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BattleActionCommand.GA_BattleActionCommand_C.OnSuccess_5D3BA5F84AC29544C52DE5882689BDF8
	// void OnSuccess_5D3BA5F84AC29544C52DE5882689BDF8(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BattleActionCommand.GA_BattleActionCommand_C.OnFail_10711C2C4FD2AA3D7012709A904898ED
	// void OnFail_10711C2C4FD2AA3D7012709A904898ED(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BattleActionCommand.GA_BattleActionCommand_C.OnSuccess_10711C2C4FD2AA3D7012709A904898ED
	// void OnSuccess_10711C2C4FD2AA3D7012709A904898ED(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BattleActionCommand.GA_BattleActionCommand_C.OnFail_D4D14C9045076167ADE322A686B1125C
	// void OnFail_D4D14C9045076167ADE322A686B1125C(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BattleActionCommand.GA_BattleActionCommand_C.OnSuccess_D4D14C9045076167ADE322A686B1125C
	// void OnSuccess_D4D14C9045076167ADE322A686B1125C(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BattleActionCommand.GA_BattleActionCommand_C.OnFail_D4D14C9045076167ADE322A6DD30CE05
	// void OnFail_D4D14C9045076167ADE322A6DD30CE05(TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BattleActionCommand.GA_BattleActionCommand_C.OnSuccess_D4D14C9045076167ADE322A6DD30CE05
	// void OnSuccess_D4D14C9045076167ADE322A6DD30CE05(TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BattleActionCommand.GA_BattleActionCommand_C.OnFinish_D2211F0648D8C2D485FE27980B660AA4
	// void OnFinish_D2211F0648D8C2D485FE27980B660AA4();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BattleActionCommand.GA_BattleActionCommand_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BattleActionCommand.GA_BattleActionCommand_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BattleActionCommand.GA_BattleActionCommand_C.ExecuteUbergraph_GA_BattleActionCommand
	// void ExecuteUbergraph_GA_BattleActionCommand(int32_t EntryPoint);                                                        // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/gameplayAbility/GA_UniqueCharge.GA_UniqueCharge_C
/// Size: 0x0458 (1112 bytes) (0x000450 - 0x000458) align 8 MaxSize: 0x0458
class UGA_UniqueCharge_C : public UGAUnique
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0450   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_UniqueCharge.GA_UniqueCharge_C.OnFinish_66761D5548BD47097EF8299E043A47F3
	// void OnFinish_66761D5548BD47097EF8299E043A47F3();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_UniqueCharge.GA_UniqueCharge_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_UniqueCharge.GA_UniqueCharge_C.ExecuteUbergraph_GA_UniqueCharge
	// void ExecuteUbergraph_GA_UniqueCharge(int32_t EntryPoint);                                                               // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_AttackTension.GA_AttackTension_C
/// Size: 0x0450 (1104 bytes) (0x000448 - 0x000450) align 8 MaxSize: 0x0450
class UGA_AttackTension_C : public UGAAttackTension
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0448   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_AttackTension.GA_AttackTension_C.OnFinish_5CEB5E0948034FE30FD059A87A76CA64
	// void OnFinish_5CEB5E0948034FE30FD059A87A76CA64();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackTension.GA_AttackTension_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackTension.GA_AttackTension_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackTension.GA_AttackTension_C.ExecuteUbergraph_GA_AttackTension
	// void ExecuteUbergraph_GA_AttackTension(int32_t EntryPoint);                                                              // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_UseItem.GA_UseItem_C
/// Size: 0x0448 (1096 bytes) (0x000440 - 0x000448) align 8 MaxSize: 0x0448
class UGA_UseItem_C : public UGAUseItem
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0440   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_UseItem.GA_UseItem_C.OnFinish_40103EAF41BC07622A9FDDAE18202592
	// void OnFinish_40103EAF41BC07622A9FDDAE18202592();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_UseItem.GA_UseItem_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_UseItem.GA_UseItem_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_UseItem.GA_UseItem_C.ExecuteUbergraph_GA_UseItem
	// void ExecuteUbergraph_GA_UseItem(int32_t EntryPoint);                                                                    // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/gameplayAbility/GA_MoveToLocation.GA_MoveToLocation_C
/// Size: 0x03E8 (1000 bytes) (0x0003E0 - 0x0003E8) align 8 MaxSize: 0x03E8
class UGA_MoveToLocation_C : public UGAMoveToLocation
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03E0   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_MoveToLocation.GA_MoveToLocation_C.OnTimeOut_7A20AFCA4CAEB6B24F7A0DA815277F6F
	// void OnTimeOut_7A20AFCA4CAEB6B24F7A0DA815277F6F();                                                                       // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_MoveToLocation.GA_MoveToLocation_C.OnReached_7A20AFCA4CAEB6B24F7A0DA815277F6F
	// void OnReached_7A20AFCA4CAEB6B24F7A0DA815277F6F();                                                                       // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_MoveToLocation.GA_MoveToLocation_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_MoveToLocation.GA_MoveToLocation_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_MoveToLocation.GA_MoveToLocation_C.ExecuteUbergraph_GA_MoveToLocation
	// void ExecuteUbergraph_GA_MoveToLocation(int32_t EntryPoint);                                                             // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/gameplayAbility/GA_Rotate.GA_Rotate_C
/// Size: 0x03E8 (1000 bytes) (0x0003E0 - 0x0003E8) align 8 MaxSize: 0x03E8
class UGA_Rotate_C : public UGARotate
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03E0   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_Rotate.GA_Rotate_C.OnTimeOut_BFAAB86648CC252A2CD6609FDC1CBAFF
	// void OnTimeOut_BFAAB86648CC252A2CD6609FDC1CBAFF();                                                                       // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Rotate.GA_Rotate_C.OnReached_BFAAB86648CC252A2CD6609FDC1CBAFF
	// void OnReached_BFAAB86648CC252A2CD6609FDC1CBAFF();                                                                       // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Rotate.GA_Rotate_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Rotate.GA_Rotate_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Rotate.GA_Rotate_C.ExecuteUbergraph_GA_Rotate
	// void ExecuteUbergraph_GA_Rotate(int32_t EntryPoint);                                                                     // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/gameplayAbility/GA_PickItem.GA_PickItem_C
/// Size: 0x0458 (1112 bytes) (0x000450 - 0x000458) align 8 MaxSize: 0x0458
class UGA_PickItem_C : public UGAPickItem
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0450   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_PickItem.GA_PickItem_C.OnFinish_B8E8CD9D4F50215DFBC6DC90D7FC3A94
	// void OnFinish_B8E8CD9D4F50215DFBC6DC90D7FC3A94();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_PickItem.GA_PickItem_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_PickItem.GA_PickItem_C.ExecuteUbergraph_GA_PickItem
	// void ExecuteUbergraph_GA_PickItem(int32_t EntryPoint);                                                                   // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_BattleAddStatusEffectBegin.GA_BattleAddStatusEffectBegin_C
/// Size: 0x03E8 (1000 bytes) (0x0003E0 - 0x0003E8) align 8 MaxSize: 0x03E8
class UGA_BattleAddStatusEffectBegin_C : public UGABattleAddStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03E0   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_BattleAddStatusEffectBegin.GA_BattleAddStatusEffectBegin_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BattleAddStatusEffectBegin.GA_BattleAddStatusEffectBegin_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BattleAddStatusEffectBegin.GA_BattleAddStatusEffectBegin_C.ExecuteUbergraph_GA_BattleAddStatusEffectBegin
	// void ExecuteUbergraph_GA_BattleAddStatusEffectBegin(int32_t EntryPoint);                                                 // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_AttackAvoid.GA_AttackAvoid_C
/// Size: 0x0480 (1152 bytes) (0x000478 - 0x000480) align 8 MaxSize: 0x0480
class UGA_AttackAvoid_C : public UGAAttackCombo
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0478   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_AttackAvoid.GA_AttackAvoid_C.OnFinish_102406854C0A71E4CCF95F87ABB8D915
	// void OnFinish_102406854C0A71E4CCF95F87ABB8D915();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackAvoid.GA_AttackAvoid_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackAvoid.GA_AttackAvoid_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackAvoid.GA_AttackAvoid_C.ExecuteUbergraph_GA_AttackAvoid
	// void ExecuteUbergraph_GA_AttackAvoid(int32_t EntryPoint);                                                                // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_WeaponDrawSheathe.GA_WeaponDrawSheathe_C
/// Size: 0x0459 (1113 bytes) (0x000450 - 0x000459) align 8 MaxSize: 0x0459
class UGA_WeaponDrawSheathe_C : public UGAWeaponDrawSheathe
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0450   (0x0008)  
	bool                                               isUIOpened;                                                 // 0x0458   (0x0001)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_WeaponDrawSheathe.GA_WeaponDrawSheathe_C.OnFinish_31A091234F87E71182D503AED328C2CD
	// void OnFinish_31A091234F87E71182D503AED328C2CD();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_WeaponDrawSheathe.GA_WeaponDrawSheathe_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_WeaponDrawSheathe.GA_WeaponDrawSheathe_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_WeaponDrawSheathe.GA_WeaponDrawSheathe_C.ExecuteUbergraph_GA_WeaponDrawSheathe
	// void ExecuteUbergraph_GA_WeaponDrawSheathe(int32_t EntryPoint);                                                          // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/gameplayAbility/GA_AttackCombo2.GA_AttackCombo2_C
/// Size: 0x0480 (1152 bytes) (0x000478 - 0x000480) align 8 MaxSize: 0x0480
class UGA_AttackCombo2_C : public UGAAttackCombo
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0478   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_AttackCombo2.GA_AttackCombo2_C.OnFinish_CD85848A4D2242910E95CC802A7941D7
	// void OnFinish_CD85848A4D2242910E95CC802A7941D7();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackCombo2.GA_AttackCombo2_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackCombo2.GA_AttackCombo2_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackCombo2.GA_AttackCombo2_C.ExecuteUbergraph_GA_AttackCombo2
	// void ExecuteUbergraph_GA_AttackCombo2(int32_t EntryPoint);                                                               // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_ObjAction.GA_ObjAction_C
/// Size: 0x04B9 (1209 bytes) (0x0004B0 - 0x0004B9) align 16 MaxSize: 0x04B9
class UGA_ObjAction_C : public UGAObjAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04B0   (0x0008)  
	bool                                               IsTimeOver;                                                 // 0x04B8   (0x0001)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_ObjAction.GA_ObjAction_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_ObjAction.GA_ObjAction_C.OnTimeOver_Event
	// void OnTimeOver_Event();                                                                                                 // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_ObjAction.GA_ObjAction_C.ExecuteUbergraph_GA_ObjAction
	// void ExecuteUbergraph_GA_ObjAction(int32_t EntryPoint);                                                                  // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/gameplayAbility/GA_RotateMoveToLocation.GA_RotateMoveToLocation_C
/// Size: 0x0408 (1032 bytes) (0x000400 - 0x000408) align 8 MaxSize: 0x0408
class UGA_RotateMoveToLocation_C : public UGARotateMoveToLocation
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0400   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_RotateMoveToLocation.GA_RotateMoveToLocation_C.OnTimeOut_458F6B9D4D74A01786E41983EE407FF3
	// void OnTimeOut_458F6B9D4D74A01786E41983EE407FF3();                                                                       // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_RotateMoveToLocation.GA_RotateMoveToLocation_C.OnReached_458F6B9D4D74A01786E41983EE407FF3
	// void OnReached_458F6B9D4D74A01786E41983EE407FF3();                                                                       // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_RotateMoveToLocation.GA_RotateMoveToLocation_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_RotateMoveToLocation.GA_RotateMoveToLocation_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_RotateMoveToLocation.GA_RotateMoveToLocation_C.ExecuteUbergraph_GA_RotateMoveToLocation
	// void ExecuteUbergraph_GA_RotateMoveToLocation(int32_t EntryPoint);                                                       // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/gameplayAbility/GA_PickCommand.GA_PickCommand_C
/// Size: 0x0484 (1156 bytes) (0x000478 - 0x000484) align 8 MaxSize: 0x0484
class UGA_PickCommand_C : public UGAPickCommand
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0478   (0x0008)  
	FObjCtrlFlgTypeBit                                 Bit;                                                        // 0x0480   (0x0004)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_PickCommand.GA_PickCommand_C.񇞼򈎄�0�
	// void _0_0_0_0_0_();                                                                                                      // [0x35d7f00] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_PickCommand.GA_PickCommand_C.񇞼򈎄�0�0
	// void _0_0_0_0_0_0();                                                                                                     // [0x35d7f00] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_PickCommand.GA_PickCommand_C.OnTimeOut_568A50CE4D14BE86EDAACF93D4F676DE
	// void OnTimeOut_568A50CE4D14BE86EDAACF93D4F676DE();                                                                       // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_PickCommand.GA_PickCommand_C.OnReached_568A50CE4D14BE86EDAACF93D4F676DE
	// void OnReached_568A50CE4D14BE86EDAACF93D4F676DE();                                                                       // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_PickCommand.GA_PickCommand_C.OnFinish_C50FAE124AA791218DE041AD18B88ED2
	// void OnFinish_C50FAE124AA791218DE041AD18B88ED2();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_PickCommand.GA_PickCommand_C.OnFinish_68E8E41542BD7229B9C7A1B56311E8C9
	// void OnFinish_68E8E41542BD7229B9C7A1B56311E8C9();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_PickCommand.GA_PickCommand_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_PickCommand.GA_PickCommand_C.ExecuteUbergraph_GA_PickCommand
	// void ExecuteUbergraph_GA_PickCommand(int32_t EntryPoint);                                                                // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_MinigameWalkAround.GA_MinigameWalkAround_C
/// Size: 0x03F8 (1016 bytes) (0x0003F0 - 0x0003F8) align 8 MaxSize: 0x03F8
class UGA_MinigameWalkAround_C : public UGAMinigameWalkAround
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03F0   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_MinigameWalkAround.GA_MinigameWalkAround_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_MinigameWalkAround.GA_MinigameWalkAround_C.ExecuteUbergraph_GA_MinigameWalkAround
	// void ExecuteUbergraph_GA_MinigameWalkAround(int32_t EntryPoint);                                                         // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_DiveOutWater.GA_DiveOutWater_C
/// Size: 0x0448 (1096 bytes) (0x000440 - 0x000448) align 8 MaxSize: 0x0448
class UGA_DiveOutWater_C : public UGABattleCommandBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0440   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_DiveOutWater.GA_DiveOutWater_C.OnFinish_17019DE54F7F11A3BC35D6A8C9BA869F
	// void OnFinish_17019DE54F7F11A3BC35D6A8C9BA869F();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_DiveOutWater.GA_DiveOutWater_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_DiveOutWater.GA_DiveOutWater_C.ExecuteUbergraph_GA_DiveOutWater
	// void ExecuteUbergraph_GA_DiveOutWater(int32_t EntryPoint);                                                               // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_AttackDraw.GA_AttackDraw_C
/// Size: 0x0490 (1168 bytes) (0x000488 - 0x000490) align 8 MaxSize: 0x0490
class UGA_AttackDraw_C : public UGAAttackDraw
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0488   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_AttackDraw.GA_AttackDraw_C.OnFinish_1670845141A3CB4E1F8BA3B92606524E
	// void OnFinish_1670845141A3CB4E1F8BA3B92606524E();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackDraw.GA_AttackDraw_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackDraw.GA_AttackDraw_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackDraw.GA_AttackDraw_C.ExecuteUbergraph_GA_AttackDraw
	// void ExecuteUbergraph_GA_AttackDraw(int32_t EntryPoint);                                                                 // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/gameplayAbility/GA_AttackCombo3.GA_AttackCombo3_C
/// Size: 0x0480 (1152 bytes) (0x000478 - 0x000480) align 8 MaxSize: 0x0480
class UGA_AttackCombo3_C : public UGAAttackCombo
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0478   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_AttackCombo3.GA_AttackCombo3_C.OnFinish_8EBE1CF64B308AFD582BA2A4CF541443
	// void OnFinish_8EBE1CF64B308AFD582BA2A4CF541443();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackCombo3.GA_AttackCombo3_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackCombo3.GA_AttackCombo3_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackCombo3.GA_AttackCombo3_C.ExecuteUbergraph_GA_AttackCombo3
	// void ExecuteUbergraph_GA_AttackCombo3(int32_t EntryPoint);                                                               // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_ExitObjAction.GA_ExitObjAction_C
/// Size: 0x04B8 (1208 bytes) (0x0004B0 - 0x0004B8) align 16 MaxSize: 0x04B8
class UGA_ExitObjAction_C : public UGAExitObjAction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04B0   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_ExitObjAction.GA_ExitObjAction_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_ExitObjAction.GA_ExitObjAction_C.ExecuteUbergraph_GA_ExitObjAction
	// void ExecuteUbergraph_GA_ExitObjAction(int32_t EntryPoint);                                                              // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_Unique.GA_Unique_C
/// Size: 0x0458 (1112 bytes) (0x000450 - 0x000458) align 8 MaxSize: 0x0458
class UGA_Unique_C : public UGAUnique
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0450   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_Unique.GA_Unique_C.OnFinish_6D7191904124043BEDF4AC859FA788AA
	// void OnFinish_6D7191904124043BEDF4AC859FA788AA();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Unique.GA_Unique_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Unique.GA_Unique_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Unique.GA_Unique_C.ExecuteUbergraph_GA_Unique
	// void ExecuteUbergraph_GA_Unique(int32_t EntryPoint);                                                                     // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_Avoid.GA_Avoid_C
/// Size: 0x0490 (1168 bytes) (0x000478 - 0x000490) align 8 MaxSize: 0x0490
class UGA_Avoid_C : public UGAAvoid
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0478   (0x0008)  
	double                                             NewVar;                                                     // 0x0480   (0x0008)  
	double                                             NewVar0;                                                    // 0x0488   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_Avoid.GA_Avoid_C.OnFinish_B33563D2499C33C491F96AA9BE3268CC
	// void OnFinish_B33563D2499C33C491F96AA9BE3268CC();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Avoid.GA_Avoid_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Avoid.GA_Avoid_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Avoid.GA_Avoid_C.ExecuteUbergraph_GA_Avoid
	// void ExecuteUbergraph_GA_Avoid(int32_t EntryPoint);                                                                      // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_DiveOnWater.GA_DiveOnWater_C
/// Size: 0x0448 (1096 bytes) (0x000440 - 0x000448) align 8 MaxSize: 0x0448
class UGA_DiveOnWater_C : public UGABattleCommandBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0440   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_DiveOnWater.GA_DiveOnWater_C.OnFinish_9B3E95774EE951D89BEDF68B2907D55D
	// void OnFinish_9B3E95774EE951D89BEDF68B2907D55D();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_DiveOnWater.GA_DiveOnWater_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_DiveOnWater.GA_DiveOnWater_C.ExecuteUbergraph_GA_DiveOnWater
	// void ExecuteUbergraph_GA_DiveOnWater(int32_t EntryPoint);                                                                // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/gameplayAbility/GA_ChatEmote.GA_ChatEmote_C
/// Size: 0x03F0 (1008 bytes) (0x0003E8 - 0x0003F0) align 8 MaxSize: 0x03F0
class UGA_ChatEmote_C : public UGAChatEmote
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03E8   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_ChatEmote.GA_ChatEmote_C.OnCancelled_78ED65174FC36BE0DC4D5992274670EE
	// void OnCancelled_78ED65174FC36BE0DC4D5992274670EE();                                                                     // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_ChatEmote.GA_ChatEmote_C.OnInterrupted_78ED65174FC36BE0DC4D5992274670EE
	// void OnInterrupted_78ED65174FC36BE0DC4D5992274670EE();                                                                   // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_ChatEmote.GA_ChatEmote_C.OnBlendOut_78ED65174FC36BE0DC4D5992274670EE
	// void OnBlendOut_78ED65174FC36BE0DC4D5992274670EE();                                                                      // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_ChatEmote.GA_ChatEmote_C.OnCompleted_78ED65174FC36BE0DC4D5992274670EE
	// void OnCompleted_78ED65174FC36BE0DC4D5992274670EE();                                                                     // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_ChatEmote.GA_ChatEmote_C.OnCancelled_78ED65174FC36BE0DC4D59926FBDDC92
	// void OnCancelled_78ED65174FC36BE0DC4D59926FBDDC92();                                                                     // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_ChatEmote.GA_ChatEmote_C.OnInterrupted_78ED65174FC36BE0DC4D59926FBDDC92
	// void OnInterrupted_78ED65174FC36BE0DC4D59926FBDDC92();                                                                   // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_ChatEmote.GA_ChatEmote_C.OnBlendOut_78ED65174FC36BE0DC4D59926FBDDC92
	// void OnBlendOut_78ED65174FC36BE0DC4D59926FBDDC92();                                                                      // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_ChatEmote.GA_ChatEmote_C.OnCompleted_78ED65174FC36BE0DC4D59926FBDDC92
	// void OnCompleted_78ED65174FC36BE0DC4D59926FBDDC92();                                                                     // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_ChatEmote.GA_ChatEmote_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_ChatEmote.GA_ChatEmote_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_ChatEmote.GA_ChatEmote_C.ExecuteUbergraph_GA_ChatEmote
	// void ExecuteUbergraph_GA_ChatEmote(int32_t EntryPoint);                                                                  // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/gameplayAbility/GA_BedSleep.GA_BedSleep_C
/// Size: 0x04B9 (1209 bytes) (0x0004B0 - 0x0004B9) align 16 MaxSize: 0x04B9
class UGA_BedSleep_C : public UGABedSleep
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04B0   (0x0008)  
	bool                                               IsTimeOver;                                                 // 0x04B8   (0x0001)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_BedSleep.GA_BedSleep_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BedSleep.GA_BedSleep_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BedSleep.GA_BedSleep_C.OnTimeOver_Event
	// void OnTimeOver_Event();                                                                                                 // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BedSleep.GA_BedSleep_C.ExecuteUbergraph_GA_BedSleep
	// void ExecuteUbergraph_GA_BedSleep(int32_t EntryPoint);                                                                   // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/gameplayAbility/GA_StandBench.GA_StandBench_C
/// Size: 0x0439 (1081 bytes) (0x000430 - 0x000439) align 16 MaxSize: 0x0439
class UGA_StandBench_C : public UGAStandBench
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0430   (0x0008)  
	bool                                               IsTimeOver;                                                 // 0x0438   (0x0001)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_StandBench.GA_StandBench_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_StandBench.GA_StandBench_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_StandBench.GA_StandBench_C.OnTimeOver_Event
	// void OnTimeOver_Event();                                                                                                 // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_StandBench.GA_StandBench_C.ExecuteUbergraph_GA_StandBench
	// void ExecuteUbergraph_GA_StandBench(int32_t EntryPoint);                                                                 // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/gameplayAbility/GA_BedGetup.GA_BedGetup_C
/// Size: 0x0439 (1081 bytes) (0x000430 - 0x000439) align 16 MaxSize: 0x0439
class UGA_BedGetup_C : public UGABedGetup
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0430   (0x0008)  
	bool                                               IsTimeOver;                                                 // 0x0438   (0x0001)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_BedGetup.GA_BedGetup_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BedGetup.GA_BedGetup_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BedGetup.GA_BedGetup_C.OnTimeOver_Event
	// void OnTimeOver_Event();                                                                                                 // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BedGetup.GA_BedGetup_C.ExecuteUbergraph_GA_BedGetup
	// void ExecuteUbergraph_GA_BedGetup(int32_t EntryPoint);                                                                   // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/graphic/BP_GraphicOptionPlatformPreset.BP_GraphicOptionPlatformPreset_C
/// Size: 0x00C8 (200 bytes) (0x0000C8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UBP_GraphicOptionPlatformPreset_C : public UPlatformOptionPreset
{ 
public:
};

/// Class /Game/common/gameplayAbility/GA_PickRequest.GA_PickRequest_C
/// Size: 0x03D8 (984 bytes) (0x0003C0 - 0x0003D8) align 8 MaxSize: 0x03D8
class UGA_PickRequest_C : public UGABase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03C0   (0x0008)  
	class UAnimMontage*                                playMontage;                                                // 0x03C8   (0x0008)  
	FName                                              SE_HELP_WHISTLE;                                            // 0x03D0   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_PickRequest.GA_PickRequest_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_PickRequest.GA_PickRequest_C.ExecuteUbergraph_GA_PickRequest
	// void ExecuteUbergraph_GA_PickRequest(int32_t EntryPoint);                                                                // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_BattleAddStatusEffectEnd.GA_BattleAddStatusEffectEnd_C
/// Size: 0x03E8 (1000 bytes) (0x0003E0 - 0x0003E8) align 8 MaxSize: 0x03E8
class UGA_BattleAddStatusEffectEnd_C : public UGABattleAddStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03E0   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_BattleAddStatusEffectEnd.GA_BattleAddStatusEffectEnd_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BattleAddStatusEffectEnd.GA_BattleAddStatusEffectEnd_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_BattleAddStatusEffectEnd.GA_BattleAddStatusEffectEnd_C.ExecuteUbergraph_GA_BattleAddStatusEffectEnd
	// void ExecuteUbergraph_GA_BattleAddStatusEffectEnd(int32_t EntryPoint);                                                   // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/gameplayAbility/GA_JumpOff.GA_JumpOff_C
/// Size: 0x04C0 (1216 bytes) (0x0004B8 - 0x0004C0) align 8 MaxSize: 0x04C0
class UGA_JumpOff_C : public UGAJump
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04B8   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_JumpOff.GA_JumpOff_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_JumpOff.GA_JumpOff_C.ExecuteUbergraph_GA_JumpOff
	// void ExecuteUbergraph_GA_JumpOff(int32_t EntryPoint);                                                                    // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_RideOffVehicle.GA_RideOffVehicle_C
/// Size: 0x0458 (1112 bytes) (0x000440 - 0x000458) align 8 MaxSize: 0x0458
class UGA_RideOffVehicle_C : public UGABattleCommandBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0440   (0x0008)  
	double                                             NewVar;                                                     // 0x0448   (0x0008)  
	double                                             NewVar0;                                                    // 0x0450   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_RideOffVehicle.GA_RideOffVehicle_C.OnFinish_8873A59645077B27789FFC93CA7AF433
	// void OnFinish_8873A59645077B27789FFC93CA7AF433();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_RideOffVehicle.GA_RideOffVehicle_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_RideOffVehicle.GA_RideOffVehicle_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_RideOffVehicle.GA_RideOffVehicle_C.ExecuteUbergraph_GA_RideOffVehicle
	// void ExecuteUbergraph_GA_RideOffVehicle(int32_t EntryPoint);                                                             // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_SitBench.GA_SitBench_C
/// Size: 0x04B9 (1209 bytes) (0x0004B0 - 0x0004B9) align 16 MaxSize: 0x04B9
class UGA_SitBench_C : public UGASitBench
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04B0   (0x0008)  
	bool                                               IsTimeOver;                                                 // 0x04B8   (0x0001)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_SitBench.GA_SitBench_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_SitBench.GA_SitBench_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_SitBench.GA_SitBench_C.OnTimeOver_Event
	// void OnTimeOver_Event();                                                                                                 // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_SitBench.GA_SitBench_C.ExecuteUbergraph_GA_SitBench
	// void ExecuteUbergraph_GA_SitBench(int32_t EntryPoint);                                                                   // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/gameplayAbility/GA_RideMiss.GA_RideMiss_C
/// Size: 0x0448 (1096 bytes) (0x000440 - 0x000448) align 8 MaxSize: 0x0448
class UGA_RideMiss_C : public UGABattleCommandBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0440   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_RideMiss.GA_RideMiss_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_RideMiss.GA_RideMiss_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_RideMiss.GA_RideMiss_C.ExecuteUbergraph_GA_RideMiss
	// void ExecuteUbergraph_GA_RideMiss(int32_t EntryPoint);                                                                   // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_RpgAction.GA_RpgAction_C
/// Size: 0x03D0 (976 bytes) (0x0003C0 - 0x0003D0) align 8 MaxSize: 0x03D0
class UGA_RpgAction_C : public UGABase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03C0   (0x0008)  
	class UAnimMontage*                                playMontage;                                                // 0x03C8   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_RpgAction.GA_RpgAction_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_RpgAction.GA_RpgAction_C.ExecuteUbergraph_GA_RpgAction
	// void ExecuteUbergraph_GA_RpgAction(int32_t EntryPoint);                                                                  // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_AttackStrong.GA_AttackStrong_C
/// Size: 0x0480 (1152 bytes) (0x000478 - 0x000480) align 8 MaxSize: 0x0480
class UGA_AttackStrong_C : public UGAAttackCombo
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0478   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_AttackStrong.GA_AttackStrong_C.OnFinish_B1C82C794418430B62B8F7AFF2130613
	// void OnFinish_B1C82C794418430B62B8F7AFF2130613();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackStrong.GA_AttackStrong_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackStrong.GA_AttackStrong_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackStrong.GA_AttackStrong_C.ExecuteUbergraph_GA_AttackStrong
	// void ExecuteUbergraph_GA_AttackStrong(int32_t EntryPoint);                                                               // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_AttackCombo1.GA_AttackCombo1_C
/// Size: 0x0481 (1153 bytes) (0x000478 - 0x000481) align 8 MaxSize: 0x0481
class UGA_AttackCombo1_C : public UGAAttackCombo
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0478   (0x0008)  
	char                                               M_Attack_Param_Current_Weapon_Type;                         // 0x0480   (0x0001)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_AttackCombo1.GA_AttackCombo1_C.OnFinish_E614D23A480383C048CDC3AD50BB5D68
	// void OnFinish_E614D23A480383C048CDC3AD50BB5D68();                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackCombo1.GA_AttackCombo1_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackCombo1.GA_AttackCombo1_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_AttackCombo1.GA_AttackCombo1_C.ExecuteUbergraph_GA_AttackCombo1
	// void ExecuteUbergraph_GA_AttackCombo1(int32_t EntryPoint);                                                               // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_ChatEmoteCancel.GA_ChatEmoteCancel_C
/// Size: 0x03F0 (1008 bytes) (0x0003E8 - 0x0003F0) align 8 MaxSize: 0x03F0
class UGA_ChatEmoteCancel_C : public UGAChatEmote
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03E8   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_ChatEmoteCancel.GA_ChatEmoteCancel_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_ChatEmoteCancel.GA_ChatEmoteCancel_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_ChatEmoteCancel.GA_ChatEmoteCancel_C.ExecuteUbergraph_GA_ChatEmoteCancel
	// void ExecuteUbergraph_GA_ChatEmoteCancel(int32_t EntryPoint);                                                            // [0x35d7f00] Final                
};

/// Class /Game/common/gameplayAbility/GA_Move.GA_Move_C
/// Size: 0x03E8 (1000 bytes) (0x0003E0 - 0x0003E8) align 8 MaxSize: 0x03E8
class UGA_Move_C : public UGAMove
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03E0   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_Move.GA_Move_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Move.GA_Move_C.ExecuteUbergraph_GA_Move
	// void ExecuteUbergraph_GA_Move(int32_t EntryPoint);                                                                       // [0x35d7f00] Final                
};

/// Class /Game/common/graphic/BP_PostProcessParamPreset.BP_PostProcessParamPreset_C
/// Size: 0x1690 (5776 bytes) (0x001690 - 0x001690) align 16 MaxSize: 0x1690
class UBP_PostProcessParamPreset_C : public UPostprocessParamPreset
{ 
public:
};

/// Class /Game/common/menu/Common/Fade/WB_DefaultFade.WB_DefaultFade_C
/// Size: 0x0670 (1648 bytes) (0x000650 - 0x000670) align 8 MaxSize: 0x0670
class UWB_DefaultFade_C : public UMenuTop
{ 
public:
	class UWidgetAnimation*                            DefaultFadeIn;                                              // 0x0650   (0x0008)  
	class UWidgetAnimation*                            DefaultFadeOut;                                             // 0x0658   (0x0008)  
	class UImage*                                      DefaultFadeColorFill;                                       // 0x0660   (0x0008)  
	class UImage*                                      DefaultImage;                                               // 0x0668   (0x0008)  
};

/// Class /Game/common/gameplayAbility/GA_Restrain.GA_Restrain_C
/// Size: 0x04E0 (1248 bytes) (0x0004D8 - 0x0004E0) align 8 MaxSize: 0x04E0
class UGA_Restrain_C : public UGARestrain
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04D8   (0x0008)  


	/// Functions
	// Function /Game/common/gameplayAbility/GA_Restrain.GA_Restrain_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Restrain.GA_Restrain_C.OnEnd
	// void OnEnd();                                                                                                            // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/gameplayAbility/GA_Restrain.GA_Restrain_C.ExecuteUbergraph_GA_Restrain
	// void ExecuteUbergraph_GA_Restrain(int32_t EntryPoint);                                                                   // [0x35d7f00] Final                
};

/// Class /Game/common/map/_bluePrints/BP_MapActor.BP_MapActor_C
/// Size: 0x02DC (732 bytes) (0x0002D0 - 0x0002DC) align 8 MaxSize: 0x02DC
class ABP_MapActor_C : public AMapActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)  
	FScriptObjectHandle                                ScriptHandle;                                               // 0x02D8   (0x0004)  


	/// Functions
	// Function /Game/common/map/_bluePrints/BP_MapActor.BP_MapActor_C.OnTargetUnableWhenCurrentTarget
	// void OnTargetUnableWhenCurrentTarget();                                                                                  // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/_bluePrints/BP_MapActor.BP_MapActor_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/map/_bluePrints/BP_MapActor.BP_MapActor_C.DoAction
	// void DoAction();                                                                                                         // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/_bluePrints/BP_MapActor.BP_MapActor_C.MapActorAttack
	// void MapActorAttack();                                                                                                   // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/_bluePrints/BP_MapActor.BP_MapActor_C.OnTargetIn
	// void OnTargetIn();                                                                                                       // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/_bluePrints/BP_MapActor.BP_MapActor_C.OnTargetOut
	// void OnTargetOut();                                                                                                      // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/_bluePrints/BP_MapActor.BP_MapActor_C.ExecuteUbergraph_BP_MapActor
	// void ExecuteUbergraph_BP_MapActor(int32_t EntryPoint);                                                                   // [0x35d7f00] Final                
};

/// Class /Game/common/chara/_bluePrints/BP_EquipActor.BP_EquipActor_C
/// Size: 0x02B0 (688 bytes) (0x0002A8 - 0x0002B0) align 8 MaxSize: 0x02B0
class ABP_EquipActor_C : public AEquipActor
{ 
public:
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02A8   (0x0008)  
};

/// Class /Game/common/map/Roguelike/BP_RoguelikeBossGateActor.BP_RoguelikeBossGateActor_C
/// Size: 0x02CB (715 bytes) (0x0002B8 - 0x0002CB) align 8 MaxSize: 0x02CB
class ABP_RoguelikeBossGateActor_C : public AMapGateActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02B8   (0x0008)  
	class USkeletalMeshComponent*                      SkeletalMesh;                                               // 0x02C0   (0x0008)  
	bool                                               isStart;                                                    // 0x02C8   (0x0001)  
	bool                                               isEnd;                                                      // 0x02C9   (0x0001)  
	bool                                               IsClose;                                                    // 0x02CA   (0x0001)  


	/// Functions
	// Function /Game/common/map/Roguelike/BP_RoguelikeBossGateActor.BP_RoguelikeBossGateActor_C.Tick
	// void Tick(double DeltaTime);                                                                                             // [0x35d7f00] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeBossGateActor.BP_RoguelikeBossGateActor_C.ViewClose
	// void ViewClose();                                                                                                        // [0x35d7f00] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeBossGateActor.BP_RoguelikeBossGateActor_C.ViewStart
	// void ViewStart();                                                                                                        // [0x35d7f00] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeBossGateActor.BP_RoguelikeBossGateActor_C.IsVisible
	// void IsVisible(bool& Result);                                                                                            // [0x35d7f00] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/common/map/Roguelike/BP_RoguelikeBossGateActor.BP_RoguelikeBossGateActor_C.IsVisibleBP
	// bool IsVisibleBP();                                                                                                      // [0x35d7f00] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/common/map/Roguelike/BP_RoguelikeBossGateActor.BP_RoguelikeBossGateActor_C.OnTargetOut
	// void OnTargetOut();                                                                                                      // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeBossGateActor.BP_RoguelikeBossGateActor_C.OnTargetUnableWhenCurrentTarget
	// void OnTargetUnableWhenCurrentTarget();                                                                                  // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeBossGateActor.BP_RoguelikeBossGateActor_C.DoAction
	// void DoAction();                                                                                                         // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeBossGateActor.BP_RoguelikeBossGateActor_C.OnTargetIn
	// void OnTargetIn();                                                                                                       // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeBossGateActor.BP_RoguelikeBossGateActor_C.StartBP
	// void StartBP();                                                                                                          // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeBossGateActor.BP_RoguelikeBossGateActor_C.ReceiveDestroyed
	// void ReceiveDestroyed();                                                                                                 // [0x35d7f00] Event|Public|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeBossGateActor.BP_RoguelikeBossGateActor_C.EndBP
	// void EndBP();                                                                                                            // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeBossGateActor.BP_RoguelikeBossGateActor_C.SetVisibleBP
	// void SetVisibleBP(bool _isVisible);                                                                                      // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeBossGateActor.BP_RoguelikeBossGateActor_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x35d7f00] Event|Public|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeBossGateActor.BP_RoguelikeBossGateActor_C.ExecuteUbergraph_BP_RoguelikeBossGateActor
	// void ExecuteUbergraph_BP_RoguelikeBossGateActor(int32_t EntryPoint);                                                     // [0x35d7f00] Final                
};

/// Class /Game/common/map/Roguelike/BP_RoguelikeStartpoint.BP_RoguelikeStartpoint_C
/// Size: 0x02DC (732 bytes) (0x0002DC - 0x0002DC) align 8 MaxSize: 0x02DC
class ABP_RoguelikeStartpoint_C : public ABP_MapActor_C
{ 
public:
};

/// Class /Game/common/map/Roguelike/BP_RoguelikeDonActor.BP_RoguelikeDonActor_C
/// Size: 0x0368 (872 bytes) (0x000350 - 0x000368) align 8 MaxSize: 0x0368
class ABP_RoguelikeDonActor_C : public ARoguelikeDonActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0350   (0x0008)  
	class UGameSkeletalMeshComponent*                  viewSkeletal;                                               // 0x0358   (0x0008)  
	class URpgTargetComponent*                         RpgTarget;                                                  // 0x0360   (0x0008)  


	/// Functions
	// Function /Game/common/map/Roguelike/BP_RoguelikeDonActor.BP_RoguelikeDonActor_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeDonActor.BP_RoguelikeDonActor_C.OnTargetOut
	// void OnTargetOut();                                                                                                      // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeDonActor.BP_RoguelikeDonActor_C.OnTargetIn
	// void OnTargetIn();                                                                                                       // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeDonActor.BP_RoguelikeDonActor_C.OnTargetUnableWhenCurrentTarget
	// void OnTargetUnableWhenCurrentTarget();                                                                                  // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeDonActor.BP_RoguelikeDonActor_C.DoAction
	// void DoAction();                                                                                                         // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeDonActor.BP_RoguelikeDonActor_C.ExecuteUbergraph_BP_RoguelikeDonActor
	// void ExecuteUbergraph_BP_RoguelikeDonActor(int32_t EntryPoint);                                                          // [0x35d7f00] Final                
};

/// Class /Game/common/map/Roguelike/BP_RoguelikeAreaGateActor.BP_RoguelikeAreaGateActor_C
/// Size: 0x02D4 (724 bytes) (0x0002A8 - 0x0002D4) align 8 MaxSize: 0x02D4
class ABP_RoguelikeAreaGateActor_C : public ARoguelikeAreaGateActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02A8   (0x0008)  
	class UBoxComponent*                               GatePassCol;                                                // 0x02B0   (0x0008)  
	class UGameSkeletalMeshComponent*                  GatePass;                                                   // 0x02B8   (0x0008)  
	class UGameSkeletalMeshComponent*                  GameSkeletalMesh;                                           // 0x02C0   (0x0008)  
	class UGameStaticMeshComponent*                    GameStaticMesh;                                             // 0x02C8   (0x0008)  
	bool                                               startOpen;                                                  // 0x02D0   (0x0001)  
	bool                                               openOnce;                                                   // 0x02D1   (0x0001)  
	bool                                               startGatePass;                                              // 0x02D2   (0x0001)  
	bool                                               startGatePassEnd;                                           // 0x02D3   (0x0001)  


	/// Functions
	// Function /Game/common/map/Roguelike/BP_RoguelikeAreaGateActor.BP_RoguelikeAreaGateActor_C.ToStart
	// void ToStart();                                                                                                          // [0x35d7f00] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeAreaGateActor.BP_RoguelikeAreaGateActor_C.ToEnd
	// void ToEnd();                                                                                                            // [0x35d7f00] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeAreaGateActor.BP_RoguelikeAreaGateActor_C.PlayIdle
	// void PlayIdle(bool _visible);                                                                                            // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeAreaGateActor.BP_RoguelikeAreaGateActor_C.ShowGatePass
	// void ShowGatePass();                                                                                                     // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeAreaGateActor.BP_RoguelikeAreaGateActor_C.PlayOpen
	// void PlayOpen();                                                                                                         // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeAreaGateActor.BP_RoguelikeAreaGateActor_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x35d7f00] Event|Public|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeAreaGateActor.BP_RoguelikeAreaGateActor_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeAreaGateActor.BP_RoguelikeAreaGateActor_C.OnGatePass
	// void OnGatePass();                                                                                                       // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeAreaGateActor.BP_RoguelikeAreaGateActor_C.ReceiveActorBeginOverlap
	// void ReceiveActorBeginOverlap(class AActor* OtherActor);                                                                 // [0x35d7f00] Event|Public|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeAreaGateActor.BP_RoguelikeAreaGateActor_C.ResetGatePass
	// void ResetGatePass();                                                                                                    // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/map/Roguelike/BP_RoguelikeAreaGateActor.BP_RoguelikeAreaGateActor_C.ExecuteUbergraph_BP_RoguelikeAreaGateActor
	// void ExecuteUbergraph_BP_RoguelikeAreaGateActor(int32_t EntryPoint);                                                     // [0x35d7f00] Final                
};

/// Class /Game/common/map/_bluePrints/BP_MapInteractionGrassActor.BP_MapInteractionGrassActor_C
/// Size: 0x02F0 (752 bytes) (0x0002DC - 0x0002F0) align 8 MaxSize: 0x02F0
class ABP_MapInteractionGrassActor_C : public ABP_MapActor_C
{ 
public:
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x02DC   (0x0004)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02E0   (0x0008)  
	class UMapInteractionGrassComponent*               MapInteractionGrass;                                        // 0x02E8   (0x0008)  


	/// Functions
	// Function /Game/common/map/_bluePrints/BP_MapInteractionGrassActor.BP_MapInteractionGrassActor_C.BndEvt__BP_MapInteractionGrassActor_m_collisionMeshComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__BP_MapInteractionGrassActor_m_collisionMeshComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x35d7f00] HasOutParms|BlueprintEvent 
	// Function /Game/common/map/_bluePrints/BP_MapInteractionGrassActor.BP_MapInteractionGrassActor_C.ExecuteUbergraph_BP_MapInteractionGrassActor
	// void ExecuteUbergraph_BP_MapInteractionGrassActor(int32_t EntryPoint);                                                   // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/AI/BT_SetBBValue.BT_SetBBValue_C
/// Size: 0x00D9 (217 bytes) (0x0000A8 - 0x0000D9) align 8 MaxSize: 0x00D9
class UBT_SetBBValue_C : public UBTTask_BlueprintBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A8   (0x0008)  
	FBlackboardKeySelector                             KeyName;                                                    // 0x00B0   (0x0028)  
	bool                                               Value;                                                      // 0x00D8   (0x0001)  


	/// Functions
	// Function /Game/common/AI/BT_SetBBValue.BT_SetBBValue_C.ReceiveExecute
	// void ReceiveExecute(class AActor* OwnerActor);                                                                           // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/common/AI/BT_SetBBValue.BT_SetBBValue_C.ExecuteUbergraph_BT_SetBBValue
	// void ExecuteUbergraph_BT_SetBBValue(int32_t EntryPoint);                                                                 // [0x35d7f00] Final                
};

/// Class /Game/common/menu/Common/SceenCapture/MenuLayer_SceenCapture.MenuLayer_SceenCapture_C
/// Size: 0x0480 (1152 bytes) (0x000468 - 0x000480) align 8 MaxSize: 0x0480
class UMenuLayer_SceenCapture_C : public UMenuLayer
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0468   (0x0008)  
	class UCustomImage*                                _tex_capture_01;                                            // 0x0470   (0x0008)  
	class UMaterialInstanceDynamic*                    captureTexMat;                                              // 0x0478   (0x0008)  


	/// Functions
	// Function /Game/common/menu/Common/SceenCapture/MenuLayer_SceenCapture.MenuLayer_SceenCapture_C.OnInit
	// void OnInit();                                                                                                           // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/menu/Common/SceenCapture/MenuLayer_SceenCapture.MenuLayer_SceenCapture_C.ExecuteUbergraph_MenuLayer_SceenCapture
	// void ExecuteUbergraph_MenuLayer_SceenCapture(int32_t EntryPoint);                                                        // [0x35d7f00] Final                
};

/// Class /Game/common/menu/Common/SceenCapture/MenuTop_SceenCapture.MenuTop_SceenCapture_C
/// Size: 0x0660 (1632 bytes) (0x000650 - 0x000660) align 8 MaxSize: 0x0660
class UMenuTop_SceenCapture_C : public UMenuTopScreenCapture
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0650   (0x0008)  
	class UMenuLayer_SceenCapture_C*                   MenuLayer_SceenCapture;                                     // 0x0658   (0x0008)  


	/// Functions
	// Function /Game/common/menu/Common/SceenCapture/MenuTop_SceenCapture.MenuTop_SceenCapture_C.OnOpen
	// void OnOpen();                                                                                                           // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/menu/Common/SceenCapture/MenuTop_SceenCapture.MenuTop_SceenCapture_C.OnInit
	// void OnInit();                                                                                                           // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/menu/Common/SceenCapture/MenuTop_SceenCapture.MenuTop_SceenCapture_C.ExecuteUbergraph_MenuTop_SceenCapture
	// void ExecuteUbergraph_MenuTop_SceenCapture(int32_t EntryPoint);                                                          // [0x35d7f00] Final|HasDefaults    
};

/// Class /Game/common/menu/Common/SceenCapture/MenuTop_NewSceenCapture.MenuTop_NewSceenCapture_C
/// Size: 0x0660 (1632 bytes) (0x000650 - 0x000660) align 8 MaxSize: 0x0660
class UMenuTop_NewSceenCapture_C : public UMenuTopScreenCapture
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0650   (0x0008)  
	class UMenuLayer_SceenCapture_C*                   MenuLayer_SceenCapture;                                     // 0x0658   (0x0008)  


	/// Functions
	// Function /Game/common/menu/Common/SceenCapture/MenuTop_NewSceenCapture.MenuTop_NewSceenCapture_C.OnInit
	// void OnInit();                                                                                                           // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/common/menu/Common/SceenCapture/MenuTop_NewSceenCapture.MenuTop_NewSceenCapture_C.ExecuteUbergraph_MenuTop_NewSceenCapture
	// void ExecuteUbergraph_MenuTop_NewSceenCapture(int32_t EntryPoint);                                                       // [0x35d7f00] Final                
};

/// Class /Game/common/material/BP_DitherEffectActor.BP_DitherEffectActor_C
/// Size: 0x0400 (1024 bytes) (0x0003F8 - 0x000400) align 8 MaxSize: 0x0400
class ABP_DitherEffectActor_C : public ADitherEffectActor
{ 
public:
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x03F8   (0x0008)  


	/// Functions
	// Function /Game/common/material/BP_DitherEffectActor.BP_DitherEffectActor_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x35d7f00] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/common/map/_bluePrints/BP_MapPillarActor.BP_MapPillarActor_C
/// Size: 0x02E8 (744 bytes) (0x0002DC - 0x0002E8) align 8 MaxSize: 0x02E8
class ABP_MapPillarActor_C : public ABP_MapActor_C
{ 
public:
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x02DC   (0x0004)  MISSED
	class UActorHideComponent*                         ActorHide;                                                  // 0x02E0   (0x0008)  
};

/// Class /Game/common/chara/_bluePrints/_editor/BP_NpcPathActor.BP_NpcPathActor_C
/// Size: 0x02C0 (704 bytes) (0x0002B8 - 0x0002C0) align 8 MaxSize: 0x02C0
class ABP_NpcPathActor_C : public ANpcPathActor
{ 
public:
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02B8   (0x0008)  
};

/// Class /Game/common/map/_bluePrints/BP_RpgMapActor.BP_RpgMapActor_C
/// Size: 0x02A8 (680 bytes) (0x0002A8 - 0x0002A8) align 8 MaxSize: 0x02A8
class ABP_RpgMapActor_C : public ARpgMapActor
{ 
public:
};

/// Class /Game/common/graphic/BP_MPCWorldSubsystemHelper.BP_MPCWorldSubsystemHelper_C
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UBP_MPCWorldSubsystemHelper_C : public UMPCWorldSubsystemHelper
{ 
public:
};

/// Class /Game/common/map/_bluePrints/BP_HISMMapActor.BP_HISMMapActor_C
/// Size: 0x02B8 (696 bytes) (0x0002B0 - 0x0002B8) align 8 MaxSize: 0x02B8
class ABP_HISMMapActor_C : public AHISMMapActor
{ 
public:
	class UISMActorHideComponent*                      ISMActorHide;                                               // 0x02B0   (0x0008)  


	/// Functions
	// Function /Game/common/map/_bluePrints/BP_HISMMapActor.BP_HISMMapActor_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/common/map/_bluePrints/BP_MapWallActor.BP_MapWallActor_C
/// Size: 0x02DC (732 bytes) (0x0002DC - 0x0002DC) align 8 MaxSize: 0x02DC
class ABP_MapWallActor_C : public ABP_MapActor_C
{ 
public:
};

#pragma pack(pop)


