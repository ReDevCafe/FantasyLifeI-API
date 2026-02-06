
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: RemoteControl

#pragma pack(push, 0x1)

/// Enum /Script/WebRemoteControl.ERemoteControlEvent
/// Size: 0x01 (1 bytes)
enum class ERemoteControlEvent : uint8_t
{
	ERemoteControlEvent__PreObjectPropertyChanged                                    = 0,
	ERemoteControlEvent__ObjectPropertyChanged                                       = 1,
	ERemoteControlEvent__EventCount                                                  = 2
};

/// Enum /Script/WebRemoteControl.ERemoteControlHttpVerbs
/// Size: 0x02 (2 bytes)
enum class ERemoteControlHttpVerbs : uint16_t
{
	ERemoteControlHttpVerbs__None                                                    = 0,
	ERemoteControlHttpVerbs__Get                                                     = 1,
	ERemoteControlHttpVerbs__Post                                                    = 2,
	ERemoteControlHttpVerbs__Put                                                     = 4,
	ERemoteControlHttpVerbs__Patch                                                   = 8,
	ERemoteControlHttpVerbs__Delete                                                  = 16,
	ERemoteControlHttpVerbs__Options                                                 = 32
};

/// Class /Script/WebRemoteControl.WebRCStructRegistry
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UWebRCStructRegistry : public UEngineSubsystem
{ 
public:
	TMap<FName, class UScriptStruct*>                  CachedStructs;                                              // 0x0030   (0x0050)  
};

/// Struct /Script/WebRemoteControl.RCObjectDescription
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRCObjectDescription
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Class;                                                      // 0x0010   (0x0010)  
	FString                                            Path;                                                       // 0x0020   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCPropertyDescription
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FRCPropertyDescription
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FText                                              DisplayName;                                                // 0x0010   (0x0018)  
	FString                                            Description;                                                // 0x0020   (0x0010)  
	FString                                            Type;                                                       // 0x0030   (0x0010)  
	FName                                              TypePath;                                                   // 0x0040   (0x0008)  
	FString                                            ContainerType;                                              // 0x0048   (0x0010)  
	FString                                            KeyType;                                                    // 0x0058   (0x0010)  
	TMap<FName, FString>                               MetaData;                                                   // 0x0068   (0x0050)  
};

/// Struct /Script/WebRemoteControl.RCFunctionDescription
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRCFunctionDescription
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Description;                                                // 0x0010   (0x0010)  
	TArray<FRCPropertyDescription>                     Arguments;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCExposedPropertyDescription
/// Size: 0x0130 (304 bytes) (0x000000 - 0x000130) align 8 MaxSize: 0x0130
struct FRCExposedPropertyDescription
{ 
	FName                                              DisplayName;                                                // 0x0000   (0x0008)  
	FString                                            ID;                                                         // 0x0008   (0x0010)  
	FRCPropertyDescription                             UnderlyingProperty;                                         // 0x0018   (0x00B8)  
	TMap<FName, FString>                               MetaData;                                                   // 0x00D0   (0x0050)  
	TArray<FRCObjectDescription>                       OwnerObjects;                                               // 0x0120   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCExposedFunctionDescription
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FRCExposedFunctionDescription
{ 
	FName                                              DisplayName;                                                // 0x0000   (0x0008)  
	FString                                            ID;                                                         // 0x0008   (0x0010)  
	FRCFunctionDescription                             UnderlyingFunction;                                         // 0x0018   (0x0030)  
	TArray<FRCObjectDescription>                       OwnerObjects;                                               // 0x0048   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCExposedActorDescription
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRCExposedActorDescription
{ 
	FName                                              DisplayName;                                                // 0x0000   (0x0008)  
	FString                                            ID;                                                         // 0x0008   (0x0010)  
	FRCObjectDescription                               UnderlyingActor;                                            // 0x0018   (0x0030)  
};

/// Struct /Script/WebRemoteControl.RCControllerDescription
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FRCControllerDescription
{ 
	FName                                              DisplayName;                                                // 0x0000   (0x0008)  
	FText                                              Description;                                                // 0x0008   (0x0018)  
	FString                                            ID;                                                         // 0x0018   (0x0010)  
	FString                                            Type;                                                       // 0x0028   (0x0010)  
	FString                                            Path;                                                       // 0x0038   (0x0010)  
	TMap<FName, FString>                               MetaData;                                                   // 0x0048   (0x0050)  
};

/// Struct /Script/WebRemoteControl.RCControllerModifiedDescription
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRCControllerModifiedDescription
{ 
	TArray<FRCControllerDescription>                   Controllers;                                                // 0x0000   (0x0010)  
	TArray<FString>                                    ChangedValues;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCPresetLayoutGroupDescription
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FRCPresetLayoutGroupDescription
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	TArray<FRCExposedPropertyDescription>              ExposedProperties;                                          // 0x0008   (0x0010)  
	TArray<FRCExposedFunctionDescription>              ExposedFunctions;                                           // 0x0018   (0x0010)  
	TArray<FRCExposedActorDescription>                 ExposedActors;                                              // 0x0028   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCPresetModifiedEntitiesDescription
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRCPresetModifiedEntitiesDescription
{ 
	TArray<FRCExposedPropertyDescription>              ModifiedRCProperties;                                       // 0x0000   (0x0010)  
	TArray<FRCExposedFunctionDescription>              ModifiedRCFunctions;                                        // 0x0010   (0x0010)  
	TArray<FRCExposedActorDescription>                 ModifiedRCActors;                                           // 0x0020   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCPresetDescription
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FRCPresetDescription
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Path;                                                       // 0x0010   (0x0010)  
	FString                                            ID;                                                         // 0x0020   (0x0010)  
	TArray<FRCPresetLayoutGroupDescription>            Groups;                                                     // 0x0030   (0x0010)  
	TArray<FRCControllerDescription>                   Controllers;                                                // 0x0040   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCShortPresetDescription
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRCShortPresetDescription
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FString                                            ID;                                                         // 0x0008   (0x0010)  
	FName                                              Path;                                                       // 0x0018   (0x0008)  
};

/// Struct /Script/WebRemoteControl.RCAssetDescription
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FRCAssetDescription
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              Class;                                                      // 0x0008   (0x0008)  
	FName                                              Path;                                                       // 0x0010   (0x0008)  
	TMap<FName, FString>                               MetaData;                                                   // 0x0018   (0x0050)  
};

/// Struct /Script/WebRemoteControl.RCPresetFieldRenamed
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FRCPresetFieldRenamed
{ 
	FName                                              OldFieldLabel;                                              // 0x0000   (0x0008)  
	FName                                              NewFieldLabel;                                              // 0x0008   (0x0008)  
};

/// Struct /Script/WebRemoteControl.RCAssetFilter
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FRCAssetFilter
{ 
	TArray<FName>                                      PackageNames;                                               // 0x0000   (0x0010)  
	TArray<FName>                                      PackagePaths;                                               // 0x0010   (0x0010)  
	TArray<FName>                                      ClassNames;                                                 // 0x0020   (0x0010)  
	SDK_UNDEFINED(80,1247) /* TSet<FName> */           __um(RecursiveClassesExclusionSet);                         // 0x0030   (0x0050)  
	TArray<FName>                                      NativeParentClasses;                                        // 0x0080   (0x0010)  
	bool                                               RecursiveClasses;                                           // 0x0090   (0x0001)  
	bool                                               RecursivePaths;                                             // 0x0091   (0x0001)  
	bool                                               EnableBlueprintNativeClassFiltering;                        // 0x0092   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x0093   (0x0005)  MISSED
};

/// Struct /Script/WebRemoteControl.RCActorDescription
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRCActorDescription
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Path;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCRequest
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FRCRequest
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FString                                            Passphrase;                                                 // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_7[0x60];                                      // 0x0018   (0x0060)  MISSED
};

/// Struct /Script/WebRemoteControl.RCRequestWrapper
/// Size: 0x0098 (152 bytes) (0x000078 - 0x000098) align 8 MaxSize: 0x0098
struct FRCRequestWrapper : FRCRequest
{ 
	FString                                            URL;                                                        // 0x0078   (0x0010)  
	FName                                              Verb;                                                       // 0x0088   (0x0008)  
	int32_t                                            RequestID;                                                  // 0x0090   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/WebRemoteControl.RCBatchRequest
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FRCBatchRequest : FRCRequest
{ 
	TArray<FRCRequestWrapper>                          Requests;                                                   // 0x0078   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RemoteControlObjectEventHookRequest
/// Size: 0x00A0 (160 bytes) (0x000078 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRemoteControlObjectEventHookRequest : FRCRequest
{ 
	ERemoteControlEvent                                EventType;                                                  // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	FString                                            ObjectPath;                                                 // 0x0080   (0x0010)  
	FString                                            PropertyName;                                               // 0x0090   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCCallRequest
/// Size: 0x00A0 (160 bytes) (0x000078 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRCCallRequest : FRCRequest
{ 
	FString                                            ObjectPath;                                                 // 0x0078   (0x0010)  
	FString                                            FunctionName;                                               // 0x0088   (0x0010)  
	bool                                               GenerateTransaction;                                        // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/WebRemoteControl.RCObjectRequest
/// Size: 0x00A0 (160 bytes) (0x000078 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRCObjectRequest : FRCRequest
{ 
	FString                                            ObjectPath;                                                 // 0x0078   (0x0010)  
	FString                                            PropertyName;                                               // 0x0088   (0x0010)  
	bool                                               ResetToDefault;                                             // 0x0098   (0x0001)  
	bool                                               GenerateTransaction;                                        // 0x0099   (0x0001)  
	ERCModifyOperation                                 Operation;                                                  // 0x009A   (0x0001)  
	ERCAccess                                          Access;                                                     // 0x009B   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/WebRemoteControl.RCPresetSetPropertyRequest
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
struct FRCPresetSetPropertyRequest : FRCRequest
{ 
	ERCModifyOperation                                 Operation;                                                  // 0x0078   (0x0001)  
	bool                                               GenerateTransaction;                                        // 0x0079   (0x0001)  
	bool                                               ResetToDefault;                                             // 0x007A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x007B   (0x0005)  MISSED
};

/// Struct /Script/WebRemoteControl.RCPresetCallRequest
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
struct FRCPresetCallRequest : FRCRequest
{ 
	bool                                               GenerateTransaction;                                        // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/WebRemoteControl.RCPresetExposePropertyRequest
/// Size: 0x00C0 (192 bytes) (0x000078 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FRCPresetExposePropertyRequest : FRCRequest
{ 
	FString                                            ObjectPath;                                                 // 0x0078   (0x0010)  
	FString                                            PropertyName;                                               // 0x0088   (0x0010)  
	FString                                            Label;                                                      // 0x0098   (0x0010)  
	FString                                            GroupName;                                                  // 0x00A8   (0x0010)  
	bool                                               EnableEditCondition;                                        // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Struct /Script/WebRemoteControl.DescribeObjectRequest
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FDescribeObjectRequest : FRCRequest
{ 
	FString                                            ObjectPath;                                                 // 0x0078   (0x0010)  
};

/// Struct /Script/WebRemoteControl.SearchAssetRequest
/// Size: 0x0128 (296 bytes) (0x000078 - 0x000128) align 8 MaxSize: 0x0128
struct FSearchAssetRequest : FRCRequest
{ 
	FString                                            Query;                                                      // 0x0078   (0x0010)  
	FRCAssetFilter                                     Filter;                                                     // 0x0088   (0x0098)  
	int32_t                                            Limit;                                                      // 0x0120   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0124   (0x0004)  MISSED
};

/// Struct /Script/WebRemoteControl.SearchActorRequest
/// Size: 0x00A0 (160 bytes) (0x000078 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FSearchActorRequest : FRCRequest
{ 
	FString                                            Query;                                                      // 0x0078   (0x0010)  
	FString                                            Class;                                                      // 0x0088   (0x0010)  
	int32_t                                            Limit;                                                      // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/WebRemoteControl.SearchObjectRequest
/// Size: 0x00B0 (176 bytes) (0x000078 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FSearchObjectRequest : FRCRequest
{ 
	FString                                            Query;                                                      // 0x0078   (0x0010)  
	FString                                            Class;                                                      // 0x0088   (0x0010)  
	FString                                            Outer;                                                      // 0x0098   (0x0010)  
	int32_t                                            Limit;                                                      // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/WebRemoteControl.SetPresetMetadataRequest
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FSetPresetMetadataRequest : FRCRequest
{ 
	FString                                            Value;                                                      // 0x0078   (0x0010)  
};

/// Struct /Script/WebRemoteControl.SetEntityMetadataRequest
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FSetEntityMetadataRequest : FRCRequest
{ 
	FString                                            Value;                                                      // 0x0078   (0x0010)  
};

/// Struct /Script/WebRemoteControl.SetEntityLabelRequest
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FSetEntityLabelRequest : FRCRequest
{ 
	FString                                            NewLabel;                                                   // 0x0078   (0x0010)  
};

/// Struct /Script/WebRemoteControl.GetObjectThumbnailRequest
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FGetObjectThumbnailRequest : FRCRequest
{ 
	FString                                            ObjectPath;                                                 // 0x0078   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCWebSocketRequest
/// Size: 0x00A0 (160 bytes) (0x000078 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRCWebSocketRequest : FRCRequest
{ 
	FString                                            MessageName;                                                // 0x0078   (0x0010)  
	int32_t                                            ID;                                                         // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	FString                                            ForwardedFor;                                               // 0x0090   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCWebSocketBatchRequest
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FRCWebSocketBatchRequest : FRCRequest
{ 
	TArray<FRCWebSocketRequest>                        Requests;                                                   // 0x0078   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCWebSocketPresetRegisterBody
/// Size: 0x0090 (144 bytes) (0x000078 - 0x000090) align 8 MaxSize: 0x0090
struct FRCWebSocketPresetRegisterBody : FRCRequest
{ 
	FString                                            PresetName;                                                 // 0x0078   (0x0010)  
	bool                                               IgnoreRemoteChanges;                                        // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Struct /Script/WebRemoteControl.RCWebSocketTransientPresetAutoDestroyBody
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FRCWebSocketTransientPresetAutoDestroyBody : FRCRequest
{ 
	FString                                            PresetName;                                                 // 0x0078   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCWebSocketActorRegisterBody
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
struct FRCWebSocketActorRegisterBody : FRCRequest
{ 
	FName                                              ClassName;                                                  // 0x0078   (0x0008)  
};

/// Struct /Script/WebRemoteControl.RCWebSocketPresetSetPropertyBody
/// Size: 0x00A0 (160 bytes) (0x000078 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRCWebSocketPresetSetPropertyBody : FRCRequest
{ 
	FName                                              PresetName;                                                 // 0x0078   (0x0008)  
	FName                                              PropertyLabel;                                              // 0x0080   (0x0008)  
	ERCModifyOperation                                 Operation;                                                  // 0x0088   (0x0001)  
	ERCTransactionMode                                 TransactionMode;                                            // 0x0089   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x008A   (0x0002)  MISSED
	int32_t                                            TransactionId;                                              // 0x008C   (0x0004)  
	bool                                               ResetToDefault;                                             // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	int64_t                                            SequenceNumber;                                             // 0x0098   (0x0008)  
};

/// Struct /Script/WebRemoteControl.RCWebSocketCallBody
/// Size: 0x00B0 (176 bytes) (0x0000A0 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FRCWebSocketCallBody : FRCCallRequest
{ 
	ERCTransactionMode                                 TransactionMode;                                            // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A1   (0x0003)  MISSED
	int32_t                                            TransactionId;                                              // 0x00A4   (0x0004)  
	int64_t                                            SequenceNumber;                                             // 0x00A8   (0x0008)  
};

/// Struct /Script/WebRemoteControl.RCWebSocketTransactionStartBody
/// Size: 0x0090 (144 bytes) (0x000078 - 0x000090) align 8 MaxSize: 0x0090
struct FRCWebSocketTransactionStartBody : FRCRequest
{ 
	FString                                            Description;                                                // 0x0078   (0x0010)  
	int32_t                                            TransactionId;                                              // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/WebRemoteControl.RCWebSocketTransactionEndBody
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
struct FRCWebSocketTransactionEndBody : FRCRequest
{ 
	int32_t                                            TransactionId;                                              // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/WebRemoteControl.RCWebSocketCompressionChangeBody
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
struct FRCWebSocketCompressionChangeBody : FRCRequest
{ 
	ERCWebSocketCompressionMode                        Mode;                                                       // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/WebRemoteControl.RCPresetSetControllerRequest
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FRCPresetSetControllerRequest : FRCRequest
{ 
	FString                                            ControllerName;                                             // 0x0078   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RemoteControlRouteDescription
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRemoteControlRouteDescription
{ 
	FString                                            Path;                                                       // 0x0000   (0x0010)  
	ERemoteControlHttpVerbs                            Verb;                                                       // 0x0010   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0012   (0x0006)  MISSED
	FString                                            Description;                                                // 0x0018   (0x0010)  
};

/// Struct /Script/WebRemoteControl.APIInfoResponse
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FAPIInfoResponse
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<FRemoteControlRouteDescription>             HttpRoutes;                                                 // 0x0008   (0x0010)  
	FRCShortPresetDescription                          ActivePreset;                                               // 0x0018   (0x0020)  
};

/// Struct /Script/WebRemoteControl.ListPresetsResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FListPresetsResponse
{ 
	TArray<FRCShortPresetDescription>                  Presets;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/WebRemoteControl.GetPresetResponse
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGetPresetResponse
{ 
	FRCPresetDescription                               Preset;                                                     // 0x0000   (0x0050)  
};

/// Struct /Script/WebRemoteControl.CheckPassphraseResponse
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FCheckPassphraseResponse
{ 
	bool                                               keyCorrect;                                                 // 0x0000   (0x0001)  
};

/// Struct /Script/WebRemoteControl.DescribeObjectResponse
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FDescribeObjectResponse
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	class UClass*                                      Class;                                                      // 0x0010   (0x0008)  
	TArray<FRCPropertyDescription>                     Properties;                                                 // 0x0018   (0x0010)  
	TArray<FRCFunctionDescription>                     Functions;                                                  // 0x0028   (0x0010)  
};

/// Struct /Script/WebRemoteControl.SearchAssetResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSearchAssetResponse
{ 
	TArray<FRCAssetDescription>                        Assets;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/WebRemoteControl.SearchActorResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSearchActorResponse
{ 
	TArray<FRCObjectDescription>                       Actors;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/WebRemoteControl.GetMetadataFieldResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGetMetadataFieldResponse
{ 
	FString                                            Value;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/WebRemoteControl.GetMetadataResponse
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGetMetadataResponse
{ 
	TMap<FString, FString>                             MetaData;                                                   // 0x0000   (0x0050)  
};

/// Struct /Script/WebRemoteControl.SetEntityLabelResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSetEntityLabelResponse
{ 
	FString                                            AssignedLabel;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCPresetFieldsRenamedEvent
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FRCPresetFieldsRenamedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FName                                              PresetName;                                                 // 0x0010   (0x0008)  
	FString                                            PresetId;                                                   // 0x0018   (0x0010)  
	TArray<FRCPresetFieldRenamed>                      RenamedFields;                                              // 0x0028   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCPresetMetadataModified
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FRCPresetMetadataModified
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FName                                              PresetName;                                                 // 0x0010   (0x0008)  
	FString                                            PresetId;                                                   // 0x0018   (0x0010)  
	TMap<FString, FString>                             MetaData;                                                   // 0x0028   (0x0050)  
};

/// Struct /Script/WebRemoteControl.RCPresetLayoutModified
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FRCPresetLayoutModified
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FRCPresetDescription                               Preset;                                                     // 0x0010   (0x0050)  
};

/// Struct /Script/WebRemoteControl.RCPresetFieldsRemovedEvent
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRCPresetFieldsRemovedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FName                                              PresetName;                                                 // 0x0010   (0x0008)  
	FString                                            PresetId;                                                   // 0x0018   (0x0010)  
	TArray<FName>                                      RemovedFields;                                              // 0x0028   (0x0010)  
	TArray<FString>                                    RemovedFieldIds;                                            // 0x0038   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCPresetFieldsAddedEvent
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FRCPresetFieldsAddedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FName                                              PresetName;                                                 // 0x0010   (0x0008)  
	FString                                            PresetId;                                                   // 0x0018   (0x0010)  
	FRCPresetDescription                               Description;                                                // 0x0028   (0x0050)  
};

/// Struct /Script/WebRemoteControl.RCPresetEntitiesModifiedEvent
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FRCPresetEntitiesModifiedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FName                                              PresetName;                                                 // 0x0010   (0x0008)  
	FString                                            PresetId;                                                   // 0x0018   (0x0010)  
	FRCPresetModifiedEntitiesDescription               ModifiedEntities;                                           // 0x0028   (0x0030)  
};

/// Struct /Script/WebRemoteControl.RCPresetControllersRenamedEvent
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FRCPresetControllersRenamedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FName                                              PresetName;                                                 // 0x0010   (0x0008)  
	FString                                            PresetId;                                                   // 0x0018   (0x0010)  
	TArray<FRCPresetFieldRenamed>                      RenamedControllers;                                         // 0x0028   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCPresetControllersRemovedEvent
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRCPresetControllersRemovedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FName                                              PresetName;                                                 // 0x0010   (0x0008)  
	FString                                            PresetId;                                                   // 0x0018   (0x0010)  
	TArray<FName>                                      RemovedControllers;                                         // 0x0028   (0x0010)  
	TArray<FString>                                    RemovedControllerIds;                                       // 0x0038   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCPresetControllersAddedEvent
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FRCPresetControllersAddedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FName                                              PresetName;                                                 // 0x0010   (0x0008)  
	FString                                            PresetId;                                                   // 0x0018   (0x0010)  
	FRCPresetDescription                               Description;                                                // 0x0028   (0x0050)  
};

/// Struct /Script/WebRemoteControl.RCPresetControllersModifiedEvent
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRCPresetControllersModifiedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	FName                                              PresetName;                                                 // 0x0010   (0x0008)  
	FString                                            PresetId;                                                   // 0x0018   (0x0010)  
	FRCControllerModifiedDescription                   ModifiedControllers;                                        // 0x0028   (0x0020)  
};

/// Struct /Script/WebRemoteControl.RCActorsChangedData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRCActorsChangedData
{ 
	TArray<FRCActorDescription>                        AddedActors;                                                // 0x0000   (0x0010)  
	TArray<FRCActorDescription>                        RenamedActors;                                              // 0x0010   (0x0010)  
	TArray<FRCActorDescription>                        DeletedActors;                                              // 0x0020   (0x0010)  
};

/// Struct /Script/WebRemoteControl.RCActorsChangedEvent
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FRCActorsChangedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	TMap<FString, FRCActorsChangedData>                Changes;                                                    // 0x0010   (0x0050)  
};

/// Struct /Script/WebRemoteControl.RCTransactionEndedEvent
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRCTransactionEndedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	int32_t                                            TransactionId;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	int64_t                                            SequenceNumber;                                             // 0x0018   (0x0008)  
};

/// Struct /Script/WebRemoteControl.RCCompressionChangedEvent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRCCompressionChangedEvent
{ 
	FString                                            Type;                                                       // 0x0000   (0x0010)  
	ERCWebSocketCompressionMode                        Mode;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

#pragma pack(pop)


