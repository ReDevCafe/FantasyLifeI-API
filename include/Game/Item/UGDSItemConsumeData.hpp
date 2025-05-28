#ifndef UGDSITEMCONSUMEDATA_HPP
    #define UGDSITEMCONSUMEDATA_HPP
    #include "FGDItemData.hpp"

enum class EItemUseActionType : uint8_t
{
	Use = 0,
	Eat = 1,
	Drink = 2
};

struct FGDItemConsumeData : public FGDItemData
{
    public:
        uint16_t                    StackCheckNum;
        char                        itemUseActionType;
        unsigned char               unknown1[0x1];
        FName                       modelID;
        FName                       cmdId;
        FGDStCommon_ItemEffParam    effParam0;
        FGDStCommon_ItemEffParam    effParam1;
        FGDStCommon_ItemEffParam    effParam2;
        unsigned char               unknown2[0x4];
};

class UGDSItemConsumeData : public UGameDataAsset
{
    public:
	    TMap<FName, FGDItemConsumeData> m_dataMap;
        unsigned char                   unknown[0x50];
};

#endif // !UGDSITEMCONSUMEDATA_HPP