#ifndef UGDSQUESTREQUESTABLEMAPTEXT_NOUN_HPP
    #define UGDSQUESTREQUESTABLEMAPTEXT_NOUN_HPP

    #include "Engine/UGameDataAsset.hpp"
    #include "Engine/DataTable.hpp"
    #include "Game/FGDStCommon.hpp"

struct FGDQuestRequestMapText_Noun : FTableRowBase
{ 
    public:
        FName                                       ID;
        TArray<FGDStCommon_NounInfo>                nounInfoArray;
};

class UGDSQuestRequestMapText_Noun : public UGameDataAsset
{ 
public:
	TMap<FName, FGDQuestRequestMapText_Noun>    m_dataMap;
};

#endif // !UGDSQUESTREQUESTABLEMAPTEXT_NOUN_HPP
