
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

#pragma pack(push, 0x1)

/// Enum /Script/TemplateSequence.ETemplateSectionPropertyScaleType
/// Size: 0x04 (4 bytes)
enum class ETemplateSectionPropertyScaleType : uint32_t
{
	ETemplateSectionPropertyScaleType__FloatProperty                                 = 0,
	ETemplateSectionPropertyScaleType__TransformPropertyLocationOnly                 = 1,
	ETemplateSectionPropertyScaleType__TransformPropertyRotationOnly                 = 2
};

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x00E8 (232 bytes) (0x000068 - 0x0000E8) align 8 MaxSize: 0x00E8
class UTemplateSequence : public UMovieSceneSequence
{ 
public:
	class UMovieScene*                                 MovieScene;                                                 // 0x0068   (0x0008)  
	TSoftObjectPtr<class UClass*>                      BoundActorClass;                                            // 0x0070   (0x0028)  
	TMap<FGuid, FName>                                 BoundActorComponents;                                       // 0x0098   (0x0050)  
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x00E8 (232 bytes) (0x0000E8 - 0x0000E8) align 8 MaxSize: 0x00E8
class UCameraAnimationSequence : public UTemplateSequence
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationSequenceCameraStandIn
/// Size: 0x0840 (2112 bytes) (0x000028 - 0x000840) align 16 MaxSize: 0x0840
class UCameraAnimationSequenceCameraStandIn : public UObject
{ 
public:
	float                                              FieldOfView;                                                // 0x0028   (0x0004)  
	bool                                               bConstrainAspectRatio : 1;                                  // 0x002C:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	float                                              AspectRatio;                                                // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0034   (0x000C)  MISSED
	FPostProcessSettings                               PostProcessSettings;                                        // 0x0040   (0x06F0)  
	float                                              PostProcessBlendWeight;                                     // 0x0730   (0x0004)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x0734   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x0740   (0x001C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x075C   (0x0004)  MISSED
	FCameraFocusSettings                               FocusSettings;                                              // 0x0760   (0x0060)  
	float                                              currentFocalLength;                                         // 0x07C0   (0x0004)  
	float                                              currentAperture;                                            // 0x07C4   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x07C8   (0x0004)  
	unsigned char                                      UnknownData03_7[0x74];                                      // 0x07CC   (0x0074)  MISSED
};

/// Class /Script/TemplateSequence.CameraAnimationSequencePlayer
/// Size: 0x0328 (808 bytes) (0x000028 - 0x000328) align 8 MaxSize: 0x0328
class UCameraAnimationSequencePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x260];                                     // 0x0028   (0x0260)  MISSED
	class UObject*                                     BoundObjectOverride;                                        // 0x0288   (0x0008)  
	class UMovieSceneSequence*                         Sequence;                                                   // 0x0290   (0x0008)  
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x0298   (0x0020)  
	unsigned char                                      UnknownData01_7[0x70];                                      // 0x02B8   (0x0070)  MISSED
};

/// Class /Script/TemplateSequence.CameraAnimationSpawnableSystem
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UCameraAnimationSpawnableSystem : public UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationBoundObjectInstantiator
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UCameraAnimationBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationEntitySystemLinker
/// Size: 0x0750 (1872 bytes) (0x000750 - 0x000750) align 8 MaxSize: 0x0750
class UCameraAnimationEntitySystemLinker : public UMovieSceneEntitySystemLinker
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationSequenceSubsystem
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UCameraAnimationSequenceSubsystem : public UWorldSubsystem
{ 
public:
	class UMovieSceneEntitySystemLinker*               Linker;                                                     // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Struct /Script/TemplateSequence.TemplateSectionPropertyScale
/// Size: 0x0138 (312 bytes) (0x000000 - 0x000138) align 8 MaxSize: 0x0138
struct FTemplateSectionPropertyScale
{ 
	FGuid                                              ObjectBinding;                                              // 0x0000   (0x0010)  
	FMovieScenePropertyBinding                         PropertyBinding;                                            // 0x0010   (0x0014)  
	ETemplateSectionPropertyScaleType                  PropertyScaleType;                                          // 0x0024   (0x0004)  
	FMovieSceneFloatChannel                            FloatChannel;                                               // 0x0028   (0x0110)  
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0148 (328 bytes) (0x000138 - 0x000148) align 8 MaxSize: 0x0148
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
public:
	TArray<FTemplateSectionPropertyScale>              PropertyScales;                                             // 0x0138   (0x0010)  
};

/// Class /Script/TemplateSequence.SequenceCameraShakePattern
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class USequenceCameraShakePattern : public UCameraShakePattern
{ 
public:
	class UCameraAnimationSequence*                    Sequence;                                                   // 0x0028   (0x0008)  
	float                                              PlayRate;                                                   // 0x0030   (0x0004)  
	float                                              Scale;                                                      // 0x0034   (0x0004)  
	float                                              BlendInTime;                                                // 0x0038   (0x0004)  
	float                                              BlendOutTime;                                               // 0x003C   (0x0004)  
	float                                              RandomSegmentDuration;                                      // 0x0040   (0x0004)  
	bool                                               bRandomSegment;                                             // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	class UCameraAnimationSequencePlayer*              Player;                                                     // 0x0048   (0x0008)  
	class UCameraAnimationSequenceCameraStandIn*       CameraStandIn;                                              // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0058   (0x0020)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceSystem
/// Size: 0x00B0 (176 bytes) (0x000040 - 0x0000B0) align 8 MaxSize: 0x00B0
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0040   (0x0070)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
/// Size: 0x0098 (152 bytes) (0x000040 - 0x000098) align 8 MaxSize: 0x0098
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0040   (0x0058)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
/// Size: 0x0090 (144 bytes) (0x000040 - 0x000090) align 8 MaxSize: 0x0090
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0040   (0x0050)  MISSED
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FTemplateSequenceBindingOverrideData
{ 
	TWeakObjectPtr<class UObject*>                     Object;                                                     // 0x0000   (0x0008)  
	bool                                               bOverridesDefault;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x02F8 (760 bytes) (0x000290 - 0x0002F8) align 8 MaxSize: 0x02F8
class ATemplateSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0290   (0x0008)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x0298   (0x0028)  
	class UTemplateSequencePlayer*                     SequencePlayer;                                             // 0x02C0   (0x0008)  
	FSoftObjectPath                                    TemplateSequence;                                           // 0x02C8   (0x0020)  
	FTemplateSequenceBindingOverrideData               BindingOverride;                                            // 0x02E8   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x02F4   (0x0004)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence
	// void SetSequence(class UTemplateSequence* InSequence);                                                                   // [0x65dbec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding
	// void SetBinding(class AActor* Actor, bool bOverridesDefault);                                                            // [0x65dbd00] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence
	// class UTemplateSequence* LoadSequence();                                                                                 // [0x65dbc80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	// class UTemplateSequencePlayer* GetSequencePlayer();                                                                      // [0x65dbc10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence
	// class UTemplateSequence* GetSequence();                                                                                  // [0x65dbb90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TemplateSequence.TemplateSequencePlayer
/// Size: 0x0468 (1128 bytes) (0x000460 - 0x000468) align 8 MaxSize: 0x0468
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0460   (0x0008)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
	// class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, class ATemplateSequenceActor*& OutActor); // [0x65db3d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TemplateSequence.SequenceCameraShakeTestUtil
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache
	// bool GetPostProcessBlendCache(class APlayerController* PlayerController, int32_t PPIndex, FPostProcessSettings& OutPPSettings, float& OutPPBlendWeight); // [0x65db990] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV
	// FMinimalViewInfo GetLastFrameCameraCachePOV(class APlayerController* PlayerController);                                  // [0x65db890] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV
	// FMinimalViewInfo GetCameraCachePOV(class APlayerController* PlayerController);                                           // [0x65db790] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x00A8 (168 bytes) (0x0000A8 - 0x0000A8) align 8 MaxSize: 0x00A8
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{ 
public:
};

#pragma pack(pop)


