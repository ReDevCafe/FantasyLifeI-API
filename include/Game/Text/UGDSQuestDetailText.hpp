#ifndef UGDSQUESTDETAILTEXT_HPP
    #define UGDSQUESTDETAILTEXT_HPP

    #include "Game/FGDStCommon.hpp"

struct FGDQuestDetailText : FTableRowBase
{ 
    public:
        FName                                              ID;                                                         // 0x0008   (0x0008)  
        TArray<FGDStCommon_TextInfo>                       textInfoArray;                                                       // 0x0010   (0x0010)  
};

class UGDSQuestDetailText : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDQuestDetailText>                    m_dataMap;                                                  // 0x0050   (0x0050)  
};

#endif // !UGDSQUESTDETAILTEXT_HPP