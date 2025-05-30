#ifndef UTILS_HPP_
    #define UTILS_HPP_

    #include <cstdint>
    #include "DataTable.hpp"
    #include "FName.hpp"

struct FVector { 
	double X;
	double Y;
	double Z;
};

struct FGuid { 
	int32_t A;
	int32_t B;
	int32_t C;
	int32_t D;
};

struct FQuat { 
	double X; 
	double Y; 
	double Z;
	double W;
};

struct FTopLevelAssetPath
{ 
	FName                                              PackageName;                                                // 0x0000   (0x0008)  
	FName                                              AssetName;                                                  // 0x0008   (0x0008)  
};

struct FSoftObjectPath
{ 
	FTopLevelAssetPath                                 AssetPath;                                                  // 0x0000   (0x0010)  
	FString                                            SubPathString;                                              // 0x0010   (0x0010)  
};

struct FTransform final {
    public:
        FQuat Rotation;
        FVector Translation;
        uint8_t Pad_38[0x8];
        FVector Scale3D;
        uint8_t Pad_58[0x8];
};

struct FFrameNumber
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

struct FLinearColor
{ 
	float                                              R;                                                          // 0x0000   (0x0004)  
	float                                              G;                                                          // 0x0004   (0x0004)  
	float                                              B;                                                          // 0x0008   (0x0004)  
	float                                              A;                                                          // 0x000C   (0x0004)  
};

enum class ESlateColorStylingMode : uint8_t
{
	UseColor_Specified                                       = 0,
	UseColor_ColorTable                                      = 1,
	UseColor_Foreground                                      = 2,
	UseColor_Foreground_Subdued                              = 3,
	UseColor_UseStyle                                        = 4
};

struct FMargin
{ 
	float                                              Left;                                                       // 0x0000   (0x0004)  
	float                                              Top;                                                        // 0x0004   (0x0004)  
	float                                              Right;                                                      // 0x0008   (0x0004)  
	float                                              Bottom;                                                     // 0x000C   (0x0004)  
};

struct FSlateColor
{ 
	FLinearColor                                       SpecifiedColor;                                             // 0x0000   (0x0010)  
	ESlateColorStylingMode                             ColorUseRule;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

enum class ERangeBoundTypes : uint8_t
{
	Exclusive = 0,
	Inclusive = 1,
	Open = 2
};

struct FFrameNumberRangeBound
{ 
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FFrameNumber                                       Value;                                                      // 0x0004   (0x0004)  
};

struct FFrameNumberRange
{ 
	FFrameNumberRangeBound                             LowerBound;                                                 // 0x0000   (0x0008)  
	FFrameNumberRangeBound                             UpperBound;                                                 // 0x0008   (0x0008)  
};

struct FFrameTime
{ 
	FFrameNumber                                       FrameNumber;                                                // 0x0000   (0x0004)  
	float                                              SubFrame;                                                   // 0x0004   (0x0004)  
};

struct FVector2D
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
};


#endif /* !UTILS_HPP_ */
