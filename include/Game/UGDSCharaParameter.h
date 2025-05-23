#pragma once
#include "Engine/Container/UGameDataAsset.h"
#include "Engine/Container/Map.h"
#include "Engine/Container/BasicType.h"
#include "FGExtra.h"

struct FGDCharaParameterBase : FTableRowBase
{
	FGDId							ParamId;
	FName							CharaId;
	FName							BattleCharaId;
	FName							CommandAi;
	FName 							BattleMovAi;
	FName							BattleCharaScriptId;
	FName							BattleCharaBPScriptId;
	int32_t							MoveSpeed;
	int32_t							Weight;
	FName							ReactRank;
	bool							IsRestrictnavConstraint;
	unsigned char					unknown[0x3];	
};

struct FGDStCommon_StatusBaseParam
{
	int32_t HP;
	int32_t SP;
	
	int32_t PhysicalOffense;
	int32_t PhysicalDefense;
	
	int32_t MagicOffense;
	int32_t MagicDefense;

	int32_t CriticalRate;
	int32_t CriticalRateEvasion;

	unsigned char unknown[0x14]; // Probably??? not sure about that
};

struct FGDStCommon_LifeParam
{
	int32_t miner;
	int32_t lumberjack;
	int32_t fisherman;
	int32_t farmer;
	int32_t cook;
	int32_t blacksmith;
	int32_t carpenter;
	int32_t needleworker;
	int32_t alchemist;
	int32_t artist;
};

struct FGDCharaParameter_CharaStatusParam
{
	FName							LifeId;
	FGDStCommon_StatusBaseParam		BaseParamMin;
	FGDStCommon_StatusBaseParam		BaseParamMax;
	FGDStCommon_LifeParam			LifeParamMin;
	FGDStCommon_LifeParam			LifeParamMax;
};

struct FGDCharaParameter : FGDCharaParameterBase
{
	TMap<FName, FGDCharaParameter_CharaStatusParam>	CharaStatusParamList;
	FName											InteractionAi;
	FName											SpecialTechniquId1;
	FName											SpecialTechniquId2;

	char											GameTimeZoneType;
	unsigned char									unknown1[0x3];

	FName											ResistId;
	unsigned char									unknown2[0x4];
};

class UGDSCharaParameter : public UGameDataAsset
{
public:
	TMap<FGDId, FGDCharaParameter>	m_dataMap;
	unsigned char					unknown[0x50];
};