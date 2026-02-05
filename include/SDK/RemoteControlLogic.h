
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: RemoteControl
/// dependency: StructUtils

#pragma pack(push, 0x1)

/// Enum /Script/RemoteControlLogic.ERCBehaviourConditionType
/// Size: 0x01 (1 bytes)
enum class ERCBehaviourConditionType : uint8_t
{
	ERCBehaviourConditionType__IsEqual                                               = 0,
	ERCBehaviourConditionType__IsGreaterThan                                         = 1,
	ERCBehaviourConditionType__IsLesserThan                                          = 2,
	ERCBehaviourConditionType__IsGreaterThanOrEqualTo                                = 3,
	ERCBehaviourConditionType__IsLesserThanOrEqualTo                                 = 4,
	ERCBehaviourConditionType__Else                                                  = 5,
	ERCBehaviourConditionType__None                                                  = 6
};

/// Class /Script/RemoteControlLogic.RCAction
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class URCAction : public UObject
{ 
public:
	FGuid                                              ExposedFieldId;                                             // 0x0028   (0x0010)  
	FGuid                                              ID;                                                         // 0x0038   (0x0010)  
	TWeakObjectPtr<class URemoteControlPreset*>        PresetWeakPtr;                                              // 0x0048   (0x0008)  
};

/// Class /Script/RemoteControlLogic.RCActionContainer
/// Size: 0x00E8 (232 bytes) (0x000028 - 0x0000E8) align 8 MaxSize: 0x00E8
class URCActionContainer : public UObject
{ 
public:
	SDK_UNDEFINED(80,1238) /* TSet<URCActionContainer*> */ __um(ActionContainers);                                 // 0x0028   (0x0050)  
	TWeakObjectPtr<class URemoteControlPreset*>        PresetWeakPtr;                                              // 0x0078   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0080   (0x0018)  MISSED
	SDK_UNDEFINED(80,1239) /* TSet<URCAction*> */      __um(Actions);                                              // 0x0098   (0x0050)  
};

/// Class /Script/RemoteControlLogic.RCBehaviour
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class URCBehaviour : public UObject
{ 
public:
	class UClass*                                      BehaviourNodeClass;                                         // 0x0028   (0x0008)  
	FSoftClassPath                                     OverrideBehaviourBlueprintClassPath;                        // 0x0030   (0x0020)  
	FGuid                                              ID;                                                         // 0x0050   (0x0010)  
	class URCActionContainer*                          ActionContainer;                                            // 0x0060   (0x0008)  
	TWeakObjectPtr<class URCController*>               ControllerWeakPtr;                                          // 0x0068   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0070   (0x0008)  MISSED
	class URCBehaviourNode*                            CachedBehaviourNode;                                        // 0x0078   (0x0008)  
	bool                                               bIsEnabled;                                                 // 0x0080   (0x0001)  
	bool                                               bExecuteBehavioursDuringPreChange;                          // 0x0081   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0082   (0x0006)  MISSED
};

/// Class /Script/RemoteControlLogic.RCBehaviourBind
/// Size: 0x0090 (144 bytes) (0x000088 - 0x000090) align 8 MaxSize: 0x0090
class URCBehaviourBind : public URCBehaviour
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Class /Script/RemoteControlLogic.RCBehaviourNode
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class URCBehaviourNode : public UObject
{ 
public:
	FText                                              DisplayName;                                                // 0x0028   (0x0018)  
	FText                                              BehaviorDescription;                                        // 0x0038   (0x0018)  
};

/// Class /Script/RemoteControlLogic.RCBehaviourBindNode
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class URCBehaviourBindNode : public URCBehaviourNode
{ 
public:


	/// Functions
	// Function /Script/RemoteControlLogic.RCBehaviourBindNode.OnPassed
	// void OnPassed(class URCBehaviour* InBehaviour);                                                                          // [0x545dc30] Native|Event|Public|BlueprintCallable|BlueprintEvent|Const 
	// Function /Script/RemoteControlLogic.RCBehaviourBindNode.IsSupported
	// bool IsSupported(class URCBehaviour* InBehaviour);                                                                       // [0x7a4cb50] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RemoteControlLogic.RCBehaviourBindNode.Execute
	// bool Execute(class URCBehaviour* InBehaviour);                                                                           // [0x7a4cab0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/RemoteControlLogic.RCBehaviourBlueprintNode
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class URCBehaviourBlueprintNode : public URCBehaviourNode
{ 
public:


	/// Functions
	// Function /Script/RemoteControlLogic.RCBehaviourBlueprintNode.PreExecute
	// void PreExecute(class URCBehaviour* InBehaviour);                                                                        // [0x7a4cd30] Native|Event|Public|BlueprintCallable|BlueprintEvent|Const 
	// Function /Script/RemoteControlLogic.RCBehaviourBlueprintNode.OnPassed
	// void OnPassed(class URCBehaviour* InBehaviour);                                                                          // [0x545dc30] Native|Event|Public|BlueprintCallable|BlueprintEvent|Const 
	// Function /Script/RemoteControlLogic.RCBehaviourBlueprintNode.IsSupported
	// bool IsSupported(class URCBehaviour* InBehaviour);                                                                       // [0x7a4cbf0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RemoteControlLogic.RCBehaviourBlueprintNode.Execute
	// bool Execute(class URCBehaviour* InBehaviour);                                                                           // [0x7a4cab0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Struct /Script/RemoteControlLogic.RCBehaviourCondition
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRCBehaviourCondition
{ 
	ERCBehaviourConditionType                          conditionType;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class URCVirtualPropertySelfContainer*             Comparand;                                                  // 0x0008   (0x0008)  
};

/// Class /Script/RemoteControlLogic.RCBehaviourConditional
/// Size: 0x00E0 (224 bytes) (0x000088 - 0x0000E0) align 8 MaxSize: 0x00E0
class URCBehaviourConditional : public URCBehaviour
{ 
public:
	TMap<class URCAction*, FRCBehaviourCondition>      Conditions;                                                 // 0x0088   (0x0050)  
	class URCVirtualPropertySelfContainer*             Comparand;                                                  // 0x00D8   (0x0008)  
};

/// Class /Script/RemoteControlLogic.RCBehaviourConditionalNode
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class URCBehaviourConditionalNode : public URCBehaviourNode
{ 
public:


	/// Functions
	// Function /Script/RemoteControlLogic.RCBehaviourConditionalNode.OnPassed
	// void OnPassed(class URCBehaviour* InBehaviour);                                                                          // [0x545dc30] Native|Event|Public|BlueprintCallable|BlueprintEvent|Const 
	// Function /Script/RemoteControlLogic.RCBehaviourConditionalNode.IsSupported
	// bool IsSupported(class URCBehaviour* InBehaviour);                                                                       // [0x7a4cb50] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RemoteControlLogic.RCBehaviourConditionalNode.Execute
	// bool Execute(class URCBehaviour* InBehaviour);                                                                           // [0x7a4cab0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/RemoteControlLogic.RCBehaviourOnValueChangedNode
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class URCBehaviourOnValueChangedNode : public URCBehaviourNode
{ 
public:


	/// Functions
	// Function /Script/RemoteControlLogic.RCBehaviourOnValueChangedNode.IsSupported
	// bool IsSupported(class URCBehaviour* InBehaviour);                                                                       // [0x7a4cc90] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RemoteControlLogic.RCBehaviourOnValueChangedNode.Execute
	// bool Execute(class URCBehaviour* InBehaviour);                                                                           // [0x7a4cb50] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/RemoteControlLogic.RCBehaviourRangeMapNode
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class URCBehaviourRangeMapNode : public URCBehaviourNode
{ 
public:


	/// Functions
	// Function /Script/RemoteControlLogic.RCBehaviourRangeMapNode.OnPassed
	// void OnPassed(class URCBehaviour* InBehaviour);                                                                          // [0x545dc30] Native|Event|Public|BlueprintCallable|BlueprintEvent|Const 
	// Function /Script/RemoteControlLogic.RCBehaviourRangeMapNode.IsSupported
	// bool IsSupported(class URCBehaviour* InBehaviour);                                                                       // [0x7a4cb50] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RemoteControlLogic.RCBehaviourRangeMapNode.Execute
	// bool Execute(class URCBehaviour* InBehaviour);                                                                           // [0x7a4cab0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/RemoteControlLogic.RCBehaviourSetAssetByPathNode
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class URCBehaviourSetAssetByPathNode : public URCBehaviourNode
{ 
public:


	/// Functions
	// Function /Script/RemoteControlLogic.RCBehaviourSetAssetByPathNode.IsSupported
	// bool IsSupported(class URCBehaviour* InBehaviour);                                                                       // [0x7a4cc90] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RemoteControlLogic.RCBehaviourSetAssetByPathNode.Execute
	// bool Execute(class URCBehaviour* InBehaviour);                                                                           // [0x7a4cb50] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/RemoteControlLogic.RCController
/// Size: 0x0130 (304 bytes) (0x0000C8 - 0x000130) align 8 MaxSize: 0x0130
class URCController : public URCVirtualPropertyInContainer
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x00C8   (0x0018)  MISSED
	SDK_UNDEFINED(80,1240) /* TSet<URCBehaviour*> */   __um(Behaviours);                                           // 0x00E0   (0x0050)  
};

/// Class /Script/RemoteControlLogic.RCControllerContainer
/// Size: 0x0158 (344 bytes) (0x0000F8 - 0x000158) align 8 MaxSize: 0x0158
class URCControllerContainer : public URCVirtualPropertyContainerBase
{ 
public:
	float                                              VectorSliderDelta;                                          // 0x00F8   (0x0004)  
	float                                              VectorLinearDeltaSensitivity;                               // 0x00FC   (0x0004)  
	float                                              RotatorSliderDelta;                                         // 0x0100   (0x0004)  
	float                                              RotatorLinearDeltaSensitivity;                              // 0x0104   (0x0004)  
	SDK_UNDEFINED(80,1241) /* TSet<URCActionContainer*> */ __um(SharedActionContainers);                           // 0x0108   (0x0050)  
};

/// Class /Script/RemoteControlLogic.RCFunctionAction
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class URCFunctionAction : public URCAction
{ 
public:
};

/// Class /Script/RemoteControlLogic.RCPropertyAction
/// Size: 0x0058 (88 bytes) (0x000050 - 0x000058) align 8 MaxSize: 0x0058
class URCPropertyAction : public URCAction
{ 
public:
	class URCVirtualPropertySelfContainer*             PropertySelfContainer;                                      // 0x0050   (0x0008)  
};

/// Class /Script/RemoteControlLogic.RCPropertyBindAction
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align 8 MaxSize: 0x0060
class URCPropertyBindAction : public URCPropertyAction
{ 
public:
	class URCController*                               Controller;                                                 // 0x0058   (0x0008)  
};

/// Struct /Script/RemoteControlLogic.PropertyIdContainerKey
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPropertyIdContainerKey
{ 
	FName                                              PropertyID;                                                 // 0x0000   (0x0008)  
	FName                                              ContainerName;                                              // 0x0008   (0x0008)  
};

/// Class /Script/RemoteControlLogic.RCPropertyIdAction
/// Size: 0x0148 (328 bytes) (0x000050 - 0x000148) align 8 MaxSize: 0x0148
class URCPropertyIdAction : public URCAction
{ 
public:
	FName                                              PropertyID;                                                 // 0x0050   (0x0008)  
	TMap<FPropertyIdContainerKey, class URCVirtualPropertySelfContainer*> PropertySelfContainer;                   // 0x0058   (0x0050)  
	TMap<FPropertyIdContainerKey, class URCVirtualPropertySelfContainer*> CachedPropertySelfContainer;             // 0x00A8   (0x0050)  
	TMap<FGuid, class URCVirtualPropertySelfContainer*> RealPropertySelfContainer;                                 // 0x00F8   (0x0050)  
};

/// Struct /Script/RemoteControlLogic.RCRangeMapInput
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRCRangeMapInput
{ 
	class URCVirtualPropertySelfContainer*             InputProperty;                                              // 0x0000   (0x0008)  
	class URCVirtualPropertySelfContainer*             PropertyValue;                                              // 0x0008   (0x0008)  
};

/// Class /Script/RemoteControlLogic.RCRangeMapBehaviour
/// Size: 0x00F8 (248 bytes) (0x000088 - 0x0000F8) align 8 MaxSize: 0x00F8
class URCRangeMapBehaviour : public URCBehaviour
{ 
public:
	class URCVirtualPropertyContainerBase*             PropertyContainer;                                          // 0x0088   (0x0008)  
	TMap<class URCAction*, FRCRangeMapInput>           RangeMapActionContainer;                                    // 0x0090   (0x0050)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00E0   (0x0018)  MISSED
};

/// Struct /Script/RemoteControlLogic.RCAssetPathElement
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRCAssetPathElement
{ 
	bool                                               bIsInput;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Path;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/RemoteControlLogic.RCSetAssetPath
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRCSetAssetPath
{ 
	TArray<FRCAssetPathElement>                        AssetPath;                                                  // 0x0000   (0x0010)  
	TArray<FString>                                    PathArray;                                                  // 0x0010   (0x0010)  
};

/// Class /Script/RemoteControlLogic.RCSetAssetByPathBehaviour
/// Size: 0x00E0 (224 bytes) (0x000088 - 0x0000E0) align 8 MaxSize: 0x00E0
class URCSetAssetByPathBehaviour : public URCBehaviour
{ 
public:
	class URCVirtualPropertyContainerBase*             PropertyInContainer;                                        // 0x0088   (0x0008)  
	class UClass*                                      AssetClass;                                                 // 0x0090   (0x0008)  
	FRCSetAssetPath                                    PathStruct;                                                 // 0x0098   (0x0020)  
	bool                                               bInternal;                                                  // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B9   (0x0003)  MISSED
	FGuid                                              TargetEntityId;                                             // 0x00BC   (0x0010)  
	unsigned char                                      UnknownData01_7[0x14];                                      // 0x00CC   (0x0014)  MISSED
};

/// Class /Script/RemoteControlLogic.RemoteControlLogicConfig
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class URemoteControlLogicConfig : public UObject
{ 
public:
	TArray<EPropertyBagPropertyType>                   SupportedControllerTypes;                                   // 0x0028   (0x0010)  
	TArray<FName>                                      SupportedControllerStructTypes;                             // 0x0038   (0x0010)  
	TArray<FName>                                      SupportedControllerObjectClassPaths;                        // 0x0048   (0x0010)  
	TArray<FName>                                      SupportedControllerCustomTypes;                             // 0x0058   (0x0010)  
};

/// Class /Script/RemoteControlLogic.RemoteControlLogicTestData
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class URemoteControlLogicTestData : public UObject
{ 
public:
	FColor                                             Color;                                                      // 0x0028   (0x0004)  
	int32_t                                            TestInt;                                                    // 0x002C   (0x0004)  


	/// Functions
	// Function /Script/RemoteControlLogic.RemoteControlLogicTestData.TestIntFunction
	// void TestIntFunction();                                                                                                  // [0x7a4cdc0] Final|Native|Public|BlueprintCallable 
};

#pragma pack(pop)


