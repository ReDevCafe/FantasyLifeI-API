#ifndef UGDSMENUTEXT_HPP
    #define UGDSMENUTEXT_HPP

    #include "Game/FGDStCommon.hpp"

struct FGDMenuText : FTableRowBase
{ 
    public:
        FName                                              ID;                                                         // 0x0008   (0x0008)  
        TArray<FGDStCommon_TextInfo>                       textInfoArray;                                                   // 0x0010   (0x0010)  
};
 
class UGDSMenuText : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDMenuText>                           m_dataMap;                                                  // 0x0050   (0x0050)  
};


#endif // !UGDSMENUTEXT_HPP