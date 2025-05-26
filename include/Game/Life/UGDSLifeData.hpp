#ifndef UGDSLIFEDATA_HPP
    #define UGDSLIFEDATA_HPP

    #include "Engine/DataTable.hpp"
    #include "Engine/UGameDataAsset.hpp"
    
    #include "Life.hpp"

class FGDLifeData : public FTableRowBase
{
    public:
        FName               ID,
                            nameId,
                            DescId;
        
        ELifeCategory       Category;
        ELifeType           Type;

        FName               iconID,
                            hqIconId,
                            emblemIconId,
                            tabIconId,
                            tabIconEmblemId,
                            silhouetteEmblemIconId,
                            hqSilhouetteEmblemIconId,
                            glowEmblemIconId,
                            combinEmblemIconId,
                            portraitIconId,
                            portraitIconOutlineId,
                            skillPointIconId;

        TArray<uint32_t>    licenseRankUpStar;

        FName               rentalWeaponId,
                            rentalShieldId,
                            defaultHeadId,
                            defaultTopsId,
                            defaultBottomsId,
                            defaultArmId,
                            defaultFootId,
                            defaultMantleId,
                            defaultGlassesId,
                            defaultAccessory;

        FGDId               skillBoardId;

        FName               licenseMenuLimitId,
                            releaseBitFlag;
};


class UGDSLifeData : public UGameDataAsset 
{
    public:
        TMap<FName, FGDLifeData> m_dataMap;
};
#endif // !UGDSLIFEDATA_HPP