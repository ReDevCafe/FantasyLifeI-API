#ifndef UGDSCHARATEXT_NOUN_HPP
    #define UGDSCHARATEXT_NOUN_HPP

    #include "Engine/UGameDataAsset.hpp"
    #include "Engine/DataTable.hpp"
    #include "Game/FGDStCommon.hpp"

struct FGDCharaText_Noun : FTableRowBase
{ 
    public:
        FName                                              ID;
        TArray<FGDStCommon_NounInfo>                       nounInfoArray;
};

class UGDSCharaText_Noun : public UGameDataAsset
{ 
public:
	TMap<FName, FGDCharaText_Noun>                     m_dataMap;
};

#endif // !UGDSCHARATEXT_NOUN_HPP