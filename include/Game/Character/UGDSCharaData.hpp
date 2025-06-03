#ifndef UGDSCHARADATA_HPP
    #define UGDSCHARADATA_HPP
    
    #include "Engine/UGameDataAsset.hpp"
    #include "Engine/DataTable.hpp"
    #include "Game/Types.hpp"

class FGDCharaData : public FTableRowBase 
{
    public:
        FName           ID;
        FName           Flag;
        FName           nameId;
        FName           modelID;
        TArray<FName>   AnimLoadGroupIDList;
        FName           moveSpeed;
        FName           CraftAreaMoveSpeed;
        EGenderType     gender;
        bool            isAvatar;
        unsigned char   unknown1[0x2];
        FName           iconID;
        FName           BodyIconId;
        FName           lifeIconId;
        FName           nicknameId;
        FName           VoiceOverrideID;
        unsigned char   unknown2[0x14];
};

class UGDSCharaData : public UGameDataAsset
{
    public:
        TMap<FName, FGDCharaData>   m_dataMap;
};

#endif // !UGDSCHARADATA_HPP