#ifndef UGDSITEMTEXT_HPP_
    #define UGDSITEMTEXT_HPP_

    #include "../Engine/UGameDataAsset.hpp"
    #include "../Engine/DataTable.hpp"

class FGDStCommon_TextInfo {
    public:
        int8_t subID;
        FString Text;
        FString text_en;
        FString text_fr;
        FString text_it;
        FString text_de;
        FString text_es;
        FString text_czh;
        FString text_tzh;
        FString text_ko;
};

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
