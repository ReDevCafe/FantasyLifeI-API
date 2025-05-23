#pragma once
#include "Engine/Container/UGameDataAsset.h"
#include "Engine/Container/Map.h"
#include "Engine/Container/BasicType.h"
#include "ELife.h"
#include "FGExtra.h"

struct FGDLifeData : FTableRowBase
{
	FName				ID;
	FName				NameId;
	FName				DescId;

	ELifeCategory		Category;
	ELifeType			Type;

	unsigned char		unknown1[0x2];

	FName				IconID;
	FName				HqIconId;
	FName				EmblemIconId;
	FName				TabIconId;
	FName				SilhouetteEmblemIconId;
	FName				HqSilhouetteEmblemIconId;
	FName				GlowEmblemIconId;
	FName				CombinEmblemIconId;
	FName				PortraitIconId;
	FName				PortraitIconOuutlineId;
	FName				SkillPointIconId;
	
	unsigned char		unknown2[0x4];

	TArray<uint32_t>	LicenseRankUpstar;

	FName				RentalWeaponId;
	FName				RentalShieldId;
		
	FName				DefaultHeadId;
	FName				DefaultTopsId;
	FName				DefaultBottomsId;
	FName				DefaultArmId;
	FName				DefaultFootId;
	FName				DefaultMantleId;
	FName				DefaultGlassesId;
	FName				DefaultAccessory;

	FGDId				SkillBoardId;
	FName				LicenseMenuLimitId;
	FName				ReleaseBitFlag;

	unsigned char		unknown3[0x4];
};

class UGDSLifeData : public UGameDataAsset
{
public:
	TMap<FName, FGDLifeData>	m_dataMap;
	unsigned char				unknown[0x100];
};
