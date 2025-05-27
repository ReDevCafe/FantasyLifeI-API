#ifndef UGDSITEMLIFETOOLSDATA_HPP
    #define UGDSITEMLIFETOOLSDATA_HPP

    #include "FGDItemData.hpp"

class FGDItemLifeToolsData : public FGDItemUniqueSkillEquipData 
{
    public:
        bool                                               disableBurial;  
        unsigned char                                      unknown1[0x3];
        FName                                              ModelId2;  
        unsigned char                                      unknown2[0x4];
        TArray<int32_t>                                    lifeParamList; 
};

class UGDSItemLifeToolsData : public UGameDataAsset 
{
    public:
        TMap<FName, FGDItemLifeToolsData> m_dataMap;
};

#endif /* !UGDSITEMLIFETOOLSDATA_HPP */
