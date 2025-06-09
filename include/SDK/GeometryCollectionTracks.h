
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MovieScene

#pragma pack(push, 0x1)

/// Struct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionParams
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FMovieSceneGeometryCollectionParams
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FSoftObjectPath                                    GeometryCollectionCache;                                    // 0x0008   (0x0020)  
	FFrameNumber                                       StartFrameOffset;                                           // 0x0028   (0x0004)  
	FFrameNumber                                       EndFrameOffset;                                             // 0x002C   (0x0004)  
	float                                              PlayRate;                                                   // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSection
/// Size: 0x0128 (296 bytes) (0x0000F0 - 0x000128) align 8 MaxSize: 0x0128
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
{ 
public:
	FMovieSceneGeometryCollectionParams                Params;                                                     // 0x00F0   (0x0038)  
};

/// Class /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  AnimationSections;                                          // 0x00A0   (0x0010)  
};

/// Struct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams
{ 
	FFrameNumber                                       SectionStartTime;                                           // 0x0038   (0x0004)  
	FFrameNumber                                       SectionEndTime;                                             // 0x003C   (0x0004)  
};

/// Struct /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
/// Size: 0x0060 (96 bytes) (0x000020 - 0x000060) align 8 MaxSize: 0x0060
struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneGeometryCollectionSectionTemplateParameters Params;                                                 // 0x0020   (0x0040)  
};

#pragma pack(pop)


