
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

/// Enum /Script/CriWareRuntime.EAtomAudioVolumeType
/// Size: 0x01 (1 bytes)
enum class EAtomAudioVolumeType : uint8_t
{
	EAtomAudioVolumeType__UseSnapshot                                                = 0,
	EAtomAudioVolumeType__UseBus                                                     = 1,
	EAtomAudioVolumeType__UseAisacControl                                            = 2,
	EAtomAudioVolumeType__UseEntranceVolume                                          = 3,
	EAtomAudioVolumeType__Num                                                        = 4
};

/// Enum /Script/CriWareRuntime.EAtomComponentStatus
/// Size: 0x01 (1 bytes)
enum class EAtomComponentStatus : uint8_t
{
	EAtomComponentStatus__Stop                                                       = 0,
	EAtomComponentStatus__Prep                                                       = 1,
	EAtomComponentStatus__Playing                                                    = 2,
	EAtomComponentStatus__PlayEnd                                                    = 3,
	EAtomComponentStatus__Error                                                      = 4
};

/// Enum /Script/CriWareRuntime.EAtomLoopSetting
/// Size: 0x01 (1 bytes)
enum class EAtomLoopSetting : uint8_t
{
	EAtomLoopSetting__Inherited                                                      = 0,
	EAtomLoopSetting__Loop                                                           = 1,
	EAtomLoopSetting__OneShot                                                        = 2
};

/// Enum /Script/CriWareRuntime.EAtomCueSheetLoaderComponentStatus
/// Size: 0x01 (1 bytes)
enum class EAtomCueSheetLoaderComponentStatus : uint8_t
{
	EAtomCueSheetLoaderComponentStatus__Stop                                         = 0,
	EAtomCueSheetLoaderComponentStatus__Loading                                      = 1,
	EAtomCueSheetLoaderComponentStatus__LoadEnd                                      = 2,
	EAtomCueSheetLoaderComponentStatus__Serializing                                  = 3,
	EAtomCueSheetLoaderComponentStatus__SerializeEnd                                 = 4,
	EAtomCueSheetLoaderComponentStatus__Binding                                      = 5,
	EAtomCueSheetLoaderComponentStatus__BindEnd                                      = 6,
	EAtomCueSheetLoaderComponentStatus__LoadCueSheet                                 = 7,
	EAtomCueSheetLoaderComponentStatus__Complete                                     = 8,
	EAtomCueSheetLoaderComponentStatus__Error                                        = 9
};

/// Enum /Script/CriWareRuntime.ECriFsBinderStatus
/// Size: 0x01 (1 bytes)
enum class ECriFsBinderStatus : uint8_t
{
	ECriFsBinderStatus__Stop                                                         = 0,
	ECriFsBinderStatus__Binding                                                      = 1,
	ECriFsBinderStatus__Complete                                                     = 2,
	ECriFsBinderStatus__Error                                                        = 3
};

/// Enum /Script/CriWareRuntime.ECriFsLoaderStatus
/// Size: 0x01 (1 bytes)
enum class ECriFsLoaderStatus : uint8_t
{
	ECriFsLoaderStatus__Stop                                                         = 0,
	ECriFsLoaderStatus__Loading                                                      = 1,
	ECriFsLoaderStatus__Complete                                                     = 2,
	ECriFsLoaderStatus__Error                                                        = 3
};

/// Enum /Script/CriWareRuntime.ECriWareErrorType
/// Size: 0x01 (1 bytes)
enum class ECriWareErrorType : uint8_t
{
	ECriWareErrorType__Warning                                                       = 0,
	ECriWareErrorType__Error                                                         = 1
};

/// Enum /Script/CriWareRuntime.EManaSubtitlesEncoding
/// Size: 0x01 (1 bytes)
enum class EManaSubtitlesEncoding : uint8_t
{
	EManaSubtitlesEncoding__Default                                                  = 0,
	EManaSubtitlesEncoding__ANSI                                                     = 1,
	EManaSubtitlesEncoding__Utf8                                                     = 2,
	EManaSubtitlesEncoding__Utf16                                                    = 3
};

/// Enum /Script/CriWareRuntime.EManaComponentStatus
/// Size: 0x01 (1 bytes)
enum class EManaComponentStatus : uint8_t
{
	EManaComponentStatus__Stop                                                       = 0,
	EManaComponentStatus__DecHdr                                                     = 1,
	EManaComponentStatus__WaitPrep                                                   = 2,
	EManaComponentStatus__Prep                                                       = 3,
	EManaComponentStatus__Ready                                                      = 4,
	EManaComponentStatus__Playing                                                    = 5,
	EManaComponentStatus__PlayEnd                                                    = 6,
	EManaComponentStatus__Error                                                      = 7,
	EManaComponentStatus__StopProcessing                                             = 8
};

/// Enum /Script/CriWareRuntime.EManaFrameAction
/// Size: 0x01 (1 bytes)
enum class EManaFrameAction : uint8_t
{
	EManaFrameAction__Default                                                        = 0,
	EManaFrameAction__Hold                                                           = 1,
	EManaFrameAction__Clear                                                          = 2
};

/// Enum /Script/CriWareRuntime.EManaMaxFrameDrop
/// Size: 0x01 (1 bytes)
enum class EManaMaxFrameDrop : uint8_t
{
	EManaMaxFrameDrop__Disabled                                                      = 0,
	EManaMaxFrameDrop__One                                                           = 1,
	EManaMaxFrameDrop__Two                                                           = 2,
	EManaMaxFrameDrop__Three                                                         = 3,
	EManaMaxFrameDrop__For                                                           = 4,
	EManaMaxFrameDrop__Five                                                          = 5,
	EManaMaxFrameDrop__Six                                                           = 6,
	EManaMaxFrameDrop__Seven                                                         = 7,
	EManaMaxFrameDrop__Eight                                                         = 8,
	EManaMaxFrameDrop__Nine                                                          = 9,
	EManaMaxFrameDrop__Ten                                                           = 10,
	EManaMaxFrameDrop__Infinite                                                      = 11
};

/// Enum /Script/CriWareRuntime.EManaPlaybackTimer
/// Size: 0x01 (1 bytes)
enum class EManaPlaybackTimer : uint8_t
{
	EManaPlaybackTimer__Default                                                      = 0,
	EManaPlaybackTimer__RealTime                                                     = 1,
	EManaPlaybackTimer__FrameTime                                                    = 2,
	EManaPlaybackTimer__Manual                                                       = 3
};

/// Enum /Script/CriWareRuntime.EAtomSpeakerID
/// Size: 0x01 (1 bytes)
enum class EAtomSpeakerID : uint8_t
{
	EAtomSpeakerID__FrontLeft                                                        = 0,
	EAtomSpeakerID__FrontRight                                                       = 1,
	EAtomSpeakerID__FrontCenter                                                      = 2,
	EAtomSpeakerID__LowFrequency                                                     = 3,
	EAtomSpeakerID__SurroundLeft                                                     = 4,
	EAtomSpeakerID__SurroundRight                                                    = 5,
	EAtomSpeakerID__SurroundBackLeft                                                 = 6,
	EAtomSpeakerID__SurroundBackRight                                                = 7
};

/// Enum /Script/CriWareRuntime.EManaPlayerTrack
/// Size: 0x01 (1 bytes)
enum class EManaPlayerTrack : uint8_t
{
	EManaPlayerTrack__Audio                                                          = 0,
	EManaPlayerTrack__SubAudio                                                       = 1,
	EManaPlayerTrack__ExtraAudio                                                     = 2,
	EManaPlayerTrack__EventPoint                                                     = 3,
	EManaPlayerTrack__Subtitle                                                       = 4,
	EManaPlayerTrack__Video                                                          = 5,
	EManaPlayerTrack__Alpha                                                          = 6
};

/// Enum /Script/CriWareRuntime.EManaPlayerOptionBooleanOverride
/// Size: 0x01 (1 bytes)
enum class EManaPlayerOptionBooleanOverride : uint8_t
{
	EManaPlayerOptionBooleanOverride__UseManaPlayerSetting                           = 0,
	EManaPlayerOptionBooleanOverride__Enabled                                        = 1,
	EManaPlayerOptionBooleanOverride__Disabled                                       = 2
};

/// Enum /Script/CriWareRuntime.EAtomSequenceEventType
/// Size: 0x01 (1 bytes)
enum class EAtomSequenceEventType : uint8_t
{
	EAtomSequenceEventType__SEQUENCE_TYPE_CALLBACK                                   = 0,
	EAtomSequenceEventType__SEQUENCE_TYPESIZE_4BYTE                                  = 1
};

/// Enum /Script/CriWareRuntime.ESpeakerType
/// Size: 0x01 (1 bytes)
enum class ESpeakerType : uint8_t
{
	ESpeakerType__NormalMode                                                         = 0,
	ESpeakerType__SeparateMode                                                       = 1
};

/// Enum /Script/CriWareRuntime.EAtomProfileSortType
/// Size: 0x01 (1 bytes)
enum class EAtomProfileSortType : uint8_t
{
	EAtomProfileSortType__AtomComponentID                                            = 0,
	EAtomProfileSortType__Distance                                                   = 1,
	EAtomProfileSortType__Name                                                       = 2,
	EAtomProfileSortType__Time                                                       = 3
};

/// Enum /Script/CriWareRuntime.EAtomSortOrderType
/// Size: 0x01 (1 bytes)
enum class EAtomSortOrderType : uint8_t
{
	EAtomSortOrderType__Ascending                                                    = 0,
	EAtomSortOrderType__Descending                                                   = 1
};

/// Enum /Script/CriWareRuntime.EAtomFaderCurve
/// Size: 0x01 (1 bytes)
enum class EAtomFaderCurve : uint8_t
{
	EAtomFaderCurve__Linear                                                          = 0,
	EAtomFaderCurve__Logarithmic                                                     = 1,
	EAtomFaderCurve__SCurve                                                          = 2,
	EAtomFaderCurve__Sin                                                             = 3,
	EAtomFaderCurve__Count                                                           = 4
};

/// Enum /Script/CriWareRuntime.EAtomWavePlayState
/// Size: 0x01 (1 bytes)
enum class EAtomWavePlayState : uint8_t
{
	EAtomWavePlayState__Playing                                                      = 0,
	EAtomWavePlayState__Stopped                                                      = 1,
	EAtomWavePlayState__Paused                                                       = 2,
	EAtomWavePlayState__FadingIn                                                     = 3,
	EAtomWavePlayState__FadingOut                                                    = 4,
	EAtomWavePlayState__Count                                                        = 5
};

/// Enum /Script/CriWareRuntime.ECriWareSpeakerSystem
/// Size: 0x01 (1 bytes)
enum class ECriWareSpeakerSystem : uint8_t
{
	ECriWareSpeakerSystem__Surround5Point1                                           = 0,
	ECriWareSpeakerSystem__Surround7Point1                                           = 1
};

/// Enum /Script/CriWareRuntime.EEngineIniFileType
/// Size: 0x01 (1 bytes)
enum class EEngineIniFileType : uint8_t
{
	EEngineIniFileType__EngBaseEngineIni                                             = 0,
	EEngineIniFileType__EngWindowsEngineIni                                          = 1,
	EEngineIniFileType__ProjDefaultEngineIni                                         = 4,
	EEngineIniFileType__ProjWindowsEngineIni                                         = 5
};

/// Enum /Script/CriWareRuntime.EAtomSoundRendererType
/// Size: 0x04 (4 bytes)
enum class EAtomSoundRendererType : uint32_t
{
	EAtomSoundRendererType__Any                                                      = 0,
	EAtomSoundRendererType__Native                                                   = 1,
	EAtomSoundRendererType__Asr                                                      = 2,
	EAtomSoundRendererType__Hardware1                                                = 1,
	EAtomSoundRendererType__Hardware2                                                = 65537,
	EAtomSoundRendererType__Hardware3                                                = 131073,
	EAtomSoundRendererType__Hardware4                                                = 196609,
	EAtomSoundRendererType__Spatial                                                  = 4,
	EAtomSoundRendererType__VibrationHardware                                        = 196625,
	EAtomSoundRendererType__RESTRICTED                                               = 254,
	EAtomSoundRendererType__Pad                                                      = 255
};

/// Enum /Script/CriWareRuntime.EAtomLoopSettingID_DEPRECEATED
/// Size: 0x01 (1 bytes)
enum class EAtomLoopSettingID_DEPRECEATED : uint8_t
{
	EAtomLoopSettingID_DEPRECEATED__DefaultLoop_DEPRECATED                           = 0,
	EAtomLoopSettingID_DEPRECEATED__ForceLoop_DEPRECATED                             = 1,
	EAtomLoopSettingID_DEPRECEATED__IgnoreLoop_DEPRECATED                            = 2
};

/// Enum /Script/CriWareRuntime.EManaComponentTextureType
/// Size: 0x01 (1 bytes)
enum class EManaComponentTextureType : uint8_t
{
	EManaComponentTextureType__Texture_Y                                             = 0,
	EManaComponentTextureType__Texture_U                                             = 1,
	EManaComponentTextureType__Texture_V                                             = 2,
	EManaComponentTextureType__Texture_A                                             = 3,
	EManaComponentTextureType__Texture_UV                                            = 4,
	EManaComponentTextureType__Texture_RGB                                           = 5,
	EManaComponentTextureType__Texture_External                                      = 6
};

/// Enum /Script/CriWareRuntime.EManaMovieType
/// Size: 0x01 (1 bytes)
enum class EManaMovieType : uint8_t
{
	EManaMovieType__SofdecPrime                                                      = 0,
	EManaMovieType__H264                                                             = 1,
	EManaMovieType__VP9                                                              = 2,
	EManaMovieType__Num                                                              = 3,
	EManaMovieType__Unknown                                                          = 255
};

/// Enum /Script/CriWareRuntime.EManaColorSpace
/// Size: 0x01 (1 bytes)
enum class EManaColorSpace : uint8_t
{
	EManaColorSpace__Rec601                                                          = 0,
	EManaColorSpace__Rec601Full                                                      = 1,
	EManaColorSpace__Rec709                                                          = 2,
	EManaColorSpace__Rec709Full                                                      = 3,
	EManaColorSpace__Num                                                             = 4
};

/// Enum /Script/CriWareRuntime.EManaSoundType
/// Size: 0x01 (1 bytes)
enum class EManaSoundType : uint8_t
{
	EManaSoundType__Adx                                                              = 0,
	EManaSoundType__HCA                                                              = 1,
	EManaSoundType__Num                                                              = 2,
	EManaSoundType__Unknown                                                          = 255
};

/// Enum /Script/CriWareRuntime.EAtomFormat
/// Size: 0x01 (1 bytes)
enum class EAtomFormat : uint8_t
{
	EAtomFormat__None                                                                = 0,
	EAtomFormat__ADX                                                                 = 1,
	EAtomFormat__HCA                                                                 = 2,
	EAtomFormat__HCAMX                                                               = 3,
	EAtomFormat__AIFF                                                                = 4,
	EAtomFormat__Wave                                                                = 5,
	EAtomFormat__RawPCM                                                              = 6,
	EAtomFormat__Vibration                                                           = 7,
	EAtomFormat__AudioBuffer                                                         = 8,
	EAtomFormat__Instrument                                                          = 9,
	EAtomFormat__Hardware1                                                           = 10,
	EAtomFormat__Hardware2                                                           = 11,
	EAtomFormat__Num                                                                 = 12
};

/// Class /Script/CriWareRuntime.Atom3dRegionHandle
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UAtom3dRegionHandle : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/CriWareRuntime.Atom3dRegion
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UAtom3dRegion : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0028   (0x0018)  MISSED
	class UAtom3dRegionHandle*                         Handle;                                                     // 0x0040   (0x0008)  


	/// Functions
	// Function /Script/CriWareRuntime.Atom3dRegion.SetHandle
	// void SetHandle(class UAtom3dRegionHandle* InHandle);                                                                     // [0x675c760] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.Atom3dRegion.GetHandle
	// class UAtom3dRegionHandle* GetHandle();                                                                                  // [0x675c730] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.Atom3dSourceBaseComponent
/// Size: 0x02D0 (720 bytes) (0x000230 - 0x0002D0) align 16 MaxSize: 0x02C8
class UAtom3dSourceBaseComponent : public USceneComponent
{ 
public:
	float                                              DefaultOutputVolumeScale;                                   // 0x0230   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0234   (0x0004)  MISSED
	class UAtom3dRegion*                               DefaultRegion;                                              // 0x0238   (0x0008)  
	bool                                               bIsAttenuationDistanceDebugSpheresVisible : 1;              // 0x0240:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0241   (0x0003)  MISSED
	float                                              DefaultMinAttenuationDistance;                              // 0x0244   (0x0004)  
	float                                              DefaultMaxAttenuationDistance;                              // 0x0248   (0x0004)  
	bool                                               bIsOutputInteriorPanFieldDebugSpheresVisible : 1;           // 0x024C:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x024D   (0x0003)  MISSED
	float                                              DefaultSourceRadius;                                        // 0x0250   (0x0004)  
	float                                              DefaultInteriorDistance;                                    // 0x0254   (0x0004)  
	TArray<FString>                                    DefaultDistanceAisacControls;                               // 0x0258   (0x0010)  
	TArray<FString>                                    DefaultOutputBasedAzimuthAngleAisacControls;                // 0x0268   (0x0010)  
	TArray<FString>                                    DefaultOutputBasedElevationAngleAisacControls;              // 0x0278   (0x0010)  
	TArray<FString>                                    DefaultListenerBasedAzimuthAngleAisacControls;              // 0x0288   (0x0010)  
	TArray<FString>                                    DefaultListenerBasedElevationAngleAisacControls;            // 0x0298   (0x0010)  
	bool                                               bIsDebugStringsForDetailsVisible : 1;                       // 0x02A8:0 (0x0001)  
	unsigned char                                      UnknownData03_7[0x1F];                                      // 0x02A9   (0x001F)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.Atom3dSourceBaseComponent.SetRegion
	// void SetRegion(class UAtom3dRegion* InRegion);                                                                           // [0x675cdf0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.Atom3dTransceiverComponent
/// Size: 0x02F0 (752 bytes) (0x0002C8 - 0x0002F0) align 16 MaxSize: 0x02F0
class UAtom3dTransceiverComponent : public UAtom3dSourceBaseComponent
{ 
public:
	class AActor*                                      InputPoint;                                                 // 0x02C8   (0x0008)  
	TArray<FString>                                    DefaultGlobalAisacs;                                        // 0x02D0   (0x0010)  
	bool                                               bIsInputCrossfadeFieldDebugSpheresVisible : 1;              // 0x02E0:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02E1   (0x0003)  MISSED
	float                                              DefaultDirectAudioRadius;                                   // 0x02E4   (0x0004)  
	float                                              DefaultCrossfadeDistance;                                   // 0x02E8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x02EC   (0x0004)  MISSED
};

/// Class /Script/CriWareRuntime.AtomAreaSoundVolume
/// Size: 0x0308 (776 bytes) (0x0002C8 - 0x000308) align 8 MaxSize: 0x0308
class AAtomAreaSoundVolume : public AVolume
{ 
public:
	float                                              Priority;                                                   // 0x02C8   (0x0004)  
	bool                                               bEnabled : 1;                                               // 0x02CC:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02CD   (0x0003)  MISSED
	FName                                              CollisionProfile;                                           // 0x02D0   (0x0008)  
	float                                              SoundStopDistance;                                          // 0x02D8   (0x0004)  
	bool                                               bIsEnableAtomCompoentPack;                                  // 0x02DC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x02DD   (0x0002)  MISSED
	bool                                               bIsAutoPlaySound;                                           // 0x02DF   (0x0001)  
	bool                                               bIsDeterminationFromVolumeBoundaryPlane;                    // 0x02E0   (0x0001)  
	bool                                               bEnableRepeatPlayWhenSoundStop;                             // 0x02E1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x02E2   (0x0006)  MISSED
	TArray<class UAtomComponent*>                      AtomComponents;                                             // 0x02E8   (0x0010)  
	TArray<class USoundAtomCue*>                       Sounds;                                                     // 0x02F8   (0x0010)  


	/// Functions
	// Function /Script/CriWareRuntime.AtomAreaSoundVolume.SetPriority
	// void SetPriority(float NewPriority);                                                                                     // [0x675d600] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAreaSoundVolume.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                       // [0x675d570] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAreaSoundVolume.OnRep_bEnabled
	// void OnRep_bEnabled();                                                                                                   // [0x675d550] Final|Native|Private 
	// Function /Script/CriWareRuntime.AtomAreaSoundVolume.GetPriority
	// float GetPriority();                                                                                                     // [0x675d530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomAreaSoundVolume.GetEnabled
	// bool GetEnabled();                                                                                                       // [0x675d500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomAreaSoundVolume.DestroySounds
	// void DestroySounds();                                                                                                    // [0x675d4e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAreaSoundVolume.CreateSounds
	// TArray<UAtomComponent*> CreateSounds(FVector listener_location);                                                         // [0x675d3f0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomAsrRack
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UAtomAsrRack : public UObject
{ 
public:
	int32_t                                            RackId;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x14];                                      // 0x002C   (0x0014)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.AtomAsrRack.SetEffectBypass
	// void SetEffectBypass(FString BusName, FString EffectName, bool Bypasses);                                                // [0x675e860] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.SetBusVolumeByName
	// void SetBusVolumeByName(FString BusName, float Volume);                                                                  // [0x675e720] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.SetBusSendLevelByName
	// void SetBusSendLevelByName(FString SourceBusName, FString DestBusName, float Level);                                     // [0x675e560] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.SetAisacControlByName
	// void SetAisacControlByName(FString control_name, float control_value);                                                   // [0x675e420] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.IsEnabledBinauralizer
	// bool IsEnabledBinauralizer();                                                                                            // [0x675e3f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.GetDefaultAsrRack
	// class UAtomAsrRack* GetDefaultAsrRack();                                                                                 // [0x675e3c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.GetCurrentAppliedSnapshot
	// FString GetCurrentAppliedSnapshot(int32_t AsrRackID);                                                                    // [0x675e2e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.GetBusAnalyzerInfo
	// bool GetBusAnalyzerInfo(FString DspBusName, int32_t& num_channels, TArray<float>& rms_levels, TArray<float>& peak_levels, TArray<float>& peak_hold_levels); // [0x675e070] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.GetAsrRack
	// class UAtomAsrRack* GetAsrRack(int32_t AsrRackID);                                                                       // [0x675dfe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.EnableBinauralizer
	// void EnableBinauralizer(bool bIsEnabled);                                                                                // [0x675df60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.DetachDspBusSetting
	// void DetachDspBusSetting();                                                                                              // [0x675df40] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.ConnectToPadVibrator
	// void ConnectToPadVibrator(int32_t UserIndex);                                                                            // [0x675deb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.ConnectToPadSpeaker
	// void ConnectToPadSpeaker(int32_t UserIndex);                                                                             // [0x675de20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.AttachDspBusSetting
	// void AttachDspBusSetting(FString SettingName);                                                                           // [0x675dd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.AssociateOutputPort
	// bool AssociateOutputPort(FString OutputPortName);                                                                        // [0x675dc80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAsrRack.ApplyDspBusSnapshot
	// void ApplyDspBusSnapshot(FString SnapshotName, int32_t Milliseconds);                                                    // [0x675db50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomEntranceVolume
/// Size: 0x02E8 (744 bytes) (0x0002C8 - 0x0002E8) align 8 MaxSize: 0x02E8
class AAtomEntranceVolume : public AVolume
{ 
public:
	float                                              Priority;                                                   // 0x02C8   (0x0004)  
	bool                                               bEnabled : 1;                                               // 0x02CC:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x02CD   (0x000B)  MISSED
	SDK_UNDEFINED(16,366) /* TArray<TWeakObjectPtr<AAtomAudioVolume*>> */ __um(NeighbourhoodAudioVolumeArray);     // 0x02D8   (0x0010)  


	/// Functions
	// Function /Script/CriWareRuntime.AtomEntranceVolume.SetPriority
	// void SetPriority(float NewPriority);                                                                                     // [0x67602f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomEntranceVolume.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                       // [0x67601e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomEntranceVolume.OnRep_bEnabled
	// void OnRep_bEnabled();                                                                                                   // [0x675d550] Final|Native|Private 
	// Function /Script/CriWareRuntime.AtomEntranceVolume.GetPriority
	// float GetPriority();                                                                                                     // [0x675d530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomEntranceVolume.GetEnabled
	// bool GetEnabled();                                                                                                       // [0x675d500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CriWareRuntime.SnapshotSwitchSettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FSnapshotSwitchSettings
{ 
	int32_t                                            AsrRackID;                                                  // 0x0000   (0x0004)  
	int32_t                                            DspBusSettingsID;                                           // 0x0004   (0x0004)  
	FString                                            DspBusSettingsName;                                         // 0x0008   (0x0010)  
	int32_t                                            SnapshotID;                                                 // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            SnapshotName;                                               // 0x0020   (0x0010)  
	float                                              FadeTime;                                                   // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/CriWareRuntime.BusSendInterpolationSettings
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FBusSendInterpolationSettings
{ 
	int32_t                                            DspBusSettingsID;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            DspBusSettingsName;                                         // 0x0008   (0x0010)  
	int32_t                                            BusId;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            BusName;                                                    // 0x0020   (0x0010)  
	float                                              BusSendLevelForInside;                                      // 0x0030   (0x0004)  
	float                                              BusSendLevelForOutside;                                     // 0x0034   (0x0004)  
	float                                              Width;                                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x003C   (0x000C)  MISSED
};

/// Struct /Script/CriWareRuntime.AisacControlInterpolationSettings
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAisacControlInterpolationSettings
{ 
	int32_t                                            AisacControlID;                                             // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            AisacControlName;                                           // 0x0008   (0x0010)  
	float                                              AisacControlValueForInside;                                 // 0x0018   (0x0004)  
	float                                              AisacControlValueForOutside;                                // 0x001C   (0x0004)  
	float                                              Width;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0024   (0x000C)  MISSED
};

/// Struct /Script/CriWareRuntime.AtomAudioVolumeParameters
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FAtomAudioVolumeParameters
{ 
	bool                                               bUseSnapshotSettings;                                       // 0x0000   (0x0001)  
	bool                                               bUseBusSendSettings;                                        // 0x0001   (0x0001)  
	bool                                               bUseAisacControlSettings;                                   // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              MaxDistanceForEntranceVolume;                               // 0x0004   (0x0004)  
	bool                                               bSwitchIntepolationInsideForBus;                            // 0x0008   (0x0001)  
	bool                                               bSwitchIntepolationInsideForAisac;                          // 0x0009   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x000A   (0x0006)  MISSED
	TArray<FSnapshotSwitchSettings>                    SnapshotSwitchSettings;                                     // 0x0010   (0x0010)  
	TArray<FBusSendInterpolationSettings>              BusSendInterpolateSettings;                                 // 0x0020   (0x0010)  
	TArray<FAisacControlInterpolationSettings>         AisacControlInterpolateSettings;                            // 0x0030   (0x0010)  
};

/// Class /Script/CriWareRuntime.AtomAudioVolume
/// Size: 0x0350 (848 bytes) (0x0002C8 - 0x000350) align 8 MaxSize: 0x0350
class AAtomAudioVolume : public AVolume
{ 
public:
	float                                              Priority;                                                   // 0x02C8   (0x0004)  
	bool                                               bEnabled : 1;                                               // 0x02CC:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02CD   (0x0003)  MISSED
	FName                                              CollisionProfile;                                           // 0x02D0   (0x0008)  
	bool                                               bAutoSettingEntranceVolume;                                 // 0x02D8   (0x0001)  
	bool                                               bAutoSettingNeighbourAudioVolumeToEntranceVolume;           // 0x02D9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x02DA   (0x0006)  MISSED
	TArray<FName>                                      AudioVolumeTags;                                            // 0x02E0   (0x0010)  
	bool                                               bOverrideAtomAudioVolume;                                   // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x02F1   (0x0007)  MISSED
	class UAtomAudioVolumeSettings*                    AtomAudioVolumeSettings;                                    // 0x02F8   (0x0008)  
	FAtomAudioVolumeParameters                         AtomAudioVolumeSettingsOverrides;                           // 0x0300   (0x0040)  
	TArray<class AAtomEntranceVolume*>                 EntranceVolumes;                                            // 0x0340   (0x0010)  


	/// Functions
	// Function /Script/CriWareRuntime.AtomAudioVolume.SetReverbSettings
	// void SetReverbSettings(FSnapshotSwitchSettings& NewReverbSettings);                                                      // [0x6760370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAudioVolume.SetPriority
	// void SetPriority(float NewPriority);                                                                                     // [0x6760270] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAudioVolume.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                       // [0x6760150] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomAudioVolume.OnRep_bEnabled
	// void OnRep_bEnabled();                                                                                                   // [0x675d550] Final|Native|Private 
	// Function /Script/CriWareRuntime.AtomAudioVolume.GetPriority
	// float GetPriority();                                                                                                     // [0x675d530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomAudioVolume.GetEnabled
	// bool GetEnabled();                                                                                                       // [0x675d500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomAudioVolume.EnableAllAudioVolume
	// void EnableAllAudioVolume(bool bEnable);                                                                                 // [0x67600d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomAudioVolumeSettings
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UAtomAudioVolumeSettings : public UObject
{ 
public:
	FAtomAudioVolumeParameters                         AtomAudioVolumeParameters;                                  // 0x0028   (0x0040)  
};

/// Class /Script/CriWareRuntime.AtomBusSampler
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UAtomBusSampler : public UObject
{ 
public:
	SDK_UNDEFINED(16,367) /* FMulticastInlineDelegate */ __um(OnRecordingStarted);                                 // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,368) /* FMulticastInlineDelegate */ __um(OnRecordingFinished);                                // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0048   (0x0028)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.AtomBusSampler.StopRecordedSoundWithoutReleaseTime
	// void StopRecordedSoundWithoutReleaseTime();                                                                              // [0x6760d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomBusSampler.StopRecordedSound
	// void StopRecordedSound();                                                                                                // [0x6760d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomBusSampler.StartRecording
	// void StartRecording(float InExpectedDuration, int32_t InAsrRack, FString InBusName, bool BusOutput);                     // [0x6760b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomBusSampler.ResumeRecording
	// void ResumeRecording();                                                                                                  // [0x6760b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomBusSampler.PlayRecordedSound
	// void PlayRecordedSound(int32_t Milliseconds);                                                                            // [0x6760aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomBusSampler.PauseRecording
	// void PauseRecording();                                                                                                   // [0x6760a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomBusSampler.PauseRecordedSound
	// void PauseRecordedSound(bool bPause);                                                                                    // [0x67609f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomBusSampler.OnRecordingStarted__DelegateSignature
	// void OnRecordingStarted__DelegateSignature();                                                                            // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.AtomBusSampler.OnRecordingFinished__DelegateSignature
	// void OnRecordingFinished__DelegateSignature();                                                                           // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.AtomBusSampler.IsRecording
	// bool IsRecording();                                                                                                      // [0x67609c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomBusSampler.IsPlayingRecordedSound
	// bool IsPlayingRecordedSound();                                                                                           // [0x6760990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomBusSampler.IsPausedRecordedSound
	// bool IsPausedRecordedSound();                                                                                            // [0x6760960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomBusSampler.FinishRecording
	// void FinishRecording();                                                                                                  // [0x6760940] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomBusSampler.CanRecord
	// bool CanRecord();                                                                                                        // [0x6760910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomBusSampler.CanPlayRecordedSound
	// bool CanPlayRecordedSound();                                                                                             // [0x67608e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CriWareRuntime.AtomCallback
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAtomCallback : public UInterface
{ 
public:
};

/// Class /Script/CriWareRuntime.AtomCallbackManager
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 16 MaxSize: 0x0050
class UAtomCallbackManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0028   (0x0028)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.AtomCallbackManager.NativeBreakAtomSequenceInfo
	// void NativeBreakAtomSequenceInfo(FAtomSequenceInfo& SequenceInfo, float& Time, FString& TagName, EAtomSequenceEventType& EventType, int32_t& CallbackID); // [0x6761570] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CriWareRuntime.AtomCallbackManager.NativeBreakAtomBeatSyncInfo
	// void NativeBreakAtomBeatSyncInfo(FAtomBeatSyncInfo& BeatSyncInfo, int32_t& BarCnt, int32_t& BeatCnt, float& BeatProgress, float& Bpm, int32_t& Offset, int32_t& NumBeats); // [0x67612e0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/CriWareRuntime.AtomCategory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAtomCategory : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CriWareRuntime.AtomCategory.StopByName
	// void StopByName(FString CategoryName);                                                                                   // [0x6762c20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.SetVolumeByName
	// void SetVolumeByName(FString CategoryName, float Volume);                                                                // [0x6762af0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.SetMute
	// void SetMute(FString CategoryName, bool IsMute);                                                                         // [0x67629c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.SetAisacControlByName
	// void SetAisacControlByName(FString CategoryName, FString AisacName, float Value);                                        // [0x6762810] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.ResetAllAisacControlByName
	// bool ResetAllAisacControlByName(FString CategoryName);                                                                   // [0x6762720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.ResetAllAisacControlById
	// bool ResetAllAisacControlById(int32_t categoryID);                                                                       // [0x6762690] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.PauseByName
	// void PauseByName(FString CategoryName, bool bPause);                                                                     // [0x6762560] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.IsPausedByName
	// bool IsPausedByName(FString CategoryName);                                                                               // [0x6762470] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.GetVolumeByName
	// float GetVolumeByName(FString CategoryName);                                                                             // [0x6762380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.GetNumAttachedAisacsByName
	// int32_t GetNumAttachedAisacsByName(FString CategoryName);                                                                // [0x6762290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.GetNumAttachedAisacsById
	// int32_t GetNumAttachedAisacsById(int32_t categoryID);                                                                    // [0x6762200] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.GetCurrentAisacControlValueByName
	// float GetCurrentAisacControlValueByName(FString CategoryName, FString AisacControlName);                                 // [0x6762080] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.GetCurrentAisacControlValueById
	// float GetCurrentAisacControlValueById(int32_t categoryID, int32_t AisacControlID);                                       // [0x6761fb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.GetAttachedAisacInfoByName
	// void GetAttachedAisacInfoByName(FString CategoryName, int32_t AisacAttachedIndex, bool& isSuccess, FAtomAisacInfo& AisacInfo); // [0x6761db0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCategory.GetAttachedAisacInfoById
	// void GetAttachedAisacInfoById(int32_t categoryID, int32_t AisacAttachedIndex, bool& isSuccess, FAtomAisacInfo& AisacInfo); // [0x6761c20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/CriWareRuntime.AtomAisacControlParam
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAtomAisacControlParam
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	float                                              Value;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/CriWareRuntime.AtomSelectorParam
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FAtomSelectorParam
{ 
	FString                                            Selector;                                                   // 0x0000   (0x0010)  
	FString                                            Label;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomAisacControlWithVelocityParam
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAtomAisacControlWithVelocityParam
{ 
	FString                                            AisacControlName;                                           // 0x0000   (0x0010)  
	float                                              MinVelocity;                                                // 0x0010   (0x0004)  
	float                                              MaxVelocity;                                                // 0x0014   (0x0004)  
};

/// Class /Script/CriWareRuntime.AtomComponent
/// Size: 0x1300 (4864 bytes) (0x000230 - 0x001300) align 16 MaxSize: 0x1300
class UAtomComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0230   (0x0008)  MISSED
	class USoundAtomCue*                               sound;                                                      // 0x0238   (0x0008)  
	class UAtom3dRegion*                               Region;                                                     // 0x0240   (0x0008)  
	bool                                               bAutoDestroy : 1;                                           // 0x0248:0 (0x0001)  
	bool                                               bPersistAcrossLevelTransition : 1;                          // 0x0248:1 (0x0001)  
	unsigned char                                      UnknownBit01 : 1;                                           // 0x0248:2 (0x0001)  MISSED
	bool                                               bStopWhenOwnerDestroyed : 1;                                // 0x0248:3 (0x0001)  
	bool                                               bIsUISound : 1;                                             // 0x0248:4 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0249   (0x0003)  MISSED
	float                                              DefaultVolume;                                              // 0x024C   (0x0004)  
	bool                                               bEnableMultipleSoundPlayback : 1;                           // 0x0250:0 (0x0001)  
	bool                                               bUsePlaylist : 1;                                           // 0x0250:1 (0x0001)  
	bool                                               bIsMovable;                                                 // 0x0251   (0x0001)  
	bool                                               bCanStraddleAudioVolume;                                    // 0x0252   (0x0001)  
	bool                                               bUseAudioVolume;                                            // 0x0253   (0x0001)  
	bool                                               bUseAreaSoundVolume;                                        // 0x0254   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0255   (0x0003)  MISSED
	class UAtomSoundObject*                            SoundObject;                                                // 0x0258   (0x0008)  
	int32_t                                            DefaultBlockIndex;                                          // 0x0260   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0264   (0x0004)  MISSED
	TArray<FAtomAisacControlParam>                     DefaultAisacControl;                                        // 0x0268   (0x0010)  
	TArray<FAtomSelectorParam>                         DefaultSelectorLabel;                                       // 0x0278   (0x0010)  
	bool                                               bIsOverrideAisacControlSettingsWithVelocity;                // 0x0288   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0289   (0x0007)  MISSED
	TArray<FAtomAisacControlWithVelocityParam>         OverrideAisacControlSettingsWithVelocity;                   // 0x0290   (0x0010)  
	EAtomLoopSetting                                   LoopSetting;                                                // 0x02A0   (0x0001)  
	bool                                               bOnly2DSound : 1;                                           // 0x02A1:0 (0x0001)  
	unsigned char                                      UnknownData06_5[0x6];                                       // 0x02A2   (0x0006)  MISSED
	SDK_UNDEFINED(16,369) /* FMulticastInlineDelegate */ __um(OnStatusChanged);                                    // 0x02A8   (0x0010)  
	SDK_UNDEFINED(16,370) /* FMulticastInlineDelegate */ __um(OnAudioVolumeChanged);                               // 0x02B8   (0x0010)  
	SDK_UNDEFINED(16,371) /* FMulticastInlineDelegate */ __um(OnAudioFinished);                                    // 0x02C8   (0x0010)  
	SDK_UNDEFINED(16,372) /* FMulticastInlineDelegate */ __um(OnAtomSoundCueBlockIndexChanged);                    // 0x02D8   (0x0010)  
	class UWorld*                                      PlayWorld;                                                  // 0x02E8   (0x0008)  
	class UGameViewportClient*                         GameViewport;                                               // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData07_6[0x28];                                      // 0x02F8   (0x0028)  MISSED
	class UAtomSoundObject*                            DefaultSoundObject;                                         // 0x0320   (0x0008)  
	bool                                               bOverrideAttenuation : 1;                                   // 0x0328:0 (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x0329   (0x0007)  MISSED
	class USoundAttenuation*                           AttenuationSettings;                                        // 0x0330   (0x0008)  
	FSoundAttenuationSettings                          AttenuationOverrides;                                       // 0x0338   (0x03D0)  
	unsigned char                                      UnknownData09_6[0xB08];                                     // 0x0708   (0x0B08)  MISSED
	class USoundAtomCueSheet*                          CueSheet;                                                   // 0x1210   (0x0008)  
	unsigned char                                      UnknownData10_6[0x10];                                      // 0x1218   (0x0010)  MISSED
	class UAtomSoundObject*                            AppliedSoundObject;                                         // 0x1228   (0x0008)  
	unsigned char                                      UnknownData11_6[0x20];                                      // 0x1230   (0x0020)  MISSED
	SDK_UNDEFINED(16,373) /* FMulticastInlineDelegate */ __um(OnAtomBeatSyncCallback);                             // 0x1250   (0x0010)  
	SDK_UNDEFINED(16,374) /* FMulticastInlineDelegate */ __um(OnAtomSequenceCallback);                             // 0x1260   (0x0010)  
	unsigned char                                      UnknownData12_7[0x90];                                      // 0x1270   (0x0090)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.AtomComponent.StopWithoutReleaseTime
	// void StopWithoutReleaseTime();                                                                                           // [0x67682c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.Stop
	// void Stop();                                                                                                             // [0x67682a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetVolume
	// void SetVolume(float Volume);                                                                                            // [0x6768220] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetSoundObject
	// void SetSoundObject(class UAtomSoundObject* InSoundObject);                                                              // [0x6768190] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetSound
	// void SetSound(class USoundAtomCue* NewSound);                                                                            // [0x6768100] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetSelectorLabel
	// void SetSelectorLabel(FString Selector, FString Label);                                                                  // [0x6767f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetRegion
	// void SetRegion(class UAtom3dRegion* InRegion);                                                                           // [0x6767ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetPreferredOutputPort
	// void SetPreferredOutputPort(FString port_name);                                                                          // [0x6767e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetPitchMultiplier
	// void SetPitchMultiplier(float NewPitchMultiplier);                                                                       // [0x6767d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetPitch
	// void SetPitch(float Pitch);                                                                                              // [0x6767d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetOutputPort
	// void SetOutputPort(FString port_name);                                                                                   // [0x6767c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetNextBlockIndex
	// void SetNextBlockIndex(int32_t BlockIndex);                                                                              // [0x6767b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetDefaultAttenuationEnable
	// void SetDefaultAttenuationEnable(bool bEnable);                                                                          // [0x6767b10] Final|Native|Static|Public 
	// Function /Script/CriWareRuntime.AtomComponent.SetBusSendLevelOffsetByName
	// void SetBusSendLevelOffsetByName(FString BusName, float LevelOffset);                                                    // [0x67679d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetBusSendLevelOffset
	// void SetBusSendLevelOffset(int32_t BusId, float LevelOffset);                                                            // [0x6767900] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetBusSendLevelByName
	// void SetBusSendLevelByName(FString BusName, float Level);                                                                // [0x67677c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetBusSendLevel
	// void SetBusSendLevel(int32_t BusId, float Level);                                                                        // [0x67676f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetAsrRackIdArray
	// void SetAsrRackIdArray(TArray<int32_t> AsrRackIDs);                                                                      // [0x6767600] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetAsrRackID
	// void SetAsrRackID(int32_t asr_rack_id);                                                                                  // [0x6767570] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.SetAisacByName
	// void SetAisacByName(FString ControlName, float ControlValue);                                                            // [0x6767430] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.RemovePreferredOutputPort
	// void RemovePreferredOutputPort(FString port_name);                                                                       // [0x6767340] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.RemoveOutputPort
	// void RemoveOutputPort(FString port_name);                                                                                // [0x6767250] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.Play
	// void Play(float StartTime);                                                                                              // [0x67671d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.Pause
	// void Pause(bool bPause);                                                                                                 // [0x6767140] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.OnStatusChanged__DelegateSignature
	// void OnStatusChanged__DelegateSignature(EAtomComponentStatus Status, class UAtomComponent* AtomComponent);               // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.AtomComponent.OnAudioVolumeChanged__DelegateSignature
	// void OnAudioVolumeChanged__DelegateSignature(EAtomAudioVolumeType Type, class AAtomAudioVolume* AtomAudioVolume, bool bIsCalledFromTick); // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.AtomComponent.OnAudioFinished__DelegateSignature
	// void OnAudioFinished__DelegateSignature();                                                                               // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.AtomComponent.OnAtomSoundCueBlockIndexChanged__DelegateSignature
	// void OnAtomSoundCueBlockIndexChanged__DelegateSignature(int32_t BlockIndex);                                             // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.AtomComponent.IsReducingTickFrequency
	// bool IsReducingTickFrequency();                                                                                          // [0x6767080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x6767110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.IsPaused
	// bool IsPaused();                                                                                                         // [0x67670e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.IsLoop
	// bool IsLoop();                                                                                                           // [0x67670b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.HasBeenEconomicTick
	// bool HasBeenEconomicTick();                                                                                              // [0x6767080] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetVolume
	// float GetVolume();                                                                                                       // [0x6767050] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.GetVelocity
	// FVector GetVelocity();                                                                                                   // [0x6767020] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetTime
	// float GetTime();                                                                                                         // [0x6766ff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetStatus
	// EAtomComponentStatus GetStatus();                                                                                        // [0x6766fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetSequencePosition
	// float GetSequencePosition();                                                                                             // [0x6766f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetNumQueuedSounds
	// int32_t GetNumQueuedSounds();                                                                                            // [0x6766f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetNumPlayedSamples
	// void GetNumPlayedSamples(int64_t& NumSamples, int32_t& SamplingRate);                                                    // [0x6766e70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetMaxAttenuationDistance
	// float GetMaxAttenuationDistance();                                                                                       // [0x6766e40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetEconomicTickFrequency
	// float GetEconomicTickFrequency();                                                                                        // [0x6766d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetEconomicTickDistanceMargin
	// float GetEconomicTickDistanceMargin();                                                                                   // [0x6766dc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetEconomicTickDistance
	// float GetEconomicTickDistance();                                                                                         // [0x6766d60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetDefaultAttenuationEnable
	// bool GetDefaultAttenuationEnable();                                                                                      // [0x6766e20] Final|Native|Static|Public 
	// Function /Script/CriWareRuntime.AtomComponent.GetCurrentMaxAttenuationDistance
	// float GetCurrentMaxAttenuationDistance();                                                                                // [0x6766df0] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetCurrentEconomicTickMarginDistance
	// float GetCurrentEconomicTickMarginDistance();                                                                            // [0x6766dc0] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetCurrentEconomicTickFrequency
	// float GetCurrentEconomicTickFrequency();                                                                                 // [0x6766d90] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetCurrentEconomicTickBoundaryDistance
	// float GetCurrentEconomicTickBoundaryDistance();                                                                          // [0x6766d60] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetCurrentCullingMarginDistance
	// float GetCurrentCullingMarginDistance();                                                                                 // [0x6766c30] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetCurrentCullingBoundaryDistance
	// float GetCurrentCullingBoundaryDistance();                                                                               // [0x6766c00] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetCurrentBlockIndex
	// int32_t GetCurrentBlockIndex();                                                                                          // [0x6766d30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetCurrentBelongingAudioVolume
	// class AAtomAudioVolume* GetCurrentBelongingAudioVolume(EAtomAudioVolumeType Type, bool IsNeighbor);                      // [0x6766c60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetCullDistanceMargin
	// float GetCullDistanceMargin();                                                                                           // [0x6766c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetCullDistance
	// float GetCullDistance();                                                                                                 // [0x6766c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetCueName
	// FString GetCueName();                                                                                                    // [0x6766b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetAudioVolumeValueMap
	// TMap<FString, float> GetAudioVolumeValueMap(EAtomAudioVolumeType Type);                                                  // [0x67669f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.GetAtomComponentID
	// int32_t GetAtomComponentID();                                                                                            // [0x67669d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomComponent.GetAtomComponentFromID
	// class UAtomComponent* GetAtomComponentFromID(int32_t TargetID);                                                          // [0x6766940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.GetAtomAppliedValueParam
	// FAtomAppliedValueParam GetAtomAppliedValueParam();                                                                       // [0x67668e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.FadeOut
	// void FadeOut(float FadeOutDuration);                                                                                     // [0x6766860] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.FadeIn
	// void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime);                                               // [0x6766740] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.EnqueueSound
	// void EnqueueSound(class USoundAtomCue* NewSound);                                                                        // [0x67666b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.DestroyComponentByID
	// void DestroyComponentByID(int32_t TargetID);                                                                             // [0x6766630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.ClearSelectorLabels
	// void ClearSelectorLabels();                                                                                              // [0x6766610] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.ClearPreferredOutputPort
	// void ClearPreferredOutputPort();                                                                                         // [0x67665f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.ClearOutputPort
	// void ClearOutputPort();                                                                                                  // [0x67665d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.BP_GetAttenuationSettingsToApply
	// bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);                                // [0x6766500] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.AttachAreaSoundVolume
	// void AttachAreaSoundVolume(class AAtomAreaSoundVolume* sound_shape_volume);                                              // [0x6766470] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomComponent.AtomSequenceCallbackDelegate__DelegateSignature
	// void AtomSequenceCallbackDelegate__DelegateSignature(class UAtomComponent* AtomComponent, FAtomSequenceInfo& SequenceInfo); // [0x3617e10] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/CriWareRuntime.AtomComponent.AtomBeatSyncCallbackDelegate__DelegateSignature
	// void AtomBeatSyncCallbackDelegate__DelegateSignature(class UAtomComponent* AtomComponent, FAtomBeatSyncInfo& BeatSyncInfo); // [0x3617e10] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/CriWareRuntime.AtomComponent.AdjustAttenuation
	// void AdjustAttenuation(FSoundAttenuationSettings& InAttenuationSettings);                                                // [0x67663a0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomComponentPool
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UAtomComponentPool : public UObject
{ 
public:
	TArray<class UAtomComponent*>                      Pool;                                                       // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0038   (0x0030)  MISSED
};

/// Class /Script/CriWareRuntime.AtomCueSheetLoaderComponent
/// Size: 0x02E0 (736 bytes) (0x000230 - 0x0002E0) align 16 MaxSize: 0x02E0
class UAtomCueSheetLoaderComponent : public USceneComponent
{ 
public:
	FSoftObjectPath                                    CueSheetReference;                                          // 0x0230   (0x0020)  
	class UCriFsBinderComponent*                       BinderComponent;                                            // 0x0250   (0x0008)  
	SDK_UNDEFINED(16,375) /* FMulticastInlineDelegate */ __um(OnLoadCompleted);                                    // 0x0258   (0x0010)  
	SDK_UNDEFINED(16,376) /* FMulticastInlineDelegate */ __um(OnLoadError);                                        // 0x0268   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0278   (0x0030)  MISSED
	class USoundAtomCueSheet*                          CueSheet;                                                   // 0x02A8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x30];                                      // 0x02B0   (0x0030)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.AtomCueSheetLoaderComponent.OnLoadError__DelegateSignature
	// void OnLoadError__DelegateSignature();                                                                                   // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.AtomCueSheetLoaderComponent.OnLoadCompleted__DelegateSignature
	// void OnLoadCompleted__DelegateSignature();                                                                               // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.AtomCueSheetLoaderComponent.OnAtomCueSheetLoaded__DelegateSignature
	// void OnAtomCueSheetLoaded__DelegateSignature(class USoundAtomCueSheet* Loaded);                                          // [0x3617e10] Public|Delegate      
	// Function /Script/CriWareRuntime.AtomCueSheetLoaderComponent.LoadAtomCueSheet
	// void LoadAtomCueSheet(class UObject* WorldContextObject, TWeakObjectPtr<USoundAtomCueSheet*> Asset, FDelegateProperty OnLoaded, FLatentActionInfo LatentInfo); // [0x6768960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCueSheetLoaderComponent.Load
	// void Load();                                                                                                             // [0x6768940] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCueSheetLoaderComponent.GetStatus
	// EAtomCueSheetLoaderComponentStatus GetStatus();                                                                          // [0x6768920] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomCueSheetLoaderComponent.GetAtomCueSheet
	// class USoundAtomCueSheet* GetAtomCueSheet();                                                                             // [0x67688f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomDeviceWatcher
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UAtomDeviceWatcher : public UObject
{ 
public:
	SDK_UNDEFINED(16,377) /* FMulticastInlineDelegate */ __um(OnDeviceUpdated);                                    // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0038   (0x0018)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.AtomDeviceWatcher.OnDeviceUpdated__DelegateSignature
	// void OnDeviceUpdated__DelegateSignature();                                                                               // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.AtomDeviceWatcher.GetDeviceName
	// FString GetDeviceName();                                                                                                 // [0x676b740] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomDeviceWatcher.GetDeviceChannelCount
	// int32_t GetDeviceChannelCount();                                                                                         // [0x676b710] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomDisposer
/// Size: 0x02A0 (672 bytes) (0x000290 - 0x0002A0) align 8 MaxSize: 0x02A0
class AAtomDisposer : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0290   (0x0010)  MISSED
};

/// Class /Script/CriWareRuntime.AtomListenerFocusPoint
/// Size: 0x0240 (576 bytes) (0x000230 - 0x000240) align 16 MaxSize: 0x0240
class UAtomListenerFocusPoint : public USceneComponent
{ 
public:
	float                                              DistanceFocusLevel;                                         // 0x0230   (0x0004)  
	float                                              DirectionFocusLevel;                                        // 0x0234   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0238   (0x0008)  MISSED
};

/// Class /Script/CriWareRuntime.AtomParameterComponent
/// Size: 0x00B0 (176 bytes) (0x0000A0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UAtomParameterComponent : public UActorComponent
{ 
public:
	class UAtomSoundObject*                            SoundObject;                                                // 0x00A0   (0x0008)  
	class UAtom3dRegion*                               Region;                                                     // 0x00A8   (0x0008)  
};

/// Class /Script/CriWareRuntime.AtomProfileData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAtomProfileData : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CriWareRuntime.AtomProfileData.CriWareAdx2ProfileDataUpdate
	// TArray<FAtomProfileItem> CriWareAdx2ProfileDataUpdate(class UObject* WorldContextObject);                                // [0x676c6d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomProfileData.CriWareAdx2ProfileDataSort
	// void CriWareAdx2ProfileDataSort(TArray<FAtomProfileItem> original_item, EAtomProfileSortType sort_type, EAtomSortOrderType order_type, TArray<FAtomProfileItem>& sorted_item); // [0x676c480] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomSound
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class AAtomSound : public AActor
{ 
public:
	class UAtomComponent*                              AtomComponent;                                              // 0x0290   (0x0008)  
};

/// Class /Script/CriWareRuntime.AtomSoundData
/// Size: 0x02A0 (672 bytes) (0x000290 - 0x0002A0) align 8 MaxSize: 0x02A0
class AAtomSoundData : public AActor
{ 
public:
	class USoundAtomCueSheet*                          CueSheet;                                                   // 0x0290   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0298   (0x0008)  MISSED
};

/// Class /Script/CriWareRuntime.AtomSoundObject
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UAtomSoundObject : public UDataAsset
{ 
public:
	bool                                               EnableVoiceLimitScope;                                      // 0x0030   (0x0001)  
	bool                                               EnableCategoryCueLimitScope;                                // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_7[0x16];                                      // 0x0032   (0x0016)  MISSED
};

/// Class /Script/CriWareRuntime.AtomSpectrumAnalyzer
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAtomSpectrumAnalyzer : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CriWareRuntime.AtomSpectrumAnalyzer.GetLevelsDB
	// void GetLevelsDB(float display_range, TArray<float>& spectra);                                                           // [0x676d170] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomSpectrumAnalyzer.GetLevels
	// void GetLevels(TArray<float>& spectra);                                                                                  // [0x676d0d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomSpectrumAnalyzer.DestroyDspSpectra
	// void DestroyDspSpectra();                                                                                                // [0x676d0b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomSpectrumAnalyzer.CreateDspSpectra
	// void CreateDspSpectra(class UAtomAsrRack* asr_rack, FString bus_name, int32_t num_bands);                                // [0x676cf50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAtomStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CriWareRuntime.AtomStatics.UpdateDistanceFactorForAllSounds
	// void UpdateDistanceFactorForAllSounds(float ArgDistanceFactor);                                                          // [0x6771830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.StopAllSoundsForKeyFromAtomComponentIds
	// void StopAllSoundsForKeyFromAtomComponentIds(class UObject* AtomPlayGateRef, class UObject* SkeltalMeshComponentRef);    // [0x6771770] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.StopAllSounds
	// void StopAllSounds();                                                                                                    // [0x6771750] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SpawnSoundAttached
	// class UAtomComponent* SpawnSoundAttached(class USoundAtomCue* sound, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy); // [0x6771370] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SpawnSoundAtLocation
	// class UAtomComponent* SpawnSoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy); // [0x6771060] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SpawnSound2D
	// class UAtomComponent* SpawnSound2D(class UObject* WorldContextObject, class USoundAtomCue* sound, float PitchMultiplier, float StartTime, bool bPersistAcrossLevelTransition, bool bAutoDestroy); // [0x6770e90] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SpawnAtomSoundAttachedByName
	// class UAtomComponent* SpawnAtomSoundAttachedByName(class USoundAtomCueSheet* CueSheet, FString CueName, class USceneComponent* AttachToComponent, FAtomComponentParams& Params, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoDestroy); // [0x6770a90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SpawnAtomSoundAttached
	// class UAtomComponent* SpawnAtomSoundAttached(class USoundAtomCue* sound, class USceneComponent* AttachToComponent, FAtomComponentParams& Params, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoDestroy); // [0x6770780] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SpawnAtomSoundAtLocationByName
	// class UAtomComponent* SpawnAtomSoundAtLocationByName(class UObject* WorldContextObject, class USoundAtomCueSheet* CueSheet, FString CueName, FVector Location, FAtomComponentParams& Params, bool bAutoDestroy); // [0x6770490] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SpawnAtomSoundAtLocation
	// class UAtomComponent* SpawnAtomSoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* sound, FVector Location, FAtomComponentParams& Params, bool bAutoDestroy); // [0x6770260] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SpawnAtomSound2DByName
	// class UAtomComponent* SpawnAtomSound2DByName(class UObject* WorldContextObject, class USoundAtomCueSheet* CueSheet, FString CueName, FAtomComponentParams& Params, bool bPersistAcrossLevelTransition, bool bAutoDestroy); // [0x676ff90] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SpawnAtomSound2D
	// class UAtomComponent* SpawnAtomSound2D(class UObject* WorldContextObject, class USoundAtomCue* sound, FAtomComponentParams& Params, bool bPersistAcrossLevelTransition, bool bAutoDestroy); // [0x676fd60] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SetListenerRegion
	// void SetListenerRegion(class UAtom3dRegion* Region, int32_t playerIndex);                                                // [0x676fca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SetListenerFocusPointTargetComponent
	// void SetListenerFocusPointTargetComponent(class USceneComponent* TargetComponent, int32_t playerIndex);                  // [0x676fbe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SetListenerFocusPointTargetActor
	// void SetListenerFocusPointTargetActor(class AActor* TargetActor, int32_t playerIndex);                                   // [0x676fb20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SetListenerFocusPointInfo
	// void SetListenerFocusPointInfo(FAtomListenerFocusPointInfo FocusPointInfo, int32_t playerIndex);                         // [0x676fa30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SetListenerFocusPointDistanceLevel
	// void SetListenerFocusPointDistanceLevel(float DistanceLevel, int32_t playerIndex);                                       // [0x676f970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SetListenerFocusPointDirectionLevel
	// void SetListenerFocusPointDirectionLevel(float DirectionLevel, int32_t playerIndex);                                     // [0x676f8b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.SetAtomGameVariable
	// void SetAtomGameVariable(FString GameVariableName, float Value);                                                         // [0x676f710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.PlaySoundForAnimNotify
	// class UAtomComponent* PlaySoundForAnimNotify(class USoundAtomCue* sound, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bFollow); // [0x676f410] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.PlaySoundAttached
	// class UAtomComponent* PlaySoundAttached(class USoundAtomCue* sound, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings); // [0x676f160] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.PlaySoundAtLocation
	// void PlaySoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings); // [0x676eea0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.PlayAtomSoundForAnimNotify
	// class UAtomComponent* PlayAtomSoundForAnimNotify(class USoundAtomCue* sound, FAtomComponentParams& Params, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bFollow); // [0x676eab0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.PlayAtomSoundAtLocationByName
	// void PlayAtomSoundAtLocationByName(class UObject* WorldContextObject, class USoundAtomCueSheet* CueSheet, FString CueName, FVector Location, FAtomComponentParams& Params); // [0x676e810] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.PlayAtomSoundAtLocation
	// void PlayAtomSoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* sound, FVector Location, FAtomComponentParams& Params); // [0x676e630] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.PauseAudioOutput
	// void PauseAudioOutput(bool bPause);                                                                                      // [0x676e5b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.LoadAtomConfig
	// bool LoadAtomConfig(class USoundAtomConfig* AcfObject);                                                                  // [0x676e520] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.GetListeningPoint
	// FVector GetListeningPoint(int32_t playerIndex);                                                                          // [0x676e480] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/CriWareRuntime.AtomStatics.GetListenerRegion
	// class UAtom3dRegion* GetListenerRegion(int32_t playerIndex);                                                             // [0x676e3f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.GetListenerFocusPointInfo
	// FAtomListenerFocusPointInfo GetListenerFocusPointInfo(int32_t playerIndex);                                              // [0x676e350] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CriWareRuntime.AtomStatics.GetAudioVolumeAffectingListener
	// class AAtomAudioVolume* GetAudioVolumeAffectingListener(int32_t playerIndex, EAtomAudioVolumeType TypeNum);              // [0x676e280] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CriWareRuntime.AtomStatics.GetAtomGameVariable
	// float GetAtomGameVariable(FString GameVariableName);                                                                     // [0x676e120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.CreateRootedAtomComponent
	// class UAtomComponent* CreateRootedAtomComponent(class UObject* WorldContextObject, bool bAutoDestroy);                   // [0x676e050] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomStatics.AddToAtomComponentIds
	// void AddToAtomComponentIds(class UObject* AtomPlayGateRef, class UObject* SkeltalMeshComponentRef, int32_t AtomComponentID); // [0x676df50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomTriggerTableFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAtomTriggerTableFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CriWareRuntime.AtomTriggerTableFunctionLibrary.GetDataTableRowFromName
	// bool GetDataTableRowFromName(class UDataTable* Table, FName RowName, FAtomTriggerRow& OutRow);                           // [0x6771ae0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.AtomUnrealSoundRenderer
/// Size: 0x84C0 (33984 bytes) (0x000470 - 0x0084C0) align 16 MaxSize: 0x84C0
class UAtomUnrealSoundRenderer : public USoundWaveProcedural
{ 
public:
	unsigned char                                      UnknownData00_1[0x8050];                                    // 0x0470   (0x8050)  MISSED
};

/// Struct /Script/CriWareRuntime.AtomWaveInfo
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FAtomWaveInfo
{ 
	EAtomFormat                                        Format;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            SamplingRate;                                               // 0x0004   (0x0004)  
	int32_t                                            NumChannels;                                                // 0x0008   (0x0004)  
	int32_t                                            NumSamples;                                                 // 0x000C   (0x0004)  
	bool                                               bIsStreamed : 1;                                            // 0x0010:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Class /Script/CriWareRuntime.AtomWavePlayer
/// Size: 0x0120 (288 bytes) (0x000028 - 0x000120) align 16 MaxSize: 0x0120
class UAtomWavePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	bool                                               bIsUISound : 1;                                             // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x0031   (0x000F)  MISSED
	SDK_UNDEFINED(16,378) /* FMulticastInlineDelegate */ __um(OnWaveFinished);                                     // 0x0040   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0050   (0x0018)  MISSED
	SDK_UNDEFINED(16,379) /* FMulticastInlineDelegate */ __um(OnWavePlaybackPercent);                              // 0x0068   (0x0010)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x0078   (0x0018)  MISSED
	class USoundAtomCue*                               SoundAtomCue;                                               // 0x0090   (0x0008)  
	FAtomWaveInfo                                      WaveInfo;                                                   // 0x0098   (0x0014)  
	bool                                               bLoop : 1;                                                  // 0x00AC:0 (0x0001)  
	unsigned char                                      UnknownData04_7[0x73];                                      // 0x00AD   (0x0073)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.AtomWavePlayer.StopDelayed
	// void StopDelayed(float delayTime);                                                                                       // [0x67728b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomWavePlayer.Stop
	// void Stop();                                                                                                             // [0x6772890] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomWavePlayer.SetWave
	// void SetWave(class USoundAtomCue* InCue);                                                                                // [0x6772800] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomWavePlayer.SetPaused
	// void SetPaused(bool bPause);                                                                                             // [0x6772770] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomWavePlayer.SetLooping
	// bool SetLooping(bool Looping);                                                                                           // [0x67726f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomWavePlayer.Play
	// void Play(float StartTime);                                                                                              // [0x6772670] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.AtomWavePlayer.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x6772640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomWavePlayer.IsPaused
	// bool IsPaused();                                                                                                         // [0x6772610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomWavePlayer.IsLooping
	// bool IsLooping();                                                                                                        // [0x67725e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomWavePlayer.HasError
	// bool HasError();                                                                                                         // [0x67725b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomWavePlayer.GetWaveInfo
	// FAtomWaveInfo GetWaveInfo();                                                                                             // [0x6772580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomWavePlayer.GetTime
	// FTimespan GetTime();                                                                                                     // [0x6772560] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomWavePlayer.GetPlayState
	// EAtomWavePlayState GetPlayState();                                                                                       // [0x6772530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomWavePlayer.GetCue
	// class USoundAtomCue* GetCue();                                                                                           // [0x6772510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.AtomWavePlayer.AdjustVolume
	// void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);                                                  // [0x6772440] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.CriFsBinderComponent
/// Size: 0x0290 (656 bytes) (0x000230 - 0x000290) align 16 MaxSize: 0x0290
class UCriFsBinderComponent : public USceneComponent
{ 
public:
	FString                                            FilePath;                                                   // 0x0230   (0x0010)  
	SDK_UNDEFINED(16,380) /* FMulticastInlineDelegate */ __um(OnBindCompleted);                                    // 0x0240   (0x0010)  
	SDK_UNDEFINED(16,381) /* FMulticastInlineDelegate */ __um(OnBindError);                                        // 0x0250   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0260   (0x0030)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.CriFsBinderComponent.Stop
	// void Stop();                                                                                                             // [0x6772cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.CriFsBinderComponent.OnBindError__DelegateSignature
	// void OnBindError__DelegateSignature();                                                                                   // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.CriFsBinderComponent.OnBindCompleted__DelegateSignature
	// void OnBindCompleted__DelegateSignature();                                                                               // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.CriFsBinderComponent.GetStatus
	// ECriFsBinderStatus GetStatus();                                                                                          // [0x6772ca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.CriFsBinderComponent.Bind
	// void Bind();                                                                                                             // [0x6772c80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.CriFsLoader
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class ACriFsLoader : public AActor
{ 
public:
	class UCriFsLoaderComponent*                       LoaderComponent;                                            // 0x0290   (0x0008)  
};

/// Class /Script/CriWareRuntime.CriFsLoaderComponent
/// Size: 0x02B0 (688 bytes) (0x000230 - 0x0002B0) align 16 MaxSize: 0x02B0
class UCriFsLoaderComponent : public USceneComponent
{ 
public:
	FString                                            FilePath;                                                   // 0x0230   (0x0010)  
	SDK_UNDEFINED(16,382) /* FMulticastInlineDelegate */ __um(OnLoadCompleted);                                    // 0x0240   (0x0010)  
	SDK_UNDEFINED(16,383) /* FMulticastInlineDelegate */ __um(OnLoadError);                                        // 0x0250   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0260   (0x0050)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.CriFsLoaderComponent.OnLoadError__DelegateSignature
	// void OnLoadError__DelegateSignature();                                                                                   // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.CriFsLoaderComponent.OnLoadCompleted__DelegateSignature
	// void OnLoadCompleted__DelegateSignature();                                                                               // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.CriFsLoaderComponent.Load
	// void Load();                                                                                                             // [0x6773270] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.CriFsLoaderComponent.GetStatus
	// ECriFsLoaderStatus GetStatus();                                                                                          // [0x6773240] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.CriFsLoaderComponent.GetDataArray
	// TArray<char> GetDataArray();                                                                                             // [0x67731b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.CriWareError
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 16 MaxSize: 0x0050
class UCriWareError : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	SDK_UNDEFINED(16,384) /* FMulticastInlineDelegate */ __um(OnCriWareError);                                     // 0x0030   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0040   (0x0010)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.CriWareError.OnCriWareError__DelegateSignature
	// void OnCriWareError__DelegateSignature(FCriWareErrorInfo& ErrorInfo);                                                    // [0x3617e10] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/CriWareRuntime.CriWareError.GetCriWareError
	// class UCriWareError* GetCriWareError();                                                                                  // [0x67738f0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/CriWareRuntime.CriWareFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UCriWareFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CriWareRuntime.CriWareFunctionLibrary.SetSpeakerAngleArray
	// void SetSpeakerAngleArray(ECriWareSpeakerSystem SpeakerSystem, TArray<float>& Angles);                                   // [0x6773ec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.CriWareFunctionLibrary.SetGlobalLabelToSelectorByName
	// void SetGlobalLabelToSelectorByName(FString SelectorName, FString LabelName);                                            // [0x6773d50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.CriWareFunctionLibrary.SetGameVariableByName
	// void SetGameVariableByName(FString GameVariableName, float Value);                                                       // [0x6773c20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.CriWareFunctionLibrary.SearchAtomCuesInAssetRegistry
	// TArray<USoundAtomCue*> SearchAtomCuesInAssetRegistry(class USoundAtomCueSheet* CueSheet);                                // [0x6773b50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.CriWareInitializer
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UCriWareInitializer : public UObject
{ 
public:
};

/// Struct /Script/CriWareRuntime.AtomAsrRackConfigUI
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FAtomAsrRackConfigUI
{ 
	EAtomSoundRendererType                             SoundRendererTypeUI;                                        // 0x0000   (0x0004)  
	int32_t                                            ElementID;                                                  // 0x0004   (0x0004)  
	bool                                               bUseOutputPort;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            UserIndex;                                                  // 0x000C   (0x0004)  
};

/// Struct /Script/CriWareRuntime.AtomAsrRackConfig
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FAtomAsrRackConfig
{ 
	int32_t                                            SoundRendererType;                                          // 0x0000   (0x0004)  
	int32_t                                            ElementID;                                                  // 0x0004   (0x0004)  
	bool                                               bUseOutputPort;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            UserIndex;                                                  // 0x000C   (0x0004)  
};

/// Class /Script/CriWareRuntime.CriWarePluginSettings
/// Size: 0x0558 (1368 bytes) (0x000028 - 0x000558) align 8 MaxSize: 0x0558
class UCriWarePluginSettings : public UObject
{ 
public:
	bool                                               bNoExistCriWareIni;                                         // 0x0028   (0x0001)  
	bool                                               bEditableCriWareAdxLipSyncSetting;                          // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x002A   (0x0006)  MISSED
	FDirectoryPath                                     NonAssetContentDir;                                         // 0x0030   (0x0010)  
	FString                                            ContentDir;                                                 // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0050   (0x0010)  MISSED
	int32_t                                            NumBinders;                                                 // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	int32_t                                            MaxBinds;                                                   // 0x0068   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	int32_t                                            NumLoaders;                                                 // 0x0070   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	int32_t                                            MaxPath;                                                    // 0x0078   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	bool                                               OutputsLogFileSystem;                                       // 0x0080   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	int32_t                                            PS4_FileAccessThreadAffinityMask;                           // 0x0084   (0x0004)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x0088   (0x0004)  MISSED
	int32_t                                            PS4_DataDecompressionThreadAffinityMask;                    // 0x008C   (0x0004)  
	unsigned char                                      UnknownData08_6[0x4];                                       // 0x0090   (0x0004)  MISSED
	int32_t                                            PS4_MemoryFileSystemThreadAffinityMask;                     // 0x0094   (0x0004)  
	unsigned char                                      UnknownData09_6[0x4];                                       // 0x0098   (0x0004)  MISSED
	int32_t                                            PS4_FileAccessThreadPriority;                               // 0x009C   (0x0004)  
	unsigned char                                      UnknownData10_6[0x4];                                       // 0x00A0   (0x0004)  MISSED
	int32_t                                            PS4_DataDecompressionThreadPriority;                        // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData11_6[0x4];                                       // 0x00A8   (0x0004)  MISSED
	int32_t                                            PS4_MemoryFileSystemThreadPriority;                         // 0x00AC   (0x0004)  
	unsigned char                                      UnknownData12_6[0x4];                                       // 0x00B0   (0x0004)  MISSED
	bool                                               AutomaticallyCreateCueAsset;                                // 0x00B4   (0x0001)  
	bool                                               UsesInGamePreview;                                          // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData13_6[0x1];                                       // 0x00B6   (0x0001)  MISSED
	bool                                               OutputsLogAtom;                                             // 0x00B7   (0x0001)  
	unsigned char                                      UnknownData14_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FDirectoryPath                                     AwbRootDirectory;                                           // 0x00C0   (0x0010)  
	FString                                            AwbRoot;                                                    // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData15_6[0x10];                                      // 0x00E0   (0x0010)  MISSED
	int32_t                                            MonitorCommunicationBufferSize;                             // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData16_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
	int32_t                                            MaxPitch;                                                   // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData17_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
	int32_t                                            AsrOutputChannels;                                          // 0x0100   (0x0004)  
	unsigned char                                      UnknownData18_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	int32_t                                            MaxVirtualVoices;                                           // 0x0108   (0x0004)  
	unsigned char                                      UnknownData19_6[0x4];                                       // 0x010C   (0x0004)  MISSED
	int32_t                                            NumStandardMemoryVoices;                                    // 0x0110   (0x0004)  
	unsigned char                                      UnknownData20_6[0x4];                                       // 0x0114   (0x0004)  MISSED
	int32_t                                            StandardMemoryVoiceNumChannels;                             // 0x0118   (0x0004)  
	unsigned char                                      UnknownData21_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	int32_t                                            StandardMemoryVoiceSamplingRate;                            // 0x0120   (0x0004)  
	unsigned char                                      UnknownData22_6[0x4];                                       // 0x0124   (0x0004)  MISSED
	int32_t                                            NumStandardStreamingVoices;                                 // 0x0128   (0x0004)  
	unsigned char                                      UnknownData23_6[0x4];                                       // 0x012C   (0x0004)  MISSED
	int32_t                                            StandardStreamingVoiceNumChannels;                          // 0x0130   (0x0004)  
	unsigned char                                      UnknownData24_6[0x4];                                       // 0x0134   (0x0004)  MISSED
	int32_t                                            StandardStreamingVoiceSamplingRate;                         // 0x0138   (0x0004)  
	unsigned char                                      UnknownData25_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	bool                                               PoolAtomComponent;                                          // 0x0140   (0x0001)  
	unsigned char                                      UnknownData26_6[0x7];                                       // 0x0141   (0x0007)  MISSED
	FSoftObjectPath                                    AtomConfig;                                                 // 0x0148   (0x0020)  
	unsigned char                                      UnknownData27_6[0x20];                                      // 0x0168   (0x0020)  MISSED
	FString                                            AcfFileName;                                                // 0x0188   (0x0010)  
	FSoftObjectPath                                    AtomConfigDataTable;                                        // 0x0198   (0x0020)  
	unsigned char                                      UnknownData28_6[0x20];                                      // 0x01B8   (0x0020)  MISSED
	FSoftObjectPath                                    AtomOutputPortDataTable;                                    // 0x01D8   (0x0020)  
	unsigned char                                      UnknownData29_6[0x20];                                      // 0x01F8   (0x0020)  MISSED
	float                                              DistanceFactor;                                             // 0x0218   (0x0004)  
	unsigned char                                      UnknownData30_6[0x4];                                       // 0x021C   (0x0004)  MISSED
	EAtomSoundRendererType                             SoundRendererTypeUI;                                        // 0x0220   (0x0004)  
	int32_t                                            SoundRendererType;                                          // 0x0224   (0x0004)  
	unsigned char                                      UnknownData31_6[0x8];                                       // 0x0228   (0x0008)  MISSED
	TArray<FAtomAsrRackConfigUI>                       AsrRackConfigUI;                                            // 0x0230   (0x0010)  
	TArray<FAtomAsrRackConfig>                         AsrRackConfig;                                              // 0x0240   (0x0010)  
	unsigned char                                      UnknownData32_6[0x10];                                      // 0x0250   (0x0010)  MISSED
	FString                                            Hardware1;                                                  // 0x0260   (0x0010)  
	FString                                            Hardware2;                                                  // 0x0270   (0x0010)  
	FString                                            Hardware3;                                                  // 0x0280   (0x0010)  
	FString                                            Hardware4;                                                  // 0x0290   (0x0010)  
	float                                              EconomicTickMarginDistance;                                 // 0x02A0   (0x0004)  
	unsigned char                                      UnknownData33_6[0x4];                                       // 0x02A4   (0x0004)  MISSED
	int32_t                                            EconomicTickFrequency;                                      // 0x02A8   (0x0004)  
	unsigned char                                      UnknownData34_6[0x4];                                       // 0x02AC   (0x0004)  MISSED
	float                                              CullingMarginDistance;                                      // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData35_6[0x4];                                       // 0x02B4   (0x0004)  MISSED
	bool                                               EnableDirectDbasConfig;                                     // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData36_6[0x3];                                       // 0x02B9   (0x0003)  MISSED
	int32_t                                            DbasIdentifier;                                             // 0x02BC   (0x0004)  
	unsigned char                                      UnknownData37_6[0x4];                                       // 0x02C0   (0x0004)  MISSED
	int32_t                                            DbasMaxStreams;                                             // 0x02C4   (0x0004)  
	unsigned char                                      UnknownData38_6[0x4];                                       // 0x02C8   (0x0004)  MISSED
	int32_t                                            DbasMaxBps;                                                 // 0x02CC   (0x0004)  
	unsigned char                                      UnknownData39_6[0x4];                                       // 0x02D0   (0x0004)  MISSED
	int32_t                                            DbasMaxManaStreams;                                         // 0x02D4   (0x0004)  
	unsigned char                                      UnknownData40_6[0x4];                                       // 0x02D8   (0x0004)  MISSED
	int32_t                                            DbasMaxManaBps;                                             // 0x02DC   (0x0004)  
	unsigned char                                      UnknownData41_6[0x4];                                       // 0x02E0   (0x0004)  MISSED
	int32_t                                            DbasNumSecurementBuffers;                                   // 0x02E4   (0x0004)  
	unsigned char                                      UnknownData42_6[0x4];                                       // 0x02E8   (0x0004)  MISSED
	int32_t                                            HcaMxVoiceSamplingRate;                                     // 0x02EC   (0x0004)  
	unsigned char                                      UnknownData43_6[0x4];                                       // 0x02F0   (0x0004)  MISSED
	int32_t                                            NumHcaMxMemoryVoices;                                       // 0x02F4   (0x0004)  
	unsigned char                                      UnknownData44_6[0x4];                                       // 0x02F8   (0x0004)  MISSED
	int32_t                                            HcaMxMemoryVoiceNumChannels;                                // 0x02FC   (0x0004)  
	unsigned char                                      UnknownData45_6[0x4];                                       // 0x0300   (0x0004)  MISSED
	int32_t                                            NumHcaMxStreamingVoices;                                    // 0x0304   (0x0004)  
	unsigned char                                      UnknownData46_6[0x4];                                       // 0x0308   (0x0004)  MISSED
	int32_t                                            HcaMxStreamingVoiceNumChannels;                             // 0x030C   (0x0004)  
	unsigned char                                      UnknownData47_6[0x4];                                       // 0x0310   (0x0004)  MISSED
	bool                                               WASAPI_IsExclusive;                                         // 0x0314   (0x0001)  
	unsigned char                                      UnknownData48_6[0x3];                                       // 0x0315   (0x0003)  MISSED
	int32_t                                            WASAPI_BitsPerSample;                                       // 0x0318   (0x0004)  
	unsigned char                                      UnknownData49_6[0x4];                                       // 0x031C   (0x0004)  MISSED
	int32_t                                            WASAPI_SamplingRate;                                        // 0x0320   (0x0004)  
	unsigned char                                      UnknownData50_6[0x4];                                       // 0x0324   (0x0004)  MISSED
	int32_t                                            WASAPI_NumChannels;                                         // 0x0328   (0x0004)  
	unsigned char                                      UnknownData51_6[0x4];                                       // 0x032C   (0x0004)  MISSED
	bool                                               UseUnrealSoundRenderer;                                     // 0x0330   (0x0001)  
	unsigned char                                      UnknownData52_6[0x1];                                       // 0x0331   (0x0001)  MISSED
	bool                                               SmartPhone_UseSonicSYNC;                                    // 0x0332   (0x0001)  
	unsigned char                                      UnknownData53_6[0x1];                                       // 0x0333   (0x0001)  MISSED
	int32_t                                            PS4_ServerThreadAffinityMask;                               // 0x0334   (0x0004)  
	unsigned char                                      UnknownData54_6[0x4];                                       // 0x0338   (0x0004)  MISSED
	int32_t                                            PS4_OutputThreadAffinityMask;                               // 0x033C   (0x0004)  
	unsigned char                                      UnknownData55_6[0x4];                                       // 0x0340   (0x0004)  MISSED
	int32_t                                            PS4_ServerThreadPriority;                                   // 0x0344   (0x0004)  
	unsigned char                                      UnknownData56_6[0x4];                                       // 0x0348   (0x0004)  MISSED
	int32_t                                            PS4_OutputThreadPriority;                                   // 0x034C   (0x0004)  
	unsigned char                                      UnknownData57_6[0x4];                                       // 0x0350   (0x0004)  MISSED
	bool                                               PS4_UseAudio3d;                                             // 0x0354   (0x0001)  
	unsigned char                                      UnknownData58_6[0x3];                                       // 0x0355   (0x0003)  MISSED
	int32_t                                            PS4_NumberOfAudio3dMemoryVoices;                            // 0x0358   (0x0004)  
	unsigned char                                      UnknownData59_6[0x4];                                       // 0x035C   (0x0004)  MISSED
	int32_t                                            PS4_SamplingRateOfAudio3dMemoryVoices;                      // 0x0360   (0x0004)  
	unsigned char                                      UnknownData60_6[0x4];                                       // 0x0364   (0x0004)  MISSED
	int32_t                                            PS4_NumberOfAudio3dStreamingVoices;                         // 0x0368   (0x0004)  
	unsigned char                                      UnknownData61_6[0x4];                                       // 0x036C   (0x0004)  MISSED
	int32_t                                            PS4_SamplingRateOfAudio3dStreamingVoices;                   // 0x0370   (0x0004)  
	unsigned char                                      UnknownData62_6[0x4];                                       // 0x0374   (0x0004)  MISSED
	int32_t                                            PS5_MaxChannelPorts;                                        // 0x0378   (0x0004)  
	unsigned char                                      UnknownData63_6[0x4];                                       // 0x037C   (0x0004)  MISSED
	int32_t                                            Switch_NumOpusMemoryVoices;                                 // 0x0380   (0x0004)  
	unsigned char                                      UnknownData64_6[0x4];                                       // 0x0384   (0x0004)  MISSED
	int32_t                                            Switch_OpusMemoryVoiceNumChannels;                          // 0x0388   (0x0004)  
	unsigned char                                      UnknownData65_6[0x4];                                       // 0x038C   (0x0004)  MISSED
	int32_t                                            Switch_OpusMemoryVoiceSamplingRate;                         // 0x0390   (0x0004)  
	unsigned char                                      UnknownData66_6[0x4];                                       // 0x0394   (0x0004)  MISSED
	int32_t                                            Switch_NumOpusStreamingVoices;                              // 0x0398   (0x0004)  
	unsigned char                                      UnknownData67_6[0x4];                                       // 0x039C   (0x0004)  MISSED
	int32_t                                            Switch_OpusStreamingVoiceNumChannels;                       // 0x03A0   (0x0004)  
	unsigned char                                      UnknownData68_6[0x4];                                       // 0x03A4   (0x0004)  MISSED
	int32_t                                            Switch_OpusStreamingVoiceSamplingRate;                      // 0x03A8   (0x0004)  
	unsigned char                                      UnknownData69_6[0x4];                                       // 0x03AC   (0x0004)  MISSED
	bool                                               InitializeMana;                                             // 0x03B0   (0x0001)  
	unsigned char                                      UnknownData70_6[0x1];                                       // 0x03B1   (0x0001)  MISSED
	bool                                               EnableDecodeSkip;                                           // 0x03B2   (0x0001)  
	unsigned char                                      UnknownData71_6[0x1];                                       // 0x03B3   (0x0001)  MISSED
	int32_t                                            MaxDecoderHandles;                                          // 0x03B4   (0x0004)  
	unsigned char                                      UnknownData72_6[0x4];                                       // 0x03B8   (0x0004)  MISSED
	int32_t                                            MaxManaBPS;                                                 // 0x03BC   (0x0004)  
	unsigned char                                      UnknownData73_6[0x4];                                       // 0x03C0   (0x0004)  MISSED
	int32_t                                            MaxManaStreams;                                             // 0x03C4   (0x0004)  
	unsigned char                                      UnknownData74_6[0x4];                                       // 0x03C8   (0x0004)  MISSED
	bool                                               UseH264Decoder;                                             // 0x03CC   (0x0001)  
	unsigned char                                      UnknownData75_6[0x1];                                       // 0x03CD   (0x0001)  MISSED
	bool                                               UseDecoderOutputBuffers;                                    // 0x03CE   (0x0001)  
	unsigned char                                      UnknownData76_6[0x1];                                       // 0x03CF   (0x0001)  MISSED
	bool                                               ForceSoftwareDecodingOnXboxOne;                             // 0x03D0   (0x0001)  
	unsigned char                                      UnknownData77_6[0x1];                                       // 0x03D1   (0x0001)  MISSED
	bool                                               ForceSoftwareDecodingOnXboxSeries;                          // 0x03D2   (0x0001)  
	unsigned char                                      UnknownData78_6[0x1];                                       // 0x03D3   (0x0001)  MISSED
	bool                                               ForceDisableManaStreamerManager;                            // 0x03D4   (0x0001)  
	unsigned char                                      UnknownData79_6[0x1];                                       // 0x03D5   (0x0001)  MISSED
	bool                                               InitializeAdxLipSync;                                       // 0x03D6   (0x0001)  
	unsigned char                                      UnknownData80_6[0x1];                                       // 0x03D7   (0x0001)  MISSED
	int32_t                                            MaxNumAnalyzerHandles;                                      // 0x03D8   (0x0004)  
	unsigned char                                      UnknownData81_6[0x4];                                       // 0x03DC   (0x0004)  MISSED
	bool                                               bUseManaStartupMovies;                                      // 0x03E0   (0x0001)  
	bool                                               bWaitForMoviesToComplete;                                   // 0x03E1   (0x0001)  
	bool                                               bMoviesAreSkippable;                                        // 0x03E2   (0x0001)  
	unsigned char                                      UnknownData82_6[0x5];                                       // 0x03E3   (0x0005)  MISSED
	TArray<FString>                                    StartupMovies;                                              // 0x03E8   (0x0010)  
	unsigned char                                      UnknownData83_7[0x160];                                     // 0x03F8   (0x0160)  MISSED
};

/// Class /Script/CriWareRuntime.ManaComponent
/// Size: 0x0298 (664 bytes) (0x0000A0 - 0x000298) align 8 MaxSize: 0x0298
class UManaComponent : public UActorComponent
{ 
public:
	class UManaTexture*                                Movie;                                                      // 0x00A0   (0x0008)  
	SDK_UNDEFINED(16,385) /* FMulticastInlineDelegate */ __um(OnEventPoint);                                       // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,386) /* FMulticastInlineDelegate */ __um(OnSubtitleChanged);                                  // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,387) /* FMulticastInlineDelegate */ __um(OnStatusChanged);                                    // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,388) /* FMulticastInlineDelegate */ __um(OnMovieChanged);                                     // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,389) /* FMulticastInlineDelegate */ __um(OnSeekCompleted);                                    // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,390) /* FMulticastInlineDelegate */ __um(OnTrackChanged);                                     // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,391) /* FMulticastInlineDelegate */ __um(OnFrameOnTime);                                      // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,392) /* FMulticastInlineDelegate */ __um(OnPlayerDestroyed);                                  // 0x0118   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0128   (0x0018)  MISSED
	SDK_UNDEFINED(16,393) /* FDelegateProperty */      __um(OnRequestData);                                        // 0x0140   (0x0010)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x0150   (0x0040)  MISSED
	class UManaPlaylist*                               Playlist;                                                   // 0x0190   (0x0008)  
	int32_t                                            PlaylistIndex;                                              // 0x0198   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x019C   (0x0004)  MISSED
	bool                                               bLoop;                                                      // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x01A1   (0x0003)  MISSED
	int32_t                                            AlphaTrack;                                                 // 0x01A4   (0x0004)  
	int32_t                                            AudioTrack;                                                 // 0x01A8   (0x0004)  
	int32_t                                            SubAudioTrack;                                              // 0x01AC   (0x0004)  
	int32_t                                            ExtraAudioTrack;                                            // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x01B4   (0x0004)  MISSED
	FString                                            AudioCategoryName;                                          // 0x01B8   (0x0010)  
	FString                                            SubAudioCategoryName;                                       // 0x01C8   (0x0010)  
	FString                                            ExtraAudioCategoryName;                                     // 0x01D8   (0x0010)  
	bool                                               bSubtitlesEnabled;                                          // 0x01E8   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x01E9   (0x0003)  MISSED
	int32_t                                            SubtitlesChannel;                                           // 0x01EC   (0x0004)  
	EManaSubtitlesEncoding                             SubtitlesEncoding;                                          // 0x01F0   (0x0001)  
	EManaFrameAction                                   EndFrameAction;                                             // 0x01F1   (0x0001)  
	EManaPlaybackTimer                                 PlaybackTimer;                                              // 0x01F2   (0x0001)  
	EManaMaxFrameDrop                                  MaxFrameDrop;                                               // 0x01F3   (0x0001)  
	unsigned char                                      UnknownData06_7[0xA4];                                      // 0x01F4   (0x00A4)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.ManaComponent.ToIndex
	// bool ToIndex(int32_t Index);                                                                                             // [0x6776fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.Stop
	// void Stop();                                                                                                             // [0x6776fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetVolume
	// void SetVolume(float Volume);                                                                                            // [0x6776f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetTexture
	// void SetTexture(class UManaTexture* Texture);                                                                            // [0x6776ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetSubVolume
	// void SetSubVolume(float Volume);                                                                                         // [0x6776e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetSubAudioTrack
	// void SetSubAudioTrack(int32_t Track);                                                                                    // [0x6776d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetSubAudioSendLevel
	// void SetSubAudioSendLevel(int32_t Channel, EAtomSpeakerID SpeakerId, float Volume);                                      // [0x6776c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetSubAudioCategory
	// void SetSubAudioCategory(FString CategoryName);                                                                          // [0x6776be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetPlaybackTimer
	// void SetPlaybackTimer(EManaPlaybackTimer InPlaybackTimer);                                                               // [0x6776b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetMovie
	// void SetMovie(class UManaMovie* InMovie);                                                                                // [0x6776ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetMaxDropFrames
	// void SetMaxDropFrames(EManaMaxFrameDrop InMaxDropFrames);                                                                // [0x6776a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetFile
	// void SetFile(FString MovieFilePath);                                                                                     // [0x67769b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetExtraVolume
	// void SetExtraVolume(float Volume);                                                                                       // [0x6776930] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetExtraAudioTrack
	// void SetExtraAudioTrack(int32_t Track);                                                                                  // [0x67768a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetExtraAudioCategory
	// void SetExtraAudioCategory(FString CategoryName);                                                                        // [0x6776800] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetEndFrameAction
	// void SetEndFrameAction(EManaFrameAction InFrameAction);                                                                  // [0x6776780] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetAudioTrack
	// void SetAudioTrack(int32_t Track);                                                                                       // [0x67766f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetAudioCategory
	// void SetAudioCategory(FString CategoryName);                                                                             // [0x6776650] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SetAlphaTrack
	// void SetAlphaTrack(int32_t Track);                                                                                       // [0x67765c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.SeekToPosition
	// void SeekToPosition(int32_t FrameNumber);                                                                                // [0x6776530] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.Seek
	// void Seek(FTimespan Time);                                                                                               // [0x67764a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.RemoveSubAudioCategory
	// void RemoveSubAudioCategory();                                                                                           // [0x6776480] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.RemoveExtraAudioCategory
	// void RemoveExtraAudioCategory();                                                                                         // [0x6776460] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.RemoveAudioCategory
	// void RemoveAudioCategory();                                                                                              // [0x6776440] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.Previous
	// bool Previous();                                                                                                         // [0x6776410] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.PreparePlaylistIndex
	// void PreparePlaylistIndex(int32_t Index);                                                                                // [0x6776380] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.Prepare
	// void Prepare();                                                                                                          // [0x6776360] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.Play
	// void Play();                                                                                                             // [0x6776340] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.Pause
	// void Pause(bool bPause);                                                                                                 // [0x67762b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.OnTrackChanged__DelegateSignature
	// void OnTrackChanged__DelegateSignature(int32_t TrackNumber, class UManaComponent* ManaComponent);                        // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.ManaComponent.OnSubtitleChanged__DelegateSignature
	// void OnSubtitleChanged__DelegateSignature(FText Subtitle);                                                               // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.ManaComponent.OnStatusChanged__DelegateSignature
	// void OnStatusChanged__DelegateSignature(EManaComponentStatus Status, class UManaComponent* ManaComponent);               // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.ManaComponent.OnSeekCompleted__DelegateSignature
	// void OnSeekCompleted__DelegateSignature(int32_t FrameNumber, class UManaComponent* ManaComponent);                       // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.ManaComponent.OnRequestData__DelegateSignature
	// void OnRequestData__DelegateSignature(class UManaComponent* ManaComponent);                                              // [0x3617e10] Public|Delegate      
	// Function /Script/CriWareRuntime.ManaComponent.OnPlayerDestroyed__DelegateSignature
	// void OnPlayerDestroyed__DelegateSignature(class UManaComponent* ManaComponent);                                          // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.ManaComponent.OnMovieChanged__DelegateSignature
	// void OnMovieChanged__DelegateSignature(class UManaMovie* Movie, class UManaComponent* ManaComponent);                    // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.ManaComponent.OnFrameOnTime__DelegateSignature
	// void OnFrameOnTime__DelegateSignature(int32_t FrameNumber, class UManaComponent* ManaComponent);                         // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.ManaComponent.OnEventPoint__DelegateSignature
	// void OnEventPoint__DelegateSignature(FManaEventPointInfo EventPointInfo);                                                // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.ManaComponent.Next
	// bool Next();                                                                                                             // [0x6776280] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.Loop
	// void Loop(bool bInLoop);                                                                                                 // [0x67761f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.IsReady
	// bool IsReady();                                                                                                          // [0x67761c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.IsPreparing
	// bool IsPreparing();                                                                                                      // [0x6776190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x6776160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.IsPaused
	// bool IsPaused();                                                                                                         // [0x6776130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.IsLooping
	// bool IsLooping();                                                                                                        // [0x6776110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetVolume
	// float GetVolume();                                                                                                       // [0x67760e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetTime
	// FTimespan GetTime();                                                                                                     // [0x67760a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetTexture
	// class UManaTexture* GetTexture();                                                                                        // [0x6776070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetSubVolume
	// float GetSubVolume();                                                                                                    // [0x6776040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetStatus
	// EManaComponentStatus GetStatus();                                                                                        // [0x6776010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetSource
	// class UManaMovie* GetSource();                                                                                           // [0x6775fe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetPosition
	// int32_t GetPosition();                                                                                                   // [0x6775fb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetMovieTime
	// FTimespan GetMovieTime();                                                                                                // [0x6775f70] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetFrameNumber
	// int32_t GetFrameNumber();                                                                                                // [0x6775f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.GetExtraVolume
	// float GetExtraVolume();                                                                                                  // [0x6775f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaComponent.EnableSubtitles
	// void EnableSubtitles(bool bEnable);                                                                                      // [0x6775e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.EnableSeamless
	// void EnableSeamless(bool bEnable);                                                                                       // [0x6775df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.ChangeSubtitlesEncoding
	// void ChangeSubtitlesEncoding(EManaSubtitlesEncoding Encoding);                                                           // [0x6775d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.ChangeSubtitlesChannel
	// void ChangeSubtitlesChannel(int32_t Channel);                                                                            // [0x6775ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaComponent.AdvanceTime
	// void AdvanceTime(FTimespan DeltaTime);                                                                                   // [0x6775c50] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.ManaComponentTexture
/// Size: 0x0188 (392 bytes) (0x000130 - 0x000188) align 8 MaxSize: 0x0188
class UManaComponentTexture : public UTexture
{ 
public:
	int32_t                                            SizeX;                                                      // 0x0130   (0x0004)  
	int32_t                                            SizeY;                                                      // 0x0134   (0x0004)  
	TEnumAsByte<EPixelFormat>                          Format;                                                     // 0x0138   (0x0001)  
	EManaComponentTextureType                          ComponentType;                                              // 0x0139   (0x0001)  
	TEnumAsByte<TextureAddress>                        AddressX;                                                   // 0x013A   (0x0001)  
	TEnumAsByte<TextureAddress>                        AddressY;                                                   // 0x013B   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4C];                                      // 0x013C   (0x004C)  MISSED
};

/// Class /Script/CriWareRuntime.ManaSource
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UManaSource : public UObject
{ 
public:
};

/// Struct /Script/CriWareRuntime.ManaVideoTrackInfo
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FManaVideoTrackInfo
{ 
	FIntPoint                                          TextureDimensions;                                          // 0x0000   (0x0008)  
	FIntPoint                                          DisplayDimensions;                                          // 0x0008   (0x0008)  
	float                                              FrameRate;                                                  // 0x0010   (0x0004)  
	int32_t                                            TotalFrames;                                                // 0x0014   (0x0004)  
	bool                                               bIsAlpha;                                                   // 0x0018   (0x0001)  
	EManaMovieType                                     Type;                                                       // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x001A   (0x0002)  MISSED
};

/// Struct /Script/CriWareRuntime.ManaAudioTrackInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FManaAudioTrackInfo
{ 
	int32_t                                            NumChannels;                                                // 0x0000   (0x0004)  
	int32_t                                            SamplingRate;                                               // 0x0004   (0x0004)  
	int32_t                                            TotalSamples;                                               // 0x0008   (0x0004)  
	bool                                               bIsAmbisonics;                                              // 0x000C   (0x0001)  
	EManaSoundType                                     Type;                                                       // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/CriWareRuntime.ManaEventPointInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FManaEventPointInfo
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	float                                              Time;                                                       // 0x0010   (0x0004)  
	int32_t                                            Type;                                                       // 0x0014   (0x0004)  
	FString                                            Parameter;                                                  // 0x0018   (0x0010)  
};

/// Struct /Script/CriWareRuntime.ManaSubtitleTrackInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FManaSubtitleTrackInfo
{ 
	FText                                              Name;                                                       // 0x0000   (0x0018)  
	FString                                            Language;                                                   // 0x0010   (0x0010)  
	EManaSubtitlesEncoding                             Encoding;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Class /Script/CriWareRuntime.ManaMovie
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 8 MaxSize: 0x00A0
class UManaMovie : public UManaSource
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<FManaVideoTrackInfo>                        VideoTracks;                                                // 0x0030   (0x0010)  
	TArray<FManaVideoTrackInfo>                        AlphaTracks;                                                // 0x0040   (0x0010)  
	TArray<FManaAudioTrackInfo>                        AudioTracks;                                                // 0x0050   (0x0010)  
	TArray<FManaEventPointInfo>                        EventPoints;                                                // 0x0060   (0x0010)  
	TArray<FManaSubtitleTrackInfo>                     SubtitleTracks;                                             // 0x0070   (0x0010)  
	int32_t                                            NumSubtitleChannels;                                        // 0x0080   (0x0004)  
	int32_t                                            MaxSubtitleSize;                                            // 0x0084   (0x0004)  
	int32_t                                            MinBufferSize;                                              // 0x0088   (0x0004)  
	int32_t                                            MaxChunkSize;                                               // 0x008C   (0x0004)  
	bool                                               bIsAlpha : 1;                                               // 0x0090:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0091   (0x000F)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.ManaMovie.Validate
	// bool Validate();                                                                                                         // [0x6778630] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaMovie.GetUrl
	// FString GetUrl();                                                                                                        // [0x6778460] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CriWareRuntime.FileManaMovie
/// Size: 0x00B8 (184 bytes) (0x0000A0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UFileManaMovie : public UManaMovie
{ 
public:
	bool                                               bPrecacheFile;                                              // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
	FString                                            FilePath;                                                   // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/CriWareRuntime.FileManaMovie.SetFilePath
	// void SetFilePath(FString Path);                                                                                          // [0x6778590] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.DataManaMovie
/// Size: 0x00A8 (168 bytes) (0x0000A0 - 0x0000A8) align 8 MaxSize: 0x00A8
class UDataManaMovie : public UManaMovie
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.DataManaMovie.SetDataArray
	// void SetDataArray(TArray<char>& InDataArray);                                                                            // [0x67784e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.DataManaMovie.GetDataArray
	// TArray<char> GetDataArray();                                                                                             // [0x67783d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.StreamManaMovie
/// Size: 0x00B0 (176 bytes) (0x0000A0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UStreamManaMovie : public UManaMovie
{ 
public:
	FString                                            StreamUrl;                                                  // 0x00A0   (0x0010)  
};

/// Class /Script/CriWareRuntime.ManaPlayer
/// Size: 0x01C0 (448 bytes) (0x000028 - 0x0001C0) align 16 MaxSize: 0x01C0
class UManaPlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	bool                                               PlayOnOpen;                                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	bool                                               Loop : 1;                                                   // 0x0034:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0xB];                                       // 0x0035   (0x000B)  MISSED
	EManaMaxFrameDrop                                  MaxFrameDrop;                                               // 0x0040   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	SDK_UNDEFINED(16,394) /* FMulticastInlineDelegate */ __um(OnEndReached);                                       // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,395) /* FMulticastInlineDelegate */ __um(OnMovieClosed);                                      // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,396) /* FMulticastInlineDelegate */ __um(OnMovieOpened);                                      // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,397) /* FMulticastInlineDelegate */ __um(OnMovieOpenFailed);                                  // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,398) /* FMulticastInlineDelegate */ __um(OnPlaybackResumed);                                  // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,399) /* FMulticastInlineDelegate */ __um(OnPlaybackSuspended);                                // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,400) /* FMulticastInlineDelegate */ __um(OnSeekCompleted);                                    // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,401) /* FMulticastInlineDelegate */ __um(OnTracksChanged);                                    // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,402) /* FMulticastInlineDelegate */ __um(OnSubtitleChanged);                                  // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,403) /* FMulticastInlineDelegate */ __um(OnEventPoint);                                       // 0x00D8   (0x0010)  
	class UManaTexture*                                ManaTexture;                                                // 0x00E8   (0x0008)  
	class UManaMovie*                                  ManaMovie;                                                  // 0x00F0   (0x0008)  
	class UManaPlaylist*                               Playlist;                                                   // 0x00F8   (0x0008)  
	int32_t                                            PlaylistIndex;                                              // 0x0100   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	class UManaComponent*                              ManaComponent;                                              // 0x0108   (0x0008)  
	unsigned char                                      UnknownData05_7[0xB0];                                      // 0x0110   (0x00B0)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.ManaPlayer.SetVolume
	// bool SetVolume(float Volume, EManaPlayerTrack TrackType);                                                                // [0x677b180] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.SetTrackFormat
	// bool SetTrackFormat(EManaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex);                                // [0x677b070] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.SetTimeSyncedSource
	// void SetTimeSyncedSource(class UAtomComponent* SyncedSource);                                                            // [0x677afe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.SetTexture
	// void SetTexture(class UManaTexture* InManaTexture);                                                                      // [0x677af50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.SetRate
	// bool SetRate(float Rate);                                                                                                // [0x677aed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.SetLooping
	// bool SetLooping(bool Looping);                                                                                           // [0x677ae30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.SelectTrack
	// bool SelectTrack(EManaPlayerTrack TrackType, int32_t TrackIndex);                                                        // [0x677ad60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.Seek
	// bool Seek(FTimespan Time);                                                                                               // [0x677acc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.Rewind
	// bool Rewind();                                                                                                           // [0x677ac90] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.Reopen
	// bool Reopen();                                                                                                           // [0x677ac60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.Previous
	// bool Previous();                                                                                                         // [0x677ac20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.PlayAndSeek
	// void PlayAndSeek();                                                                                                      // [0x677ac00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.Play
	// bool Play();                                                                                                             // [0x677abd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.Pause
	// bool Pause();                                                                                                            // [0x677aba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.OpenSourceWithOptions
	// bool OpenSourceWithOptions(class UManaSource* ManaSource, FManaPlayerOptions& PlayerOptions);                            // [0x677aa90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.OpenPlaylistIndex
	// bool OpenPlaylistIndex(class UManaPlaylist* InPlaylist, int32_t Index);                                                  // [0x677a9c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.OpenPlaylist
	// bool OpenPlaylist(class UManaPlaylist* InPlaylist);                                                                      // [0x677a920] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.OpenMovieSource
	// void OpenMovieSource(class UManaMovie* InManaMovie);                                                                     // [0x677a890] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.OnFrameUpdatedDelegate__DelegateSignature
	// void OnFrameUpdatedDelegate__DelegateSignature(int32_t FrameNumber);                                                     // [0x3617e10] Public|Delegate      
	// Function /Script/CriWareRuntime.ManaPlayer.Next
	// bool Next();                                                                                                             // [0x677a850] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.IsSeeking
	// bool IsSeeking();                                                                                                        // [0x677a830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.IsReady
	// bool IsReady();                                                                                                          // [0x677a7e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.IsPreparing
	// bool IsPreparing();                                                                                                      // [0x677a790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x677a720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.IsPaused
	// bool IsPaused();                                                                                                         // [0x677a6d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.IsLooping
	// bool IsLooping();                                                                                                        // [0x677a6a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.IsClosed
	// bool IsClosed();                                                                                                         // [0x677a670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.HasError
	// bool HasError();                                                                                                         // [0x677a610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.HandleManaComponentSubtitleChanged
	// void HandleManaComponentSubtitleChanged(FText Subtitle);                                                                 // [0x677a560] Final|Native|Private 
	// Function /Script/CriWareRuntime.ManaPlayer.HandleManaComponentStatusChanged
	// void HandleManaComponentStatusChanged(EManaComponentStatus Status, class UManaComponent* InManaComponent);               // [0x677a490] Final|Native|Private 
	// Function /Script/CriWareRuntime.ManaPlayer.HandleManaComponentSeekCompleted
	// void HandleManaComponentSeekCompleted(int32_t InFrameNumber, class UManaComponent* InManaComponent);                     // [0x677a3c0] Final|Native|Private 
	// Function /Script/CriWareRuntime.ManaPlayer.HandleManaComponentPlayerDestroyed
	// void HandleManaComponentPlayerDestroyed(class UManaComponent* InManaComponent);                                          // [0x677a330] Final|Native|Private 
	// Function /Script/CriWareRuntime.ManaPlayer.HandleManaComponentMovieChanged
	// void HandleManaComponentMovieChanged(class UManaMovie* InManaMovie, class UManaComponent* InManaComponent);              // [0x677a260] Final|Native|Private 
	// Function /Script/CriWareRuntime.ManaPlayer.HandleManaComponentFrameOnTime
	// void HandleManaComponentFrameOnTime(int32_t InFrameNumber, class UManaComponent* InManaComponent);                       // [0x677a190] Final|Native|Private 
	// Function /Script/CriWareRuntime.ManaPlayer.HandleManaComponentEventPoint
	// void HandleManaComponentEventPoint(FManaEventPointInfo EventPointInfo);                                                  // [0x677a090] Final|Native|Private 
	// Function /Script/CriWareRuntime.ManaPlayer.GetVolume
	// float GetVolume(EManaPlayerTrack TrackType);                                                                             // [0x677a000] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.GetTrackLanguage
	// FString GetTrackLanguage(EManaPlayerTrack TrackType, int32_t TrackIndex);                                                // [0x6779ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.GetTrackFormat
	// int32_t GetTrackFormat(EManaPlayerTrack TrackType, int32_t TrackIndex);                                                  // [0x6779e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.GetTrackDisplayName
	// FText GetTrackDisplayName(EManaPlayerTrack TrackType, int32_t TrackIndex);                                               // [0x6779d30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.GetTimeSyncedSource
	// class UAtomComponent* GetTimeSyncedSource();                                                                             // [0x6779cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.GetTime
	// FTimespan GetTime();                                                                                                     // [0x6779cb0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.GetTexture
	// class UManaTexture* GetTexture();                                                                                        // [0x6779c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.GetSubtitleTrackEncoding
	// EManaSubtitlesEncoding GetSubtitleTrackEncoding(int32_t TrackIndex);                                                     // [0x6779bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.GetStatus
	// EManaComponentStatus GetStatus();                                                                                        // [0x6779ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.GetSelectedTrack
	// int32_t GetSelectedTrack(EManaPlayerTrack TrackType);                                                                    // [0x6779b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.GetRate
	// float GetRate();                                                                                                         // [0x6779aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.GetPlaylistIndex
	// int32_t GetPlaylistIndex();                                                                                              // [0x6779a70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.GetNumTracks
	// int32_t GetNumTracks(EManaPlayerTrack TrackType);                                                                        // [0x67799e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.GetNumTrackFormats
	// int32_t GetNumTrackFormats(EManaPlayerTrack TrackType, int32_t TrackIndex);                                              // [0x6779910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.GetMovieTime
	// FTimespan GetMovieTime();                                                                                                // [0x67798d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.GetMovieSource
	// class UManaMovie* GetMovieSource();                                                                                      // [0x6779870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.GetMovieFrames
	// int32_t GetMovieFrames();                                                                                                // [0x67797d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.GetFrames
	// int32_t GetFrames();                                                                                                     // [0x6779790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.GetDuration
	// FTimespan GetDuration();                                                                                                 // [0x6779750] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.ManaPlayer.DisableTrack
	// bool DisableTrack(EManaPlayerTrack TrackType);                                                                           // [0x67796c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.Close
	// void Close();                                                                                                            // [0x67796a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlayer.BindOnFrameUpdated
	// void BindOnFrameUpdated(FDelegateProperty& Event);                                                                       // [0x67795f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.ManaPlaylist
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UManaPlaylist : public UManaSource
{ 
public:
	TArray<class UManaMovie*>                          Movies;                                                     // 0x0028   (0x0010)  
	bool                                               bIsAlpha;                                                   // 0x0038   (0x0001)  
	bool                                               bIsMixedTypes;                                              // 0x0039   (0x0001)  
	bool                                               bIsSeamless;                                                // 0x003A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x003B   (0x0005)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.ManaPlaylist.RemoveAt
	// void RemoveAt(int32_t Index);                                                                                            // [0x677be20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.Remove
	// void Remove(class UManaMovie* ManaMovie);                                                                                // [0x677bd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.Num
	// int32_t Num();                                                                                                           // [0x677bd70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.IsSeamless
	// bool IsSeamless();                                                                                                       // [0x677bd50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.IsMixedTypes
	// bool IsMixedTypes();                                                                                                     // [0x677bd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.IsAlpha
	// bool IsAlpha();                                                                                                          // [0x677bd10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.Insert
	// void Insert(class UManaMovie* ManaMovie, int32_t Index);                                                                 // [0x677bc40] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.GetRandom
	// class UManaMovie* GetRandom(int32_t& InOutIndex);                                                                        // [0x677bb90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.GetPrevious
	// class UManaMovie* GetPrevious(int32_t& InOutIndex);                                                                      // [0x677bae0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.GetNext
	// class UManaMovie* GetNext(int32_t& InOutIndex);                                                                          // [0x677ba30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.Get
	// class UManaMovie* Get(int32_t Index);                                                                                    // [0x677b990] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaPlaylist.Add
	// void Add(class UManaMovie* ManaMovie);                                                                                   // [0x677b900] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.ManaSoundComponent
/// Size: 0x02E0 (736 bytes) (0x000230 - 0x0002E0) align 16 MaxSize: 0x02E0
class UManaSoundComponent : public USceneComponent
{ 
public:
	bool                                               bAutoDestroy : 1;                                           // 0x0230:0 (0x0001)  
	bool                                               bStopWhenOwnerDestroyed : 1;                                // 0x0230:1 (0x0001)  
	bool                                               bEnableSpatialization : 1;                                  // 0x0230:2 (0x0001)  
	bool                                               bOverrideVolumeMultiplier : 1;                              // 0x0230:3 (0x0001)  
	bool                                               bEnableLowPassFilter : 1;                                   // 0x0230:4 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0231   (0x0003)  MISSED
	float                                              VolumeMultiplier;                                           // 0x0234   (0x0004)  
	float                                              LowPassFilterFrequency;                                     // 0x0238   (0x0004)  
	float                                              PanSpread;                                                  // 0x023C   (0x0004)  
	float                                              MinAttenuationDistance;                                     // 0x0240   (0x0004)  
	float                                              MaxAttenuationDistance;                                     // 0x0244   (0x0004)  
	TArray<FAtomAisacControlParam>                     AisacControls;                                              // 0x0248   (0x0010)  
	TArray<FString>                                    AttachedAisacs;                                             // 0x0258   (0x0010)  
	FString                                            AudioTrackCategory;                                         // 0x0268   (0x0010)  
	FString                                            SubAudioTrackCategory;                                      // 0x0278   (0x0010)  
	FString                                            ExtraAudioTrackCategory;                                    // 0x0288   (0x0010)  
	class UManaPlayer*                                 ManaPlayer;                                                 // 0x0298   (0x0008)  
	unsigned char                                      UnknownData01_7[0x40];                                      // 0x02A0   (0x0040)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.ManaSoundComponent.SetManaPlayer
	// void SetManaPlayer(class UManaPlayer* NewManaPlayer);                                                                    // [0x677c3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaSoundComponent.SetAudioTrackCategory
	// void SetAudioTrackCategory(EManaPlayerTrack Track, FString CategoryName);                                                // [0x677c2f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaSoundComponent.RemoveAudioTrackCategory
	// void RemoveAudioTrackCategory(EManaPlayerTrack Track);                                                                   // [0x677c270] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaSoundComponent.GetManaPlayer
	// class UManaPlayer* GetManaPlayer();                                                                                      // [0x677c240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CriWareRuntime.ManaTexture
/// Size: 0x0228 (552 bytes) (0x000130 - 0x000228) align 8 MaxSize: 0x0228
class UManaTexture : public UTexture
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0130   (0x0008)  MISSED
	class UManaSource*                                 MovieSource;                                                // 0x0138   (0x0008)  
	FString                                            MovieFilePath;                                              // 0x0140   (0x0010)  
	bool                                               bRenderToTexture : 1;                                       // 0x0150:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0151   (0x0003)  MISSED
	float                                              TargetGamma;                                                // 0x0154   (0x0004)  
	bool                                               bHDR : 1;                                                   // 0x0158:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0159   (0x0003)  MISSED
	TEnumAsByte<TextureAddress>                        AddressX;                                                   // 0x015C   (0x0001)  
	TEnumAsByte<TextureAddress>                        AddressY;                                                   // 0x015D   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x015E   (0x0002)  MISSED
	FLinearColor                                       ClearColor;                                                 // 0x0160   (0x0010)  
	bool                                               bOverrideDimensions : 1;                                    // 0x0170:0 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0171   (0x0003)  MISSED
	FIntPoint                                          TargetDimensions;                                           // 0x0174   (0x0008)  
	TEnumAsByte<EPixelFormat>                          OverrideFormat;                                             // 0x017C   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x017D   (0x0003)  MISSED
	SDK_UNDEFINED(16,404) /* FMulticastInlineDelegate */ __um(OnTextureUpdated);                                   // 0x0180   (0x0010)  
	TArray<class UManaComponentTexture*>               ComponentTextures;                                          // 0x0190   (0x0010)  
	TArray<class UManaComponentTexture*>               AlphaComponentTextures;                                     // 0x01A0   (0x0010)  
	TWeakObjectPtr<class UManaComponent*>              ManaPlayer;                                                 // 0x01B0   (0x0008)  
	unsigned char                                      UnknownData06_7[0x70];                                      // 0x01B8   (0x0070)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.ManaTexture.SetMovieSource
	// void SetMovieSource(class UManaSource* InSource);                                                                        // [0x677c920] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.ManaTexture.OnTextureUpdated__DelegateSignature
	// void OnTextureUpdated__DelegateSignature(class UManaTexture* ManaTexture);                                               // [0x3617e10] MulticastDelegate|Public|Delegate 
};

/// Class /Script/CriWareRuntime.MaterialExpressionManaColorSpaceConverter
/// Size: 0x0180 (384 bytes) (0x0000B0 - 0x000180) align 8 MaxSize: 0x0180
class UMaterialExpressionManaColorSpaceConverter : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Luma;                                                       // 0x00B0   (0x0028)  
	FExpressionInput                                   ChromaB;                                                    // 0x00D8   (0x0028)  
	FExpressionInput                                   ChromaR;                                                    // 0x0100   (0x0028)  
	FExpressionInput                                   Alpha;                                                      // 0x0128   (0x0028)  
	FExpressionInput                                   Gamma;                                                      // 0x0150   (0x0028)  
	bool                                               bH264;                                                      // 0x0178   (0x0001)  
	EManaMovieType                                     MovieType;                                                  // 0x0179   (0x0001)  
	EManaColorSpace                                    ColorSpace;                                                 // 0x017A   (0x0001)  
	bool                                               bUseGammaExponent;                                          // 0x017B   (0x0001)  
	float                                              ConstGamma;                                                 // 0x017C   (0x0004)  
};

/// Class /Script/CriWareRuntime.MaterialExpressionManaMovieFormatSwitch
/// Size: 0x0188 (392 bytes) (0x0000B0 - 0x000188) align 8 MaxSize: 0x0188
class UMaterialExpressionManaMovieFormatSwitch : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Inputs[5];                                                  // 0x00B0   (0x00C8)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0178   (0x0010)  MISSED
};

/// Class /Script/CriWareRuntime.PlatformManaMovie
/// Size: 0x00A8 (168 bytes) (0x0000A0 - 0x0000A8) align 8 MaxSize: 0x00A8
class UPlatformManaMovie : public UManaMovie
{ 
public:
	class UManaMovie*                                  ManaMovie;                                                  // 0x00A0   (0x0008)  
};

/// Class /Script/CriWareRuntime.SoundAtomConfig
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class USoundAtomConfig : public UObject
{ 
public:
	FString                                            AcfFilePath;                                                // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0038   (0x0028)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.SoundAtomConfig.GetCategoryInfoArray
	// TArray<FAtomCategoryInfoParam> GetCategoryInfoArray();                                                                   // [0x677d270] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CriWareRuntime.SoundAtomCue
/// Size: 0x00D8 (216 bytes) (0x000028 - 0x0000D8) align 8 MaxSize: 0x00D8
class USoundAtomCue : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class USoundAtomCueSheet*                          CueSheet;                                                   // 0x0030   (0x0008)  
	FString                                            CueName;                                                    // 0x0038   (0x0010)  
	EAtomLoopSetting                                   LoopSetting;                                                // 0x0048   (0x0001)  
	bool                                               bApplyAtomParameter;                                        // 0x0049   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x004A   (0x0002)  MISSED
	float                                              Duration;                                                   // 0x004C   (0x0004)  
	float                                              FirstWaveDuration;                                          // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	class USoundAttenuation*                           AttenuationSettings;                                        // 0x0058   (0x0008)  
	bool                                               bEnableAudioVolume;                                         // 0x0060   (0x0001)  
	bool                                               bIsMovable;                                                 // 0x0061   (0x0001)  
	bool                                               bCanStraddleAudioVolume;                                    // 0x0062   (0x0001)  
	bool                                               bUseDistanceToEnableAudioVolume;                            // 0x0063   (0x0001)  
	float                                              MinDistanceToEnableAudioVolume;                             // 0x0064   (0x0004)  
	bool                                               bUseAreaSoundVolume;                                        // 0x0068   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0069   (0x0003)  MISSED
	int32_t                                            UpdateRateForFrame;                                         // 0x006C   (0x0004)  
	class UAtom3dRegion*                               Region;                                                     // 0x0070   (0x0008)  
	bool                                               bIsEnableChangingAisacValueWithComponentVelocity;           // 0x0078   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	TArray<FAtomAisacControlWithVelocityParam>         AisacControlSettings;                                       // 0x0080   (0x0010)  
	bool                                               bEconomicTick;                                              // 0x0090   (0x0001)  
	bool                                               bOverrideEconomicTickSettings;                              // 0x0091   (0x0001)  
	unsigned char                                      UnknownData05_6[0x2];                                       // 0x0092   (0x0002)  MISSED
	float                                              EconomicTickDistanceMargin;                                 // 0x0094   (0x0004)  
	int32_t                                            EconomicTickFrequency;                                      // 0x0098   (0x0004)  
	bool                                               bEnableDistanceCulling;                                     // 0x009C   (0x0001)  
	bool                                               bOverrideCullSettings;                                      // 0x009D   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2];                                       // 0x009E   (0x0002)  MISSED
	float                                              CullDistanceMargin;                                         // 0x00A0   (0x0004)  
	float                                              EconomicTickMarginDistance;                                 // 0x00A4   (0x0004)  
	bool                                               bLoopSettingByAtomCraft;                                    // 0x00A8   (0x0001)  
	bool                                               bCullingSoundPlayingProcessByDistance;                      // 0x00A9   (0x0001)  
	bool                                               bUseLegacyCullingSettings;                                  // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData07_6[0x1];                                       // 0x00AB   (0x0001)  MISSED
	float                                              MaxProcessDistance;                                         // 0x00AC   (0x0004)  
	bool                                               bOverrideCullingSettings;                                   // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	float                                              CullingMarginDistance;                                      // 0x00B4   (0x0004)  
	bool                                               bLoop;                                                      // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData09_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
	class USoundAttenuation*                           DefaultAttenuation;                                         // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData10_7[0x10];                                      // 0x00C8   (0x0010)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.SoundAtomCue.Validate
	// bool Validate();                                                                                                         // [0x677dbe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.IsLooping
	// bool IsLooping();                                                                                                        // [0x677dbb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.IsEconomicTickEnabled
	// bool IsEconomicTickEnabled();                                                                                            // [0x677db80] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetMaxAttenuationDistanceToUse
	// float GetMaxAttenuationDistanceToUse();                                                                                  // [0x677db50] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetMaxAttenuationDistanceToApply
	// float GetMaxAttenuationDistanceToApply();                                                                                // [0x677db50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetEconomicTickMarginDistanceToUse
	// float GetEconomicTickMarginDistanceToUse();                                                                              // [0x677daf0] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetEconomicTickFrequencyToUse
	// float GetEconomicTickFrequencyToUse();                                                                                   // [0x677db20] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetEconomicTickFrequencyToApply
	// float GetEconomicTickFrequencyToApply();                                                                                 // [0x677db20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetEconomicTickDistanceMarginToApply
	// float GetEconomicTickDistanceMarginToApply();                                                                            // [0x677daf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetEconomicTickDistance
	// float GetEconomicTickDistance();                                                                                         // [0x677dac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetEconomicTickBoundaryDistanceToUse
	// float GetEconomicTickBoundaryDistanceToUse();                                                                            // [0x677dac0] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetCullingMarginDistanceToUse
	// float GetCullingMarginDistanceToUse();                                                                                   // [0x677da90] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetCullingBoundaryDistanceToUse
	// float GetCullingBoundaryDistanceToUse();                                                                                 // [0x677da60] Final|Native|Public|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetCullDistanceMarginToApply
	// float GetCullDistanceMarginToApply();                                                                                    // [0x677da90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.GetCullDistance
	// float GetCullDistance();                                                                                                 // [0x677da60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCue.BP_GetCueInfo
	// bool BP_GetCueInfo(FAtomCueInfo& CueInfo);                                                                               // [0x677d920] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CriWareRuntime.AtomAttenuationDistanceParam
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FAtomAttenuationDistanceParam
{ 
	float                                              MinDistance;                                                // 0x0000   (0x0004)  
	float                                              MaxDistance;                                                // 0x0004   (0x0004)  
};

/// Struct /Script/CriWareRuntime.AtomCueInfo
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FAtomCueInfo
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	bool                                               HeaderVisibility;                                           // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	FTimespan                                          Duration;                                                   // 0x0018   (0x0008)  
	FString                                            UserData;                                                   // 0x0020   (0x0010)  
	TArray<FString>                                    CategoryNames;                                              // 0x0030   (0x0010)  
	TArray<FString>                                    AisacControlNames;                                          // 0x0040   (0x0010)  
	FAtomAttenuationDistanceParam                      AttenuationDistance;                                        // 0x0050   (0x0008)  
	bool                                               bLooping : 1;                                               // 0x0058:0 (0x0001)  
	bool                                               bIsParameterPalletAssigned : 1;                             // 0x0058:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Class /Script/CriWareRuntime.SoundAtomCueSheet
/// Size: 0x0150 (336 bytes) (0x000028 - 0x000150) align 8 MaxSize: 0x0150
class USoundAtomCueSheet : public UObject
{ 
public:
	bool                                               Contains;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FString                                            AcbFilePath;                                                // 0x0030   (0x0010)  
	FString                                            CueSheetName;                                               // 0x0040   (0x0010)  
	int32_t                                            NumSlots;                                                   // 0x0050   (0x0004)  
	bool                                               bOverrideAwbDirectory;                                      // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	FDirectoryPath                                     AwbDirectory;                                               // 0x0058   (0x0010)  
	class UDataTable*                                  AdditionalData;                                             // 0x0068   (0x0008)  
	TArray<FAtomCueInfo>                               CueInfos;                                                   // 0x0070   (0x0010)  
	unsigned char                                      UnknownData02_6[0x48];                                      // 0x0080   (0x0048)  MISSED
	SDK_UNDEFINED(16,405) /* FMulticastInlineDelegate */ __um(OnLoadCompleted_BP);                                 // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData03_7[0x78];                                      // 0x00D8   (0x0078)  MISSED


	/// Functions
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.ReleaseAcb
	// void ReleaseAcb(FName AcbName);                                                                                          // [0x677f1e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.OnLoadCompleted_BP__DelegateSignature
	// void OnLoadCompleted_BP__DelegateSignature(class USoundAtomCueSheet* AtomCueSheet);                                      // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.LoadAtomCueSheet
	// class USoundAtomCueSheet* LoadAtomCueSheet(class USoundAtomCueSheet* CueSheet, bool bAddToLevel);                        // [0x677f110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.LoadAcb
	// class USoundAtomCueSheet* LoadAcb(FName AcbName, bool bAddToLevel);                                                      // [0x677f040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.IsRawAcbDataAvailable
	// bool IsRawAcbDataAvailable();                                                                                            // [0x677f010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.IsLoaded
	// bool IsLoaded();                                                                                                         // [0x677f010] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.GetNumCues
	// int32_t GetNumCues();                                                                                                    // [0x677efb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.GetAtomCueByName
	// class USoundAtomCue* GetAtomCueByName(FString CueName);                                                                  // [0x677eeb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.GetAtomCueByIndex
	// class USoundAtomCue* GetAtomCueByIndex(int32_t CueIndex);                                                                // [0x677ee10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.GetAtomCueById
	// class USoundAtomCue* GetAtomCueById(int32_t CueId);                                                                      // [0x677ed70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.DetachDspBusSetting
	// void DetachDspBusSetting();                                                                                              // [0x677ed50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.BP_GetCueInfoFromName
	// bool BP_GetCueInfoFromName(FString Name, FAtomCueInfo& CueInfo);                                                         // [0x677ec40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.BP_GetCueInfoFromIndex
	// bool BP_GetCueInfoFromIndex(int32_t Index, FAtomCueInfo& CueInfo);                                                       // [0x677eb30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.BP_GetCueInfoFromId
	// bool BP_GetCueInfoFromId(int32_t ID, FAtomCueInfo& CueInfo);                                                             // [0x677ea20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.AttachDspBusSetting
	// void AttachDspBusSetting(FString SettingName);                                                                           // [0x677e940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.AsyncLoadCueSheet
	// void AsyncLoadCueSheet();                                                                                                // [0x677e920] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareRuntime.SoundAtomCueSheet.ApplyDspBusSnapshot
	// void ApplyDspBusSnapshot(FString SnapshotName, int32_t Milliseconds);                                                    // [0x677e7f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/CriWareRuntime.AtomBeatSyncInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FAtomBeatSyncInfo
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/CriWareRuntime.AtomSequenceInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FAtomSequenceInfo
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/CriWareRuntime.BusSendLevelParam
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FBusSendLevelParam
{ 
	int32_t                                            BusId;                                                      // 0x0000   (0x0004)  
	float                                              Level;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/CriWareRuntime.BusSendLevelByNameParam
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FBusSendLevelByNameParam
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	float                                              Level;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/CriWareRuntime.BusSendLevelOffsetParam
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FBusSendLevelOffsetParam
{ 
	int32_t                                            BusId;                                                      // 0x0000   (0x0004)  
	float                                              LevelOffset;                                                // 0x0004   (0x0004)  
};

/// Struct /Script/CriWareRuntime.BusSendLevelOffsetByNameParam
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FBusSendLevelOffsetByNameParam
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	float                                              LevelOffset;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/CriWareRuntime.AtomAppliedValueParam
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FAtomAppliedValueParam
{ 
	float                                              PitchValue;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x0004   (0x0014)  MISSED
	FBusSendLevelParam                                 BusSendLevelParam;                                          // 0x0018   (0x0008)  
	TArray<FBusSendLevelByNameParam>                   BusSendLevelByNameParams;                                   // 0x0020   (0x0010)  
	FBusSendLevelOffsetParam                           BusSendLevelOffsetParam;                                    // 0x0030   (0x0008)  
	TArray<FBusSendLevelOffsetByNameParam>             BusSendLevelOffsetByNameParams;                             // 0x0038   (0x0010)  
	int32_t                                            BlockIndex;                                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FAtomSelectorParam                                 AtomSelectorParam;                                          // 0x0050   (0x0020)  
	TArray<int32_t>                                    AsrRackIDs;                                                 // 0x0070   (0x0010)  
};

/// Struct /Script/CriWareRuntime.CriWareErrorInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FCriWareErrorInfo
{ 
	FString                                            ErrorID;                                                    // 0x0000   (0x0010)  
	ECriWareErrorType                                  ErrorType;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FString                                            Message;                                                    // 0x0018   (0x0010)  
};

/// Struct /Script/CriWareRuntime.ManaPlayerTrackOptions
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FManaPlayerTrackOptions
{ 
	int32_t                                            Audio;                                                      // 0x0000   (0x0004)  
	int32_t                                            SubAudio;                                                   // 0x0004   (0x0004)  
	int32_t                                            ExtraAudio;                                                 // 0x0008   (0x0004)  
	int32_t                                            Subtitle;                                                   // 0x000C   (0x0004)  
	int32_t                                            Video;                                                      // 0x0010   (0x0004)  
	int32_t                                            Alpha;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/CriWareRuntime.ManaPlayerOptions
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FManaPlayerOptions
{ 
	FManaPlayerTrackOptions                            Tracks;                                                     // 0x0000   (0x0018)  
	FTimespan                                          SeekTime;                                                   // 0x0018   (0x0008)  
	EManaPlayerOptionBooleanOverride                   PlayOnOpen;                                                 // 0x0020   (0x0001)  
	EManaPlayerOptionBooleanOverride                   Loop;                                                       // 0x0021   (0x0001)  
	EManaPlaybackTimer                                 PlaybackTimer;                                              // 0x0022   (0x0001)  
	EManaMaxFrameDrop                                  MaxFrameDrop;                                               // 0x0023   (0x0001)  
	EManaFrameAction                                   EndFrameAction;                                             // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	class UAtomComponent*                              TimeSyncedSource;                                           // 0x0028   (0x0008)  
};

/// Struct /Script/CriWareRuntime.AtomAisacInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAtomAisacInfo
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	bool                                               DefaultControlFlag;                                         // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              DefaultControlValue;                                        // 0x0014   (0x0004)  
	int32_t                                            ControlId;                                                  // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            ControlName;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomStringWithComment
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAtomStringWithComment
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomSelectorSettingsParam
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAtomSelectorSettingsParam
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            DefaultSelectorLabel;                                       // 0x0010   (0x0010)  
	TArray<FAtomStringWithComment>                     Labels;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomAisacControlSettingsParam
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAtomAisacControlSettingsParam
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Name;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomGameVariableParam
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAtomGameVariableParam
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	float                                              Value;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/CriWareRuntime.AtomGlobalAisacSettingsParam
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAtomGlobalAisacSettingsParam
{ 
	FString                                            AisacControl;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomCategoryParam
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAtomCategoryParam
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	FString                                            Group;                                                      // 0x0018   (0x0010)  
	float                                              Volume;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/CriWareRuntime.AtomDspBusSettingsParam
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAtomDspBusSettingsParam
{ 
	FString                                            BusSettingsName;                                            // 0x0000   (0x0010)  
	TArray<FAtomStringWithComment>                     Snapshot;                                                   // 0x0010   (0x0010)  
	TArray<FAtomStringWithComment>                     Bus;                                                        // 0x0020   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomConfigDataTable
/// Size: 0x00B8 (184 bytes) (0x000008 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FAtomConfigDataTable : FTableRowBase
{ 
	FString                                            BuildDate;                                                  // 0x0008   (0x0010)  
	int32_t                                            NumCategoriesPerPlayback;                                   // 0x0018   (0x0004)  
	int32_t                                            NumCategories;                                              // 0x001C   (0x0004)  
	int32_t                                            NumAisacControls;                                           // 0x0020   (0x0004)  
	int32_t                                            NumGlobalAisacs;                                            // 0x0024   (0x0004)  
	int32_t                                            NumVoiceLimitGroups;                                        // 0x0028   (0x0004)  
	int32_t                                            NumDspBusSettings;                                          // 0x002C   (0x0004)  
	int32_t                                            NumDspBusSettingSnapshots;                                  // 0x0030   (0x0004)  
	int32_t                                            NumDspBus;                                                  // 0x0034   (0x0004)  
	int32_t                                            NumGameVariables;                                           // 0x0038   (0x0004)  
	int32_t                                            NumSelectors;                                               // 0x003C   (0x0004)  
	int32_t                                            NumReacts;                                                  // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FAtomSelectorSettingsParam>                 Selector;                                                   // 0x0048   (0x0010)  
	TArray<FAtomAisacControlSettingsParam>             AisacControl;                                               // 0x0058   (0x0010)  
	TArray<FAtomGameVariableParam>                     GameVariable;                                               // 0x0068   (0x0010)  
	TArray<FAtomGlobalAisacSettingsParam>              GlobalAisac;                                                // 0x0078   (0x0010)  
	TArray<FAtomCategoryParam>                         Category;                                                   // 0x0088   (0x0010)  
	TArray<FAtomDspBusSettingsParam>                   DspBusSettings;                                             // 0x0098   (0x0010)  
	TArray<FAtomStringWithComment>                     React;                                                      // 0x00A8   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AcfDataTable
/// Size: 0x00B8 (184 bytes) (0x0000B8 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FAcfDataTable : FAtomConfigDataTable
{ 
};

/// Struct /Script/CriWareRuntime.AtomCueInfoCategoryParam
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAtomCueInfoCategoryParam
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomCueInfoSelectorParam
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FAtomCueInfoSelectorParam
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Label;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomCueInfoTrackParam
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FAtomCueInfoTrackParam
{ 
	float                                              Volume;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	FAtomCueInfoSelectorParam                          Selector;                                                   // 0x0018   (0x0020)  
};

/// Struct /Script/CriWareRuntime.AtomCueInfoBusSendParam
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAtomCueInfoBusSendParam
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	bool                                               Enable;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Level;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/CriWareRuntime.AtomCueInfoBlocksParam
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAtomCueInfoBlocksParam
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	int32_t                                            StartPosition;                                              // 0x0010   (0x0004)  
	int32_t                                            Length;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/CriWareRuntime.AtomCueInfoAttachedSelectorParam
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAtomCueInfoAttachedSelectorParam
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomCueInfoAttachedAisacControlParam
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAtomCueInfoAttachedAisacControlParam
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	int32_t                                            ID;                                                         // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/CriWareRuntime.AtomOutputPortDataTable
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FAtomOutputPortDataTable : FTableRowBase
{ 
	FString                                            OutputPortName;                                             // 0x0008   (0x0010)  
	int32_t                                            AsrRackID;                                                  // 0x0018   (0x0004)  
	ESpeakerType                                       SpeakerType;                                                // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/CriWareRuntime.AtomCueInfoDataTable
/// Size: 0x0100 (256 bytes) (0x000008 - 0x000100) align 8 MaxSize: 0x0100
struct FAtomCueInfoDataTable : FTableRowBase
{ 
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	int32_t                                            CueId;                                                      // 0x0018   (0x0004)  
	int32_t                                            CueTypeIndex;                                               // 0x001C   (0x0004)  
	FString                                            CueType;                                                    // 0x0020   (0x0010)  
	FAtomCueInfoSelectorParam                          DefaultSelectorLabel;                                       // 0x0030   (0x0020)  
	float                                              Volume;                                                     // 0x0050   (0x0004)  
	bool                                               Public;                                                     // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	int32_t                                            CategoryCuePriority;                                        // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FString                                            CategoryCuePriorityType;                                    // 0x0060   (0x0010)  
	int32_t                                            CategoryCuePriorityTypeIndex;                               // 0x0070   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FString                                            CuePriorityType;                                            // 0x0078   (0x0010)  
	int32_t                                            CuePriorityTypeIndex;                                       // 0x0088   (0x0004)  
	bool                                               EnableCueLimit;                                             // 0x008C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x008D   (0x0003)  MISSED
	int32_t                                            NumCueLimits;                                               // 0x0090   (0x0004)  
	int32_t                                            Probability;                                                // 0x0094   (0x0004)  
	int32_t                                            Length;                                                     // 0x0098   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	TArray<FAtomCueInfoCategoryParam>                  Category;                                                   // 0x00A0   (0x0010)  
	TArray<FAtomCueInfoTrackParam>                     Track;                                                      // 0x00B0   (0x0010)  
	TArray<FAtomCueInfoBusSendParam>                   BusSend;                                                    // 0x00C0   (0x0010)  
	TArray<FAtomCueInfoBlocksParam>                    Blocks;                                                     // 0x00D0   (0x0010)  
	TArray<FAtomCueInfoAttachedSelectorParam>          AttachedSelector;                                           // 0x00E0   (0x0010)  
	TArray<FAtomCueInfoAttachedAisacControlParam>      AttachedAisacControl;                                       // 0x00F0   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomCueSheetDataTable
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FAtomCueSheetDataTable : FTableRowBase
{ 
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	FString                                            BuildDate;                                                  // 0x0018   (0x0010)  
	FString                                            WorkUnit;                                                   // 0x0028   (0x0010)  
	float                                              Volume;                                                     // 0x0038   (0x0004)  
	bool                                               EnableCueLimit;                                             // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	int32_t                                            NumCueLimits;                                               // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            PriorityType;                                               // 0x0048   (0x0010)  
	int32_t                                            PriorityTypeIndex;                                          // 0x0058   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<FAtomCueInfoDataTable>                      Cue;                                                        // 0x0060   (0x0010)  
};

/// Struct /Script/CriWareRuntime.AtomListenerFocusPointInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FAtomListenerFocusPointInfo
{ 
	TWeakObjectPtr<class AActor*>                      TargetActor;                                                // 0x0000   (0x0008)  
	TWeakObjectPtr<class USceneComponent*>             TargetComponent;                                            // 0x0008   (0x0008)  
	float                                              DistanceLevel;                                              // 0x0010   (0x0004)  
	float                                              DirectionLevel;                                             // 0x0014   (0x0004)  
};

/// Struct /Script/CriWareRuntime.AtomProfileItem
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FAtomProfileItem
{ 
	int32_t                                            AtomComponentID;                                            // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            AtomCueName;                                                // 0x0008   (0x0010)  
	FVector                                            AtomComponentLocation;                                      // 0x0018   (0x0018)  
	float                                              DistanceFromListener;                                       // 0x0030   (0x0004)  
	float                                              PlayingTime;                                                // 0x0034   (0x0004)  
	int64_t                                            PlayedNumSamples;                                           // 0x0038   (0x0008)  
	FString                                            PlayerState;                                                // 0x0040   (0x0010)  
	int32_t                                            NumSounds;                                                  // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FString                                            ConcurrencyName;                                            // 0x0058   (0x0010)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x0068   (0x0020)  MISSED
};

/// Struct /Script/CriWareRuntime.AtomSoundManager
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FAtomSoundManager
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/CriWareRuntime.AtomComponentParams
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FAtomComponentParams
{ 
	float                                              DefaultVolume;                                              // 0x0000   (0x0004)  
	float                                              DefaultPitchMultiplier;                                     // 0x0004   (0x0004)  
	float                                              StartTime;                                                  // 0x0008   (0x0004)  
	bool                                               bEnableMultipleSoundPlayback : 1;                           // 0x000C:0 (0x0001)  
	bool                                               bUsePlaylist : 1;                                           // 0x000C:1 (0x0001)  
	bool                                               bIsMovable;                                                 // 0x000D   (0x0001)  
	bool                                               bCanStraddleAudioVolume;                                    // 0x000E   (0x0001)  
	bool                                               bUseAudioVolume;                                            // 0x000F   (0x0001)  
	bool                                               bUseAreaSoundVolume;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	class UAtomSoundObject*                            SoundObject;                                                // 0x0018   (0x0008)  
	class USoundAttenuation*                           AttenuationSettings;                                        // 0x0020   (0x0008)  
	int32_t                                            DefaultBlockIndex;                                          // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FAtomAisacControlParam>                     DefaultAisacControl;                                        // 0x0030   (0x0010)  
	TArray<FAtomSelectorParam>                         DefaultSelectorLabel;                                       // 0x0040   (0x0010)  
	EAtomLoopSetting                                   LoopSetting;                                                // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	FRotator                                           Rotation;                                                   // 0x0058   (0x0018)  
};

/// Struct /Script/CriWareRuntime.AtomTriggerRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FAtomTriggerRow : FTableRowBase
{ 
	float                                              Time;                                                       // 0x0008   (0x0004)  
	FName                                              bone;                                                       // 0x000C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class USoundAtomCue*                               Cue;                                                        // 0x0018   (0x0008)  
};

/// Struct /Script/CriWareRuntime.ManaPlayerFacade
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FManaPlayerFacade
{ 
	class UManaComponent*                              ManaComponent;                                              // 0x0000   (0x0008)  
};

/// Struct /Script/CriWareRuntime.AtomCategoryInfoParam
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FAtomCategoryInfoParam
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	int32_t                                            category_id;                                                // 0x0010   (0x0004)  
	int32_t                                            group_no;                                                   // 0x0014   (0x0004)  
	float                                              Volume;                                                     // 0x0018   (0x0004)  
	bool                                               IsPaused;                                                   // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x001D   (0x0003)  MISSED
};

#pragma pack(pop)


