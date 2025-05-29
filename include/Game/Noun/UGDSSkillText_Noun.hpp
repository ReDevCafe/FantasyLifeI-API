#ifndef UGDSSKILLTEXT_NOUN
    #define UGDSSKILLTEXT_NOUN

    #include "Engine/UGameDataAsset.hpp"
    #include "Engine/DataTable.hpp"
    #include "Game/FGDStCommon.hpp"

struct FGDSkillText_Noun : FTableRowBase
{ 
    public:
        FName                               ID;
        TArray<FGDStCommon_NounInfo>        nounInfoArray;
};

class UGDSSkillText_Noun : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDSkillText_Noun>  m_dataMap;
};

#endif // !UGDSSKILLTEXT_NOUN