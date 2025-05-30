#ifndef UGDSPHASETITLETEXT_HPP
    #define UGDSPHASETITLETEXT_HPP

    #include "Game/FGDStCommon.hpp"

struct FGDPhaseTitleText : FTableRowBase
{ 
    public:
        FName                                              ID;                                                         // 0x0008   (0x0008)  
        TArray<FGDStCommon_TextInfo>                       textInfoArray;                                              // 0x0010   (0x0010)  
};

class UGDSPhaseTitleText : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDPhaseTitleText>                     m_dataMap;                                                  // 0x0050   (0x0050)  
};

#endif // !UGDSPHASETITLETEXT_HPP
