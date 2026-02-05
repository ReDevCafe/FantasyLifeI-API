
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
/// dependency: MovieSceneTracks

#pragma pack(push, 0x1)

/// Class /Script/CriWareMovieScenes.MovieSceneAtomSection
/// Size: 0x0498 (1176 bytes) (0x0000F0 - 0x000498) align 8 MaxSize: 0x0498
class UMovieSceneAtomSection : public UMovieSceneSection
{ 
public:
	class USoundAtomCue*                               sound;                                                      // 0x00F0   (0x0008)  
	FFrameNumber                                       StartFrameOffset;                                           // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FMovieSceneFloatChannel                            SoundVolume;                                                // 0x0100   (0x0110)  
	FMovieSceneFloatChannel                            PitchMultiplier;                                            // 0x0210   (0x0110)  
	FMovieSceneActorReferenceData                      AttachActorData;                                            // 0x0320   (0x0120)  
	TArray<FScalarParameterNameAndCurve>               ScalarParameterNamesAndCurves;                              // 0x0440   (0x0010)  
	bool                                               bSuppressSubtitles;                                         // 0x0450   (0x0001)  
	bool                                               bOverrideAttenuation;                                       // 0x0451   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0452   (0x0006)  MISSED
	class USoundAttenuation*                           AttenuationSettings;                                        // 0x0458   (0x0008)  
	bool                                               bContinueSoundWhenSequenceIsEnd;                            // 0x0460   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0461   (0x0007)  MISSED
	TArray<int32_t>                                    AsrRackIDs;                                                 // 0x0468   (0x0010)  
	TArray<FAtomSelectorParam>                         SelectorLabels;                                             // 0x0478   (0x0010)  
	bool                                               bLooping;                                                   // 0x0488   (0x0001)  
	unsigned char                                      UnknownData03_7[0xF];                                       // 0x0489   (0x000F)  MISSED


	/// Functions
	// Function /Script/CriWareMovieScenes.MovieSceneAtomSection.SetStartOffset
	// void SetStartOffset(FFrameNumber InStartOffset);                                                                         // [0x67a3fd0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CriWareMovieScenes.MovieSceneAtomSection.IsLooping
	// bool IsLooping();                                                                                                        // [0x85e5e30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CriWareMovieScenes.MovieSceneAtomSection.GetStartOffset
	// FFrameNumber GetStartOffset();                                                                                           // [0x67a3fb0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CriWareMovieScenes.MovieSceneAtomTrack
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieSceneAtomTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  AtomSections;                                               // 0x00A0   (0x0010)  
};

/// Class /Script/CriWareMovieScenes.MovieSceneManaSection
/// Size: 0x0120 (288 bytes) (0x0000F0 - 0x000120) align 8 MaxSize: 0x0120
class UMovieSceneManaSection : public UMovieSceneSection
{ 
public:
	class UManaSource*                                 ManaSource;                                                 // 0x00F0   (0x0008)  
	bool                                               bLooping;                                                   // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F9   (0x0003)  MISSED
	FFrameNumber                                       StartFrameOffset;                                           // 0x00FC   (0x0004)  
	class UManaTexture*                                ManaTexture;                                                // 0x0100   (0x0008)  
	class UAtomComponent*                              AtomComponent;                                              // 0x0108   (0x0008)  
	bool                                               bUseExternalManaPlayer;                                     // 0x0110   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0111   (0x0007)  MISSED
	class UManaPlayer*                                 ExternalManaPlayer;                                         // 0x0118   (0x0008)  
};

/// Class /Script/CriWareMovieScenes.MovieSceneManaTrack
/// Size: 0x00D8 (216 bytes) (0x000098 - 0x0000D8) align 8 MaxSize: 0x00D8
class UMovieSceneManaTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  ManaSections;                                               // 0x00A0   (0x0010)  
	TWeakObjectPtr<class UMovieSceneAtomTrack*>        SyncedAtomTrack;                                            // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x00B8   (0x0020)  MISSED
};

/// Struct /Script/CriWareMovieScenes.MovieSceneAtomSectionTemplate
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FMovieSceneAtomSectionTemplate : FMovieSceneEvalTemplate
{ 
	class UMovieSceneAtomSection*                      AtomSection;                                                // 0x0020   (0x0008)  
};

/// Struct /Script/CriWareMovieScenes.MovieSceneManaSectionParams
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMovieSceneManaSectionParams
{ 
	class UAtomComponent*                              AtomComponent;                                              // 0x0000   (0x0008)  
	class UManaSource*                                 ManaSource;                                                 // 0x0008   (0x0008)  
	class UManaTexture*                                ManaTexture;                                                // 0x0010   (0x0008)  
	class UManaPlayer*                                 ManaPlayer;                                                 // 0x0018   (0x0008)  
	FFrameNumber                                       SectionStartFrame;                                          // 0x0020   (0x0004)  
	FFrameNumber                                       SectionEndFrame;                                            // 0x0024   (0x0004)  
	bool                                               bLooping;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	FFrameNumber                                       StartFrameOffset;                                           // 0x002C   (0x0004)  
};

/// Struct /Script/CriWareMovieScenes.MovieSceneManaSectionTemplate
/// Size: 0x0058 (88 bytes) (0x000020 - 0x000058) align 8 MaxSize: 0x0058
struct FMovieSceneManaSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneManaSectionParams                       Params;                                                     // 0x0020   (0x0030)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0050   (0x0008)  MISSED
};

#pragma pack(pop)


