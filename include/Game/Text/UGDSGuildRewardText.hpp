#ifndef UGDSGUILDREWARDTEXT_HPP
    #define UGDSGUILDREWARDTEXT_HPP

    #include "Game/FGDStCommon.hpp"

struct FGDGuildRewardText : FTableRowBase
{ 
    public:
        FName                                       ID;                                                         // 0x0008   (0x0008)  
        TArray<FGDStCommon_TextInfo>                textInfoArray;                                                       // 0x0010   (0x0010)  
};

class UGDSGuildRewardText : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDGuildRewardText>                    m_dataMap;                                                  // 0x0050   (0x0050)  
};

#endif // !UGDSGUILDREWARDTEXT_HPP