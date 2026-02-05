
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Struct /Script/ShaderModule.DioramaBlur_General_DetailedAdjustment
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 1 MaxSize: 0x0006
struct FDioramaBlur_General_DetailedAdjustment
{ 
	bool                                               isUseDioramaBlurMaskPS;                                     // 0x0000   (0x0001)  
	bool                                               isUseMaskExtent;                                            // 0x0001   (0x0001)  
	bool                                               isUseSvPosition;                                            // 0x0002   (0x0001)  
	bool                                               isUseSceneTexturesStruct;                                   // 0x0003   (0x0001)  
	bool                                               isUseFinalComposite_NoDownScale;                            // 0x0004   (0x0001)  
	bool                                               isUseFinalComposite_ScreenAspect;                           // 0x0005   (0x0001)  
};

/// Struct /Script/ShaderModule.DioramaBlur_General
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align 4 MaxSize: 0x0034
struct FDioramaBlur_General
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	float                                              BlurSizePercent;                                            // 0x0008   (0x0004)  
	float                                              SamplingGaps;                                               // 0x000C   (0x0004)  
	float                                              SamplingGaps_LockOn;                                        // 0x0010   (0x0004)  
	float                                              MarginBlurUV;                                               // 0x0014   (0x0004)  
	int32_t                                            MaskDownScale;                                              // 0x0018   (0x0004)  
	int32_t                                            BlurPassX_DownScaleX;                                       // 0x001C   (0x0004)  
	int32_t                                            BlurPassX_DownScaleY;                                       // 0x0020   (0x0004)  
	int32_t                                            BlurPassY_DownScaleX;                                       // 0x0024   (0x0004)  
	int32_t                                            BlurPassY_DownScaleY;                                       // 0x0028   (0x0004)  
	FDioramaBlur_General_DetailedAdjustment            detailedAdjustment;                                         // 0x002C   (0x0006)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x0032   (0x0002)  MISSED
};

/// Struct /Script/ShaderModule.DioramaBlur_Depth
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FDioramaBlur_Depth
{ 
	float                                              NearLen_Max;                                                // 0x0000   (0x0004)  
	float                                              NearLen_Min;                                                // 0x0004   (0x0004)  
	float                                              FarLen_Min;                                                 // 0x0008   (0x0004)  
	float                                              FarLen_Max;                                                 // 0x000C   (0x0004)  
	float                                              NearMaskPow;                                                // 0x0010   (0x0004)  
	float                                              FarMaskPow;                                                 // 0x0014   (0x0004)  
	float                                              NearIntensity;                                              // 0x0018   (0x0004)  
	float                                              FarIntensity;                                               // 0x001C   (0x0004)  
};

/// Struct /Script/ShaderModule.DioramaBlur_BandBlur
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FDioramaBlur_BandBlur
{ 
	float                                              BandSizeX;                                                  // 0x0000   (0x0004)  
	float                                              BandSizeTop;                                                // 0x0004   (0x0004)  
	float                                              BandSizeBottom;                                             // 0x0008   (0x0004)  
	float                                              BandBlurPow;                                                // 0x000C   (0x0004)  
	float                                              BandBlurIntensity;                                          // 0x0010   (0x0004)  
};

/// Struct /Script/ShaderModule.DioramaBlur_CircleMask
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FDioramaBlur_CircleMask
{ 
	FVector2D                                          CircleMaskCenter_Base;                                      // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x5C];                                      // 0x0010   (0x005C)  MISSED
	float                                              CircleMaskPow;                                              // 0x006C   (0x0004)  
	float                                              CircleMaskPow_LockOn;                                       // 0x0070   (0x0004)  
	float                                              AlwaysCircleMaskIntensity;                                  // 0x0074   (0x0004)  
	float                                              AlwaysCircleMaskIntensity_LockOn;                           // 0x0078   (0x0004)  
	float                                              DepthCircleMaskIntensity;                                   // 0x007C   (0x0004)  
	float                                              DepthCircleMaskIntensity_LockOn;                            // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/ShaderModule.DioramaBlur_PhotoAdjust
/// Size: 0x0044 (68 bytes) (0x000000 - 0x000044) align 4 MaxSize: 0x0044
struct FDioramaBlur_PhotoAdjust
{ 
	unsigned char                                      UnknownData00_2[0x44];                                      // 0x0000   (0x0044)  MISSED
};

/// Struct /Script/ShaderModule.PostProcessDioramaBlurParam
/// Size: 0x0148 (328 bytes) (0x000000 - 0x000148) align 8 MaxSize: 0x0148
struct FPostProcessDioramaBlurParam
{ 
	bool                                               IsEnable;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FDioramaBlur_General                               General;                                                    // 0x0004   (0x0034)  
	FDioramaBlur_Depth                                 Depth;                                                      // 0x0038   (0x0020)  
	FDioramaBlur_BandBlur                              BandBlur;                                                   // 0x0058   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FDioramaBlur_CircleMask                            CircleMask;                                                 // 0x0070   (0x0088)  
	unsigned char                                      UnknownData02_7[0x50];                                      // 0x00F8   (0x0050)  MISSED
};

#pragma pack(pop)


