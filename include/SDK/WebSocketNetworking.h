
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/WebSocketNetworking.WebSocketConnection
/// Size: 0x1E10 (7696 bytes) (0x001E00 - 0x001E10) align 8 MaxSize: 0x1E10
class UWebSocketConnection : public UNetConnection
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x1E00   (0x0010)  MISSED
};

/// Class /Script/WebSocketNetworking.WebSocketNetDriver
/// Size: 0x08D8 (2264 bytes) (0x0008C8 - 0x0008D8) align 8 MaxSize: 0x08D8
class UWebSocketNetDriver : public UNetDriver
{ 
public:
	int32_t                                            WebSocketPort;                                              // 0x08C8   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x08CC   (0x000C)  MISSED
};

#pragma pack(pop)


