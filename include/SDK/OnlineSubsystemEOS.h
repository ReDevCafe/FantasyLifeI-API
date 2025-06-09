
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils
/// dependency: SocketSubsystemEOS

#pragma pack(push, 0x1)

/// Class /Script/OnlineSubsystemEOS.NetDriverEOS
/// Size: 0x0980 (2432 bytes) (0x000980 - 0x000980) align 8 MaxSize: 0x0980
class UNetDriverEOS : public UNetDriverEOSBase
{ 
public:
};

/// Class /Script/OnlineSubsystemEOS.EOSArtifactSettings
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UEOSArtifactSettings : public UDataAsset
{ 
public:
};

/// Class /Script/OnlineSubsystemEOS.EOSExternalAccessor
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UEOSExternalAccessor : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Struct /Script/OnlineSubsystemEOS.ArtifactSettings
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FArtifactSettings
{ 
	FString                                            ArtifactName;                                               // 0x0000   (0x0010)  
	FString                                            ClientId;                                                   // 0x0010   (0x0010)  
	FString                                            ClientSecret;                                               // 0x0020   (0x0010)  
	FString                                            ProductId;                                                  // 0x0030   (0x0010)  
	FString                                            SandboxId;                                                  // 0x0040   (0x0010)  
	FString                                            DeploymentId;                                               // 0x0050   (0x0010)  
	FString                                            ClientEncryptionKey;                                        // 0x0060   (0x0010)  
};

/// Class /Script/OnlineSubsystemEOS.EOSSettings
/// Size: 0x00D0 (208 bytes) (0x000038 - 0x0000D0) align 8 MaxSize: 0x00D0
class UEOSSettings : public URuntimeOptionsBase
{ 
public:
	FString                                            CacheDir;                                                   // 0x0038   (0x0010)  
	FString                                            DefaultArtifactName;                                        // 0x0048   (0x0010)  
	FString                                            LiveArtifactName;                                           // 0x0058   (0x0010)  
	FString                                            RTCBackgroundMode;                                          // 0x0068   (0x0010)  
	int32_t                                            TickBudgetInMilliseconds;                                   // 0x0078   (0x0004)  
	bool                                               bEnableOverlay;                                             // 0x007C   (0x0001)  
	bool                                               bEnableSocialOverlay;                                       // 0x007D   (0x0001)  
	bool                                               bEnableEditorOverlay;                                       // 0x007E   (0x0001)  
	bool                                               bPreferPersistentAuth;                                      // 0x007F   (0x0001)  
	TArray<FString>                                    TitleStorageTags;                                           // 0x0080   (0x0010)  
	int32_t                                            TitleStorageReadChunkLength;                                // 0x0090   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	TArray<FArtifactSettings>                          Artifacts;                                                  // 0x0098   (0x0010)  
	TArray<FString>                                    AuthScopeFlags;                                             // 0x00A8   (0x0010)  
	bool                                               bUseEAS;                                                    // 0x00B8   (0x0001)  
	bool                                               bUseEOSConnect;                                             // 0x00B9   (0x0001)  
	bool                                               bMirrorStatsToEOS;                                          // 0x00BA   (0x0001)  
	bool                                               bMirrorAchievementsToEOS;                                   // 0x00BB   (0x0001)  
	bool                                               bUseEOSSessions;                                            // 0x00BC   (0x0001)  
	bool                                               bMirrorPresenceToEAS;                                       // 0x00BD   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00BE   (0x0002)  MISSED
	FString                                            SteamTokenType;                                             // 0x00C0   (0x0010)  
};

#pragma pack(pop)


