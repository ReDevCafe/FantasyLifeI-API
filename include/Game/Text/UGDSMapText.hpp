#ifndef UGDSMAPTEXT_HPP
    #define UGDSMAPTEXT_HPP

    #include "Game/FGDStCommon.hpp"

struct FGDMapText : FTableRowBase
{ 
    public:
        FName                           ID;  
        TArray<FGDStCommon_TextInfo>    textInfoArray;
};

class UGDSMapText : public UGameDataAsset
{ 
public:
	TMap<FName, FGDMapText>         m_dataMap;
};


#endif // !UGDSMAPTEXT_HPP