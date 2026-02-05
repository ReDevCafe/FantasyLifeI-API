
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene
/// dependency: MovieSceneTracks

#pragma pack(push, 0x1)

/// Enum /Script/ChaosCaching.ECacheMode
/// Size: 0x01 (1 bytes)
enum class ECacheMode : uint8_t
{
	ECacheMode__None                                                                 = 0,
	ECacheMode__Play                                                                 = 1,
	ECacheMode__Record                                                               = 2
};

/// Enum /Script/ChaosCaching.EStartMode
/// Size: 0x01 (1 bytes)
enum class EStartMode : uint8_t
{
	EStartMode__Timed                                                                = 0,
	EStartMode__Triggered                                                            = 1
};

/// Class /Script/ChaosCaching.ChaosCacheCollection
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UChaosCacheCollection : public UObject
{ 
public:
	TArray<class UChaosCache*>                         Caches;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/ChaosCaching.ObservedComponent
/// Size: 0x0180 (384 bytes) (0x000000 - 0x000180) align 16 MaxSize: 0x0180
struct FObservedComponent
{ 
	FName                                              CacheName;                                                  // 0x0000   (0x0008)  
	FComponentReference                                ComponentRef;                                               // 0x0008   (0x0028)  
	FSoftComponentReference                            SoftComponentRef;                                           // 0x0030   (0x0048)  
	bool                                               bIsSimulating;                                              // 0x0078   (0x0001)  
	bool                                               bPlaybackEnabled;                                           // 0x0079   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x007A   (0x0006)  MISSED
	FDirectoryPath                                     USDCacheDirectory;                                          // 0x0080   (0x0010)  
	unsigned char                                      UnknownData01_7[0xF0];                                      // 0x0090   (0x00F0)  MISSED
};

/// Class /Script/ChaosCaching.ChaosCacheManager
/// Size: 0x0340 (832 bytes) (0x000290 - 0x000340) align 8 MaxSize: 0x0340
class AChaosCacheManager : public AActor
{ 
public:
	class UChaosCacheCollection*                       CacheCollection;                                            // 0x0290   (0x0008)  
	ECacheMode                                         CacheMode;                                                  // 0x0298   (0x0001)  
	EStartMode                                         StartMode;                                                  // 0x0299   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x029A   (0x0002)  MISSED
	float                                              StartTime;                                                  // 0x029C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02A0   (0x0008)  MISSED
	TArray<FObservedComponent>                         ObservedComponents;                                         // 0x02A8   (0x0010)  
	unsigned char                                      UnknownData02_7[0x88];                                      // 0x02B8   (0x0088)  MISSED


	/// Functions
	// Function /Script/ChaosCaching.ChaosCacheManager.TriggerComponentByCache
	// void TriggerComponentByCache(FName InCacheName);                                                                         // [0x8698c80] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/ChaosCaching.ChaosCacheManager.TriggerComponent
	// void TriggerComponent(class UPrimitiveComponent* InComponent);                                                           // [0x8698b60] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/ChaosCaching.ChaosCacheManager.TriggerAll
	// void TriggerAll();                                                                                                       // [0x8698a90] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/ChaosCaching.ChaosCacheManager.SetStartTime
	// void SetStartTime(float InStartTime);                                                                                    // [0x8698a00] Final|RequiredAPI|Native|Public 
	// Function /Script/ChaosCaching.ChaosCacheManager.SetCurrentTime
	// void SetCurrentTime(float CurrentTime);                                                                                  // [0x8698a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCaching.ChaosCacheManager.SetCacheCollection
	// void SetCacheCollection(class UChaosCacheCollection* InCacheCollection);                                                 // [0x8698930] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/ChaosCaching.ChaosCacheManager.ResetSingleTransform
	// void ResetSingleTransform(int32_t InIndex);                                                                              // [0x8698830] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCaching.ChaosCacheManager.ResetAllComponentTransforms
	// void ResetAllComponentTransforms();                                                                                      // [0x86986e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCaching.ChaosCacheManager.EnablePlaybackByCache
	// void EnablePlaybackByCache(FName InCacheName, bool bEnable);                                                             // [0x86985d0] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/ChaosCaching.ChaosCacheManager.EnablePlayback
	// void EnablePlayback(int32_t Index, bool bEnable);                                                                        // [0x86984e0] Final|RequiredAPI|Native|Protected|BlueprintCallable 
};

/// Class /Script/ChaosCaching.ChaosCachePlayer
/// Size: 0x0340 (832 bytes) (0x000340 - 0x000340) align 8 MaxSize: 0x0340
class AChaosCachePlayer : public AChaosCacheManager
{ 
public:
};

/// Struct /Script/ChaosCaching.ParticleTransformTrack
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FParticleTransformTrack
{ 
	FRawAnimSequenceTrack                              RawTransformTrack;                                          // 0x0000   (0x0030)  
	float                                              BeginOffset;                                                // 0x0030   (0x0004)  
	bool                                               bDeactivateOnEnd;                                           // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	TArray<float>                                      KeyTimestamps;                                              // 0x0038   (0x0010)  
};

/// Struct /Script/ChaosCaching.PerParticleCacheData
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FPerParticleCacheData
{ 
	FParticleTransformTrack                            TransformData;                                              // 0x0000   (0x0048)  
	TMap<FName, FRichCurve>                            CurveData;                                                  // 0x0048   (0x0050)  
};

/// Struct /Script/ChaosCaching.RichCurves
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRichCurves
{ 
	TArray<FRichCurve>                                 RichCurves;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/ChaosCaching.CompressedRichCurves
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FCompressedRichCurves
{ 
	TArray<FCompressedRichCurve>                       CompressedRichCurves;                                       // 0x0000   (0x0010)  
};

/// Struct /Script/ChaosCaching.CacheEventTrack
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FCacheEventTrack
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	class UScriptStruct*                               Struct;                                                     // 0x0008   (0x0008)  
	TArray<float>                                      TimeStamps;                                                 // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0020   (0x0018)  MISSED
};

/// Struct /Script/ChaosCaching.CacheSpawnableTemplate
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FCacheSpawnableTemplate
{ 
	class UObject*                                     DuplicatedTemplate;                                         // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0010   (0x0060)  
	FTransform                                         ComponentTransform;                                         // 0x0070   (0x0060)  
};

/// Class /Script/ChaosCaching.ChaosCache
/// Size: 0x0360 (864 bytes) (0x000028 - 0x000360) align 16 MaxSize: 0x0360
class UChaosCache : public UObject
{ 
public:
	float                                              RecordedDuration;                                           // 0x0028   (0x0004)  
	uint32_t                                           NumRecordedFrames;                                          // 0x002C   (0x0004)  
	TArray<int32_t>                                    TrackToParticle;                                            // 0x0030   (0x0010)  
	TArray<FPerParticleCacheData>                      ParticleTracks;                                             // 0x0040   (0x0010)  
	TArray<int32_t>                                    ChannelCurveToParticle;                                     // 0x0050   (0x0010)  
	TMap<FName, FRichCurves>                           ChannelsTracks;                                             // 0x0060   (0x0050)  
	TMap<FName, FCompressedRichCurves>                 CompressedChannelsTracks;                                   // 0x00B0   (0x0050)  
	TMap<FName, FRichCurve>                            CurveData;                                                  // 0x0100   (0x0050)  
	TMap<FName, FParticleTransformTrack>               NamedTransformTracks;                                       // 0x0150   (0x0050)  
	bool                                               bCompressChannels;                                          // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01A1   (0x0003)  MISSED
	float                                              ChannelsCompressionErrorThreshold;                          // 0x01A4   (0x0004)  
	float                                              ChannelsCompressionSampleRate;                              // 0x01A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01AC   (0x0004)  MISSED
	TMap<FName, FCacheEventTrack>                      EventTracks;                                                // 0x01B0   (0x0050)  
	FCacheSpawnableTemplate                            Spawnable;                                                  // 0x0200   (0x00D0)  
	FGuid                                              AdapterGuid;                                                // 0x02D0   (0x0010)  
	int32_t                                            Version;                                                    // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData02_7[0x7C];                                      // 0x02E4   (0x007C)  MISSED
};

/// Struct /Script/ChaosCaching.MovieSceneChaosCacheParams
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FMovieSceneChaosCacheParams : FMovieSceneBaseCacheParams
{ 
	class UChaosCacheCollection*                       CacheCollection;                                            // 0x0020   (0x0008)  
};

/// Class /Script/ChaosCaching.MovieSceneChaosCacheSection
/// Size: 0x0120 (288 bytes) (0x0000F8 - 0x000120) align 8 MaxSize: 0x0120
class UMovieSceneChaosCacheSection : public UMovieSceneBaseCacheSection
{ 
public:
	FMovieSceneChaosCacheParams                        Params;                                                     // 0x00F8   (0x0028)  
};

/// Class /Script/ChaosCaching.MovieSceneChaosCacheTrack
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieSceneChaosCacheTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  AnimationSections;                                          // 0x00A0   (0x0010)  
};

/// Struct /Script/ChaosCaching.CacheEventBase
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FCacheEventBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/ChaosCaching.EnableStateEvent
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FEnableStateEvent : FCacheEventBase
{ 
	int32_t                                            Index;                                                      // 0x0008   (0x0004)  
	bool                                               bEnable;                                                    // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/ChaosCaching.BreakingEvent
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FBreakingEvent : FCacheEventBase
{ 
	int32_t                                            Index;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            Location;                                                   // 0x0010   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0028   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0040   (0x0018)  
	float                                              Mass;                                                       // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FVector                                            BoundingBoxMin;                                             // 0x0060   (0x0018)  
	FVector                                            BoundingBoxMax;                                             // 0x0078   (0x0018)  
};

/// Struct /Script/ChaosCaching.CollisionEvent
/// Size: 0x00F0 (240 bytes) (0x000008 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FCollisionEvent : FCacheEventBase
{ 
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
	FVector                                            AccumulatedImpulse;                                         // 0x0020   (0x0018)  
	FVector                                            Normal;                                                     // 0x0038   (0x0018)  
	FVector                                            Velocity1;                                                  // 0x0050   (0x0018)  
	FVector                                            Velocity2;                                                  // 0x0068   (0x0018)  
	FVector                                            DeltaVelocity1;                                             // 0x0080   (0x0018)  
	FVector                                            DeltaVelocity2;                                             // 0x0098   (0x0018)  
	FVector                                            AngularVelocity1;                                           // 0x00B0   (0x0018)  
	FVector                                            AngularVelocity2;                                           // 0x00C8   (0x0018)  
	float                                              Mass1;                                                      // 0x00E0   (0x0004)  
	float                                              Mass2;                                                      // 0x00E4   (0x0004)  
	float                                              PenetrationDepth;                                           // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Struct /Script/ChaosCaching.TrailingEvent
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FTrailingEvent : FCacheEventBase
{ 
	int32_t                                            Index;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            Location;                                                   // 0x0010   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0028   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0040   (0x0018)  
	FVector                                            BoundingBoxMin;                                             // 0x0058   (0x0018)  
	FVector                                            BoundingBoxMax;                                             // 0x0070   (0x0018)  
};

/// Struct /Script/ChaosCaching.MovieSceneChaosCacheSectionTemplateParameters
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FMovieSceneChaosCacheSectionTemplateParameters : FMovieSceneBaseCacheSectionTemplateParameters
{ 
	FMovieSceneChaosCacheParams                        ChaosCacheParams;                                           // 0x0008   (0x0028)  
};

/// Struct /Script/ChaosCaching.MovieSceneChaosCacheSectionTemplate
/// Size: 0x0050 (80 bytes) (0x000020 - 0x000050) align 8 MaxSize: 0x0050
struct FMovieSceneChaosCacheSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneChaosCacheSectionTemplateParameters     Params;                                                     // 0x0020   (0x0030)  
};

#pragma pack(pop)


