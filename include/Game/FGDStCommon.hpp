#ifndef FGDSTCOMMON_HPP
    #define FGDSTCOMMON_HPP

    #include "Engine/DataTable.hpp"
    #include "Engine/FName.hpp"
    #include "Engine/UGameDataAsset.hpp"

class FGDAuto { 
    public:
        uint32_t                m_offset;
        uint32_t                m_dataSize;
        class UGameDataAsset    *m_pAsset;
        unsigned char           unknown[0x10];
};

struct FGDStCommon_ElementAttrParam
{ 
	int32_t     fire;  
	int32_t     water;  
	int32_t     wind;  
	int32_t     earth;  
	int32_t     shine;  
	int32_t     dark;  
};

class FGDStCommon_TextInfo {
    public:
        int8_t subID;
        FString Text;
        FString text_en;
        FString text_fr;
        FString text_it;
        FString text_de;
        FString text_es;
        FString text_czh;
        FString text_tzh;
        FString text_ko;
};

struct FGDStCommon_SkillParam
{ 
	TArray<FGDAuto> prm;                                                        // 0x0000   (0x0010)  
};

class FGDStCommon_NounInfo
{
    public:
        char        subID,
                    mfType,
                    spType,
                    nounType,
                    vcType;
        uint16_t    sort;

        char        mfType_en,
                    spType_en,
                    nounType_en,
                    vcType_en;
        uint16_t    sort_en;

        char        mfType_fr,
                    spType_fr,
                    nounType_fr,
                    vcType_fr;
        uint16_t    sort_fr;

        char        mfType_es,
                    spType_es,
                    nounType_es,
                    vcType_es;
        uint16_t    sort_es;

        char        mfType_de,
                    spType_de,
                    nounType_de,
                    vcType_de;
        uint16_t    sort_de;

        char        mfType_it,
                    spType_it,
                    nounType_it,
                    vcType_it;
        uint16_t    sort_it;

        char        mfType_tzh,
                    spType_tzh,
                    nounType_tzh,
                    vcType_tzh;
        uint16_t    sort_tzh;

        char        mfType_czh,
                    spType_czh,
                    nounType_czh,
                    vcType_czh;
        uint16_t    sort_czh;

        char        mfType_ko,
                    spType_ko,
                    nounType_ko,
                    vcType_ko;
        uint16_t    sort_ko;

        FString                                nounSingularDefiniteArticle;                                
        FString                                nounSingularIndefiniteArticle;                           
        FString                                nounSingularPrefix;                                    
        FString                                nounSingularForm;                                       
        FString                                nounPluralDefiniteArticle;                                   
        FString                                nounPluralIndefiniteArticle;                                
        FString                                nounPluralPrefix;                                           
        FString                                nounPluralForm;                                             
        FString                                nounSingularDefiniteArticle_en;                             
        FString                                nounSingularIndefiniteArticle_en;                      
        FString                                nounSingularPrefix_en;                          
        FString                                nounSingularForm_en;                                      
        FString                                nounPluralDefiniteArticle_en;                       
        FString                                nounPluralIndefiniteArticle_en;                         
        FString                                nounPluralPrefix_en;                                
        FString                                nounPluralForm_en;                  
        FString                                nounSingularDefiniteArticle_fr;    
        FString                                nounSingularIndefiniteArticle_fr; 
        FString                                nounSingularPrefix_fr;                        
        FString                                nounSingularForm_fr;                              
        FString                                nounPluralDefiniteArticle_fr;                         
        FString                                nounPluralIndefiniteArticle_fr; 
        FString                                nounPluralPrefix_fr;                               
        FString                                nounPluralForm_fr;                                     
        FString                                nounSingularDefiniteArticle_es;                         
        FString                                nounSingularIndefiniteArticle_es;                   
        FString                                nounSingularPrefix_es;                              
        FString                                nounSingularForm_es;                                        
        FString                                nounPluralDefiniteArticle_es;                              
        FString                                nounPluralIndefiniteArticle_es;                        
        FString                                nounPluralPrefix_es;                                   
        FString                                nounPluralForm_es;                                   
        FString                                nounSingularDefiniteArticle_de;                         
        FString                                nounSingularIndefiniteArticle_de;                       
        FString                                nounSingularPrefix_de;                                   
        FString                                nounSingularForm_de;                                      
        FString                                nounPluralDefiniteArticle_de;                              
        FString                                nounPluralIndefiniteArticle_de;                            
        FString                                nounPluralPrefix_de;                                     
        FString                                nounPluralForm_de;                                
        FString                                nounSingularDefiniteArticle_it;                     
        FString                                nounSingularIndefiniteArticle_it;                   
        FString                                nounSingularPrefix_it;                           
        FString                                nounSingularForm_it;                                     
        FString                                nounPluralDefiniteArticle_it;                          
        FString                                nounPluralIndefiniteArticle_it;                       
        FString                                nounPluralPrefix_it;                               
        FString                                nounPluralForm_it;                                     
        FString                                nounSingularDefiniteArticle_tzh;                      
        FString                                nounSingularIndefiniteArticle_tzh;                        
        FString                                nounSingularPrefix_tzh;                               
        FString                                nounSingularForm_tzh;                                 
        FString                                nounPluralDefiniteArticle_tzh;                     
        FString                                nounPluralIndefiniteArticle_tzh;                
        FString                                nounPluralPrefix_tzh;                                   
        FString                                nounPluralForm_tzh;                      
        FString                                nounSingularDefiniteArticle_czh;                   
        FString                                nounSingularIndefiniteArticle_czh;        
        FString                                nounSingularPrefix_czh;                         
        FString                                nounSingularForm_czh;                          
        FString                                nounPluralDefiniteArticle_czh;                               
        FString                                nounPluralIndefiniteArticle_czh;                    
        FString                                nounPluralPrefix_czh;                                   
        FString                                nounPluralForm_czh;                                       
        FString                                nounSingularDefiniteArticle_ko;                          
        FString                                nounSingularIndefiniteArticle_ko;                           
        FString                                nounSingularPrefix_ko;                           
        FString                                nounSingularForm_ko;                                     
        FString                                nounPluralDefiniteArticle_ko;                     
        FString                                nounPluralIndefiniteArticle_ko;                          
        FString                                nounPluralPrefix_ko;                                     
        FString                                nounPluralForm_ko;    
};

class FGDStCommon_CondCmd {
    public:
        FName Cmd;
        TArray<FGDAuto> arg;
};

class FGDStCommon_PriceInfo {
    public:
        TArray<int32_t> priceBuyRichList;
        TArray<int32_t> priceSellRichList;
        TArray<int32_t> priceBuySparkleList;
        TArray<int32_t> priceBuyTourCoinList;
        TArray<int32_t> priceBuyGoddessSeedList;
        TArray<int32_t> priceBuyShineGoddessSeedList;
        TArray<int32_t> priceBuyRainbowGoddessSeedList;
        TArray<int32_t> priceTradeRebuildStoneList;
        TArray<int32_t> priceBuyChestnut;
};

struct FGDStCommon_ItemEffParam
{
    int16_t         val;
    int16_t         Time;
    bool            isRange;
    char            itemEffectType;
    unsigned char   unknown[0x2];
    FName           effDescId;
};

struct FGDStCommon_PickStatusParam
{ 
    public:
	int32_t     HP;                                                         // 0x0000   (0x0004)  
	int32_t     offense;                                                    // 0x0004   (0x0004)  
	int32_t     defense;                                                    // 0x0008   (0x0004)  
	int32_t     criticalRateEvasion;                                        // 0x000C   (0x0004)  
	uint32_t    Exp;                                                        // 0x0010   (0x0004)  
};

/// Struct /Script/DP1Project.GDCommonPickParamData_CommonPickParam
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FGDCommonPickParamData_CommonPickParam
{ 
    public:
	float   Radius;                                                     // 0x0000   (0x0004)  
	char    sweetSpotAngle;                                             // 0x0004   (0x0001)  
	bool    isChangeSweetSpot;                                          // 0x0005   (0x0001)  
	char    sweetSpotMin;                                               // 0x0006   (0x0001)  
	char    sweetSpotMax;                                               // 0x0007   (0x0001)  
	float   walkAroundSpeed;                                            // 0x0008   (0x0004)  
	float   hitEffPosRate;                                              // 0x000C   (0x0004)  
};

struct FGDStItem_PickPointDropItem
{ 
    public:
	FName   tableGroupId;                                               // 0x0000   (0x0008)  
	FName   excellentTableGroupId;                                      // 0x0008   (0x0008)  
};

struct FGDCommonPickParamData : FTableRowBase
{
    public: 
	FName                                              ID;                                                         // 0x0008   (0x0008)  
	char                                               enemyType;                                                  // 0x0010   (0x0001)  
	char                                               Category;                                                   // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0012   (0x0002)  MISSED
	FName                                              gotId;                                                      // 0x0014   (0x0008)  
	FGDStCommon_PickStatusParam                        pickParamMin;                                               // 0x001C   (0x0014)  
	FGDStCommon_PickStatusParam                        pickParamMax;                                               // 0x0030   (0x0014)  
	FGDCommonPickParamData_CommonPickParam             commonPickInfo;                                             // 0x0044   (0x0010)  
	char                                               overkillRate;                                               // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	float                                              healRate;                                                   // 0x0058   (0x0004)  
	float                                              healRateInBattle;                                           // 0x005C   (0x0004)  
	bool                                               isBoss;                                                     // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	FGDStItem_PickPointDropItem                        Drop;                                                       // 0x0064   (0x0010)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

class UGDSCommonPickParamData : public UGameDataAsset
{ 
    public:
        TMap<FName, FGDCommonPickParamData>                m_dataMap;                                                  // 0x0050   (0x0050)  
};

struct FGDStCommon_SubLevelLoadInfo
{ 
	FName   SubLevelPath;  
};


#endif // !FGDSTCOMMON_HPP