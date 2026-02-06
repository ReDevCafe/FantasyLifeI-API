
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/ExtraAssets.EGDValueType
/// Size: 0x01 (1 bytes)
enum class EGDValueType : uint8_t
{
	EGDValueType__TypeInt                                                            = 0,
	EGDValueType__TypeFloat                                                          = 1,
	EGDValueType__TypeBoolean                                                        = 2,
	EGDValueType__TypeName                                                           = 3,
	EGDValueType__TypeEmpty                                                          = 4,
	EGDValueType__TypeMax                                                            = 5
};

/// Class /Script/ExtraAssets.GameDataAsset
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UGameDataAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<char>                                       m_autoBin;                                                  // 0x0030   (0x0010)  
	FString                                            m_autoStr;                                                  // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/ExtraAssets.GameDataAsset.ImportCSV
	// void ImportCSV();                                                                                                        // [0x6747c70] Final|Native|Public  
	// Function /Script/ExtraAssets.GameDataAsset.ExportCSV
	// void ExportCSV();                                                                                                        // [0x6747c50] Final|Native|Public|Const 
};

/// Class /Script/ExtraAssets.TextAsset
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UTextAsset : public UObject
{ 
public:
	FString                                            myString;                                                   // 0x0028   (0x0010)  
};

/// Struct /Script/ExtraAssets.GDAuto
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGDAuto
{ 
	uint32_t                                           m_offset;                                                   // 0x0000   (0x0004)  
	uint32_t                                           m_dataSize;                                                 // 0x0004   (0x0004)  
	class UGameDataAsset*                              m_pAsset;                                                   // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0010   (0x0010)  MISSED
};

/// Struct /Script/ExtraAssets.GDId
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGDId
{ 
	uint32_t                                           crc;                                                        // 0x0000   (0x0004)  
	FName                                              Name;                                                       // 0x0004   (0x0008)  
};

#pragma pack(pop)


