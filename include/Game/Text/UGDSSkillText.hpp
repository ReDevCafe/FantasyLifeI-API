#ifndef UGDSSKILLTEXT_HPP
    #define UGDSSKILLTEXT_HPP

    #include "Game/FGDStCommon.hpp"

struct FGDSkillText : FTableRowBase
{ 
    public:
	FName                                              ID;                                                         // 0x0008   (0x0008)  
	TArray<FGDStCommon_TextInfo>                       textInfoArray;                                                   // 0x0010   (0x0010)  
};

/// Class /Script/DP1Project.GDSSkillText
/// Size: 0x00A0 (160 bytes) (0x000050 - 0x0000A0) align 8 MaxSize: 0x00A0
class UGDSSkillText : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDSkillText>                          m_dataMap;                                                  // 0x0050   (0x0050)  
};

#endif // !UGDSSKILLTEXT_HPP