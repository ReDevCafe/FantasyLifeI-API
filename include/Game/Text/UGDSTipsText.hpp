#ifndef UGDSTIPSTEXT_HPP
    #define UGDSTIPSTEXT_HPP

    #include "Game/FGDStCommon.hpp"

struct FGDTipsText : FTableRowBase
{ 
    public:
        FName                                              ID;                                                         // 0x0008   (0x0008)  
        TArray<FGDStCommon_TextInfo>                       textInfoArray;                                                   // 0x0010   (0x0010)  
};

class UGDSTipsText : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDTipsText>                           m_dataMap;                                                  // 0x0050   (0x0050)  
};

#endif // !UGDSTIPSTEXT_HPP