#ifndef UGDSDAILYMISSIONCOMPLETENOTIFICATIONTEXT_HPP // help
    #define UGDSDAILYMISSIONCOMPLETENOTIFICATIONTEXT_HPP

    #include "Game/FGDStCommon.hpp"

struct FGDDailyMissionCompleteNotificationText : FTableRowBase
{ 
    public:
        FName                                              ID;                                                         // 0x0008   (0x0008)  
        TArray<FGDStCommon_TextInfo>                       textInfoArray;                                                       // 0x0010   (0x0010)  
};


class UGDSDailyMissionCompleteNotificationText : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDDailyMissionCompleteNotificationText> m_dataMap;                                                // 0x0050   (0x0050)  
};

#endif // !UGDSDAILYMISSIONCOMPLETENOTIFICATIONTEXT_HPP