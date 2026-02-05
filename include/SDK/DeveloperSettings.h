
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/DeveloperSettings.DeveloperSettings
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UDeveloperSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/DeveloperSettings.DeveloperSettingsBackedByCVars
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UDeveloperSettingsBackedByCVars : public UDeveloperSettings
{ 
public:
};

/// Class /Script/DeveloperSettings.PlatformSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UPlatformSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Struct /Script/DeveloperSettings.PlatformSettingsInstances
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FPlatformSettingsInstances
{ 
	class UPlatformSettings*                           PlatformInstance;                                           // 0x0000   (0x0008)  
	TMap<FName, class UPlatformSettings*>              OtherPlatforms;                                             // 0x0008   (0x0050)  
};

/// Class /Script/DeveloperSettings.PlatformSettingsManager
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UPlatformSettingsManager : public UObject
{ 
public:
	TMap<class UClass*, FPlatformSettingsInstances>    SettingsMap;                                                // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Struct /Script/DeveloperSettings.PerPlatformSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPerPlatformSettings
{ 
	TArray<class UPlatformSettings*>                   Settings;                                                   // 0x0000   (0x0010)  
};

#pragma pack(pop)


