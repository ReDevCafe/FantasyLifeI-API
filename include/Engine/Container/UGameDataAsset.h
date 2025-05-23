#pragma once
#include "../Core.h"

class UGameDataAsset : public UObject
{
	public: 
		unsigned char   unknown[0x8];           // Size: 8
		TArray<char>    m_autoBin;              // Size: Possibly 10
		FString         m_autoStr;              // Size: Possibly  10
};