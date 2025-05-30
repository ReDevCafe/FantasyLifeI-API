#ifndef UGDSMENUICONTEXTURE_HPP
    #define UGDSMENUICONTEXTURE_HPP

    #include "Engine/DataTable.hpp"
    #include "Engine/UGameDataAsset.hpp"

struct FGDMenuIconTexture_IconInfoPerId
{ 
    public:
        FString             AssetPath; 
        bool                isResident;
        unsigned char       UnknownData00_6[0x3];
        FName               dummyTextureId;
        bool                isForLocalization;
        unsigned char       UnknownData01_7[0x3];
};

struct FGDMenuIconTexture_IconFileNameInfo
{ 
    public:
        int8_t              Type; 
        unsigned char       unknown[0x3];
        FName               Filename; 
        FName               dummyTextureId; 
};

struct FGDMenuIconTexture_IconInfo
{
    public:
        char                                                Category;
        unsigned char                                       unknown1[0x7];
        FString                                             dataPath;
        bool                                                isResident;
        unsigned char                                       unknown2[0x7];
        TMap<int8_t, FGDMenuIconTexture_IconFileNameInfo>   iconFileNameInfo;
};

struct FGDMenuIconTexture : FTableRowBase
{
    public:
        FName                                       uniqId;
        FGDMenuIconTexture_IconInfoPerId            iconInfoPerId;
        TMap<char, FGDMenuIconTexture_IconInfo>     iconInfoPerFolder;
};

class UGDSMenuIconTexture : public UGameDataAsset
{
    public:
        TMap<FName, FGDMenuIconTexture> m_dataMap;
};

#endif // !UGDSMENUICONTEXTURE_HPP