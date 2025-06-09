
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Struct /Script/UObjectPlugin.MyPluginStruct
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMyPluginStruct
{ 
	FString                                            TestString;                                                 // 0x0000   (0x0010)  
};

/// Class /Script/UObjectPlugin.MyPluginObject
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UMyPluginObject : public UObject
{ 
public:
	FMyPluginStruct                                    MyStruct;                                                   // 0x0028   (0x0010)  
};

#pragma pack(pop)


