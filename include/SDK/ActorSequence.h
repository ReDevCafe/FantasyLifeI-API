
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

#pragma pack(push, 0x1)

/// Enum /Script/ActorSequence.EActorSequenceObjectReferenceType
/// Size: 0x01 (1 bytes)
enum class EActorSequenceObjectReferenceType : uint8_t
{
	EActorSequenceObjectReferenceType__ContextActor                                  = 0,
	EActorSequenceObjectReferenceType__ExternalActor                                 = 1,
	EActorSequenceObjectReferenceType__Component                                     = 2
};

/// Struct /Script/ActorSequence.ActorSequenceObjectReference
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FActorSequenceObjectReference
{ 
	EActorSequenceObjectReferenceType                  Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FGuid                                              ActorId;                                                    // 0x0004   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            PathToComponent;                                            // 0x0018   (0x0010)  
};

/// Struct /Script/ActorSequence.ActorSequenceObjectReferences
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FActorSequenceObjectReferences
{ 
	TArray<FActorSequenceObjectReference>              Array;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/ActorSequence.ActorSequenceObjectReferenceMap
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FActorSequenceObjectReferenceMap
{ 
	TArray<FGuid>                                      BindingIds;                                                 // 0x0000   (0x0010)  
	TArray<FActorSequenceObjectReferences>             References;                                                 // 0x0010   (0x0010)  
};

/// Class /Script/ActorSequence.ActorSequence
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align 8 MaxSize: 0x0090
class UActorSequence : public UMovieSceneSequence
{ 
public:
	class UMovieScene*                                 MovieScene;                                                 // 0x0068   (0x0008)  
	FActorSequenceObjectReferenceMap                   ObjectReferences;                                           // 0x0070   (0x0020)  
};

/// Class /Script/ActorSequence.ActorSequenceComponent
/// Size: 0x00D8 (216 bytes) (0x0000A0 - 0x0000D8) align 8 MaxSize: 0x00D8
class UActorSequenceComponent : public UActorComponent
{ 
public:
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x00A0   (0x0028)  
	class UActorSequence*                              Sequence;                                                   // 0x00C8   (0x0008)  
	class UActorSequencePlayer*                        SequencePlayer;                                             // 0x00D0   (0x0008)  


	/// Functions
	// Function /Script/ActorSequence.ActorSequenceComponent.StopSequence
	// void StopSequence();                                                                                                     // [0x8be8490] Final|Native|Public|BlueprintCallable 
	// Function /Script/ActorSequence.ActorSequenceComponent.PlaySequence
	// void PlaySequence();                                                                                                     // [0x8be8460] Final|Native|Public|BlueprintCallable 
	// Function /Script/ActorSequence.ActorSequenceComponent.PauseSequence
	// void PauseSequence();                                                                                                    // [0x8be8430] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ActorSequence.ActorSequencePlayer
/// Size: 0x0460 (1120 bytes) (0x000460 - 0x000460) align 8 MaxSize: 0x0460
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
};

#pragma pack(pop)


