#ifndef UGDSSKILLDATA_HPP
    #define UGDSSKILLDATA_HPP

    #include "Engine/DataTable.hpp"
    #include "Engine/UGameDataAsset.hpp"
    #include "Game/FGDStCommon.hpp"
    #include "Skill.hpp"

struct FGDSkillData_EffCond
{ 
    public:
        char                            cond;                                                       // 0x0000   (0x0001)  
        unsigned char                   unknown[0x7];                                       // 0x0001   (0x0007)  MISSED
        TArray<FGDAuto>                 arg;                                                        // 0x0008   (0x0010)  
};

struct FGDSkillData_SkillEffectInfo
{ 
    public:
        FName                           effId;                                                      // 0x0000   (0x0008)  
        TArray<int8_t>                  effParamIdx;                                                // 0x0008   (0x0010)  
        EPassiveAddType                 addType;                                                    // 0x0018   (0x0001)  
        unsigned char                   unknown[0x7];                                       // 0x0019   (0x0007)  MISSED
        TArray<int8_t>                  judgeTiming;                                                // 0x0020   (0x0010)  
        TArray<FGDSkillData_EffCond>    effCondList;                                                // 0x0030   (0x0010)  
        FName                           skillListDispTextId;                                        // 0x0040   (0x0008)  
};

struct FGDSkillData : FTableRowBase
{
    public:
        FGDId                                   ID;
        ESkillCategory                          Category;
        unsigned char                           unknown1[0x3];

        FName                                   paramId;
        FGDStCommon_SkillParam                  Params;
        FName                                   nameTextID;
        FName                                   descTextID;
        ESkillIconType                          SkillIconType;
        unsigned char                           unknown2[0x3];

        FName                                   lifeLimitId;
        uint32_t                                sortOrder;
        TArray<int8_t>                          filterType;
        TArray<FGDSkillData_SkillEffectInfo>    skillEffectInfoList;
        bool                                    notAggregated;
        char                                    Rarity;
        unsigned char                           unknown3[0x6];
};

class UGDSSkillData : public UGameDataAsset
{ 
    public:
        TMap<FGDId, FGDSkillData>                          m_dataMap;                                                  // 0x0050   (0x0050)  
        unsigned char                                      unknown[0x50];                                      // 0x00A0   (0x0050)  MISSED
};

#endif // !UGDSSKILLDATA_HPP