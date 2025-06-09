
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

/// Enum /Script/WaveTable.EWaveTableBitDepth
/// Size: 0x01 (1 bytes)
enum class EWaveTableBitDepth : uint8_t
{
	EWaveTableBitDepth__PCM                                                          = 0,
	EWaveTableBitDepth__IEEE_Float                                                   = 1,
	EWaveTableBitDepth__COUNT                                                        = 2
};

/// Enum /Script/WaveTable.EWaveTableResolution
/// Size: 0x01 (1 bytes)
enum class EWaveTableResolution : uint8_t
{
	EWaveTableResolution__None                                                       = 0,
	EWaveTableResolution__Res                                                        = 3,
	EWaveTableResolution__Res3                                                       = 4,
	EWaveTableResolution__Res4                                                       = 5,
	EWaveTableResolution__Res5                                                       = 6,
	EWaveTableResolution__Res6                                                       = 7,
	EWaveTableResolution__Res7                                                       = 8,
	EWaveTableResolution__Res8                                                       = 9,
	EWaveTableResolution__Res9                                                       = 10,
	EWaveTableResolution__Res10                                                      = 11,
	EWaveTableResolution__Res11                                                      = 12,
	EWaveTableResolution__Res_Max                                                    = 12,
	EWaveTableResolution__Maximum                                                    = 13
};

/// Enum /Script/WaveTable.EWaveTableSamplingMode
/// Size: 0x01 (1 bytes)
enum class EWaveTableSamplingMode : uint8_t
{
	EWaveTableSamplingMode__FixedSampleRate                                          = 0,
	EWaveTableSamplingMode__FixedResolution                                          = 1,
	EWaveTableSamplingMode__COUNT                                                    = 2
};

/// Enum /Script/WaveTable.EWaveTableCurve
/// Size: 0x01 (1 bytes)
enum class EWaveTableCurve : uint8_t
{
	EWaveTableCurve__Linear                                                          = 0,
	EWaveTableCurve__Linear_Inv                                                      = 1,
	EWaveTableCurve__Exp                                                             = 2,
	EWaveTableCurve__Exp_Inverse                                                     = 3,
	EWaveTableCurve__Log                                                             = 4,
	EWaveTableCurve__Sin                                                             = 5,
	EWaveTableCurve__Sin_Full                                                        = 6,
	EWaveTableCurve__SCurve                                                          = 7,
	EWaveTableCurve__Shared                                                          = 8,
	EWaveTableCurve__Custom                                                          = 9,
	EWaveTableCurve__File                                                            = 10,
	EWaveTableCurve__Count                                                           = 11
};

/// Struct /Script/WaveTable.WaveTableData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FWaveTableData
{ 
	EWaveTableBitDepth                                 BitDepth;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<char>                                       Data;                                                       // 0x0008   (0x0010)  
	float                                              FinalValue;                                                 // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/WaveTable.WaveTableTransform
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FWaveTableTransform
{ 
	EWaveTableCurve                                    Curve;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scalar;                                                     // 0x0004   (0x0004)  
	FRichCurve                                         CurveCustom;                                                // 0x0008   (0x0080)  
	class UCurveFloat*                                 CurveShared;                                                // 0x0088   (0x0008)  
	FWaveTableData                                     tableData;                                                  // 0x0090   (0x0020)  
	float                                              Duration;                                                   // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Struct /Script/WaveTable.WaveTableBankEntry
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FWaveTableBankEntry
{ 
	FWaveTableTransform                                Transform;                                                  // 0x0000   (0x00B8)  
};

/// Class /Script/WaveTable.WaveTableBank
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UWaveTableBank : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	EWaveTableSamplingMode                             SampleMode;                                                 // 0x0030   (0x0001)  
	EWaveTableResolution                               Resolution;                                                 // 0x0031   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            SampleRate;                                                 // 0x0034   (0x0004)  
	bool                                               bBipolar;                                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FWaveTableBankEntry>                        Entries;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData03_7[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Struct /Script/WaveTable.WaveTableSettings
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FWaveTableSettings
{ 
	FFilePath                                          FilePath;                                                   // 0x0000   (0x0010)  
	int32_t                                            ChannelIndex;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FWaveTableData                                     SourceData;                                                 // 0x0018   (0x0020)  
	int32_t                                            SourceSampleRate;                                           // 0x0038   (0x0004)  
	float                                              phase;                                                      // 0x003C   (0x0004)  
	float                                              Top;                                                        // 0x0040   (0x0004)  
	float                                              Tail;                                                       // 0x0044   (0x0004)  
	float                                              FadeIn;                                                     // 0x0048   (0x0004)  
	float                                              FadeOut;                                                    // 0x004C   (0x0004)  
	bool                                               bNormalize;                                                 // 0x0050   (0x0001)  
	bool                                               bRemoveOffset;                                              // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0052   (0x0006)  MISSED
};

#pragma pack(pop)


