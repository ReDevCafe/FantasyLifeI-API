#ifndef UGDSDAILYMISSIONTITLETEXT_HPP
    #define UGDSDAILYMISSIONTITLETEXT_HPP

    #include "Game/FGDStCommon.hpp"

struct FGDDailyMissionTitleText : FTableRowBase
{ 
    public:
        FName                                              ID;                                                         // 0x0008   (0x0008)  
        TArray<FGDStCommon_TextInfo>                       textInfoArray;                                                       // 0x0010   (0x0010)  
};

class UGDSDailyMissionTitleText : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDDailyMissionTitleText>              m_dataMap;                                                  // 0x0050   (0x0050)  
};

#endif // !UGDSDAILYMISSIONTITLETEXT_HPP