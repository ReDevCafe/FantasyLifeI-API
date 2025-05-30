#ifndef UGDSCHARAMAKETEXT_HPP
    #define UGDSCHARAMAKETEXT_HPP

    #include "Game/FGDStCommon.hpp"

struct FGDCharamakeText : FTableRowBase
{ 
    public:
        FName                           ID;
        TArray<FGDStCommon_TextInfo>    textInfoArray;
};

class UGDSCharamakeText : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDCharamakeText>   m_dataMap;
};

#endif // !UGDSCHARAMAKETEXT_HPP