#ifndef UGDSCHARAPARAMETERENEMY_HPP
    #define UGDSCHARAPARAMETERENEMY_HPP

    #include "Engine/DataTable.hpp"
    #include "Engine/UGameDataAsset.hpp"
    #include "Game/Character/UGDSCharaParameter.hpp"
    #include "Game/Element.hpp"
    #include "Game/FGDStCommon.hpp"
    #include "Enemy.hpp"

struct FGDCharaParameterEnemy_BtlAiCmdData
{ 
	FGDId                                              attackCmd1;
	FGDId                                              attackCmd2;
	FGDId                                              attackCmd3;
	FGDId                                              attackCmd4;
	FGDId                                              attackCmd5;
	FGDId                                              attackCmd6; 
	FGDId                                              attackCmd7;
	FGDId                                              attackCmd8;
	FGDId                                              attackCmd9;
	FGDId                                              attackCmd10; 
};

struct FGDCharaParameterEnemy : public FGDCharaParameterBase
{
    FGDStCommon_StatusBaseParam                        baseParamMin;                                               // 0x0058   (0x0020)  
	int32_t                                            expMin;                                                     // 0x0078   (0x0004)  
	int32_t                                            moneyMin;                                                   // 0x007C   (0x0004)  
	FGDStCommon_StatusBaseParam                        baseParamMax;                                               // 0x0080   (0x0020)  
	int32_t                                            expMax;                                                     // 0x00A0   (0x0004)  
	int32_t                                            moneyMax;                                                   // 0x00A4   (0x0004)  
	FGDId                                              expLevelCfgId;                                              // 0x00A8   (0x000C)  
	EEnemyType                                         enemyType;                                                  // 0x00B4   (0x0001)  
	EElementAttrType                                   elementAttr;                                                // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00B6   (0x0002)  MISSED
	FGDStCommon_ElementAttrParam                       attrResist;                                                 // 0x00B8   (0x0018)  
	FName                                              resistId;                                                   // 0x00D0   (0x0008)  
	bool                                               isDisableRotDamageDir;                                      // 0x00D8   (0x0001)  
	bool                                               isDisableKnockBack;                                         // 0x00D9   (0x0001)  
	bool                                               isDisableTensionReaction;                                   // 0x00DA   (0x0001)  
	bool                                               IsFixLocation;                                              // 0x00DB   (0x0001)  
	FName                                              BTType;                                                     // 0x00DC   (0x0008)  
	int32_t                                            returnRecoveryHP;                                           // 0x00E4   (0x0004)  
	float                                              ReturnMoveTime;                                             // 0x00E8   (0x0004)  
	FGDCharaParameterEnemy_BtlAiCmdData                btlAiCmdData;                                               // 0x00EC   (0x0078)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0164   (0x0004)  MISSED
	float                                              ChaseDistance;                                              // 0x0168   (0x0004)  
	float                                              SearchDistance;                                             // 0x016C   (0x0004)  
	float                                              activeDistance;                                             // 0x0170   (0x0004)  
	uint16_t                                           searchForwardAngle;                                         // 0x0174   (0x0002)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0176   (0x0002)  MISSED
	float                                              ActiveLimitTime;                                            // 0x0178   (0x0004)  
	float                                              waterDepthLimit;                                            // 0x017C   (0x0004)  
	EBtlActiveTimeZoneType                             activeTime;                                                 // 0x0180   (0x0001)  
	char                                               limitHpPerWaitAndSee;                                       // 0x0181   (0x0001)  
	char                                               limitHpPerSerious;                                          // 0x0182   (0x0001)  
	bool                                               isBoss;                                                     // 0x0183   (0x0001)  
	ETargetRankType                                    rank;                                                       // 0x0184   (0x0001)  
	unsigned char                                      UnknownData03_7[0x3];    
};

class UGDSCharaParameterEnemy : public UGameDataAsset
{ 
    public:
        TMap<FGDId, FGDCharaParameterEnemy> m_dataMap;
        unsigned char                       UnknownData00_7[0x50]; 
};

#endif // !UGDSCHARAPARAMETERENEMY_HPP