#ifndef UGDSITEMMATERIALDATA
    #define UGDSITEMMATERIALDATA
    #include "Game/Item/FGDItemData.hpp"

struct FGDItemMaterialData : FGDItemData
{
    public:
        uint16_t        StackCheckNum;
        unsigned char   unknown1[0x2];
        FName           libraryFlagID;
        uint16_t        ripeningPoint;
        unsigned char   unknown2[0x2];
};

class UGDSItemMaterialData : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDItemMaterialData>    m_dataMap;
        unsigned char                       unknown[0x50];
};

#endif // !UGDSITEMMATERIALDATA
