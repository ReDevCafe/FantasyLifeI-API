
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

/// Class /Script/WorldMetricsCore.WorldMetricsSubsystem
/// Size: 0x2880 (10368 bytes) (0x000030 - 0x002880) align 8 MaxSize: 0x2880
class UWorldMetricsSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	TArray<class UWorldMetricInterface*>               Metrics;                                                    // 0x0040   (0x0010)  
	TArray<class UWorldMetricsExtension*>              Extensions;                                                 // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_6[0x2810];                                    // 0x0060   (0x2810)  MISSED
	float                                              UpdateRateInSeconds;                                        // 0x2870   (0x0004)  
	int32_t                                            WarmUpFrames;                                               // 0x2874   (0x0004)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x2878   (0x0008)  MISSED
};

/// Class /Script/WorldMetricsCore.WorldMetricInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UWorldMetricInterface : public UObject
{ 
public:
};

/// Class /Script/WorldMetricsCore.WorldMetricsActorTrackerSubscriber
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UWorldMetricsActorTrackerSubscriber : public UInterface
{ 
public:
};

/// Class /Script/WorldMetricsCore.WorldMetricsExtension
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UWorldMetricsExtension : public UObject
{ 
public:
};

/// Class /Script/WorldMetricsCore.WorldMetricsActorTracker
/// Size: 0x00D0 (208 bytes) (0x000028 - 0x0000D0) align 8 MaxSize: 0x00D0
class UWorldMetricsActorTracker : public UWorldMetricsExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0028   (0x00A8)  MISSED
};

#pragma pack(pop)


