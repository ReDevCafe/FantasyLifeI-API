#ifndef UUGDSSYSTEMTEXT_NOUN_HPP
    #define UUGDSSYSTEMTEXT_NOUN_HPP

    #include "Engine/UGameDataAsset.hpp"
    #include "Engine/DataTable.hpp"
    #include "Game/FGDStCommon.hpp"

struct FGDSystemText_Noun : FTableRowBase
{ 
    public:
        FName                                              ID;
        TArray<FGDStCommon_NounInfo>                       nounInfoArray;
};

class UGDSSystemText_Noun : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDSystemText_Noun>                    m_dataMap;
};

#endif // !UUGDSSYSTEMTEXT_NOUN