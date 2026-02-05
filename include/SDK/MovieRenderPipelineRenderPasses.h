
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ActorLayerUtilities
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieRenderPipelineCore
/// dependency: OpenColorIO

#pragma pack(push, 0x1)

/// Enum /Script/MovieRenderPipelineRenderPasses.EEXRCompressionFormat
/// Size: 0x01 (1 bytes)
enum class EEXRCompressionFormat : uint8_t
{
	EEXRCompressionFormat__None                                                      = 0,
	EEXRCompressionFormat__RLE                                                       = 1,
	EEXRCompressionFormat__ZIPS                                                      = 2,
	EEXRCompressionFormat__ZIP                                                       = 3,
	EEXRCompressionFormat__PIZ                                                       = 4,
	EEXRCompressionFormat__PXR24                                                     = 5,
	EEXRCompressionFormat__B44                                                       = 6,
	EEXRCompressionFormat__B44A                                                      = 7,
	EEXRCompressionFormat__DWAA                                                      = 8,
	EEXRCompressionFormat__DWAB                                                      = 9,
	EEXRCompressionFormat__Max                                                       = 10
};

/// Class /Script/MovieRenderPipelineRenderPasses.MovieGraphImagePassBaseNode
/// Size: 0x00B8 (184 bytes) (0x000098 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMovieGraphImagePassBaseNode : public UMovieGraphRenderPassNode
{ 
public:
	bool                                               bOverride_ShowFlags : 1;                                    // 0x0098:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	class UMovieGraphShowFlags*                        ShowFlags;                                                  // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00A8   (0x0010)  MISSED
};

/// Struct /Script/MovieRenderPipelineRenderPasses.MoviePipelinePostProcessPass
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMoviePipelinePostProcessPass
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TWeakObjectPtr<class UMaterialInterface*>          Material;                                                   // 0x0008   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0010   (0x0020)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MovieGraphDeferredRenderPassNode
/// Size: 0x00D8 (216 bytes) (0x0000B8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UMovieGraphDeferredRenderPassNode : public UMovieGraphImagePassBaseNode
{ 
public:
	bool                                               bOverride_SpatialSampleCount : 1;                           // 0x00B8:0 (0x0001)  
	bool                                               bOverride_AntiAliasingMethod : 1;                           // 0x00B8:1 (0x0001)  
	bool                                               bOverride_bDisableToneCurve : 1;                            // 0x00B8:2 (0x0001)  
	bool                                               bOverride_bAllowOCIO : 1;                                   // 0x00B8:3 (0x0001)  
	bool                                               bOverride_ViewModeIndex : 1;                                // 0x00B8:4 (0x0001)  
	bool                                               bOverride_bWriteAllSamples : 1;                             // 0x00B8:5 (0x0001)  
	bool                                               bOverride_AdditionalPostProcessMaterials : 1;               // 0x00B8:6 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            SpatialSampleCount;                                         // 0x00BC   (0x0004)  
	TEnumAsByte<EAntiAliasingMethod>                   AntiAliasingMethod;                                         // 0x00C0   (0x0001)  
	bool                                               bWriteAllSamples;                                           // 0x00C1   (0x0001)  
	bool                                               bDisableToneCurve;                                          // 0x00C2   (0x0001)  
	bool                                               bAllowOCIO;                                                 // 0x00C3   (0x0001)  
	TEnumAsByte<EViewModeIndex>                        ViewModeIndex;                                              // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00C5   (0x0003)  MISSED
	TArray<FMoviePipelinePostProcessPass>              AdditionalPostProcessMaterials;                             // 0x00C8   (0x0010)  
};

/// Class /Script/MovieRenderPipelineRenderPasses.MovieGraphImageSequenceOutputNode
/// Size: 0x01C8 (456 bytes) (0x0000B0 - 0x0001C8) align 8 MaxSize: 0x01C8
class UMovieGraphImageSequenceOutputNode : public UMovieGraphFileOutputNode
{ 
public:
	bool                                               bOverride_OCIOConfiguration : 1;                            // 0x00B0:0 (0x0001)  
	bool                                               bOverride_OCIOContext : 1;                                  // 0x00B0:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00B1   (0x0007)  MISSED
	FOpenColorIODisplayConfiguration                   OCIOConfiguration;                                          // 0x00B8   (0x00A0)  
	TMap<FString, FString>                             OCIOContext;                                                // 0x0158   (0x0050)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x01A8   (0x0020)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MovieGraphImageSequenceOutputNode_EXR
/// Size: 0x01D0 (464 bytes) (0x0001C8 - 0x0001D0) align 8 MaxSize: 0x01D0
class UMovieGraphImageSequenceOutputNode_EXR : public UMovieGraphImageSequenceOutputNode
{ 
public:
	bool                                               bOverride_Compression : 1;                                  // 0x01C8:0 (0x0001)  
	EEXRCompressionFormat                              Compression;                                                // 0x01C9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x01CA   (0x0006)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MovieGraphImageSequenceOutputNode_MultiLayerEXR
/// Size: 0x01D0 (464 bytes) (0x0001D0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UMovieGraphImageSequenceOutputNode_MultiLayerEXR : public UMovieGraphImageSequenceOutputNode_EXR
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MovieGraphImageSequenceOutputNode_BMP
/// Size: 0x01C8 (456 bytes) (0x0001C8 - 0x0001C8) align 8 MaxSize: 0x01C8
class UMovieGraphImageSequenceOutputNode_BMP : public UMovieGraphImageSequenceOutputNode
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MovieGraphImageSequenceOutputNode_JPG
/// Size: 0x01C8 (456 bytes) (0x0001C8 - 0x0001C8) align 8 MaxSize: 0x01C8
class UMovieGraphImageSequenceOutputNode_JPG : public UMovieGraphImageSequenceOutputNode
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MovieGraphImageSequenceOutputNode_PNG
/// Size: 0x01C8 (456 bytes) (0x0001C8 - 0x0001C8) align 8 MaxSize: 0x01C8
class UMovieGraphImageSequenceOutputNode_PNG : public UMovieGraphImageSequenceOutputNode
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MovieGraphPathTracerRenderPassNode
/// Size: 0x00E0 (224 bytes) (0x0000B8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UMovieGraphPathTracerRenderPassNode : public UMovieGraphImagePassBaseNode
{ 
public:
	bool                                               bOverride_SpatialSampleCount : 1;                           // 0x00B8:0 (0x0001)  
	bool                                               bOverride_bDenoiser : 1;                                    // 0x00B8:1 (0x0001)  
	bool                                               bOverride_bDisableToneCurve : 1;                            // 0x00B8:2 (0x0001)  
	bool                                               bOverride_bAllowOCIO : 1;                                   // 0x00B8:3 (0x0001)  
	bool                                               bOverride_bWriteAllSamples : 1;                             // 0x00B8:4 (0x0001)  
	bool                                               bOverride_AdditionalPostProcessMaterials : 1;               // 0x00B8:5 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            SpatialSampleCount;                                         // 0x00BC   (0x0004)  
	bool                                               bDenoiser;                                                  // 0x00C0   (0x0001)  
	bool                                               bWriteAllSamples;                                           // 0x00C1   (0x0001)  
	bool                                               bDisableToneCurve;                                          // 0x00C2   (0x0001)  
	bool                                               bAllowOCIO;                                                 // 0x00C3   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	TArray<FMoviePipelinePostProcessPass>              AdditionalPostProcessMaterials;                             // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImagePassBase
/// Size: 0x0178 (376 bytes) (0x000048 - 0x000178) align 8 MaxSize: 0x0178
class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass
{ 
public:
	unsigned char                                      UnknownData00_1[0x130];                                     // 0x0048   (0x0130)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPassBase
/// Size: 0x0238 (568 bytes) (0x000178 - 0x000238) align 8 MaxSize: 0x0238
class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase
{ 
public:
	bool                                               bAccumulatorIncludesAlpha;                                  // 0x0178   (0x0001)  
	bool                                               bDisableMultisampleEffects;                                 // 0x0179   (0x0001)  
	bool                                               bUse32BitPostProcessMaterials;                              // 0x017A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x017B   (0x0005)  MISSED
	TArray<FMoviePipelinePostProcessPass>              AdditionalPostProcessMaterials;                             // 0x0180   (0x0010)  
	bool                                               bRenderMainPass;                                            // 0x0190   (0x0001)  
	bool                                               bAddDefaultLayer;                                           // 0x0191   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0192   (0x0006)  MISSED
	TArray<FActorLayer>                                ActorLayers;                                                // 0x0198   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x01A8   (0x0010)  MISSED
	TArray<FSoftObjectPath>                            DataLayers;                                                 // 0x01B8   (0x0010)  
	TArray<class UMaterialInterface*>                  ActivePostProcessMaterials;                                 // 0x01C8   (0x0010)  
	class UMaterialInterface*                          StencilLayerMaterial;                                       // 0x01D8   (0x0008)  
	unsigned char                                      UnknownData03_7[0x58];                                      // 0x01E0   (0x0058)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_Unlit
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UMoviePipelineDeferredPass_Unlit : public UMoviePipelineDeferredPassBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_DetailLighting
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UMoviePipelineDeferredPass_DetailLighting : public UMoviePipelineDeferredPassBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_LightingOnly
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UMoviePipelineDeferredPass_LightingOnly : public UMoviePipelineDeferredPassBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_ReflectionsOnly
/// Size: 0x0238 (568 bytes) (0x000238 - 0x000238) align 8 MaxSize: 0x0238
class UMoviePipelineDeferredPass_ReflectionsOnly : public UMoviePipelineDeferredPassBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_PathTracer
/// Size: 0x0240 (576 bytes) (0x000238 - 0x000240) align 8 MaxSize: 0x0240
class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase
{ 
public:
	bool                                               bReferenceMotionBlur;                                       // 0x0238   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0239   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutputBase
/// Size: 0x0068 (104 bytes) (0x000048 - 0x000068) align 8 MaxSize: 0x0068
class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0048   (0x0020)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_EXR
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align 8 MaxSize: 0x0070
class UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase
{ 
public:
	EEXRCompressionFormat                              Compression;                                                // 0x0068   (0x0001)  
	bool                                               bMultilayer;                                                // 0x0069   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x006A   (0x0006)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_BMP
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UMoviePipelineImageSequenceOutput_BMP : public UMoviePipelineImageSequenceOutputBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align 8 MaxSize: 0x0070
class UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase
{ 
public:
	bool                                               bWriteAlpha;                                                // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_JPG
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UMoviePipelineImageSequenceOutput_JPG : public UMoviePipelineImageSequenceOutputBase
{ 
public:
};

/// Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineWaveOutput
/// Size: 0x00B8 (184 bytes) (0x000048 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMoviePipelineWaveOutput : public UMoviePipelineOutputBase
{ 
public:
	FString                                            FileNameFormatOverride;                                     // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_7[0x60];                                      // 0x0058   (0x0060)  MISSED
};

#pragma pack(pop)


