#ifndef UGDSPLANTDUUNGEONTEXT_NOUN
    #define UGDSPLANTDUUNGEONTEXT_NOUN

    #include "Engine/UGameDataAsset.hpp"
    #include "Engine/DataTable.hpp"
    #include "Game/FGDStCommon.hpp"

struct FGDPlantDungeonText_Noun : FTableRowBase
{
    public:
        FName                                       ID;
        TArray<FGDStCommon_NounInfo>                nounInfoArray;
};

class UGDSPlantDungeonText_Noun : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDPlantDungeonText_Noun>   m_dataMap;
};


#endif // !UGDSPLANTDUUNGEONTEXT_NOUUN