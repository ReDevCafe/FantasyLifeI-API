#ifndef UGDSBATTLECOMMANDNAMENOUN_HPP
    #define UGDSBATTLECOMMANDNAMENOUN_HPP

    #include "Game/FGDStCommon.hpp"

struct FGDBattleCommandNameNoun : FTableRowBase
{
    public:
        FName                           ID;
        TArray<FGDStCommon_NounInfo>    nounInfoArray;
};

class UGDSBattleCommandNameNoun : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDBattleCommandNameNoun>   m_dataMap;  
};


#endif // !UGDSBATTLECOMMANDNAMENOUN