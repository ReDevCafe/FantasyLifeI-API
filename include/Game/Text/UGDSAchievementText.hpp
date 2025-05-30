#ifndef UGDSACHIEVEMENTTEXT_HPP
    #define UGDSACHIEVEMENTTEXT_HPP
    
    #include "Game/FGDStCommon.hpp"


struct FGDAchievementText : FTableRowBase
{ 
	FName                           ID;
	TArray<FGDStCommon_TextInfo>    textInfoArray;
};

class UGDSAchievementText : public UGameDataAsset
{ 
public:
	TMap<FName, FGDAchievementText> m_dataMap;  
};

#endif // !UGDSACHIEVEMENTTEXT_HPP