#ifndef UUGDSMAPTEXT_NOUN_HPP
    #define UUGDSMAPTEXT_NOUN_HPP

    #include "Engine/UGameDataAsset.hpp"
    #include "Engine/DataTable.hpp"
    #include "Game/FGDStCommon.hpp"

struct FGDMapText_Noun : FTableRowBase
{ 
    public:
        FName                                              ID;
        TArray<FGDStCommon_NounInfo>                       nounInfoArray;
};

class UGDSMapText_Noun : public UGameDataAsset
{ 
public:
	TMap<FName, FGDMapText_Noun>                       m_dataMap;
};

#endif // !UUGDSMAPTEXT_NOUN_HPP