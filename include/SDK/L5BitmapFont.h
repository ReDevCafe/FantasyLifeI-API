
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/L5BitmapFont.EFontTexPageType
/// Size: 0x01 (1 bytes)
enum class EFontTexPageType : uint8_t
{
	EFontTexPageType__PAGE_R                                                         = 0,
	EFontTexPageType__PAGE_G                                                         = 1,
	EFontTexPageType__PAGE_B                                                         = 2,
	EFontTexPageType__PAGE_A                                                         = 3,
	EFontTexPageType__PAGE_R2                                                        = 4,
	EFontTexPageType__PAGE_G2                                                        = 5,
	EFontTexPageType__PAGE_B2                                                        = 6,
	EFontTexPageType__PAGE_A2                                                        = 7
};

/// Struct /Script/L5BitmapFont.BMPChar
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FBMPChar
{ 
	int32_t                                            codeSJIS;                                                   // 0x0000   (0x0004)  
	int32_t                                            codeUTF8;                                                   // 0x0004   (0x0004)  
	int32_t                                            tx;                                                         // 0x0008   (0x0004)  
	int32_t                                            ty;                                                         // 0x000C   (0x0004)  
	int32_t                                            tw;                                                         // 0x0010   (0x0004)  
	int32_t                                            offsetX;                                                    // 0x0014   (0x0004)  
	int32_t                                            cellX;                                                      // 0x0018   (0x0004)  
	int32_t                                            page;                                                       // 0x001C   (0x0004)  
};

/// Struct /Script/L5BitmapFont.BMPKerning
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FBMPKerning
{ 
	int32_t                                            preCode;                                                    // 0x0000   (0x0004)  
	int32_t                                            code;                                                       // 0x0004   (0x0004)  
	int32_t                                            Offset;                                                     // 0x0008   (0x0004)  
};

/// Struct /Script/L5BitmapFont.BMPFontStyleInfo
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FBMPFontStyleInfo
{ 
	TMap<int32_t, FBMPChar>                            charInfos;                                                  // 0x0000   (0x0050)  
	TMap<int32_t, FBMPKerning>                         kernInfos;                                                  // 0x0050   (0x0050)  
	int32_t                                            FontSize;                                                   // 0x00A0   (0x0004)  
	int32_t                                            tmHeight;                                                   // 0x00A4   (0x0004)  
	int32_t                                            tmInternalLeading;                                          // 0x00A8   (0x0004)  
	int32_t                                            fontNum;                                                    // 0x00AC   (0x0004)  
	int32_t                                            txW;                                                        // 0x00B0   (0x0004)  
	int32_t                                            txH;                                                        // 0x00B4   (0x0004)  
	int32_t                                            chrSpace;                                                   // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Struct /Script/L5BitmapFont.BMPFontStyle
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FBMPFontStyle
{ 
	TArray<class UTexture2D*>                          Textures;                                                   // 0x0000   (0x0010)  
	TMap<int32_t, FBMPFontStyleInfo>                   fontStyleInfos;                                             // 0x0010   (0x0050)  
};

/// Class /Script/L5BitmapFont.L5BitmapFontAsset
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UL5BitmapFontAsset : public UObject
{ 
public:
	FBMPFontStyle                                      m_fontStyle;                                                // 0x0028   (0x0060)  
	bool                                               m_isSDFFont;                                                // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Struct /Script/L5BitmapFont.BMPWord
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FBMPWord
{ 
	TArray<int32_t>                                    charList;                                                   // 0x0000   (0x0010)  
	int32_t                                            leftKey;                                                    // 0x0010   (0x0004)  
	int32_t                                            rightKey;                                                   // 0x0014   (0x0004)  
	int32_t                                            advanceX;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

#pragma pack(pop)


