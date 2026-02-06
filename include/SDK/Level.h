
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Game/Level/Title/TitleSubLevel_GraphicSetting_Map.TitleLevel_GraphicSettingMap_C
/// Size: 0x02C0 (704 bytes) (0x000298 - 0x0002C0) align 8 MaxSize: 0x02C0
class ATitleLevel_GraphicSettingMap_C : public ALevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0298   (0x0008)  
	TArray<FString>                                    DynamicLoadSubLevelPathArray;                               // 0x02A0   (0x0010)  
	TArray<class ULevelStreamingDynamic*>              LevelStreamingDynamicArray;                                 // 0x02B0   (0x0010)  


	/// Functions
	// Function /Game/Level/Title/TitleSubLevel_GraphicSetting_Map.TitleLevel_GraphicSettingMap_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x3617e10] Event|Protected|BlueprintEvent 
	// Function /Game/Level/Title/TitleSubLevel_GraphicSetting_Map.TitleLevel_GraphicSettingMap_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x3617e10] Event|Public|BlueprintEvent 
	// Function /Game/Level/Title/TitleSubLevel_GraphicSetting_Map.TitleLevel_GraphicSettingMap_C.ExecuteUbergraph_TitleLevel_GraphicSettingMap
	// void ExecuteUbergraph_TitleLevel_GraphicSettingMap(int32_t EntryPoint);                                                  // [0x3617e10] Final|HasDefaults    
};

#pragma pack(pop)


