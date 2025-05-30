#ifndef UGDSPHASEPURPOSETEXT_HPP
    #define UGDSPHASEPURPOSETEXT_HPP

    #include "Game/FGDStCommon.hpp"

struct FGDPhasePurposeText : FTableRowBase
{ 
    public:
        FName                                              ID;                                                         // 0x0008   (0x0008)  
        TArray<FGDStCommon_TextInfo>                       textInfoArray;                                              // 0x0010   (0x0010)  
};

class UGDSPhasePurposeText : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDPhasePurposeText>                   m_dataMap;                                                  // 0x0050   (0x0050)  
};

#endif // !UGDSPHASEPURPOSETEXT_HPP