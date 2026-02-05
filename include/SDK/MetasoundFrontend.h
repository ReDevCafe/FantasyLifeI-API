
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/MetasoundFrontend.ESetParamResult
/// Size: 0x01 (1 bytes)
enum class ESetParamResult : uint8_t
{
	ESetParamResult__Succeeded                                                       = 0,
	ESetParamResult__Failed                                                          = 1
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendVertexAccessType
/// Size: 0x04 (4 bytes)
enum class EMetasoundFrontendVertexAccessType : uint32_t
{
	EMetasoundFrontendVertexAccessType__Reference                                    = 0,
	EMetasoundFrontendVertexAccessType__Value                                        = 1,
	EMetasoundFrontendVertexAccessType__Unset                                        = 2
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendClassType
/// Size: 0x01 (1 bytes)
enum class EMetasoundFrontendClassType : uint8_t
{
	EMetasoundFrontendClassType__External                                            = 0,
	EMetasoundFrontendClassType__Graph                                               = 1,
	EMetasoundFrontendClassType__Input                                               = 2,
	EMetasoundFrontendClassType__Output                                              = 3,
	EMetasoundFrontendClassType__Literal                                             = 4,
	EMetasoundFrontendClassType__Variable                                            = 5,
	EMetasoundFrontendClassType__VariableDeferredAccessor                            = 6,
	EMetasoundFrontendClassType__VariableAccessor                                    = 7,
	EMetasoundFrontendClassType__VariableMutator                                     = 8,
	EMetasoundFrontendClassType__Template                                            = 9,
	EMetasoundFrontendClassType__Invalid                                             = 10
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendNodeStyleDisplayVisibility
/// Size: 0x01 (1 bytes)
enum class EMetasoundFrontendNodeStyleDisplayVisibility : uint8_t
{
	EMetasoundFrontendNodeStyleDisplayVisibility__Visible                            = 0,
	EMetasoundFrontendNodeStyleDisplayVisibility__Hidden                             = 1
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendLiteralType
/// Size: 0x01 (1 bytes)
enum class EMetasoundFrontendLiteralType : uint8_t
{
	EMetasoundFrontendLiteralType__None                                              = 0,
	EMetasoundFrontendLiteralType__Boolean                                           = 1,
	EMetasoundFrontendLiteralType__Integer                                           = 2,
	EMetasoundFrontendLiteralType__Float                                             = 3,
	EMetasoundFrontendLiteralType__String                                            = 4,
	EMetasoundFrontendLiteralType__UObject                                           = 5,
	EMetasoundFrontendLiteralType__NoneArray                                         = 6,
	EMetasoundFrontendLiteralType__BooleanArray                                      = 7,
	EMetasoundFrontendLiteralType__IntegerArray                                      = 8,
	EMetasoundFrontendLiteralType__FloatArray                                        = 9,
	EMetasoundFrontendLiteralType__StringArray                                       = 10,
	EMetasoundFrontendLiteralType__UObjectArray                                      = 11,
	EMetasoundFrontendLiteralType__Invalid                                           = 12
};

/// Class /Script/MetasoundFrontend.MetaSoundDocumentInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMetaSoundDocumentInterface : public UInterface
{ 
public:
};

/// Class /Script/MetasoundFrontend.MetasoundParameterPack
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UMetasoundParameterPack : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED


	/// Functions
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetTrigger
	// ESetParamResult SetTrigger(FName ParameterName, bool OnlyIfExists);                                                      // [0x8bff3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetString
	// ESetParamResult SetString(FName ParameterName, FString InValue, bool OnlyIfExists);                                      // [0x8bff270] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetInt
	// ESetParamResult SetInt(FName ParameterName, int32_t InValue, bool OnlyIfExists);                                         // [0x8bff160] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetFloat
	// ESetParamResult SetFloat(FName ParameterName, float InValue, bool OnlyIfExists);                                         // [0x8bff050] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetBool
	// ESetParamResult SetBool(FName ParameterName, bool InValue, bool OnlyIfExists);                                           // [0x8bfef30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.MakeMetasoundParameterPack
	// class UMetasoundParameterPack* MakeMetasoundParameterPack();                                                             // [0x8bfef00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasTrigger
	// bool HasTrigger(FName ParameterName);                                                                                    // [0x8bfee60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasString
	// bool HasString(FName ParameterName);                                                                                     // [0x8bfedc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasInt
	// bool HasInt(FName ParameterName);                                                                                        // [0x8bfed20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasFloat
	// bool HasFloat(FName ParameterName);                                                                                      // [0x8bfec80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasBool
	// bool HasBool(FName ParameterName);                                                                                       // [0x8bfebe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetTrigger
	// bool GetTrigger(FName ParameterName, ESetParamResult& Result);                                                           // [0x8bfeb00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetString
	// FString GetString(FName ParameterName, ESetParamResult& Result);                                                         // [0x8bfe9e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetInt
	// int32_t GetInt(FName ParameterName, ESetParamResult& Result);                                                            // [0x8bfe900] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetFloat
	// float GetFloat(FName ParameterName, ESetParamResult& Result);                                                            // [0x8bfe820] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetBool
	// bool GetBool(FName ParameterName, ESetParamResult& Result);                                                              // [0x8bfe740] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVersionNumber
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMetasoundFrontendVersionNumber
{ 
	int32_t                                            Major;                                                      // 0x0000   (0x0004)  
	int32_t                                            Minor;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVersion
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMetasoundFrontendVersion
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FMetasoundFrontendVersionNumber                    Number;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendDocumentMetadata
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMetasoundFrontendDocumentMetadata
{ 
	FMetasoundFrontendVersion                          Version;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassName
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FMetasoundFrontendClassName
{ 
	FName                                              NameSpace;                                                  // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              Variant;                                                    // 0x0010   (0x0008)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassMetadata
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align 4 MaxSize: 0x0034
struct FMetasoundFrontendClassMetadata
{ 
	FMetasoundFrontendClassName                        ClassName;                                                  // 0x0000   (0x0018)  
	FMetasoundFrontendVersionNumber                    Version;                                                    // 0x0018   (0x0008)  
	EMetasoundFrontendClassType                        Type;                                                       // 0x0020   (0x0001)  
	bool                                               bIsDeprecated;                                              // 0x0021   (0x0001)  
	bool                                               bAutoUpdateManagesInterface;                                // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0023   (0x0001)  MISSED
	FGuid                                              ChangeID;                                                   // 0x0024   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertex
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FMetasoundFrontendVertex
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              TypeName;                                                   // 0x0008   (0x0008)  
	FGuid                                              VertexID;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassVertex
/// Size: 0x0034 (52 bytes) (0x000020 - 0x000034) align 4 MaxSize: 0x0034
struct FMetasoundFrontendClassVertex : FMetasoundFrontendVertex
{ 
	FGuid                                              NodeID;                                                     // 0x0020   (0x0010)  
	EMetasoundFrontendVertexAccessType                 AccessType;                                                 // 0x0030   (0x0004)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendLiteral
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FMetasoundFrontendLiteral
{ 
	EMetasoundFrontendLiteralType                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            AsNumDefault;                                               // 0x0004   (0x0004)  
	TArray<bool>                                       AsBoolean;                                                  // 0x0008   (0x0010)  
	TArray<int32_t>                                    AsInteger;                                                  // 0x0018   (0x0010)  
	TArray<float>                                      AsFloat;                                                    // 0x0028   (0x0010)  
	TArray<FString>                                    AsString;                                                   // 0x0038   (0x0010)  
	TArray<class UObject*>                             AsUObject;                                                  // 0x0048   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassInput
/// Size: 0x0090 (144 bytes) (0x000034 - 0x000090) align 8 MaxSize: 0x0090
struct FMetasoundFrontendClassInput : FMetasoundFrontendClassVertex
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x0034   (0x0004)  MISSED
	FMetasoundFrontendLiteral                          DefaultLiteral;                                             // 0x0038   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassOutput
/// Size: 0x0034 (52 bytes) (0x000034 - 0x000034) align 4 MaxSize: 0x0034
struct FMetasoundFrontendClassOutput : FMetasoundFrontendClassVertex
{ 
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassEnvironmentVariable
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FMetasoundFrontendClassEnvironmentVariable
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              TypeName;                                                   // 0x0008   (0x0008)  
	bool                                               bIsRequired;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassInterface
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FMetasoundFrontendClassInterface
{ 
	TArray<FMetasoundFrontendClassInput>               Inputs;                                                     // 0x0000   (0x0010)  
	TArray<FMetasoundFrontendClassOutput>              Outputs;                                                    // 0x0010   (0x0010)  
	TArray<FMetasoundFrontendClassEnvironmentVariable> Environment;                                                // 0x0020   (0x0010)  
	FGuid                                              ChangeID;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClass
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FMetasoundFrontendClass
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FGuid                                              ID;                                                         // 0x0008   (0x0010)  
	FMetasoundFrontendClassMetadata                    MetaData;                                                   // 0x0018   (0x0034)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FMetasoundFrontendClassInterface                   Interface;                                                  // 0x0050   (0x0040)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeInterface
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMetasoundFrontendNodeInterface
{ 
	TArray<FMetasoundFrontendVertex>                   Inputs;                                                     // 0x0000   (0x0010)  
	TArray<FMetasoundFrontendVertex>                   Outputs;                                                    // 0x0010   (0x0010)  
	TArray<FMetasoundFrontendVertex>                   Environment;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertexLiteral
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FMetasoundFrontendVertexLiteral
{ 
	FGuid                                              VertexID;                                                   // 0x0000   (0x0010)  
	FMetasoundFrontendLiteral                          Value;                                                      // 0x0010   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNode
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FMetasoundFrontendNode
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FGuid                                              ClassID;                                                    // 0x0010   (0x0010)  
	FName                                              Name;                                                       // 0x0020   (0x0008)  
	FMetasoundFrontendNodeInterface                    Interface;                                                  // 0x0028   (0x0030)  
	TArray<FMetasoundFrontendVertexLiteral>            InputLiterals;                                              // 0x0058   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdge
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 MaxSize: 0x0040
struct FMetasoundFrontendEdge
{ 
	FGuid                                              FromNodeID;                                                 // 0x0000   (0x0010)  
	FGuid                                              FromVertexID;                                               // 0x0010   (0x0010)  
	FGuid                                              ToNodeID;                                                   // 0x0020   (0x0010)  
	FGuid                                              ToVertexID;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVariable
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FMetasoundFrontendVariable
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              TypeName;                                                   // 0x0008   (0x0008)  
	FMetasoundFrontendLiteral                          Literal;                                                    // 0x0010   (0x0058)  
	FGuid                                              ID;                                                         // 0x0068   (0x0010)  
	FGuid                                              VariableNodeID;                                             // 0x0078   (0x0010)  
	FGuid                                              MutatorNodeID;                                              // 0x0088   (0x0010)  
	TArray<FGuid>                                      AccessorNodeIDs;                                            // 0x0098   (0x0010)  
	TArray<FGuid>                                      DeferredAccessorNodeIDs;                                    // 0x00A8   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraph
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMetasoundFrontendGraph
{ 
	TArray<FMetasoundFrontendNode>                     Nodes;                                                      // 0x0000   (0x0010)  
	TArray<FMetasoundFrontendEdge>                     Edges;                                                      // 0x0010   (0x0010)  
	TArray<FMetasoundFrontendVariable>                 Variables;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphClassPresetOptions
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FMetasoundFrontendGraphClassPresetOptions
{ 
	bool                                               bIsPreset;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(80,1153) /* TSet<FName> */           __um(InputsInheritingDefault);                              // 0x0008   (0x0050)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphClass
/// Size: 0x0118 (280 bytes) (0x000090 - 0x000118) align 8 MaxSize: 0x0118
struct FMetasoundFrontendGraphClass : FMetasoundFrontendClass
{ 
	FMetasoundFrontendGraph                            Graph;                                                      // 0x0090   (0x0030)  
	FMetasoundFrontendGraphClassPresetOptions          PresetOptions;                                              // 0x00C0   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendDocument
/// Size: 0x01D0 (464 bytes) (0x000000 - 0x0001D0) align 8 MaxSize: 0x01D0
struct FMetasoundFrontendDocument
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	FMetasoundFrontendDocumentMetadata                 MetaData;                                                   // 0x0010   (0x0010)  
	SDK_UNDEFINED(80,1154) /* TSet<FMetasoundFrontendVersion> */ __um(Interfaces);                                 // 0x0020   (0x0050)  
	FMetasoundFrontendGraphClass                       RootGraph;                                                  // 0x0070   (0x0118)  
	TArray<FMetasoundFrontendGraphClass>               Subgraphs;                                                  // 0x0188   (0x0010)  
	TArray<FMetasoundFrontendClass>                    Dependencies;                                               // 0x0198   (0x0010)  
	FMetasoundFrontendVersion                          ArchetypeVersion;                                           // 0x01A8   (0x0010)  
	TArray<FMetasoundFrontendVersion>                  InterfaceVersions;                                          // 0x01B8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x01C8   (0x0008)  MISSED
};

/// Class /Script/MetasoundFrontend.MetaSoundBuilderDocument
/// Size: 0x0208 (520 bytes) (0x000028 - 0x000208) align 8 MaxSize: 0x0208
class UMetaSoundBuilderDocument : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FMetasoundFrontendDocument                         Document;                                                   // 0x0030   (0x01D0)  
	class UClass*                                      MetaSoundUClass;                                            // 0x0200   (0x0008)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertexHandle
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FMetasoundFrontendVertexHandle
{ 
	FGuid                                              NodeID;                                                     // 0x0000   (0x0010)  
	FGuid                                              VertexID;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeStyleDisplay
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMetasoundFrontendNodeStyleDisplay
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeStyle
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMetasoundFrontendNodeStyle
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdgeStyleLiteralColorPair
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FMetasoundFrontendEdgeStyleLiteralColorPair
{ 
	FMetasoundFrontendLiteral                          Value;                                                      // 0x0000   (0x0058)  
	FLinearColor                                       Color;                                                      // 0x0058   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdgeStyle
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMetasoundFrontendEdgeStyle
{ 
	FGuid                                              NodeID;                                                     // 0x0000   (0x0010)  
	FName                                              OutputName;                                                 // 0x0010   (0x0008)  
	TArray<FMetasoundFrontendEdgeStyleLiteralColorPair> LiteralColorPairs;                                         // 0x0018   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphStyle
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMetasoundFrontendGraphStyle
{ 
	bool                                               bIsGraphEditable;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FMetasoundFrontendEdgeStyle>                EdgeStyles;                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertexMetadata
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMetasoundFrontendVertexMetadata
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassStyleDisplay
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMetasoundFrontendClassStyleDisplay
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassVariable
/// Size: 0x0090 (144 bytes) (0x000034 - 0x000090) align 8 MaxSize: 0x0090
struct FMetasoundFrontendClassVariable : FMetasoundFrontendClassVertex
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x0034   (0x0004)  MISSED
	FMetasoundFrontendLiteral                          DefaultLiteral;                                             // 0x0038   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceStyle
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMetasoundFrontendInterfaceStyle
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceVertexBinding
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMetasoundFrontendInterfaceVertexBinding
{ 
	FName                                              OutputName;                                                 // 0x0000   (0x0008)  
	FName                                              InputName;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceBinding
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FMetasoundFrontendInterfaceBinding
{ 
	FMetasoundFrontendVersion                          OutputInterfaceVersion;                                     // 0x0000   (0x0010)  
	FMetasoundFrontendVersion                          InputInterfaceVersion;                                      // 0x0010   (0x0010)  
	int32_t                                            BindingPriority;                                            // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FMetasoundFrontendInterfaceVertexBinding>   VertexBindings;                                             // 0x0028   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceUClassOptions
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FMetasoundFrontendInterfaceUClassOptions
{ 
	FTopLevelAssetPath                                 ClassPath;                                                  // 0x0000   (0x0010)  
	bool                                               bIsModifiable;                                              // 0x0010   (0x0001)  
	bool                                               bIsDefault;                                                 // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0012   (0x0002)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterface
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
struct FMetasoundFrontendInterface : FMetasoundFrontendClassInterface
{ 
	FMetasoundFrontendVersion                          Version;                                                    // 0x0040   (0x0010)  
	TArray<FMetasoundFrontendInterfaceUClassOptions>   UClassOptions;                                              // 0x0050   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassStyle
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMetasoundFrontendClassStyle
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetaSoundFrontendDocumentBuilder
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FMetaSoundFrontendDocumentBuilder
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	SDK_UNDEFINED(16,1155) /* TScriptInterface<Class> */ __um(DocumentInterface);                                  // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0018   (0x0020)  MISSED
};

#pragma pack(pop)


