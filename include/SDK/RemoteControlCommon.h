
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/RemoteControlCommon.ERCProtocolBinding
/// Size: 0x01 (1 bytes)
enum class ERCProtocolBinding : uint8_t
{
	ERCProtocolBinding__Added                                                        = 0,
	ERCProtocolBinding__Removed                                                      = 1
};

/// Enum /Script/RemoteControlCommon.ERCMask
/// Size: 0x01 (1 bytes)
enum class ERCMask : uint8_t
{
	ERCMask__NoMask                                                                  = 0,
	ERCMask__MaskA                                                                   = 1,
	ERCMask__MaskB                                                                   = 2,
	ERCMask__MaskC                                                                   = 4,
	ERCMask__MaskD                                                                   = 8
};

/// Class /Script/RemoteControlCommon.RCPropertyContainerBase
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class URCPropertyContainerBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0028   (0x0028)  MISSED
};

/// Struct /Script/RemoteControlCommon.RCPropertyContainerKey
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FRCPropertyContainerKey
{ 
	FName                                              ValueTypeName;                                              // 0x0000   (0x0008)  
};

/// Class /Script/RemoteControlCommon.RCPropertyContainerRegistry
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class URCPropertyContainerRegistry : public UEngineSubsystem
{ 
public:
	TMap<FRCPropertyContainerKey, class UClass*>       CachedContainerClasses;                                     // 0x0030   (0x0050)  
};

/// Class /Script/RemoteControlCommon.PropertyContainerTestObject
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align 8 MaxSize: 0x00B0
class UPropertyContainerTestObject : public UObject
{ 
public:
	bool                                               bSomeBool;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	uint32_t                                           SomeUInt32;                                                 // 0x002C   (0x0004)  
	float                                              SomeFloat;                                                  // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FVector                                            SomeVector;                                                 // 0x0038   (0x0018)  
	FRotator                                           SomeRotator;                                                // 0x0050   (0x0018)  
	int32_t                                            SomeClampedInt;                                             // 0x0068   (0x0004)  
	int32_t                                            SomeClampedInt2;                                            // 0x006C   (0x0004)  
	int32_t                                            SomeUIClampedInt;                                           // 0x0070   (0x0004)  
	float                                              SomeClampedFloat;                                           // 0x0074   (0x0004)  
	float                                              SomeUIClampedFloat;                                         // 0x0078   (0x0004)  
	float                                              SomeClampedFloat2;                                          // 0x007C   (0x0004)  
	FString                                            SomeString;                                                 // 0x0080   (0x0010)  
	FText                                              SomeText;                                                   // 0x0090   (0x0018)  
	TArray<float>                                      SomeFloatArray;                                             // 0x00A0   (0x0010)  
};

/// Struct /Script/RemoteControlCommon.RCPassphrase
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRCPassphrase
{ 
	FString                                            Identifier;                                                 // 0x0000   (0x0010)  
	FString                                            Passphrase;                                                 // 0x0010   (0x0010)  
};

/// Class /Script/RemoteControlCommon.RemoteControlSettings
/// Size: 0x0168 (360 bytes) (0x000038 - 0x000168) align 8 MaxSize: 0x0168
class URemoteControlSettings : public UDeveloperSettings
{ 
public:
	bool                                               bProtocolsGenerateTransactions;                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            RemoteControlWebInterfaceBindAddress;                       // 0x0040   (0x0010)  
	uint32_t                                           RemoteControlWebInterfacePort;                              // 0x0050   (0x0004)  
	bool                                               bForceWebAppBuildAtStartup;                                 // 0x0054   (0x0001)  
	bool                                               bWebAppLogRequestDuration;                                  // 0x0055   (0x0001)  
	bool                                               bAutoStartWebServer;                                        // 0x0056   (0x0001)  
	bool                                               bAutoStartWebSocketServer;                                  // 0x0057   (0x0001)  
	uint32_t                                           RemoteControlHttpServerPort;                                // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FString                                            RemoteControlWebsocketServerBindAddress;                    // 0x0060   (0x0010)  
	uint32_t                                           RemoteControlWebSocketServerPort;                           // 0x0070   (0x0004)  
	bool                                               bDisplayInEditorOnlyWarnings;                               // 0x0074   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0075   (0x0003)  MISSED
	float                                              TreeBindingSplitRatio;                                      // 0x0078   (0x0004)  
	float                                              ActionPanelSplitRatio;                                      // 0x007C   (0x0004)  
	bool                                               bUseRebindingContext;                                       // 0x0080   (0x0001)  
	bool                                               bIgnoreProtectedCheck;                                      // 0x0081   (0x0001)  
	bool                                               bIgnoreGetterSetterCheck;                                   // 0x0082   (0x0001)  
	bool                                               bIgnoreWarnings;                                            // 0x0083   (0x0001)  
	bool                                               bRestrictServerAccess;                                      // 0x0084   (0x0001)  
	bool                                               bEnableRemotePythonExecution;                               // 0x0085   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0086   (0x0002)  MISSED
	SDK_UNDEFINED(80,1188) /* TSet<FRCNetworkAddressRange> */ __um(AllowlistedClients);                            // 0x0088   (0x0050)  
	FString                                            AllowedOrigin;                                              // 0x00D8   (0x0010)  
	bool                                               bEnforcePassphraseForRemoteClients;                         // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
	TArray<FRCPassphrase>                              Passphrases;                                                // 0x00F0   (0x0010)  
	bool                                               bShowPassphraseDisabledWarning;                             // 0x0100   (0x0001)  
	bool                                               bLogicPanelVisibility;                                      // 0x0101   (0x0001)  
	unsigned char                                      UnknownData05_6[0x6];                                       // 0x0102   (0x0006)  MISSED
	SDK_UNDEFINED(80,1189) /* TSet<FName> */           __um(EntitiesListHiddenColumns);                            // 0x0108   (0x0050)  
	FName                                              DefaultPanelMode;                                           // 0x0158   (0x0008)  
	bool                                               bRefreshExposedEntitiesOnObjectPropertyUpdate;              // 0x0160   (0x0001)  
	bool                                               bSecuritySettingsReviewed;                                  // 0x0161   (0x0001)  
	unsigned char                                      UnknownData06_7[0x6];                                       // 0x0162   (0x0006)  MISSED
};

/// Struct /Script/RemoteControlCommon.RCNetworkAddress
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 1 MaxSize: 0x0004
struct FRCNetworkAddress
{ 
	char                                               ClassA;                                                     // 0x0000   (0x0001)  
	char                                               ClassB;                                                     // 0x0001   (0x0001)  
	char                                               ClassC;                                                     // 0x0002   (0x0001)  
	char                                               ClassD;                                                     // 0x0003   (0x0001)  
};

/// Struct /Script/RemoteControlCommon.RCNetworkAddressRange
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 1 MaxSize: 0x0008
struct FRCNetworkAddressRange
{ 
	FRCNetworkAddress                                  LowerBound;                                                 // 0x0000   (0x0004)  
	FRCNetworkAddress                                  UpperBound;                                                 // 0x0004   (0x0004)  
};

#pragma pack(pop)


