#ifndef UGDSSYSTEMTEXT_HPP
    #define UGDSSYSTEMTEXT_HPP

    #include "Game/FGDStCommon.hpp"

struct FGDSystemText : FTableRowBase
{ 
    public:
        FName                                              ID;                                                         // 0x0008   (0x0008)  
        TArray<FGDStCommon_TextInfo>                       textInfoArray;                                                   // 0x0010   (0x0010)  
};

class UGDSSystemText : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDSystemText>                         m_dataMap;                                                  // 0x0050   (0x0050)  
};

#endif // !UGDSSYSTEMTEXT_HPP