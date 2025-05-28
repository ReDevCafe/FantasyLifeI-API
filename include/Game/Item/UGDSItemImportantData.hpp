#ifndef UGDSITEMIMPORTANTDATA
    #define UGDSITEMIMPORTANTDATA

    #include "FGDItemData.hpp"

struct FGDItemImportantData : public FGDItemData
{
    public:
        uint16_t                            StackCheckNum;
        bool                                notAggregated;
        unsigned char                       unknown[0x5];
};

class UGDSItemImportantData : public UGameDataAsset
{
    public:
        TMap<FName, FGDItemImportantData>   m_dataMap;
        unsigned char                       unknown[0x50];
};

#endif // !UGDSITEMIMPORTANTDATA
