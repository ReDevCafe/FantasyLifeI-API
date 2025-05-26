#ifndef UGDSLIFETEXT_HPP
    #define UGDSLIFETEXT_HPP

    #include "Engine/UGameDataAsset.hpp"
    #include "Engine/DataTable.hpp"
    #include "Game/FGDStCommon.hpp"

class FGDLifeText : public FTableRowBase
{
    public:
        FName                           ID;
        TArray<FGDStCommon_TextInfo>    textInfo;
};

class UGDSLifeText : public UGameDataAsset
{
    public:
        TMap<FName, FGDLifeText>    m_dataMap;  
};

#endif // !UGDSLIFETEXT_HPP