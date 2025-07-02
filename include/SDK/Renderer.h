
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

/// Enum /Script/Renderer.ESparseVolumeTexturePreviewAttribute
/// Size: 0x01 (1 bytes)
enum class ESparseVolumeTexturePreviewAttribute : uint8_t
{
	ESVTPA_AttributesA_R                                                             = 0,
	ESVTPA_AttributesA_G                                                             = 1,
	ESVTPA_AttributesA_B                                                             = 2,
	ESVTPA_AttributesA_A                                                             = 3,
	ESVTPA_AttributesB_R                                                             = 4,
	ESVTPA_AttributesB_G                                                             = 5,
	ESVTPA_AttributesB_B                                                             = 6,
	ESVTPA_AttributesB_A                                                             = 7
};

/// Class /Script/Renderer.SparseVolumeTextureViewerComponent
/// Size: 0x0550 (1360 bytes) (0x000518 - 0x000550) align 16 MaxSize: 0x0550
class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{ 
public:
	class USparseVolumeTexture*                        SparseVolumeTexturePreview;                                 // 0x0518   (0x0008)  
	float                                              Frame;                                                      // 0x0520   (0x0004)  
	float                                              FrameRate;                                                  // 0x0524   (0x0004)  
	bool                                               bPlaying : 1;                                               // 0x0528:0 (0x0001)  
	bool                                               bLooping : 1;                                               // 0x0528:1 (0x0001)  
	bool                                               bReversePlayback : 1;                                       // 0x0528:2 (0x0001)  
	bool                                               bBlockingStreamingRequests : 1;                             // 0x0528:3 (0x0001)  
	bool                                               bApplyPerFrameTransforms : 1;                               // 0x0528:4 (0x0001)  
	bool                                               bPivotAtCentroid : 1;                                       // 0x0528:5 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0529   (0x0003)  MISSED
	float                                              VoxelSize;                                                  // 0x052C   (0x0004)  
	TEnumAsByte<ESparseVolumeTexturePreviewAttribute>  PreviewAttribute;                                           // 0x0530   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0531   (0x0003)  MISSED
	int32_t                                            MipLevel;                                                   // 0x0534   (0x0004)  
	float                                              Extinction;                                                 // 0x0538   (0x0004)  
	unsigned char                                      UnknownData02_7[0x14];                                      // 0x053C   (0x0014)  MISSED
};

/// Class /Script/Renderer.SparseVolumeTextureViewer
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class ASparseVolumeTextureViewer : public AInfo
{ 
public:
	class USparseVolumeTextureViewerComponent*         SparseVolumeTextureViewerComponent;                         // 0x0290   (0x0008)  
};

#pragma pack(pop)


