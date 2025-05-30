#ifndef UGDSCHARACTERFLAVORTEXT_HPP
    #define UGDSCHARACTERFLAVORTEXT_HPP

    #include "Game/FGDStCommon.hpp"

struct FGDCharacterFlavorText : FTableRowBase
{ 
    public:
        FName                               ID;  
        TArray<FGDStCommon_TextInfo>        textInfoArray;  
};

class UGDSCharacterFlavorText : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDCharacterFlavorText> m_dataMap;  
};

#endif // !UGDSCHARACTERFLAVORTEXT_HPP