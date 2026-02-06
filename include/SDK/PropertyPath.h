
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/PropertyPath.EPropertyPathTestEnum
/// Size: 0x01 (1 bytes)
enum class EPropertyPathTestEnum : uint8_t
{
	One                                                                              = 0,
	Two                                                                              = 1,
	Three                                                                            = 2,
	Four                                                                             = 3
};

/// Struct /Script/PropertyPath.PropertyPathTestBaseStruct
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FPropertyPathTestBaseStruct
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/PropertyPath.PropertyPathTestInnerStruct
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FPropertyPathTestInnerStruct : FPropertyPathTestBaseStruct
{ 
	float                                              FLOAT;                                                      // 0x0008   (0x0004)  
	bool                                               bool0;                                                      // 0x000C   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumOne;                                                    // 0x000D   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumTwo;                                                    // 0x000E   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumThree;                                                  // 0x000F   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumFour;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            Integer;                                                    // 0x0014   (0x0004)  
	FString                                            String;                                                     // 0x0018   (0x0010)  
};

/// Struct /Script/PropertyPath.PropertyPathTestStruct
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FPropertyPathTestStruct : FPropertyPathTestBaseStruct
{ 
	bool                                               bool0;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            Integer;                                                    // 0x000C   (0x0004)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumOne;                                                    // 0x0010   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumTwo;                                                    // 0x0011   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumThree;                                                  // 0x0012   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumFour;                                                   // 0x0013   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            String;                                                     // 0x0018   (0x0010)  
	float                                              FLOAT;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FPropertyPathTestInnerStruct                       InnerStruct;                                                // 0x0030   (0x0028)  
	class UPropertyPathTestObject*                     InnerObject;                                                // 0x0058   (0x0008)  
};

/// Class /Script/PropertyPath.PropertyPathTestObject
/// Size: 0x0180 (384 bytes) (0x000028 - 0x000180) align 8 MaxSize: 0x0180
class UPropertyPathTestObject : public UObject
{ 
public:
	bool                                               bool0;                                                      // 0x0028   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumOne;                                                    // 0x0029   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumTwo;                                                    // 0x002A   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumThree;                                                  // 0x002B   (0x0001)  
	TEnumAsByte<EPropertyPathTestEnum>                 EnumFour;                                                   // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	int32_t                                            Integer;                                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FString                                            String;                                                     // 0x0038   (0x0010)  
	float                                              FLOAT;                                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FPropertyPathTestStruct                            Struct;                                                     // 0x0050   (0x0060)  
	FPropertyPathTestStruct                            StructRef;                                                  // 0x00B0   (0x0060)  
	FPropertyPathTestStruct                            StructConstRef;                                             // 0x0110   (0x0060)  
	class UPropertyPathTestObject*                     InnerObject;                                                // 0x0170   (0x0008)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0178   (0x0008)  MISSED


	/// Functions
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStructRef
	// void SetStructRef(FPropertyPathTestStruct InStruct);                                                                     // [0x41d8cf0] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStructConstRef
	// void SetStructConstRef(FPropertyPathTestStruct InStruct);                                                                // [0x41d8bc0] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetStruct
	// void SetStruct(FPropertyPathTestStruct InStruct);                                                                        // [0x41d8a90] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.SetFloat
	// void SetFloat(float InFloat);                                                                                            // [0x41d8a00] Final|Native|Public  
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStructRef
	// FPropertyPathTestStruct GetStructRef();                                                                                  // [0x41d89d0] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStructConstRef
	// FPropertyPathTestStruct GetStructConstRef();                                                                             // [0x41d89a0] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetStruct
	// FPropertyPathTestStruct GetStruct();                                                                                     // [0x41d8940] Final|Native|Public|Const 
	// Function /Script/PropertyPath.PropertyPathTestObject.GetFloat
	// float GetFloat();                                                                                                        // [0x41d8910] Final|Native|Public|Const 
};

/// Struct /Script/PropertyPath.PropertyPathSegment
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPropertyPathSegment
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	int32_t                                            ArrayIndex;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UStruct*                                     Struct;                                                     // 0x0010   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/PropertyPath.CachedPropertyPath
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FCachedPropertyPath
{ 
	TArray<FPropertyPathSegment>                       Segments;                                                   // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
	class UFunction*                                   CachedFunction;                                             // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0020   (0x0018)  MISSED
};

/// Struct /Script/PropertyPath.PropertyPathTestBed
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FPropertyPathTestBed
{ 
	class UPropertyPathTestObject*                     Object;                                                     // 0x0000   (0x0008)  
	class UPropertyPathTestObject*                     ModifiedObject;                                             // 0x0008   (0x0008)  
	FPropertyPathTestStruct                            ModifiedStruct;                                             // 0x0010   (0x0060)  
	FPropertyPathTestStruct                            DefaultStruct;                                              // 0x0070   (0x0060)  
};

#pragma pack(pop)


