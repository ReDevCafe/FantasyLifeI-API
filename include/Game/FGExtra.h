#pragma once

#include "Engine/Container/BasicType.h"
#include "Engine/Container/UGameDataAsset.h"

struct FGDId
{
	uint32_t                                           crc;                                                        // 0x0000   (0x0004)  
	FName                                              Name;                                                       // 0x0004   (0x0008)  
};

struct FGDAuto
{
	uint32_t                                           m_offset;                                                   // 0x0000   (0x0004)  
	uint32_t                                           m_dataSize;                                                 // 0x0004   (0x0004)  
	class UGameDataAsset* m_pAsset;																				   // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0010   (0x0010)  MISSED
};