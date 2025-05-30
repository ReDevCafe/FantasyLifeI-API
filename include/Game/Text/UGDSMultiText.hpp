#ifndef UGDSMULTITEXT_HPP
    #define UGDSMULTITEXT_HPP

    #include "Game/FGDStCommon.hpp"

struct FGDMultiText : FTableRowBase
{ 
    public:
        FName                           ID;
        TArray<FGDStCommon_TextInfo>    textInfoArray;
};

class UGDSMultiText : public UGameDataAsset
{ 
public:
	TMap<FName, FGDMultiText>           m_dataMap;
};


#endif // !UGDSMULTITEXT_HPP