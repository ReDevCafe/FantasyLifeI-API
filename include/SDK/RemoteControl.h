
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: RemoteControlCommon
/// dependency: StructUtils

#pragma pack(push, 0x1)

/// Enum /Script/RemoteControl.ERCTransactionMode
/// Size: 0x01 (1 bytes)
enum class ERCTransactionMode : uint8_t
{
	ERCTransactionMode__NONE                                                         = 0,
	ERCTransactionMode__AUTOMATIC                                                    = 1,
	ERCTransactionMode__MANUAL                                                       = 2
};

/// Enum /Script/RemoteControl.ERCAccess
/// Size: 0x01 (1 bytes)
enum class ERCAccess : uint8_t
{
	ERCAccess__NO_ACCESS                                                             = 0,
	ERCAccess__READ_ACCESS                                                           = 1,
	ERCAccess__WRITE_ACCESS                                                          = 2,
	ERCAccess__WRITE_TRANSACTION_ACCESS                                              = 3,
	ERCAccess__WRITE_MANUAL_TRANSACTION_ACCESS                                       = 4
};

/// Enum /Script/RemoteControl.ERCModifyOperation
/// Size: 0x01 (1 bytes)
enum class ERCModifyOperation : uint8_t
{
	ERCModifyOperation__EQUAL                                                        = 0,
	ERCModifyOperation__ADD                                                          = 1,
	ERCModifyOperation__SUBTRACT                                                     = 2,
	ERCModifyOperation__MULTIPLY                                                     = 3,
	ERCModifyOperation__DIVIDE                                                       = 4
};

/// Enum /Script/RemoteControl.ERCWebSocketCompressionMode
/// Size: 0x01 (1 bytes)
enum class ERCWebSocketCompressionMode : uint8_t
{
	ERCWebSocketCompressionMode__NONE                                                = 0,
	ERCWebSocketCompressionMode__ZLIB                                                = 1
};

/// Enum /Script/RemoteControl.EExposedFieldType
/// Size: 0x01 (1 bytes)
enum class EExposedFieldType : uint8_t
{
	EExposedFieldType__Invalid                                                       = 0,
	EExposedFieldType__Property                                                      = 1,
	EExposedFieldType__Function                                                      = 2
};

/// Enum /Script/RemoteControl.ERemoteControlEnumClass
/// Size: 0x01 (1 bytes)
enum class ERemoteControlEnumClass : uint8_t
{
	ERemoteControlEnumClass__E_One                                                   = 0,
	ERemoteControlEnumClass__E_Two                                                   = 1,
	ERemoteControlEnumClass__E_Three                                                 = 2
};

/// Enum /Script/RemoteControl.ERemoteControlEnum
/// Size: 0x01 (1 bytes)
enum class ERemoteControlEnum : uint8_t
{
	ERemoteControlEnum__E_One                                                        = 0,
	ERemoteControlEnum__E_Two                                                        = 1,
	ERemoteControlEnum__E_Three                                                      = 2
};

/// Enum /Script/RemoteControl.ERCBindingStatus
/// Size: 0x01 (1 bytes)
enum class ERCBindingStatus : uint8_t
{
	ERCBindingStatus__Unassigned                                                     = 0,
	ERCBindingStatus__Awaiting                                                       = 1,
	ERCBindingStatus__Bound                                                          = 2
};

/// Class /Script/RemoteControl.RCVirtualPropertyBase
/// Size: 0x00C0 (192 bytes) (0x000028 - 0x0000C0) align 8 MaxSize: 0x00C0
class URCVirtualPropertyBase : public UObject
{ 
public:
	FName                                              PropertyName;                                               // 0x0028   (0x0008)  
	FGuid                                              ID;                                                         // 0x0030   (0x0010)  
	FName                                              FieldId;                                                    // 0x0040   (0x0008)  
	TWeakObjectPtr<class URemoteControlPreset*>        PresetWeakPtr;                                              // 0x0048   (0x0008)  
	FName                                              DisplayName;                                                // 0x0050   (0x0008)  
	FText                                              Description;                                                // 0x0058   (0x0018)  
	int32_t                                            DisplayIndex;                                               // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	TMap<FName, FString>                               MetaData;                                                   // 0x0070   (0x0050)  


	/// Functions
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueVector2D
	// bool SetValueVector2D(FVector2D& InVector2D);                                                                            // [0x7a47730] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueVector
	// bool SetValueVector(FVector& InVector);                                                                                  // [0x7a477d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueUint64
	// bool SetValueUint64(uint64_t InUInt64);                                                                                  // [0x7a47690] Final|Native|Public  
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueUInt32
	// bool SetValueUInt32(uint32_t InUInt32);                                                                                  // [0x7a47550] Final|Native|Public  
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueUint16
	// bool SetValueUint16(uint16_t InUInt16);                                                                                  // [0x7a475f0] Final|Native|Public  
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueText
	// bool SetValueText(FText& InTextValue);                                                                                   // [0x7a47490] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueString
	// bool SetValueString(FString InStringValue);                                                                              // [0x7a473e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueRotator
	// bool SetValueRotator(FRotator& InRotator);                                                                               // [0x7a47340] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueNumericInteger
	// bool SetValueNumericInteger(int64_t InInt64Value);                                                                       // [0x7a472a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueName
	// bool SetValueName(FName& InNameValue);                                                                                   // [0x7a471f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueLinearColor
	// bool SetValueLinearColor(FLinearColor& InLinearColor);                                                                   // [0x7a47150] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueInt8
	// bool SetValueInt8(int8_t InInt8);                                                                                        // [0x7a470c0] Final|Native|Public  
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueInt64
	// bool SetValueInt64(int64_t InInt64);                                                                                     // [0x7a47020] Final|Native|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueInt32
	// bool SetValueInt32(int32_t InInt32);                                                                                     // [0x7a46f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueInt16
	// bool SetValueInt16(int16_t InInt16);                                                                                     // [0x7a46ee0] Final|Native|Public  
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueFloat
	// bool SetValueFloat(float InFloat);                                                                                       // [0x7a46e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueDouble
	// bool SetValueDouble(double InDouble);                                                                                    // [0x7a46dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueColor
	// bool SetValueColor(FColor& InColor);                                                                                     // [0x7a46d20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueByte
	// bool SetValueByte(char InByte);                                                                                          // [0x7a46c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.SetValueBool
	// bool SetValueBool(bool InBoolValue);                                                                                     // [0x7a46bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueVector2D
	// bool GetValueVector2D(FVector2D& OutVector2D);                                                                           // [0x7a46a30] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueVector
	// bool GetValueVector(FVector& OutVector);                                                                                 // [0x7a46ad0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueUint64
	// bool GetValueUint64(uint64_t& OuyUInt64);                                                                                // [0x7a46980] Final|Native|Public|HasOutParms|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueUInt32
	// bool GetValueUInt32(uint32_t& OutUInt32);                                                                                // [0x7a46820] Final|Native|Public|HasOutParms|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueUint16
	// bool GetValueUint16(uint16_t& OutUInt16);                                                                                // [0x7a468d0] Final|Native|Public|HasOutParms|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueText
	// bool GetValueText(FText& OutTextValue);                                                                                  // [0x7a46760] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueString
	// bool GetValueString(FString& OutStringValue);                                                                            // [0x7a466a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueRotator
	// bool GetValueRotator(FRotator& OutRotator);                                                                              // [0x7a46600] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueObject
	// class UObject* GetValueObject();                                                                                         // [0x7a465d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueNumericInteger
	// bool GetValueNumericInteger(int64_t& OutInt64Value);                                                                     // [0x7a46520] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueName
	// bool GetValueName(FName& OutNameValue);                                                                                  // [0x7a46470] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueLinearColor
	// bool GetValueLinearColor(FLinearColor& OutLinearColor);                                                                  // [0x7a463d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueInt8
	// bool GetValueInt8(int8_t& OutInt8);                                                                                      // [0x7a46320] Final|Native|Public|HasOutParms|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueInt64
	// bool GetValueInt64(int64_t& OuyInt64);                                                                                   // [0x7a46270] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueInt32
	// bool GetValueInt32(int32_t& OutInt32);                                                                                   // [0x7a461c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueInt16
	// bool GetValueInt16(int16_t& OutInt16);                                                                                   // [0x7a46110] Final|Native|Public|HasOutParms|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueFloat
	// bool GetValueFloat(float& OutFloat);                                                                                     // [0x7a46060] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueDouble
	// bool GetValueDouble(double& OutDouble);                                                                                  // [0x7a45fb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueColor
	// bool GetValueColor(FColor& OutColor);                                                                                    // [0x7a45f10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueByte
	// bool GetValueByte(char& OutByte);                                                                                        // [0x7a45e60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetValueBool
	// bool GetValueBool(bool& OutBoolValue);                                                                                   // [0x7a45db0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetPropertyName
	// FName GetPropertyName();                                                                                                 // [0x7a45d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RemoteControl.RCVirtualPropertyBase.GetDisplayValueAsString
	// FString GetDisplayValueAsString();                                                                                       // [0x7a45cd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RemoteControl.RCVirtualPropertyInContainer
/// Size: 0x00C8 (200 bytes) (0x0000C0 - 0x0000C8) align 8 MaxSize: 0x00C8
class URCVirtualPropertyInContainer : public URCVirtualPropertyBase
{ 
public:
	TWeakObjectPtr<class URCVirtualPropertyContainerBase*> ContainerWeakPtr;                                       // 0x00C0   (0x0008)  
};

/// Class /Script/RemoteControl.RCVirtualPropertySelfContainer
/// Size: 0x00D0 (208 bytes) (0x0000C0 - 0x0000D0) align 8 MaxSize: 0x00D0
class URCVirtualPropertySelfContainer : public URCVirtualPropertyBase
{ 
public:
	FInstancedPropertyBag                              BAG;                                                        // 0x00C0   (0x0010)  
};

/// Class /Script/RemoteControl.RCVirtualPropertyContainerBase
/// Size: 0x00F8 (248 bytes) (0x000028 - 0x0000F8) align 8 MaxSize: 0x00F8
class URCVirtualPropertyContainerBase : public UObject
{ 
public:
	FInstancedPropertyBag                              BAG;                                                        // 0x0028   (0x0010)  
	SDK_UNDEFINED(80,1190) /* TSet<URCVirtualPropertyBase*> */ __um(VirtualProperties);                            // 0x0038   (0x0050)  
	TWeakObjectPtr<class URemoteControlPreset*>        PresetWeakPtr;                                              // 0x0088   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0090   (0x0018)  MISSED
	TMap<FName, FGuid>                                 ControllerLabelToIdCache;                                   // 0x00A8   (0x0050)  
};

/// Class /Script/RemoteControl.RemoteControlBinding
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class URemoteControlBinding : public UObject
{ 
public:
	FString                                            Name;                                                       // 0x0028   (0x0010)  
	FSoftObjectPath                                    LastBoundObjectPath;                                        // 0x0038   (0x0020)  
};

/// Class /Script/RemoteControl.RemoteControlLevelIndependantBinding
/// Size: 0x0080 (128 bytes) (0x000058 - 0x000080) align 8 MaxSize: 0x0080
class URemoteControlLevelIndependantBinding : public URemoteControlBinding
{ 
public:
	TWeakObjectPtr<class UObject*>                     BoundObject;                                                // 0x0058   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0060   (0x0020)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlInitialBindingContext
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FRemoteControlInitialBindingContext
{ 
	TSoftObjectPtr<class UClass*>                      SupportedClass;                                             // 0x0000   (0x0028)  
	FName                                              ComponentName;                                              // 0x0028   (0x0008)  
	FString                                            SubObjectPath;                                              // 0x0030   (0x0010)  
	TSoftObjectPtr<class UClass*>                      OwnerActorClass;                                            // 0x0040   (0x0028)  
	FName                                              OwnerActorName;                                             // 0x0068   (0x0008)  
};

/// Class /Script/RemoteControl.RemoteControlLevelDependantBinding
/// Size: 0x0190 (400 bytes) (0x000058 - 0x000190) align 8 MaxSize: 0x0190
class URemoteControlLevelDependantBinding : public URemoteControlBinding
{ 
public:
	SDK_UNDEFINED(80,1191) /* TMap<FSoftObjectPath, TWeakObjectPtr<UObject*>> */ __um(BoundObjectMapByPath);       // 0x0058   (0x0050)  
	SDK_UNDEFINED(80,1192) /* TMap<FSoftObjectPath, TWeakObjectPtr<ULevel*>> */ __um(SubLevelSelectionMapByPath);  // 0x00A8   (0x0050)  
	TWeakObjectPtr<class ULevel*>                      LevelWithLastSuccessfulResolve;                             // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0100   (0x0020)  MISSED
	FRemoteControlInitialBindingContext                BindingContext;                                             // 0x0120   (0x0070)  
};

/// Struct /Script/RemoteControl.RemoteControlDeltaAPITestStruct
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FRemoteControlDeltaAPITestStruct
{ 
	FLinearColor                                       ColorValue;                                                 // 0x0000   (0x0010)  
};

/// Class /Script/RemoteControl.RemoteControlDeltaAPITestObject
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class URemoteControlDeltaAPITestObject : public UObject
{ 
public:
	int32_t                                            Int32Value;                                                 // 0x0028   (0x0004)  
	float                                              FloatValue;                                                 // 0x002C   (0x0004)  
	FVector                                            VectorValue;                                                // 0x0030   (0x0018)  
	FLinearColor                                       ColorValue;                                                 // 0x0048   (0x0010)  
	FRemoteControlDeltaAPITestStruct                   StructValue;                                                // 0x0058   (0x0010)  
	int32_t                                            Int32WithSetterValue;                                       // 0x0068   (0x0004)  
	float                                              FloatWithSetterValue;                                       // 0x006C   (0x0004)  


	/// Functions
	// Function /Script/RemoteControl.RemoteControlDeltaAPITestObject.SetInt32WithSetterValue
	// void SetInt32WithSetterValue(int32_t NewValue);                                                                          // [0x7a46b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RemoteControlDeltaAPITestObject.GetInt32WithSetterValue
	// int32_t GetInt32WithSetterValue();                                                                                       // [0x7a45d50] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/RemoteControl.RemoteControlExposeRegistry
/// Size: 0x0118 (280 bytes) (0x000028 - 0x000118) align 8 MaxSize: 0x0118
class URemoteControlExposeRegistry : public UObject
{ 
public:
	SDK_UNDEFINED(80,1193) /* TSet<FRCEntityWrapper> */ __um(ExposedEntities);                                     // 0x0028   (0x0050)  
	TMap<FName, FGuid>                                 LabelToIdCache;                                             // 0x0078   (0x0050)  
	SDK_UNDEFINED(80,1194) /* TSet<UScriptStruct*> */  __um(ExposedTypes);                                         // 0x00C8   (0x0050)  
};

/// Class /Script/RemoteControl.RemoteControlFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URemoteControlFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RemoteControl.RemoteControlFunctionLibrary.ExposeProperty
	// bool ExposeProperty(class URemoteControlPreset* Preset, class UObject* SourceObject, FString Property, FRemoteControlOptionalExposeArgs args); // [0x7a58cf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RemoteControlFunctionLibrary.ExposeFunction
	// bool ExposeFunction(class URemoteControlPreset* Preset, class UObject* SourceObject, FString Function, FRemoteControlOptionalExposeArgs args); // [0x7a58af0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RemoteControlFunctionLibrary.ExposeActor
	// bool ExposeActor(class URemoteControlPreset* Preset, class AActor* Actor, FRemoteControlOptionalExposeArgs args);        // [0x7a58940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RemoteControl.RemoteControlFunctionLibrary.ApplyColorWheelDelta
	// bool ApplyColorWheelDelta(class UObject* targetObject, FString PropertyName, FColorWheelColor& DeltaValue, FColorWheelColor& ReferenceColor, bool bIsInteractive); // [0x7a58750] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RemoteControl.RemoteControlFunctionLibrary.ApplyColorGradingWheelDelta
	// bool ApplyColorGradingWheelDelta(class UObject* targetObject, FString PropertyName, FColorGradingWheelColor& DeltaValue, FColorGradingWheelColor& ReferenceColor, bool bIsInteractive, float MinValue, float MaxValue); // [0x7a584e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/RemoteControl.RemoteControlInterceptionTestStruct
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FRemoteControlInterceptionTestStruct
{ 
	int32_t                                            Int32Value;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/RemoteControl.RemoteControlInterceptionFunctionParamStruct
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRemoteControlInterceptionFunctionParamStruct
{ 
	int32_t                                            Int32Value;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<int32_t>                                    IntArray;                                                   // 0x0008   (0x0010)  
	FString                                            IntString;                                                  // 0x0018   (0x0010)  
};

/// Class /Script/RemoteControl.RemoteControlInterceptionTestObject
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class URemoteControlInterceptionTestObject : public UObject
{ 
public:
	FRemoteControlInterceptionTestStruct               CustomStruct;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FRemoteControlInterceptionFunctionParamStruct      FunctionParamStruct;                                        // 0x0030   (0x0028)  


	/// Functions
	// Function /Script/RemoteControl.RemoteControlInterceptionTestObject.TestFunction
	// FRemoteControlInterceptionFunctionParamStruct TestFunction(FRemoteControlInterceptionFunctionParamStruct& InStruct, int32_t InTestFactor); // [0x7a58ef0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/RemoteControl.RemoteControlPresetGroup
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FRemoteControlPresetGroup
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FGuid                                              ID;                                                         // 0x0008   (0x0010)  
	FLinearColor                                       TagColor;                                                   // 0x0018   (0x0010)  
	TArray<FGuid>                                      Fields;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/RemoteControl.RemoteControlPresetLayout
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FRemoteControlPresetLayout
{ 
	TArray<FGuid>                                      DefaultGroupOrder;                                          // 0x0000   (0x0010)  
	TArray<FRemoteControlPresetGroup>                  Groups;                                                     // 0x0010   (0x0010)  
	TWeakObjectPtr<class URemoteControlPreset*>        Owner;                                                      // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_7[0xA8];                                      // 0x0028   (0x00A8)  MISSED
};

/// Struct /Script/RemoteControl.RCCachedFieldData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FRCCachedFieldData
{ 
	FGuid                                              LayoutGroupId;                                              // 0x0000   (0x0010)  
	FName                                              OwnerObjectAlias;                                           // 0x0010   (0x0008)  
};

/// Class /Script/RemoteControl.RemoteControlPreset
/// Size: 0x05B0 (1456 bytes) (0x000028 - 0x0005B0) align 8 MaxSize: 0x05B0
class URemoteControlPreset : public UObject
{ 
public:
	FRemoteControlPresetLayout                         Layout;                                                     // 0x0028   (0x00D0)  
	TMap<FString, FString>                             MetaData;                                                   // 0x00F8   (0x0050)  
	TArray<class URemoteControlBinding*>               Bindings;                                                   // 0x0148   (0x0010)  
	class URCVirtualPropertyContainerBase*             ControllerContainer;                                        // 0x0158   (0x0008)  
	FGuid                                              PresetId;                                                   // 0x0160   (0x0010)  
	TMap<FGuid, FRCCachedFieldData>                    FieldCache;                                                 // 0x0170   (0x0050)  
	TMap<FName, FGuid>                                 NameToGuidMap;                                              // 0x01C0   (0x0050)  
	class URemoteControlExposeRegistry*                Registry;                                                   // 0x0210   (0x0008)  
	class URemoteControlPropertyIdRegistry*            PropertyIdRegistry;                                         // 0x0218   (0x0008)  
	unsigned char                                      UnknownData00_7[0x390];                                     // 0x0220   (0x0390)  MISSED
};

/// Class /Script/RemoteControl.RemoteControlPresetActor
/// Size: 0x02A0 (672 bytes) (0x000290 - 0x0002A0) align 8 MaxSize: 0x02A0
class ARemoteControlPresetActor : public AActor
{ 
public:
	class URemoteControlPreset*                        Preset;                                                     // 0x0290   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0298   (0x0008)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlTestStructInnerSimple
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FRemoteControlTestStructInnerSimple
{ 
	int32_t                                            Int32Value;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/RemoteControl.RemoteControlTestStructInner
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FRemoteControlTestStructInner
{ 
	int8_t                                             Int8Value;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FRemoteControlTestStructInnerSimple                InnerSimple;                                                // 0x0004   (0x0004)  
	int32_t                                            Int32Value;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x000C   (0x0010)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlTestStructOuter
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FRemoteControlTestStructOuter
{ 
	int8_t                                             Int8Value;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(80,1195) /* TSet<FRemoteControlTestStructInner> */ __um(StructInnerSet);                         // 0x0008   (0x0050)  
	int32_t                                            Int32Value;                                                 // 0x0058   (0x0004)  
	FRemoteControlTestStructInner                      RemoteControlTestStructInner;                               // 0x005C   (0x001C)  
};

/// Class /Script/RemoteControl.RemoteControlAPITestObject
/// Size: 0x02B8 (696 bytes) (0x000028 - 0x0002B8) align 8 MaxSize: 0x02B8
class URemoteControlAPITestObject : public UObject
{ 
public:
	int32_t                                            CStyleIntArray[3];                                          // 0x0028   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<int32_t>                                    IntArray;                                                   // 0x0038   (0x0010)  
	TArray<FRemoteControlTestStructOuter>              StructOuterArray;                                           // 0x0048   (0x0010)  
	SDK_UNDEFINED(80,1196) /* TSet<int32_t> */         __um(IntSet);                                               // 0x0058   (0x0050)  
	TMap<int32_t, int32_t>                             IntMap;                                                     // 0x00A8   (0x0050)  
	TMap<int32_t, FRemoteControlTestStructOuter>       StructOuterMap;                                             // 0x00F8   (0x0050)  
	TMap<FString, FColor>                              StringColorMap;                                             // 0x0148   (0x0050)  
	TArray<FVector>                                    ArrayOfVectors;                                             // 0x0198   (0x0010)  
	class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x01A8   (0x0008)  
	int8_t                                             Int8Value;                                                  // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x01B1   (0x0001)  MISSED
	int16_t                                            Int16Value;                                                 // 0x01B2   (0x0002)  
	int32_t                                            Int32Value;                                                 // 0x01B4   (0x0004)  
	float                                              FloatValue;                                                 // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x01BC   (0x0004)  MISSED
	double                                             DoubleValue;                                                // 0x01C0   (0x0008)  
	FRemoteControlTestStructOuter                      RemoteControlTestStructOuter;                               // 0x01C8   (0x0078)  
	FString                                            StringValue;                                                // 0x0240   (0x0010)  
	FName                                              NameValue;                                                  // 0x0250   (0x0008)  
	FText                                              TextValue;                                                  // 0x0258   (0x0018)  
	bool                                               bValue;                                                     // 0x0268   (0x0001)  
	char                                               ByteValue;                                                  // 0x0269   (0x0001)  
	TEnumAsByte<ERemoteControlEnum>                    RemoteControlEnumByteValue;                                 // 0x026A   (0x0001)  
	ERemoteControlEnumClass                            RemoteControlEnumValue;                                     // 0x026B   (0x0001)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x026C   (0x0004)  MISSED
	FVector                                            VectorValue;                                                // 0x0270   (0x0018)  
	FRotator                                           RotatorValue;                                               // 0x0288   (0x0018)  
	FColor                                             ColorValue;                                                 // 0x02A0   (0x0004)  
	FLinearColor                                       LinearColorValue;                                           // 0x02A4   (0x0010)  
	unsigned char                                      UnknownData04_7[0x4];                                       // 0x02B4   (0x0004)  MISSED
};

/// Class /Script/RemoteControl.RemoteControlPropertyIdRegistry
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class URemoteControlPropertyIdRegistry : public UObject
{ 
public:
	SDK_UNDEFINED(80,1197) /* TSet<FRCPropertyIdWrapper> */ __um(IdentifiedFields);                                // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0078   (0x0018)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlTestInnerStruct
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRemoteControlTestInnerStruct
{ 
	FColor                                             Color;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<float>                                      FloatArray;                                                 // 0x0008   (0x0010)  
	TArray<FVector>                                    ArrayOfVectors;                                             // 0x0018   (0x0010)  
};

/// Class /Script/RemoteControl.RemoteControlTestObject
/// Size: 0x0198 (408 bytes) (0x000028 - 0x000198) align 8 MaxSize: 0x0198
class URemoteControlTestObject : public UObject
{ 
public:
	int32_t                                            CStyleIntArray[3];                                          // 0x0028   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<int32_t>                                    IntArray;                                                   // 0x0038   (0x0010)  
	TArray<float>                                      FloatArray;                                                 // 0x0048   (0x0010)  
	SDK_UNDEFINED(80,1198) /* TSet<int32_t> */         __um(IntSet);                                               // 0x0058   (0x0050)  
	TMap<int32_t, int32_t>                             IntMap;                                                     // 0x00A8   (0x0050)  
	TMap<int32_t, FRemoteControlTestInnerStruct>       IntInnerStructMap;                                          // 0x00F8   (0x0050)  
	TMap<FString, FColor>                              StringColorMap;                                             // 0x0148   (0x0050)  
};

/// Struct /Script/RemoteControl.RemoteControlEntity
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FRemoteControlEntity
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TMap<FName, FString>                               UserMetadata;                                               // 0x0008   (0x0050)  
	SDK_UNDEFINED(16,1199) /* TArray<TWeakObjectPtr<URemoteControlBinding*>> */ __um(Bindings);                    // 0x0058   (0x0010)  
	TWeakObjectPtr<class URemoteControlPreset*>        Owner;                                                      // 0x0068   (0x0008)  
	FName                                              Label;                                                      // 0x0070   (0x0008)  
	FGuid                                              ID;                                                         // 0x0078   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0088   (0x0010)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlActor
/// Size: 0x00B8 (184 bytes) (0x000098 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FRemoteControlActor : FRemoteControlEntity
{ 
	FSoftObjectPath                                    Path;                                                       // 0x0098   (0x0020)  
};

/// Struct /Script/RemoteControl.RCEntityWrapper
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRCEntityWrapper
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/RemoteControl.RCFieldPathSegment
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FRCFieldPathSegment
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	int32_t                                            ArrayIndex;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            ValuePropertyName;                                          // 0x0010   (0x0010)  
	FString                                            MapKey;                                                     // 0x0020   (0x0010)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Struct /Script/RemoteControl.RCFieldPathInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRCFieldPathInfo
{ 
	TArray<FRCFieldPathSegment>                        Segments;                                                   // 0x0000   (0x0010)  
	uint32_t                                           PathHash;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlField
/// Size: 0x0140 (320 bytes) (0x000098 - 0x000140) align 8 MaxSize: 0x0140
struct FRemoteControlField : FRemoteControlEntity
{ 
	EExposedFieldType                                  FieldType;                                                  // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0099   (0x0003)  MISSED
	FName                                              FieldName;                                                  // 0x009C   (0x0008)  
	FName                                              PropertyID;                                                 // 0x00A4   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FRCFieldPathInfo                                   FieldPathInfo;                                              // 0x00B0   (0x0018)  
	SDK_UNDEFINED(80,1200) /* TSet<FRemoteControlProtocolBinding> */ __um(ProtocolBindings);                       // 0x00C8   (0x0050)  
	FSoftClassPath                                     OwnerClass;                                                 // 0x0118   (0x0020)  
	bool                                               bIsEditorOnly;                                              // 0x0138   (0x0001)  
	char                                               ActiveMasks;                                                // 0x0139   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6];                                       // 0x013A   (0x0006)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlProtocolBinding
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FRemoteControlProtocolBinding
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FName                                              ProtocolName;                                               // 0x0010   (0x0008)  
	FGuid                                              PropertyID;                                                 // 0x0018   (0x0010)  
	FName                                              MappingPropertyName;                                        // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlProperty
/// Size: 0x0148 (328 bytes) (0x000140 - 0x000148) align 8 MaxSize: 0x0148
struct FRemoteControlProperty : FRemoteControlField
{ 
	bool                                               bIsEditableInPackaged;                                      // 0x0140   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0141   (0x0007)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlFunction
/// Size: 0x0180 (384 bytes) (0x000140 - 0x000180) align 8 MaxSize: 0x0180
struct FRemoteControlFunction : FRemoteControlField
{ 
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0140   (0x0010)  MISSED
	bool                                               bIsCallableInPackaged;                                      // 0x0150   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0151   (0x0007)  MISSED
	FSoftObjectPath                                    FunctionPath;                                               // 0x0158   (0x0020)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0178   (0x0008)  MISSED
};

/// Struct /Script/RemoteControl.RCFieldMetadata
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FRCFieldMetadata
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_byte
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRCMetadata_byte : FRCFieldMetadata
{ 
	char                                               Min;                                                        // 0x0008   (0x0001)  
	char                                               Max;                                                        // 0x0009   (0x0001)  
	char                                               DefaultValue;                                               // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_uint16
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRCMetadata_uint16 : FRCFieldMetadata
{ 
	uint16_t                                           Min;                                                        // 0x0008   (0x0002)  
	uint16_t                                           Max;                                                        // 0x000A   (0x0002)  
	uint16_t                                           DefaultValue;                                               // 0x000C   (0x0002)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_uint32
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRCMetadata_uint32 : FRCFieldMetadata
{ 
	uint32_t                                           Min;                                                        // 0x0008   (0x0004)  
	uint32_t                                           Max;                                                        // 0x000C   (0x0004)  
	uint32_t                                           DefaultValue;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_uint64
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRCMetadata_uint64 : FRCFieldMetadata
{ 
	uint64_t                                           Min;                                                        // 0x0008   (0x0008)  
	uint64_t                                           Max;                                                        // 0x0010   (0x0008)  
	uint64_t                                           DefaultValue;                                               // 0x0018   (0x0008)  
};

/// Struct /Script/RemoteControl.RCMetadata_int8
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRCMetadata_int8 : FRCFieldMetadata
{ 
	int8_t                                             Min;                                                        // 0x0008   (0x0001)  
	int8_t                                             Max;                                                        // 0x0009   (0x0001)  
	int8_t                                             DefaultValue;                                               // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_int16
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRCMetadata_int16 : FRCFieldMetadata
{ 
	int16_t                                            Min;                                                        // 0x0008   (0x0002)  
	int16_t                                            Max;                                                        // 0x000A   (0x0002)  
	int16_t                                            DefaultValue;                                               // 0x000C   (0x0002)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_int32
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRCMetadata_int32 : FRCFieldMetadata
{ 
	int32_t                                            Min;                                                        // 0x0008   (0x0004)  
	int32_t                                            Max;                                                        // 0x000C   (0x0004)  
	int32_t                                            DefaultValue;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_int64
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRCMetadata_int64 : FRCFieldMetadata
{ 
	int64_t                                            Min;                                                        // 0x0008   (0x0008)  
	int64_t                                            Max;                                                        // 0x0010   (0x0008)  
	int64_t                                            DefaultValue;                                               // 0x0018   (0x0008)  
};

/// Struct /Script/RemoteControl.RCMetadata_float
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRCMetadata_float : FRCFieldMetadata
{ 
	float                                              Min;                                                        // 0x0008   (0x0004)  
	float                                              Max;                                                        // 0x000C   (0x0004)  
	float                                              DefaultValue;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_double
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRCMetadata_double : FRCFieldMetadata
{ 
	double                                             Min;                                                        // 0x0008   (0x0008)  
	double                                             Max;                                                        // 0x0010   (0x0008)  
	double                                             DefaultValue;                                               // 0x0018   (0x0008)  
};

/// Struct /Script/RemoteControl.RCMetadata_FString
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRCMetadata_FString : FRCFieldMetadata
{ 
	FString                                            DefaultValue;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/RemoteControl.RCMetadata_FName
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRCMetadata_FName : FRCFieldMetadata
{ 
	FName                                              DefaultValue;                                               // 0x0008   (0x0008)  
};

/// Struct /Script/RemoteControl.RCMetadata_UObject
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRCMetadata_UObject : FRCFieldMetadata
{ 
	TWeakObjectPtr<class UObject*>                     DefaultValue;                                               // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0010   (0x0020)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_UClass
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRCMetadata_UClass : FRCFieldMetadata
{ 
	TSoftObjectPtr<class UClass*>                      DefaultValue;                                               // 0x0008   (0x0028)  
};

/// Struct /Script/RemoteControl.RCMetadata_UScriptStruct
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRCMetadata_UScriptStruct : FRCFieldMetadata
{ 
	TWeakObjectPtr<class UScriptStruct*>               DefaultValue;                                               // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0010   (0x0020)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_bool
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRCMetadata_bool : FRCFieldMetadata
{ 
	bool                                               DefaultValue;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/RemoteControl.RCMetadata_FVector
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FRCMetadata_FVector : FRCFieldMetadata
{ 
	FVector                                            DefaultValue;                                               // 0x0008   (0x0018)  
	FVector                                            MinimumValue;                                               // 0x0020   (0x0018)  
	FVector                                            MaximumValue;                                               // 0x0038   (0x0018)  
};

/// Struct /Script/RemoteControl.RemoteControlOptionalExposeArgs
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRemoteControlOptionalExposeArgs
{ 
	FString                                            DisplayName;                                                // 0x0000   (0x0010)  
	FString                                            GroupName;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/RemoteControl.ColorWheelColorBase
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FColorWheelColorBase
{ 
	FVector2D                                          Position;                                                   // 0x0000   (0x0010)  
	double                                             Value;                                                      // 0x0010   (0x0008)  
};

/// Struct /Script/RemoteControl.ColorWheelColor
/// Size: 0x0020 (32 bytes) (0x000018 - 0x000020) align 8 MaxSize: 0x0020
struct FColorWheelColor : FColorWheelColorBase
{ 
	double                                             Alpha;                                                      // 0x0018   (0x0008)  
};

/// Struct /Script/RemoteControl.ColorGradingWheelColor
/// Size: 0x0020 (32 bytes) (0x000018 - 0x000020) align 8 MaxSize: 0x0020
struct FColorGradingWheelColor : FColorWheelColorBase
{ 
	double                                             Luminance;                                                  // 0x0018   (0x0008)  
};

/// Struct /Script/RemoteControl.RemoteControlInstanceMaterial
/// Size: 0x0198 (408 bytes) (0x000148 - 0x000198) align 8 MaxSize: 0x0198
struct FRemoteControlInstanceMaterial : FRemoteControlProperty
{ 
	class UClass*                                      OriginalClass;                                              // 0x0148   (0x0008)  
	FMaterialParameterInfo                             ParameterInfo;                                              // 0x0150   (0x0010)  
	FRCFieldPathInfo                                   OriginalFieldPathInfo;                                      // 0x0160   (0x0018)  
	FSoftObjectPath                                    InstancePath;                                               // 0x0178   (0x0020)  
};

/// Struct /Script/RemoteControl.RCPropertyIdWrapper
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FRCPropertyIdWrapper
{ 
	FGuid                                              EntityID;                                                   // 0x0000   (0x0010)  
	FName                                              PropertyID;                                                 // 0x0010   (0x0008)  
	FName                                              SuperType;                                                  // 0x0018   (0x0008)  
	FName                                              SubType;                                                    // 0x0020   (0x0008)  
};

/// Struct /Script/RemoteControl.RemoteControlProtocolMapping
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FRemoteControlProtocolMapping
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	TArray<char>                                       InterpolationRangePropertyData;                             // 0x0010   (0x0010)  
	TArray<char>                                       InterpolationMappingPropertyData;                           // 0x0020   (0x0010)  
	TArray<char>                                       InterpolationRangePropertyDataCache;                        // 0x0030   (0x0010)  
	TArray<char>                                       InterpolationMappingPropertyDataCache;                      // 0x0040   (0x0010)  
	int32_t                                            InterpolationMappingPropertyElementNum;                     // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_7[0x24];                                      // 0x0054   (0x0024)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlProtocolEntity
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FRemoteControlProtocolEntity
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TWeakObjectPtr<class URemoteControlPreset*>        Owner;                                                      // 0x0008   (0x0008)  
	FGuid                                              PropertyID;                                                 // 0x0010   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0020   (0x0008)  MISSED
	SDK_UNDEFINED(80,1201) /* TSet<FRemoteControlProtocolMapping> */ __um(Mappings);                               // 0x0028   (0x0050)  
	ERCMask                                            OverridenMasks;                                             // 0x0078   (0x0001)  
	ERCBindingStatus                                   BindingStatus;                                              // 0x0079   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6];                                       // 0x007A   (0x0006)  MISSED
};

/// Struct /Script/RemoteControl.RemoteControlTestStruct
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRemoteControlTestStruct
{ 
	bool                                               bSomeBool;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	uint32_t                                           SomeUInt32;                                                 // 0x0004   (0x0004)  
	float                                              SomeFloat;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            SomeVector;                                                 // 0x0010   (0x0018)  
	FRotator                                           SomeRotator;                                                // 0x0028   (0x0018)  
	int32_t                                            SomeClampedInt;                                             // 0x0040   (0x0004)  
	float                                              SomeClampedFloat;                                           // 0x0044   (0x0004)  
};

#pragma pack(pop)


