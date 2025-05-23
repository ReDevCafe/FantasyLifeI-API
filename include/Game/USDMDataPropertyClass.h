#pragma once

#include "Engine/Container/Map.h"
#include "Engine/Container/UGameDataAsset.h"
#include "Engine/Core.h"

class USDMDataPropertyClass : public UObject
{
	public:
		TMap<FName, class UGameDataAsset*>	m_dataMap;
		TMap<FName, class UGameDataAsset*>	m_dataRawMap;
};