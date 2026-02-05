
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: CriWareRuntime
/// dependency: Engine
/// dependency: MovieScene

#pragma pack(push, 0x1)

/// Enum /Script/CriWareAdxLipSync.ELipsAnalyzerDataReadoutMode
/// Size: 0x01 (1 bytes)
enum class ELipsAnalyzerDataReadoutMode : uint8_t
{
	ELipsAnalyzerDataReadoutMode__ProcessIfNoData                                    = 0,
	ELipsAnalyzerDataReadoutMode__SilentIfNoData                                     = 1,
	ELipsAnalyzerDataReadoutMode__ProcessAlways                                      = 2,
	ELipsAnalyzerDataReadoutMode__ProcessWhileReading                                = 3
};

/// Enum /Script/CriWareAdxLipSync.ELipsAtomAnalyzerProcessStatus
/// Size: 0x01 (1 bytes)
enum class ELipsAtomAnalyzerProcessStatus : uint8_t
{
	ELipsAtomAnalyzerProcessStatus__Stop                                             = 0,
	ELipsAtomAnalyzerProcessStatus__ProcessingPlayback                               = 1,
	ELipsAtomAnalyzerProcessStatus__ProcessingSilence                                = 2
};

/// Enum /Script/CriWareAdxLipSync.ELipsAtomAnalyzerReadoutStatus
/// Size: 0x01 (1 bytes)
enum class ELipsAtomAnalyzerReadoutStatus : uint8_t
{
	ELipsAtomAnalyzerReadoutStatus__Stop                                             = 0,
	ELipsAtomAnalyzerReadoutStatus__Reading                                          = 1,
	ELipsAtomAnalyzerReadoutStatus__TransitioningToShut                              = 2
};

/// Class /Script/CriWareAdxLipSync.LipsAnalyzerBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULipsAnalyzerBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/CriWareAdxLipSync.LipsAnalyzerBase.SetSilenceThreshold
	// void SetSilenceThreshold(float VolumeDb);                                                                                // [0x67a3480] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareAdxLipSync.LipsAnalyzerBase.SetSamplingRate
	// void SetSamplingRate(int32_t SamplingRateHz);                                                                            // [0x67a33f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareAdxLipSync.LipsAnalyzerBase.IsAtSilence
	// bool IsAtSilence();                                                                                                      // [0x67a33c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareAdxLipSync.LipsAnalyzerBase.Init
	// void Init(int32_t MaxInputSamplingRate, ELipsAnalyzerDataReadoutMode dataReadoutMode);                                   // [0x67a32f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareAdxLipSync.LipsAnalyzerBase.GetVolume
	// float GetVolume();                                                                                                       // [0x67a32b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareAdxLipSync.LipsAnalyzerBase.GetSilenceThreshold
	// float GetSilenceThreshold();                                                                                             // [0x67a3270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareAdxLipSync.LipsAnalyzerBase.GetMorphTargetBlendAmountAsJapanese
	// FCriLipsMorphTargetBlendAmountAsJapanese GetMorphTargetBlendAmountAsJapanese();                                          // [0x67a3210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareAdxLipSync.LipsAnalyzerBase.GetInfoAtSilence
	// FCriLipsMouthInfo GetInfoAtSilence();                                                                                    // [0x67a31b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareAdxLipSync.LipsAnalyzerBase.GetInfo
	// FCriLipsMouthInfo GetInfo();                                                                                             // [0x67a3150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CriWareAdxLipSync.LipsAtomAnalyzer
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class ULipsAtomAnalyzer : public ULipsAnalyzerBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UAtomComponent*                              AtomComponent;                                              // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/CriWareAdxLipSync.LipsAtomAnalyzer.SetReadoutOffset
	// void SetReadoutOffset(int64_t offsetMs);                                                                                 // [0x67a3a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareAdxLipSync.LipsAtomAnalyzer.IsAttached
	// bool IsAttached();                                                                                                       // [0x67a39d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareAdxLipSync.LipsAtomAnalyzer.GetReadoutStatus
	// ELipsAtomAnalyzerReadoutStatus GetReadoutStatus();                                                                       // [0x67a39a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareAdxLipSync.LipsAtomAnalyzer.GetProcessStatus
	// ELipsAtomAnalyzerProcessStatus GetProcessStatus();                                                                       // [0x67a3970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareAdxLipSync.LipsAtomAnalyzer.Detach
	// void Detach();                                                                                                           // [0x67a3950] Final|Native|Public|BlueprintCallable 
	// Function /Script/CriWareAdxLipSync.LipsAtomAnalyzer.Attach
	// void Attach(class UAtomComponent* InAtomComponent);                                                                      // [0x67a38c0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/CriWareAdxLipSync.AtomLipSyncSectionParameter
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 MaxSize: 0x0038
struct FAtomLipSyncSectionParameter
{ 
	int32_t                                            MaxInputSamplingRate;                                       // 0x0000   (0x0004)  
	bool                                               bIsUseMorphTargetBlendAmountAsJapanese;                     // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	FName                                              LipSync_MorphTargetName_A;                                  // 0x0008   (0x0008)  
	FName                                              LipSync_MorphTargetName_I;                                  // 0x0010   (0x0008)  
	FName                                              LipSync_MorphTargetName_U;                                  // 0x0018   (0x0008)  
	FName                                              LipSync_MorphTargetName_E;                                  // 0x0020   (0x0008)  
	FName                                              LipSync_MorphTargetName_O;                                  // 0x0028   (0x0008)  
	FName                                              SocketNameForAttachingSound;                                // 0x0030   (0x0008)  
};

/// Class /Script/CriWareAdxLipSync.AtomLipSyncSectionParameterSettings
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UAtomLipSyncSectionParameterSettings : public UObject
{ 
public:
	FAtomLipSyncSectionParameter                       AtomLipSyncSectionParameter;                                // 0x0028   (0x0038)  
};

/// Class /Script/CriWareAdxLipSync.MovieSceneLipSyncAtomSection
/// Size: 0x0748 (1864 bytes) (0x0000F0 - 0x000748) align 8 MaxSize: 0x0748
class UMovieSceneLipSyncAtomSection : public UMovieSceneSection
{ 
public:
	class USoundAtomCue*                               sound;                                                      // 0x00F0   (0x0008)  
	FFrameNumber                                       StartFrameOffset;                                           // 0x00F8   (0x0004)  
	bool                                               bOverrideAtomLipSyncSectionParameterSettings;               // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00FD   (0x0003)  MISSED
	class UAtomLipSyncSectionParameterSettings*        AtomLipSyncSectionParameterSettings;                        // 0x0100   (0x0008)  
	FAtomLipSyncSectionParameter                       AtomLipSyncSectionParameterOverrides;                       // 0x0108   (0x0038)  
	FMovieSceneFloatChannel                            SoundVolume;                                                // 0x0140   (0x0110)  
	FMovieSceneFloatChannel                            PitchMultiplier;                                            // 0x0250   (0x0110)  
	bool                                               bOverrideAttenuation;                                       // 0x0360   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0361   (0x0007)  MISSED
	class USoundAttenuation*                           AttenuationSettings;                                        // 0x0368   (0x0008)  
	FSoundAttenuationSettings                          AttenuationOverrides;                                       // 0x0370   (0x03D0)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0740   (0x0008)  MISSED


	/// Functions
	// Function /Script/CriWareAdxLipSync.MovieSceneLipSyncAtomSection.SetStartOffset
	// void SetStartOffset(FFrameNumber InStartOffset);                                                                         // [0x67a3fd0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareAdxLipSync.MovieSceneLipSyncAtomSection.GetStartOffset
	// FFrameNumber GetStartOffset();                                                                                           // [0x67a3fb0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CriWareAdxLipSync.MovieSceneLipSyncAtomTrack
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieSceneLipSyncAtomTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  AtomSections;                                               // 0x00A0   (0x0010)  
};

/// Struct /Script/CriWareAdxLipSync.CriLipsMouthInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FCriLipsMouthInfo
{ 
	float                                              LipWidth;                                                   // 0x0000   (0x0004)  
	float                                              LipHeight;                                                  // 0x0004   (0x0004)  
	float                                              TonguePosition;                                             // 0x0008   (0x0004)  
	bool                                               IsLipWidthReleased;                                         // 0x000C   (0x0001)  
	bool                                               IsLipHeightReleased;                                        // 0x000D   (0x0001)  
	bool                                               IsTonguePositionReleased;                                   // 0x000E   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x000F   (0x0001)  MISSED
};

/// Struct /Script/CriWareAdxLipSync.CriLipsMorphTargetBlendAmountAsJapanese
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FCriLipsMorphTargetBlendAmountAsJapanese
{ 
	float                                              A;                                                          // 0x0000   (0x0004)  
	float                                              I;                                                          // 0x0004   (0x0004)  
	float                                              U;                                                          // 0x0008   (0x0004)  
	float                                              E;                                                          // 0x000C   (0x0004)  
	float                                              O;                                                          // 0x0010   (0x0004)  
};

/// Struct /Script/CriWareAdxLipSync.MovieSceneLipSyncAtomSectionTemplate
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FMovieSceneLipSyncAtomSectionTemplate : FMovieSceneEvalTemplate
{ 
	class UMovieSceneLipSyncAtomSection*               AtomSection;                                                // 0x0020   (0x0008)  
};

#pragma pack(pop)


