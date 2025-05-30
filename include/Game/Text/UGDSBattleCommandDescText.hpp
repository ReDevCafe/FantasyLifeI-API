#ifndef UGDSBATTLECOMMANDDESCTEXT_HPP
    #define UGDSBATTLECOMMANDDESCTEXT_HPP

    #include "Game/FGDStCommon.hpp"

struct FGDBattleCommandDescText : FTableRowBase
{ 
    public:
        FName                           ID;
        TArray<FGDStCommon_TextInfo>    textInfoArray;  
};

class UGDSBattleCommandDescText : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDBattleCommandDescText>              m_dataMap;
};
#endif // !UGDSBATTLECOMMANDDESCTEXT_HPP