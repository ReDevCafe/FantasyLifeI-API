#ifndef UGDSMENUTEXT_NOUN_HPP
    #define UGDSMENUTEXT_NOUN_HPP

    #include "Engine/UGameDataAsset.hpp"
    #include "Engine/DataTable.hpp"
    #include "Game/FGDStCommon.hpp"

struct FGDMenuText_Noun : FTableRowBase
{ 
    public:
        FName                                              ID;
        TArray<FGDStCommon_NounInfo>                       nounInfoArray;
};

class UGDSMenuText_Noun : public UGameDataAsset
{ 
public:
	TMap<FName, FGDMenuText_Noun>                      m_dataMap;
};

#endif // !UGDSMENUTEXT_NOUN_HPP