
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/WmfMediaFactory.WmfMediaSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UWmfMediaSettings : public UObject
{ 
public:
	bool                                               AllowNonStandardCodecs;                                     // 0x0028   (0x0001)  
	bool                                               LowLatency;                                                 // 0x0029   (0x0001)  
	bool                                               NativeAudioOut;                                             // 0x002A   (0x0001)  
	bool                                               HardwareAcceleratedVideoDecoding;                           // 0x002B   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

#pragma pack(pop)


