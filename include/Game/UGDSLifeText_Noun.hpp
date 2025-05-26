#ifndef UGDSLIFETEXT_NOUN_HPP
    #define UGDSLIFETEXT_NOUN_HPP

    #include "Engine/UGameDataAsset.hpp"
    #include "Engine/DataTable.hpp"
    #include "Game/UGDSItemText.hpp"
    #include "Game/FGDStCommon.hpp"

class FGDLifeText_Noun : public FTableRowBase
{
    public:
        FName                           ID;
        TArray<FGDStCommon_NounInfo>    textInfo;
};

class UGDSLifeText_Noun : public UGameDataAsset
{
    public:
        TMap<FName, FGDLifeText_Noun>    m_dataMap;  
};

#endif // !UGDSLIFETEXT_HPP