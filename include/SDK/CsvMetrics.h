
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: WorldMetricsCore

#pragma pack(push, 0x1)

/// Class /Script/CsvMetrics.CsvActorCountMetric
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UCsvActorCountMetric : public UWorldMetricInterface
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0028   (0x0060)  MISSED
};

/// Class /Script/CsvMetrics.CsvMetricsSubsystem
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UCsvMetricsSubsystem : public UWorldSubsystem
{ 
public:
	TArray<class UClass*>                              MetricClasses;                                              // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0040   (0x0020)  MISSED
};

#pragma pack(pop)


