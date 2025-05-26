#ifndef UGDSITEMTEXT_HPP_
    #define UGDSITEMTEXT_HPP_

    #include "Engine/UGameDataAsset.hpp"
    #include "Engine/DataTable.hpp"
    #include "Game/FGDStCommon.hpp"

class FGDItemText : public FTableRowBase {
    public:
        FName ID;
        TArray<FGDStCommon_TextInfo> textInfo;
};

class UGDSItemText : public UGameDataAsset {
    public:
        TMap<FName, FGDItemText> m_dataMap;
};

#endif /* !UGDSITEMTEXT_HPP_ */
