
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils

#pragma pack(push, 0x1)

/// Class /Script/SocketSubsystemEOS.NetConnectionEOS
/// Size: 0x1E98 (7832 bytes) (0x001E90 - 0x001E98) align 8 MaxSize: 0x1E98
class UNetConnectionEOS : public UIpConnection
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x1E90   (0x0008)  MISSED
};

/// Class /Script/SocketSubsystemEOS.NetDriverEOSBase
/// Size: 0x0980 (2432 bytes) (0x000978 - 0x000980) align 8 MaxSize: 0x0980
class UNetDriverEOSBase : public UIpNetDriver
{ 
public:
	bool                                               bIsPassthrough;                                             // 0x0978   (0x0001)  
	bool                                               bIsUsingP2PSockets;                                         // 0x0979   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x097A   (0x0006)  MISSED
};

#pragma pack(pop)


