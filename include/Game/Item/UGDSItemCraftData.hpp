#ifndef UGDSITEMCRAFTDATA_HPP
    #define UGDSITEMCRAFTDATA_HPP

    #include "FGDItemData.hpp"

struct FGDItemCraftData : FGDItemData
{
    public:
        uint16_t        StackCheckNum;
        unsigned char   unknown[0x2];
        FGDId           craftObjId;
        FGDId           designId;
        FName           SizeTextId;
        int32_t         priceSellGalleryBase;
};

class UGDSItemCraftData : public UGameDataAsset
{
    public:
        TMap<FName, FGDItemCraftData>   m_dataMap;
        unsigned char                   unknown[0x50];
};

#endif // !UGDSITEMCRAFTDATA_HPP