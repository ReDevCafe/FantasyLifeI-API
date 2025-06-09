
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

/// Class /Script/ArchVisCharacter.ArchVisCharacter
/// Size: 0x06D0 (1744 bytes) (0x000668 - 0x0006D0) align 16 MaxSize: 0x06D0
class AArchVisCharacter : public ACharacter
{ 
public:
	FString                                            LookUpAxisName;                                             // 0x0668   (0x0010)  
	FString                                            LookUpAtRateAxisName;                                       // 0x0678   (0x0010)  
	FString                                            TurnAxisName;                                               // 0x0688   (0x0010)  
	FString                                            TurnAtRateAxisName;                                         // 0x0698   (0x0010)  
	FString                                            MoveForwardAxisName;                                        // 0x06A8   (0x0010)  
	FString                                            MoveRightAxisName;                                          // 0x06B8   (0x0010)  
	float                                              MouseSensitivityScale_Pitch;                                // 0x06C8   (0x0004)  
	float                                              MouseSensitivityScale_Yaw;                                  // 0x06CC   (0x0004)  
};

/// Class /Script/ArchVisCharacter.ArchVisCharMovementComponent
/// Size: 0x1010 (4112 bytes) (0x000F78 - 0x001010) align 16 MaxSize: 0x1010
class UArchVisCharMovementComponent : public UCharacterMovementComponent
{ 
public:
	FRotator                                           RotationalAcceleration;                                     // 0x0F78   (0x0018)  
	FRotator                                           RotationalDeceleration;                                     // 0x0F90   (0x0018)  
	FRotator                                           MaxRotationalVelocity;                                      // 0x0FA8   (0x0018)  
	float                                              MinPitch;                                                   // 0x0FC0   (0x0004)  
	float                                              MaxPitch;                                                   // 0x0FC4   (0x0004)  
	float                                              WalkingFriction;                                            // 0x0FC8   (0x0004)  
	float                                              WalkingSpeed;                                               // 0x0FCC   (0x0004)  
	float                                              WalkingAcceleration;                                        // 0x0FD0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x3C];                                      // 0x0FD4   (0x003C)  MISSED
};

#pragma pack(pop)


