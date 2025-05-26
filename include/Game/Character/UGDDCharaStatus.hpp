#ifndef UGDDCHARASTATUS_HPP
    #define UGDDCHARASTATUS_HPP

    #include "Engine/DataTable.hpp"
    #include "Engine/UObject.hpp"
    #include "Game/Life/UGDSLifeData.hpp"
    #include "Game/Character/FCharacterDetailInfo.hpp"
    #include "Game/Inventory/Inventory.hpp"

struct FCharaStatusP
{
    public:
        FCharaStatusHandle      m_charaStHdl;
        FName                   m_paramId;
        uint32_t                m_nowHp;
        uint32_t                m_nowSp;
        uint32_t                m_nowTension;
        float                   m_nowReactGauge;
        float                   m_nowReactContinueTime;
        float                   m_nowRecoverySPTime;
        uint16_t                m_addOrder;
        unsigned char           m_unknown[0x2];
        uint32_t                rateMaxHp;
        uint32_t                rateNowHp;
        uint32_t                rateMaxSp;
        uint32_t                rateNowSp;
};

struct FCharaEquipInvInfo
{
    public:
        FInventoryHandle        Vehicle;
};

struct FHumanCharaStatusP : FCharaStatusP
{
    public:
        FCharaEquipInvInfo      m_charaEquipInvInfo;  
};

struct FLifeStatus
{ 
    public:
        ELicenseRank            licenseRank;                                 
        unsigned char           unknown[0x3];
        uint32_t                star;  
        int32_t                 skillMaxPoint;  
};

struct FEquipInvInfo
{ 
    public:
        FInventoryHandle        weapon;  
        FInventoryHandle        shield;  
        FInventoryHandle        Head;  
        FInventoryHandle        tops;  
        FInventoryHandle        bottoms;  
        FInventoryHandle        arm;  
        FInventoryHandle        foot;  
        FInventoryHandle        mantle;  
        FInventoryHandle        glasses;  
        FInventoryHandle        Accessory;  
};

struct FViewEquipInvInfo
{ 
    public:
        FInventoryHandle                                   weapon;  
        FInventoryHandle                                   shield;  
        FInventoryHandle                                   Head;    
        FInventoryHandle                                   tops;    
        FInventoryHandle                                   bottoms;  
        FInventoryHandle                                   arm;      
        FInventoryHandle                                   foot;     
        FInventoryHandle                                   mantle;   
        FInventoryHandle                                   glasses;  
};

struct FViewEquipModelInfo
{ 
    public:
        FName                                              weapon;  
        FName                                              shield;  
        FName                                              Head;    
        FName                                              tops;    
        FName                                              bottoms;   
        FName                                              arm;       
        FName                                              foot;      
        FName                                              mantle;    
        FName                                              glasses;   
        FName                                              sub;       
        FViewEquipInvInfo                                  invInfo;   
        unsigned char                                      unknown;
};

struct FNpcViewEquipInvInfo
{ 
    public:
        FInventoryHandle        weapon;  
        FInventoryHandle        shield;  
};

struct FNpcCharaStatusP : FHumanCharaStatusP
{
    public:
        FLifeStatus             m_lifeStatus;

        uint16_t                m_lv;
        uint16_t                m_friendship;
        uint32_t                m_exp;

        FEquipInvInfo           m_abilityEquipInvInfo;
        FNpcViewEquipInvInfo    m_npcViewEquipInvInfo;

        char                    m_questCount;
        char                    m_talkCount;

        bool                    m_enablePresent;
        bool                    m_enablePresentFriendshipMax;

        char                    m_friendshipDailyMove;
        char                    m_friendshipDailyBattle;
        char                    m_friendshipDailyPick;
        char                    m_friendshipDailyCraft;

        bool                    m_isInstantChara;
        char                    m_charaModelIndex;
};

struct FBtlActParam
{ 
    public:
	    FName                           CommandID; 
};

struct FAvatarCharaStatusP : FHumanCharaStatusP
{
    public:
        FCharaStatusHandle              m_avatarStatusHdl;
        FString                         m_name;
        FName                           m_lifeId;
        FName                           m_lifeSet[2];
        TMap<FName, FLifeStatus>        m_lifeStatus;
        TMap<FName, uint16_t>           m_lv;
        TMap<FName, uint32_t>           m_exp;
        TMap<FName, FEquipInvInfo>      m_abilityEquipInvInfo; 
        TMap<FName, FViewEquipInvInfo>  m_viewEquipInvInfo;
        FViewEquipModelInfo             m_iconEquipModelInfo; 
        FBtlActParam                    m_editableBtlActParam[3];
};

struct FGuestCharaStatusP : FCharaStatusP
{ 
    public:
        uint16_t                                           m_friendship;
        char                                               m_talkCount;  
        bool                                               m_enablePresent;
        bool                                               m_enablePresentFriendshipMax;  
        unsigned char                                      unknown[0x3];
};

struct FSupportCharaStatusP : FNpcCharaStatusP
{ 
};

class FCharaStatusGroupP
{
    public:
        TArray<FAvatarCharaStatusP>                        m_stAvatarP;  
        TArray<FNpcCharaStatusP>                           m_stFriendP; 
        TArray<FGuestCharaStatusP>                         m_stGuestP; 
        TArray<FSupportCharaStatusP>                       m_stSupportP;
};

class FCharaStatusGroupV
{
    public:
        unsigned char       m_unknown[0xC8];  
};

class UGDDCharaStatus : public UObject 
{
    public: 
        unsigned char       m_unknown1[0x40];
        FCharaStatusGroupP  m_permanent;
        FCharaStatusGroupV  m_volatile;
        unsigned char       m_unknown2[0x8];
};

#endif //!UGDDCHARASTATUS_HPP