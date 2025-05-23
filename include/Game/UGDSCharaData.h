#pragma once
#include "Engine/Container/UGameDataAsset.h"
#include "Engine/Container/Map.h"
#include "Engine/Container/BasicType.h"

struct FGDCharaData : FTableRowBase
{
	FName			ID;
	FName			Flag;
	FName			nameID;
	FName			modelID;
	TArray<FName>	AnimLoadGroupIDList;
	FName			moveSpeed; //??
	FName			CraftAreaMoveSpeed; //??
	char			gender;
	bool			isAvatar;
	unsigned char	unknown1[0x2];
	FName			iconID;
	FName			BodyIconId;
	FName			LifeIconId;
	FName			NicknameId;
	FName			VoiceOverrideID;
	unsigned char	unknown2[0x14];
};

class UGDSCharaData : public UGameDataAsset
{
public:
	TMap<FName, FGDCharaData>	m_dataMap;
	unsigned char				unknown[0x50];
};