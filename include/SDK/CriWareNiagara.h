
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: CriWareRuntime
/// dependency: Engine
/// dependency: Niagara
/// dependency: NiagaraCore

#pragma pack(push, 0x1)

/// Class /Script/CriWareNiagara.NiagaraDataInterfaceAtomPlayer
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UNiagaraDataInterfaceAtomPlayer : public UNiagaraDataInterface
{ 
public:
	class USoundAtomCue*                               SoundToPlay;                                                // 0x0038   (0x0008)  
	class USoundAttenuation*                           Attenuation;                                                // 0x0040   (0x0008)  
	class USoundConcurrency*                           Concurrency;                                                // 0x0048   (0x0008)  
	TArray<FName>                                      ParameterNames;                                             // 0x0050   (0x0010)  
	bool                                               bLimitPlaysPerTick;                                         // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            MaxPlaysPerTick;                                            // 0x0064   (0x0004)  
	bool                                               bStopWhenComponentIsDestroyed;                              // 0x0068   (0x0001)  
	bool                                               bAllowLoopingOneShotSounds;                                 // 0x0069   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x006A   (0x0006)  MISSED
};

#pragma pack(pop)


