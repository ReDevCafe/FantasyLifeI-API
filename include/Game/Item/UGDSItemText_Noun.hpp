#ifndef UGDSITEMTEXT_NOUN_HPP_
    #define UGDSITEMTEXT_NOUN_HPP_

    #include "Engine/UGameDataAsset.hpp"
    #include "Engine/DataTable.hpp"
    #include "Game/FGDStCommon.hpp"

class FGDItemText_Noun : public FTableRowBase {
    public:
        FName ID;
        TArray<FGDStCommon_NounInfo> textInfo;
};

class UGDSItemText_Noun : public UGameDataAsset {
    public:
        TMap<FName, FGDItemText_Noun> m_dataMap;
};

#endif /* !UGDSITEMTEXT_HPP_ */
