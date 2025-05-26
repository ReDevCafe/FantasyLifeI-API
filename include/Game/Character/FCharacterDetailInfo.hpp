#ifndef FCHARACTERDETAILINFO_HPP_
    #define FCHARACTERDETAILINFO_HPP_

    #include "Engine/FName.hpp"
    #include "Engine/DataTable.hpp"

    #include "Game/Element.hpp"
    #include "Game/Types.hpp"
    #include "Game/Character/Menu.hpp"
	#include "Game/Equip/Equip.hpp"
	#include "Game/Item/FBaseItemDetailWindowInfo.hpp"

struct FCharaStatusHandle : FHandle {};

enum class ECharacterDetailType : uint8_t
{
	Avatar = 0,
	NPC = 1
};

struct FAddStatus
{ 
	EEquipStatusType                                   Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Value;                                                      // 0x0004   (0x0004)  
};

enum class ELicenseRank : uint8_t
{
	None = 0,
	Apprentice = 1,
	Novice = 2,
	Pretty = 3,
	Able = 4,
	Expert = 5,
	Master = 6,
	Hero = 7
};

struct FCharacterProfileInfo
{ 
	bool                                               isShowed;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Level;                                                      // 0x0004   (0x0004)  
	int32_t                                            nowExp;                                                     // 0x0008   (0x0004)  
	int32_t                                            maxExp;                                                     // 0x000C   (0x0004)  
	bool                                               IsLeader;                                                   // 0x0010   (0x0001)  
	bool                                               IsInstantChara;                                             // 0x0011   (0x0001)  
	ELifeType                                          lifeType;                                                   // 0x0012   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x0013   (0x0005)  MISSED
	FString                                            lifeName;                                                   // 0x0018   (0x0010)  
	ELicenseRank                                       licenseRank;                                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FString                                            licenseRankName;                                            // 0x0030   (0x0010)  
	ELifeType                                          subLifeType;                                                // 0x0040   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	FString                                            subLifeName;                                                // 0x0048   (0x0010)  
	int32_t                                            nextRankStar;                                               // 0x0058   (0x0004)  
	int32_t                                            nextRankTotalStar;                                          // 0x005C   (0x0004)  
	FName                                              lifeEmblemIconId;                                           // 0x0060   (0x0008)  
	int32_t                                            star;                                                       // 0x0068   (0x0004)  
	int32_t                                            rich;                                                       // 0x006C   (0x0004)  
	int32_t                                            playTimeHours;                                              // 0x0070   (0x0004)  
	int32_t                                            playTimeMinutes;                                            // 0x0074   (0x0004)  
	FString                                            detailText;                                                 // 0x0078   (0x0010)  
	int32_t                                            friendship;                                                 // 0x0088   (0x0004)  
	bool                                               isCharaReleaseCountShowed;                                  // 0x008C   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x008D   (0x0003)  MISSED
	int32_t                                            charaReleaseCount;                                          // 0x0090   (0x0004)  
	EElementAttrType                                   elementAttributeType;                                       // 0x0094   (0x0001)  
	unsigned char                                      UnknownData05_7[0x3];                                       // 0x0095   (0x0003)  MISSED
};

struct FCharacterSkillData
{ 
	bool                                               isShowed;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FEquipItemSkillInfo>                        skillInfoList;                                              // 0x0008   (0x0010)  
	TArray<int32_t>                                    lockFriendshipSkillArray;                                   // 0x0018   (0x0010)  
};

struct FEquipItemCharaInfo
{ 
	bool                                               equiped;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              equipedCharaIconId;                                         // 0x0004   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            equipedCharaName;                                           // 0x0010   (0x0010)  
	int32_t                                            equipedCharaIndex;                                          // 0x0020   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

struct FEquipItemDetailWindowInfo : FBaseItemDetailWindowInfo
{ 
	TArray<FName>                                      equipmentConditionIconIdArray;                              // 0x0070   (0x0010)  
	TArray<FString>                                    equipmentConditionTextArray;                                // 0x0080   (0x0010)  
	FString                                            creator;                                                    // 0x0090   (0x0010)  
	FEquipItemCharaInfo                                EquipItemCharaInfo;                                         // 0x00A0   (0x0028)  
	int32_t                                            maxHp;                                                      // 0x00C8   (0x0004)  
	int32_t                                            maxSp;                                                      // 0x00CC   (0x0004)  
	int32_t                                            physicalOffense;                                            // 0x00D0   (0x0004)  
	int32_t                                            physicalDefense;                                            // 0x00D4   (0x0004)  
	int32_t                                            magicOffense;                                               // 0x00D8   (0x0004)  
	int32_t                                            magicDefense;                                               // 0x00DC   (0x0004)  
	FString                                            equipConditionText;                                         // 0x00E0   (0x0010)  
	int32_t                                            LifeParam;                                                  // 0x00F0   (0x0004)  
	int32_t                                            attrResistFire;                                             // 0x00F4   (0x0004)  
	int32_t                                            attrResistWater;                                            // 0x00F8   (0x0004)  
	int32_t                                            attrResistWind;                                             // 0x00FC   (0x0004)  
	int32_t                                            attrResistEarth;                                            // 0x0100   (0x0004)  
	int32_t                                            attrResistShine;                                            // 0x0104   (0x0004)  
	int32_t                                            attrResistDark;                                             // 0x0108   (0x0004)  
	EElementAttrType                                   elementAttributeType;                                       // 0x010C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x010D   (0x0003)  MISSED
	TArray<FEquipItemSkillInfo>                        skillInfoList;                                              // 0x0110   (0x0010)  
	TArray<FAddStatus>                                 addStatusList;                                              // 0x0120   (0x0010)  
	ELifeType                                          lifeType;                                                   // 0x0130   (0x0001)  
	bool                                               isRipeningParamShowed;                                      // 0x0131   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0132   (0x0002)  MISSED
	int32_t                                            ripeningAge;                                                // 0x0134   (0x0004)  
	FEquipItemSkillInfo                                ripeningSkillInfo;                                          // 0x0138   (0x0040)  
	FName                                              clothingTypeIconId;                                         // 0x0178   (0x0008)  
	FName                                              signIconId;                                                 // 0x0180   (0x0008)  
};

struct FEquipItemParamData
{ 
	bool                                               isShowed;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            ItemName;                                                   // 0x0008   (0x0010)  
	FCharacterMenuParamData                            beforeCharacterMenuParamData;                               // 0x0018   (0x0118)  
	FCharacterMenuParamData                            afterCharacterMenuParamData;                                // 0x0130   (0x0118)  
	FCharacterSkillData                                CharacterSkillData;                                         // 0x0248   (0x0028)  
	FEquipItemDetailWindowInfo                         EquipItemDetailWindowInfo;                                  // 0x0270   (0x0188)  
};

struct FCharacterDetailInfo
{ 
	FCharaStatusHandle charaStHdl;
	unsigned char UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString haraName;                                                  // 0x0008   (0x0010)  
	EElementAttrType elementAttributeType;                                       // 0x0018   (0x0001)  
	ECharacterDetailType characterDetailType;                                        // 0x0019   (0x0001)  
	unsigned char UnknownData01_6[0x6];                                       // 0x001A   (0x0006)  MISSED
	FCharacterProfileInfo CharacterProfileInfo;                                       // 0x0020   (0x0098)  
	FCharacterMenuParamData CharacterMenuParamData;                                     // 0x00B8   (0x0118)  
	FCharacterSkillData CharacterSkillData;                                         // 0x01D0   (0x0028)  
	FString nickname;                                                   // 0x01F8   (0x0010)  
	FEquipItemParamData EquipItemParamData;                                         // 0x0208   (0x03F8)  
	FEquipMySetParamData  mySetParamData;                                             // 0x0600   (0x0028)  
	FEquipItemDetailParam otalParam;                                                 // 0x0628   (0x0050)  
};
#endif /* !FCHARACTERDETAILINFO_HPP_ */
