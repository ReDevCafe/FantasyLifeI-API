
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

/// Struct /Script/L5AtlasResource.AtlasData
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FAtlasData
{ 
	FName                                              ID;                                                         // 0x0000   (0x0008)  
	FVector2D                                          uv;                                                         // 0x0008   (0x0010)  
	FVector2D                                          Size;                                                       // 0x0018   (0x0010)  
	FVector2D                                          uvOrigin;                                                   // 0x0028   (0x0010)  
	FVector2D                                          sizeOrigin;                                                 // 0x0038   (0x0010)  
};

/// Class /Script/L5AtlasResource.L5AtlasResourceAsset
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UL5AtlasResourceAsset : public UObject
{ 
public:
	class UTexture2D*                                  m_sourceTexture;                                            // 0x0028   (0x0008)  
	TMap<FName, FAtlasData>                            m_atlasDataMap;                                             // 0x0030   (0x0050)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0080   (0x0008)  MISSED
};

#pragma pack(pop)


