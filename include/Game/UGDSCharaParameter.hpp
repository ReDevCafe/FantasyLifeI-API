#ifndef UGDSCHARAPARAMETER_HPP_
    #define UGDSCHARAPARAMETER_HPP_

    #include "../Engine/DataTable.hpp"
    #include "../Engine/UGameDataAsset.hpp"


class FGDCharaParameterBase : public FTableRowBase {
    public:
        FGDId paramId;
        FName charaID;
        FName battleCharaId;
        FName commandAi;
        FName BattleMoveAi;
        FName battleCharaScriptId;
        FName BattleCharaBPScriptId;
        int32_t moveSpeed;
        int32_t Weight;
        FName reactRank;
        bool isRestrictNavConstraint;
};

class FGDStCommon_LifeParam {
    public:
        int32_t miner;
        int32_t lumberjack;
        int32_t fisherman;
        int32_t farmer;
        int32_t cook;
        int32_t blacksmith;
        int32_t carpenter;
        int32_t needleworker;
        int32_t alchemist;
        int32_t artist;
};

class FGDStCommon_StatusBaseParam {
    public:
        int32_t HP;
        int32_t sp;
        int32_t physicalOffense;
        int32_t physicalDefense;
        int32_t magicOffense;
        int32_t magicDefense;
        int32_t criticalRate;
        int32_t criticalRateEvasion;
};

class FGDCharaParameter_CharaStatusParam {
    public:
        FName lifeId;
        FGDStCommon_StatusBaseParam baseParamMin;
        FGDStCommon_StatusBaseParam baseParamMax;
        FGDStCommon_LifeParam lifeParamMin;
        FGDStCommon_LifeParam lifeParamMax;
};

class FGDCharaParameter : public FGDCharaParameterBase {
    public:
        TMap<FName, FGDCharaParameter_CharaStatusParam> charaStatusParamList;
        FName interactionAi;
        FName specialTechniqueId1;
        FName specialTechniqueId2;
        char gameTimeZoneType;
        FName resistId;
};
    
class UGDSCharaParameter : public UGameDataAsset
{ 
    public:
        TMap<FGDId, FGDCharaParameter> m_dataMap;
};

#endif /* !UGDSCHARAPARAMETER_HPP_ */
