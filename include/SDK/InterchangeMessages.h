
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: InterchangeCore

#pragma pack(push, 0x1)

/// Class /Script/InterchangeMessages.InterchangeResultMeshWarning
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UInterchangeResultMeshWarning : public UInterchangeResultWarning
{ 
public:
	FString                                            MeshName;                                                   // 0x0070   (0x0010)  
};

/// Class /Script/InterchangeMessages.InterchangeResultTextureWarning
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UInterchangeResultTextureWarning : public UInterchangeResultWarning
{ 
public:
	FString                                            TextureName;                                                // 0x0070   (0x0010)  
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshError
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UInterchangeResultMeshError : public UInterchangeResultError
{ 
public:
	FString                                            MeshName;                                                   // 0x0070   (0x0010)  
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshWarning_Generic
/// Size: 0x0090 (144 bytes) (0x000080 - 0x000090) align 8 MaxSize: 0x0090
class UInterchangeResultMeshWarning_Generic : public UInterchangeResultMeshWarning
{ 
public:
	FText                                              Text;                                                       // 0x0080   (0x0018)  
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshError_Generic
/// Size: 0x0090 (144 bytes) (0x000080 - 0x000090) align 8 MaxSize: 0x0090
class UInterchangeResultMeshError_Generic : public UInterchangeResultMeshError
{ 
public:
	FText                                              Text;                                                       // 0x0080   (0x0018)  
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshWarning_TooManyUVs
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align 8 MaxSize: 0x0088
class UInterchangeResultMeshWarning_TooManyUVs : public UInterchangeResultMeshWarning
{ 
public:
	int32_t                                            ExcessUVs;                                                  // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/InterchangeMessages.InterchangeResultTextureWarning_TextureFileDoNotExist
/// Size: 0x00A0 (160 bytes) (0x000080 - 0x0000A0) align 8 MaxSize: 0x00A0
class UInterchangeResultTextureWarning_TextureFileDoNotExist : public UInterchangeResultTextureWarning
{ 
public:
	FText                                              Text;                                                       // 0x0080   (0x0018)  
	FString                                            MaterialName;                                               // 0x0090   (0x0010)  
};

#pragma pack(pop)


