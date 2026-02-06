
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: StructUtils

#pragma pack(push, 0x1)

/// Enum /Script/StructUtilsEngine.EStructUtilsResult
/// Size: 0x01 (1 bytes)
enum class EStructUtilsResult : uint8_t
{
	EStructUtilsResult__Valid                                                        = 0,
	EStructUtilsResult__NotValid                                                     = 1
};

/// Class /Script/StructUtilsEngine.StructUtilsFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UStructUtilsFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.SetInstancedStructValue
	// void SetInstancedStructValue(FInstancedStruct& InstancedStruct, int32_t& Value);                                         // [0x7b06100] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.Reset
	// void Reset(FInstancedStruct& InstancedStruct, class UScriptStruct* StructType);                                          // [0x7b06010] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.NotEqual_InstancedStruct
	// bool NotEqual_InstancedStruct(FInstancedStruct& A, FInstancedStruct& B);                                                 // [0x7b05ef0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.MakeInstancedStruct
	// FInstancedStruct MakeInstancedStruct(int32_t& Value);                                                                    // [0x7b05da0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.IsValid_InstancedStruct
	// bool IsValid_InstancedStruct(FInstancedStruct& InstancedStruct);                                                         // [0x7b05cf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.IsInstancedStructValid
	// EStructUtilsResult IsInstancedStructValid(FInstancedStruct& InstancedStruct);                                            // [0x7b05c40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.GetInstancedStructValue
	// void GetInstancedStructValue(EStructUtilsResult& ExecResult, FInstancedStruct& InstancedStruct, int32_t& Value);         // [0x7b05a00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StructUtilsEngine.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct
	// bool EqualEqual_InstancedStruct(FInstancedStruct& A, FInstancedStruct& B);                                               // [0x7b058e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

#pragma pack(pop)


