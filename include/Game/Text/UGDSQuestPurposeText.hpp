#ifndef UGDSQUESTPURPOSETEXT_HPP
    #define UGDSQUESTPURPOSETEXT_HPP

    #include "Game/FGDStCommon.hpp"

struct FGDQuestPurposeText : FTableRowBase
{ 
    public:
        FName                                              ID;                                                         // 0x0008   (0x0008)  
        TArray<FGDStCommon_TextInfo>                       textInfoArray;                                                       // 0x0010   (0x0010)  
};

class UGDSQuestPurposeText : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDQuestPurposeText>                   m_dataMap;                                                  // 0x0050   (0x0050)  
};

#endif // !UGDSQUESTPURPOSETEXT_HPP