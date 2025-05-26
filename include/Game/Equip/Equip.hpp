
#ifndef EQUIP_HPP_
    #define EQUIP_HPP_

    #include <cstdint>

    #include "Engine/FName.hpp"
    #include "Engine/DataTable.hpp"
    #include "Game/Skill/Skill.hpp"

enum class EEquipStatusType : uint8_t
{
	None = 0,
	Hp = 1,
	Sp = 2,
	PhysicalOffense = 3,
	PhysicalDefense = 4,
	MagicOffense = 5,
	MagicDefense = 6,
	Crafter = 7,
	Gatherer = 8
};

struct FEquipMySetItemParamData
{ 
	FName                                              iconID;                                                     // 0x0000   (0x0008)  
	FString                                            ItemName;                                                   // 0x0008   (0x0010)  
	bool                                               IsEmpty;                                                    // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

struct FEquipMySetParamData
{ 
	bool                                               isShowed;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            mySetName;                                                  // 0x0008   (0x0010)  
	TArray<FEquipMySetItemParamData>                   mySetItemParamDataArray;                                    // 0x0018   (0x0010)  
};

struct FEquipItemParamInfo
{ 
	int32_t                                            beforeParam;                                                // 0x0000   (0x0004)  
	int32_t                                            afterParam;                                                 // 0x0004   (0x0004)  
};

struct FEquipItemSkillInfo
{ 
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0000   (0x000C)  MISSED
	bool                                               IsEmpty;                                                    // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	FString                                            skillNameText;                                              // 0x0010   (0x0010)  
	FString                                            skillDetailText;                                            // 0x0020   (0x0010)  
	int32_t                                            needSkillReleaseFriendship;                                 // 0x0030   (0x0004)  
	bool                                               isRipeningSkill;                                            // 0x0034   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	int32_t                                            ripeningAge;                                                // 0x0038   (0x0004)  
	ESkillIconType                                     skillIconType;                                              // 0x003C   (0x0001)  
	unsigned char                                      UnknownData03_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

struct FEquipItemDetailParam
{ 
	TArray<FEquipItemParamInfo>                        paramInfoList;                                              // 0x0000   (0x0010)  
	TArray<FEquipItemParamInfo>                        lifeParamInfoList;                                          // 0x0010   (0x0010)  
	TArray<FEquipItemParamInfo>                        attributeParamInfoList;                                     // 0x0020   (0x0010)  
	TArray<FEquipItemSkillInfo>                        skillInfoList;                                              // 0x0030   (0x0010)  
	TArray<FString>                                    statusText;                                                 // 0x0040   (0x0010)  
};

#endif /* !EQUIP_HPP_ */
