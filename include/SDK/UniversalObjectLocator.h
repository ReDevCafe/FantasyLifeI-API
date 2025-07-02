
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/UniversalObjectLocator.ELocatorResolveFlags
/// Size: 0x01 (1 bytes)
enum class ELocatorResolveFlags : uint8_t
{
	ELocatorResolveFlags__None                                                       = 0,
	ELocatorResolveFlags__Load                                                       = 1,
	ELocatorResolveFlags__Unload                                                     = 2,
	ELocatorResolveFlags__Async                                                      = 4,
	ELocatorResolveFlags__WillWait                                                   = 8,
	ELocatorResolveFlags__AsyncWait                                                  = 12
};

/// Struct /Script/UniversalObjectLocator.DirectPathObjectLocator
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FDirectPathObjectLocator
{ 
	FSoftObjectPath                                    Path;                                                       // 0x0000   (0x0020)  
};

/// Struct /Script/UniversalObjectLocator.LocatorSpawnedCacheResolveParameter
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FLocatorSpawnedCacheResolveParameter
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/UniversalObjectLocator.SubObjectLocator
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSubObjectLocator
{ 
	FString                                            PathWithinContext;                                          // 0x0000   (0x0010)  
};

/// Struct /Script/UniversalObjectLocator.UniversalObjectLocatorFragment
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FUniversalObjectLocatorFragment
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/UniversalObjectLocator.UniversalObjectLocator
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FUniversalObjectLocator
{ 
	TArray<FUniversalObjectLocatorFragment>            Fragments;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/UniversalObjectLocator.UniversalObjectLocatorEmptyPayload
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUniversalObjectLocatorEmptyPayload
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


