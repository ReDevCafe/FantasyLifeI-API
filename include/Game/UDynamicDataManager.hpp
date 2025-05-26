#ifndef USTATICDATAMANAGER_HPP
    #define USTATICDATAMANAGER_HPP

    #include "Engine/UObject.hpp"
    #include "UGDDCharaStatus.hpp"

class UDynamicDataManager : public UGameInstanceSubsystem 
{
    public:
        unsigned char       m_unknown[0x8];
        void*               GDDHeaderData;                   
        void*               GDDSystemHeaderData;            
        void*               GDDSystemData;                                        
        void*               GDDPlayData;              
        void*               GDDPhaseStatus;        
        void*               GDDFlagStatus;                  
        UGDDCharaStatus*    GDDCharaStatus;                
        void*               GDDPartyStatus;                
        void*               GDDInventoryStatus;                          
        void*               GDDQuestStatus;                        
        void*               GDDDynamicQuestConfig;               
        void*               GDDPeriodicBenefitStatus;       
        void*               GDDCraftStatus;                       
        void*               GDDCraftAreaStatus;                          
        void*               SyncGDDCraftStatus;                         
        void*               SyncGDDCraftAreaStatus;               
        void*               GDDPlantDungeonStatus;                 
        void*               SyncGDDPlantDungeonStatus;           
        void*               GDDGalleryStatus;                      
        void*               SyncGDDGalleryStatus;        
        void*               GDDAvatarStatus;                 
        void*               GDDMultiplayStatus;                                    
        void*               GDDPickPointStatus;                                 
        void*               GDDWeatherStatus;                      
        void*               GDDNpcTalkStatus;                  
        void*               GDDNpcTalkSkill;                                 
        void*               GDDNpcStatus;                                  
        void*               SyncGDDNpcStatus;                                 
        void*               GDDRecipeStatus;                                      
        void*               GDDLotteryPlacementStatus;        
        void*               GDDVegetableFieldStatus;          
        void*               GDDMySetStatus;      
        void*               GDDGuildStatus;          
        void*               GDDDailyMissionStatus;          
        void*               GDDWillowOfDevildomStatus;  
        void*               SyncGDDWillowOfDevildomStatus;  
        void*               GDDShopStatus;   
        void*               GDDTraderShopStatus;
        void*               SyncGDDTraderShopStatus;       
        void*               GDDFarmStandStatus;             
        void*               GDDTamagemonoStatus;                   
        void*               GDDTextLog;                         
        void*               GDDHugeMapStatus;                    
        void*               GDDPlantDungeonBranchStatus;       
        void*               SyncGDDPlantDungeonBranchStatus;         
        void*               GDDInstantCharaStatus;                            
        void*               GDDEnemyStatus;            
        void*               GDDGenerateStatus;                 
        void*               GDDBlockUserData;                          
        void*               GDDItemSeriesStatus;                                     
        void*               GDDReportUserData;      
};

#endif // !USTATICDATAMANAGER_HPP