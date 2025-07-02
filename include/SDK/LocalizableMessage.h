
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: StructUtils

#pragma pack(push, 0x1)

/// Struct /Script/LocalizableMessage.LocalizableMessageParameterEntry
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FLocalizableMessageParameterEntry
{ 
	FString                                            Key;                                                        // 0x0000   (0x0010)  
	FInstancedStruct                                   Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/LocalizableMessage.LocalizableMessage
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FLocalizableMessage
{ 
	FString                                            Key;                                                        // 0x0000   (0x0010)  
	FString                                            DefaultText;                                                // 0x0010   (0x0010)  
	TArray<FLocalizableMessageParameterEntry>          Substitutions;                                              // 0x0020   (0x0010)  
};

/// Struct /Script/LocalizableMessage.LocalizableMessageParameterInt
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FLocalizableMessageParameterInt
{ 
	int64_t                                            Value;                                                      // 0x0000   (0x0008)  
};

/// Struct /Script/LocalizableMessage.LocalizableMessageParameterFloat
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FLocalizableMessageParameterFloat
{ 
	double                                             Value;                                                      // 0x0000   (0x0008)  
};

/// Struct /Script/LocalizableMessage.LocalizableMessageParameterString
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLocalizableMessageParameterString
{ 
	FString                                            Value;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/LocalizableMessage.LocalizableMessageParameterMessage
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FLocalizableMessageParameterMessage
{ 
	FLocalizableMessage                                Value;                                                      // 0x0000   (0x0030)  
};

#pragma pack(pop)


