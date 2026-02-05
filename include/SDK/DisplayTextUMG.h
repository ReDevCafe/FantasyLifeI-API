
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/DisplayTextUMG.DisplayTextListWidget
/// Size: 0x0360 (864 bytes) (0x0002E0 - 0x000360) align 8 MaxSize: 0x0360
class UDisplayTextListWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x02E0   (0x0080)  MISSED
};

/// Class /Script/DisplayTextUMG.DisplayTextUMGSettings
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UDisplayTextUMGSettings : public UDeveloperSettings
{ 
public:
	TSoftObjectPtr<class UClass*>                      DisplayTextListWidgetPath;                                  // 0x0038   (0x0028)  
	int32_t                                            WidgetZOrder;                                               // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/DisplayTextUMG.DisplayTextUMGSubsystem
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UDisplayTextUMGSubsystem : public UGameInstanceSubsystem
{ 
public:
	class UDisplayTextListWidget*                      m_widget;                                                   // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_7[0x70];                                      // 0x0038   (0x0070)  MISSED
};

#pragma pack(pop)


