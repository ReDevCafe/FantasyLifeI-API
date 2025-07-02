
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InterchangeCore

#pragma pack(push, 0x1)

/// Enum /Script/InterchangeImport.EMaterialXLuminanceMode
/// Size: 0x01 (1 bytes)
enum class EMaterialXLuminanceMode : uint8_t
{
	EMaterialXLuminanceMode__ACEScg                                                  = 0,
	EMaterialXLuminanceMode__Rec709                                                  = 1,
	EMaterialXLuminanceMode__Rec2020                                                 = 2,
	EMaterialXLuminanceMode__Rec2100                                                 = 2,
	EMaterialXLuminanceMode__Custom                                                  = 3
};

/// Enum /Script/InterchangeImport.EMaterialXTextureSampleBlurFilter
/// Size: 0x01 (1 bytes)
enum class EMaterialXTextureSampleBlurFilter : uint8_t
{
	EMaterialXTextureSampleBlurFilter__Box                                           = 0,
	EMaterialXTextureSampleBlurFilter__Gaussian                                      = 1
};

/// Enum /Script/InterchangeImport.EMAterialXTextureSampleBlurKernel
/// Size: 0x04 (4 bytes)
enum class EMAterialXTextureSampleBlurKernel : uint32_t
{
	EMAterialXTextureSampleBlurKernel__Kernel1                                       = 0,
	EMAterialXTextureSampleBlurKernel__Kernel3                                       = 1,
	EMAterialXTextureSampleBlurKernel__Kernel5                                       = 2,
	EMAterialXTextureSampleBlurKernel__Kernel7                                       = 3
};

/// Class /Script/InterchangeImport.InterchangeAnimationPayloadInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInterchangeAnimationPayloadInterface : public UInterface
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeBlockedTexturePayloadInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInterchangeBlockedTexturePayloadInterface : public UInterface
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeActorFactory
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeActorFactory : public UInterchangeFactoryBase
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeDecalActorFactory
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeDecalActorFactory : public UInterchangeActorFactory
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeLevelSequenceFactory
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UInterchangeLevelSequenceFactory : public UInterchangeFactoryBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeLightActorFactory
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeLightActorFactory : public UInterchangeActorFactory
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeMeshPayloadInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInterchangeMeshPayloadInterface : public UInterface
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeSceneImportAssetFactory
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeSceneImportAssetFactory : public UInterchangeFactoryBase
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeSceneVariantSetsFactory
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UInterchangeSceneVariantSetsFactory : public UInterchangeFactoryBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeSlicedTexturePayloadInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInterchangeSlicedTexturePayloadInterface : public UInterface
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeTextureLightProfilePayloadInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInterchangeTextureLightProfilePayloadInterface : public UInterface
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeTexturePayloadInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInterchangeTexturePayloadInterface : public UInterface
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeVariantSetPayloadInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInterchangeVariantSetPayloadInterface : public UInterface
{ 
public:
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXRamp4
/// Size: 0x0180 (384 bytes) (0x0000B0 - 0x000180) align 8 MaxSize: 0x0180
class UMaterialExpressionMaterialXRamp4 : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Coordinates;                                                // 0x00B0   (0x0028)  
	FExpressionInput                                   A;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x0100   (0x0028)  
	FExpressionInput                                   C;                                                          // 0x0128   (0x0028)  
	FExpressionInput                                   D;                                                          // 0x0150   (0x0028)  
	char                                               ConstCoordinate;                                            // 0x0178   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0179   (0x0007)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeAnimSequenceFactory
/// Size: 0x0138 (312 bytes) (0x000030 - 0x000138) align 8 MaxSize: 0x0138
class UInterchangeAnimSequenceFactory : public UInterchangeFactoryBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x108];                                     // 0x0030   (0x0108)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeFbxTranslatorSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeFbxTranslatorSettings : public UInterchangeTranslatorSettings
{ 
public:
	bool                                               bConvertScene;                                              // 0x0028   (0x0001)  
	bool                                               bForceFrontXAxis;                                           // 0x0029   (0x0001)  
	bool                                               bConvertSceneUnit;                                          // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x002B   (0x0005)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeFbxTranslator
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UInterchangeFbxTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0038   (0x0040)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeGLTFTranslator
/// Size: 0x0290 (656 bytes) (0x000038 - 0x000290) align 8 MaxSize: 0x0290
class UInterchangeGLTFTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x258];                                     // 0x0038   (0x0258)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeMaterialXTranslator
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UInterchangeMaterialXTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXAppend3Vector
/// Size: 0x0128 (296 bytes) (0x0000B0 - 0x000128) align 8 MaxSize: 0x0128
class UMaterialExpressionMaterialXAppend3Vector : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B0   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   C;                                                          // 0x0100   (0x0028)  
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXAppend4Vector
/// Size: 0x0150 (336 bytes) (0x0000B0 - 0x000150) align 8 MaxSize: 0x0150
class UMaterialExpressionMaterialXAppend4Vector : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B0   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   C;                                                          // 0x0100   (0x0028)  
	FExpressionInput                                   D;                                                          // 0x0128   (0x0028)  
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXBurn
/// Size: 0x0130 (304 bytes) (0x0000B0 - 0x000130) align 8 MaxSize: 0x0130
class UMaterialExpressionMaterialXBurn : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B0   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   Alpha;                                                      // 0x0100   (0x0028)  
	float                                              ConstAlpha;                                                 // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXDifference
/// Size: 0x0130 (304 bytes) (0x0000B0 - 0x000130) align 8 MaxSize: 0x0130
class UMaterialExpressionMaterialXDifference : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B0   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   Alpha;                                                      // 0x0100   (0x0028)  
	float                                              ConstAlpha;                                                 // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXDisjointOver
/// Size: 0x0130 (304 bytes) (0x0000B0 - 0x000130) align 8 MaxSize: 0x0130
class UMaterialExpressionMaterialXDisjointOver : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B0   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   Alpha;                                                      // 0x0100   (0x0028)  
	float                                              ConstAlpha;                                                 // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXDodge
/// Size: 0x0130 (304 bytes) (0x0000B0 - 0x000130) align 8 MaxSize: 0x0130
class UMaterialExpressionMaterialXDodge : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B0   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   Alpha;                                                      // 0x0100   (0x0028)  
	float                                              ConstAlpha;                                                 // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXFractal3D
/// Size: 0x01A8 (424 bytes) (0x0000B0 - 0x0001A8) align 8 MaxSize: 0x01A8
class UMaterialExpressionMaterialXFractal3D : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Position;                                                   // 0x00B0   (0x0028)  
	FExpressionInput                                   Amplitude;                                                  // 0x00D8   (0x0028)  
	float                                              ConstAmplitude;                                             // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	FExpressionInput                                   Octaves;                                                    // 0x0108   (0x0028)  
	int32_t                                            ConstOctaves;                                               // 0x0130   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0134   (0x0004)  MISSED
	FExpressionInput                                   Lacunarity;                                                 // 0x0138   (0x0028)  
	float                                              ConstLacunarity;                                            // 0x0160   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0164   (0x0004)  MISSED
	FExpressionInput                                   Diminish;                                                   // 0x0168   (0x0028)  
	float                                              ConstDiminish;                                              // 0x0190   (0x0004)  
	float                                              Scale;                                                      // 0x0194   (0x0004)  
	bool                                               bTurbulence;                                                // 0x0198   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0199   (0x0003)  MISSED
	int32_t                                            Levels;                                                     // 0x019C   (0x0004)  
	float                                              OutputMin;                                                  // 0x01A0   (0x0004)  
	float                                              OutputMax;                                                  // 0x01A4   (0x0004)  
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXIn
/// Size: 0x0130 (304 bytes) (0x0000B0 - 0x000130) align 8 MaxSize: 0x0130
class UMaterialExpressionMaterialXIn : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B0   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   Alpha;                                                      // 0x0100   (0x0028)  
	float                                              ConstAlpha;                                                 // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXLuminance
/// Size: 0x00F0 (240 bytes) (0x0000B0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UMaterialExpressionMaterialXLuminance : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Input;                                                      // 0x00B0   (0x0028)  
	FLinearColor                                       LuminanceFactors;                                           // 0x00D8   (0x0010)  
	EMaterialXLuminanceMode                            LuminanceMode;                                              // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXMask
/// Size: 0x0130 (304 bytes) (0x0000B0 - 0x000130) align 8 MaxSize: 0x0130
class UMaterialExpressionMaterialXMask : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B0   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   Alpha;                                                      // 0x0100   (0x0028)  
	float                                              ConstAlpha;                                                 // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXMatte
/// Size: 0x0130 (304 bytes) (0x0000B0 - 0x000130) align 8 MaxSize: 0x0130
class UMaterialExpressionMaterialXMatte : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B0   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   Alpha;                                                      // 0x0100   (0x0028)  
	float                                              ConstAlpha;                                                 // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXMinus
/// Size: 0x0130 (304 bytes) (0x0000B0 - 0x000130) align 8 MaxSize: 0x0130
class UMaterialExpressionMaterialXMinus : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B0   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   Alpha;                                                      // 0x0100   (0x0028)  
	float                                              ConstAlpha;                                                 // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXOut
/// Size: 0x0130 (304 bytes) (0x0000B0 - 0x000130) align 8 MaxSize: 0x0130
class UMaterialExpressionMaterialXOut : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B0   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   Alpha;                                                      // 0x0100   (0x0028)  
	float                                              ConstAlpha;                                                 // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXOver
/// Size: 0x0130 (304 bytes) (0x0000B0 - 0x000130) align 8 MaxSize: 0x0130
class UMaterialExpressionMaterialXOver : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B0   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   Alpha;                                                      // 0x0100   (0x0028)  
	float                                              ConstAlpha;                                                 // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXOverlay
/// Size: 0x0130 (304 bytes) (0x0000B0 - 0x000130) align 8 MaxSize: 0x0130
class UMaterialExpressionMaterialXOverlay : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B0   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   Alpha;                                                      // 0x0100   (0x0028)  
	float                                              ConstAlpha;                                                 // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXPlace2D
/// Size: 0x0180 (384 bytes) (0x0000B0 - 0x000180) align 8 MaxSize: 0x0180
class UMaterialExpressionMaterialXPlace2D : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Coordinates;                                                // 0x00B0   (0x0028)  
	FExpressionInput                                   Pivot;                                                      // 0x00D8   (0x0028)  
	FExpressionInput                                   Scale;                                                      // 0x0100   (0x0028)  
	FExpressionInput                                   Offset;                                                     // 0x0128   (0x0028)  
	FExpressionInput                                   RotationAngle;                                              // 0x0150   (0x0028)  
	float                                              ConstRotationAngle;                                         // 0x0178   (0x0004)  
	char                                               ConstCoordinate;                                            // 0x017C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x017D   (0x0003)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXPlus
/// Size: 0x0130 (304 bytes) (0x0000B0 - 0x000130) align 8 MaxSize: 0x0130
class UMaterialExpressionMaterialXPlus : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B0   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   Alpha;                                                      // 0x0100   (0x0028)  
	float                                              ConstAlpha;                                                 // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXPremult
/// Size: 0x00D8 (216 bytes) (0x0000B0 - 0x0000D8) align 8 MaxSize: 0x00D8
class UMaterialExpressionMaterialXPremult : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Input;                                                      // 0x00B0   (0x0028)  
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXRampLeftRight
/// Size: 0x0130 (304 bytes) (0x0000B0 - 0x000130) align 8 MaxSize: 0x0130
class UMaterialExpressionMaterialXRampLeftRight : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Coordinates;                                                // 0x00B0   (0x0028)  
	FExpressionInput                                   A;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x0100   (0x0028)  
	char                                               ConstCoordinate;                                            // 0x0128   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0129   (0x0007)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXRampTopBottom
/// Size: 0x0130 (304 bytes) (0x0000B0 - 0x000130) align 8 MaxSize: 0x0130
class UMaterialExpressionMaterialXRampTopBottom : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Coordinates;                                                // 0x00B0   (0x0028)  
	FExpressionInput                                   A;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x0100   (0x0028)  
	char                                               ConstCoordinate;                                            // 0x0128   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0129   (0x0007)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXRemap
/// Size: 0x0188 (392 bytes) (0x0000B0 - 0x000188) align 8 MaxSize: 0x0188
class UMaterialExpressionMaterialXRemap : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Input;                                                      // 0x00B0   (0x0028)  
	FExpressionInput                                   InputLow;                                                   // 0x00D8   (0x0028)  
	FExpressionInput                                   InputHigh;                                                  // 0x0100   (0x0028)  
	FExpressionInput                                   TargetLow;                                                  // 0x0128   (0x0028)  
	FExpressionInput                                   TargetHigh;                                                 // 0x0150   (0x0028)  
	float                                              InputLowDefault;                                            // 0x0178   (0x0004)  
	float                                              InputHighDefault;                                           // 0x017C   (0x0004)  
	float                                              TargetLowDefault;                                           // 0x0180   (0x0004)  
	float                                              TargetHighDefault;                                          // 0x0184   (0x0004)  
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXRotate2D
/// Size: 0x0108 (264 bytes) (0x0000B0 - 0x000108) align 8 MaxSize: 0x0108
class UMaterialExpressionMaterialXRotate2D : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Input;                                                      // 0x00B0   (0x0028)  
	FExpressionInput                                   RotationAngle;                                              // 0x00D8   (0x0028)  
	float                                              ConstRotationAngle;                                         // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXScreen
/// Size: 0x0130 (304 bytes) (0x0000B0 - 0x000130) align 8 MaxSize: 0x0130
class UMaterialExpressionMaterialXScreen : public UMaterialExpression
{ 
public:
	FExpressionInput                                   A;                                                          // 0x00B0   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   Alpha;                                                      // 0x0100   (0x0028)  
	float                                              ConstAlpha;                                                 // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXSplitLeftRight
/// Size: 0x0158 (344 bytes) (0x0000B0 - 0x000158) align 8 MaxSize: 0x0158
class UMaterialExpressionMaterialXSplitLeftRight : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Coordinates;                                                // 0x00B0   (0x0028)  
	FExpressionInput                                   A;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x0100   (0x0028)  
	FExpressionInput                                   Center;                                                     // 0x0128   (0x0028)  
	float                                              ConstCenter;                                                // 0x0150   (0x0004)  
	char                                               ConstCoordinate;                                            // 0x0154   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0155   (0x0003)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXSplitTopBottom
/// Size: 0x0158 (344 bytes) (0x0000B0 - 0x000158) align 8 MaxSize: 0x0158
class UMaterialExpressionMaterialXSplitTopBottom : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Coordinates;                                                // 0x00B0   (0x0028)  
	FExpressionInput                                   A;                                                          // 0x00D8   (0x0028)  
	FExpressionInput                                   B;                                                          // 0x0100   (0x0028)  
	FExpressionInput                                   Center;                                                     // 0x0128   (0x0028)  
	float                                              ConstCenter;                                                // 0x0150   (0x0004)  
	char                                               ConstCoordinate;                                            // 0x0154   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0155   (0x0003)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXSwizzle
/// Size: 0x00E8 (232 bytes) (0x0000B0 - 0x0000E8) align 8 MaxSize: 0x00E8
class UMaterialExpressionMaterialXSwizzle : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Input;                                                      // 0x00B0   (0x0028)  
	FString                                            Channels;                                                   // 0x00D8   (0x0010)  
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXTextureSampleParameterBlur
/// Size: 0x0230 (560 bytes) (0x000220 - 0x000230) align 8 MaxSize: 0x0230
class UMaterialExpressionMaterialXTextureSampleParameterBlur : public UMaterialExpressionTextureSampleParameter2D
{ 
public:
	EMAterialXTextureSampleBlurKernel                  KernelSize;                                                 // 0x0220   (0x0004)  
	float                                              FilterSize;                                                 // 0x0224   (0x0004)  
	float                                              FilterOffset;                                               // 0x0228   (0x0004)  
	EMaterialXTextureSampleBlurFilter                  Filter;                                                     // 0x022C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x022D   (0x0003)  MISSED
};

/// Class /Script/InterchangeImport.MaterialExpressionMaterialXUnpremult
/// Size: 0x00D8 (216 bytes) (0x0000B0 - 0x0000D8) align 8 MaxSize: 0x00D8
class UMaterialExpressionMaterialXUnpremult : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Input;                                                      // 0x00B0   (0x0028)  
};

/// Class /Script/InterchangeImport.InterchangeMaterialFactory
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UInterchangeMaterialFactory : public UInterchangeFactoryBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeMaterialFunctionFactory
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UInterchangeMaterialFunctionFactory : public UInterchangeFactoryBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeOBJTranslator
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UInterchangeOBJTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/InterchangeImport.InterchangePhysicsAssetFactory
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangePhysicsAssetFactory : public UInterchangeFactoryBase
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeSkeletalMeshFactory
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UInterchangeSkeletalMeshFactory : public UInterchangeFactoryBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeSkeletonFactory
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeSkeletonFactory : public UInterchangeFactoryBase
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeStaticMeshFactory
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UInterchangeStaticMeshFactory : public UInterchangeFactoryBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeCineCameraActorFactory
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeCineCameraActorFactory : public UInterchangeActorFactory
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeCameraActorFactory
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeCameraActorFactory : public UInterchangeActorFactory
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeSkeletalMeshActorFactory
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeSkeletalMeshActorFactory : public UInterchangeActorFactory
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeStaticMeshActorFactory
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInterchangeStaticMeshActorFactory : public UInterchangeActorFactory
{ 
public:
};

/// Class /Script/InterchangeImport.InterchangeDDSTranslator
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UInterchangeDDSTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeIESTranslator
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UInterchangeIESTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeImageWrapperTranslator
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UInterchangeImageWrapperTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeJPGTranslator
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UInterchangeJPGTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/InterchangeImport.InterchangePCXTranslator
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UInterchangePCXTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/InterchangeImport.InterchangePSDTranslator
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UInterchangePSDTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeTextureFactory
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class UInterchangeTextureFactory : public UInterchangeFactoryBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0030   (0x0090)  MISSED
};

/// Class /Script/InterchangeImport.InterchangeUEJPEGTranslator
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UInterchangeUEJPEGTranslator : public UInterchangeTranslatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

#pragma pack(pop)


