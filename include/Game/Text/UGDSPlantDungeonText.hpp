#ifndef UGDSPLANTDUNGEONTEXT_HPP
    #define UGDSPLANTDUNGEONTEXT_HPP

    #include "Game/FGDStCommon.hpp"

struct FGDPlantDungeonText : FTableRowBase
{ 
    public:
        FName                                              ID;                                                         // 0x0008   (0x0008)  
        TArray<FGDStCommon_TextInfo>                       textInfoArray;                                                   // 0x0010   (0x0010)  
};

class UGDSPlantDungeonText : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDPlantDungeonText>                   m_dataMap;                                                  // 0x0050   (0x0050)  
};

#endif // !UGDSPLANTDUNGEONTEXT_HPP