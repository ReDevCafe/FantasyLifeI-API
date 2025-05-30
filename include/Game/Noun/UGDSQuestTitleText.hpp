#ifndef UGDSQUESTTITLETEXT_HPP
    #define UGDSQUESTTITLETEXT_HPP

    #include "Game/FGDStCommon.hpp"

struct FGDQuestTitleText : FTableRowBase
{ 
    public:
        FName                                              ID;                                                         // 0x0008   (0x0008)  
        TArray<FGDStCommon_NounInfo>                       nounInfoArray;                                                       // 0x0010   (0x0010)  
};

class UGDSQuestTitleText : public UGameDataAsset
{ 
public:
    TMap<FName, FGDQuestTitleText>                     m_dataMap;                                                  // 0x0050   (0x0050)  
};

#endif // !UGDSQUESTTITLETEXT_HPP