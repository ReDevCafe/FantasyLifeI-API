
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MovieScene
/// dependency: MovieSceneTracks

#pragma pack(push, 0x1)

/// Class /Script/TakeMovieScene.MovieSceneTakeSection
/// Size: 0x0730 (1840 bytes) (0x0000F0 - 0x000730) align 8 MaxSize: 0x0730
class UMovieSceneTakeSection : public UMovieSceneSection
{ 
public:
	FMovieSceneIntegerChannel                          HoursCurve;                                                 // 0x00F0   (0x0108)  
	FMovieSceneIntegerChannel                          MinutesCurve;                                               // 0x01F8   (0x0108)  
	FMovieSceneIntegerChannel                          SecondsCurve;                                               // 0x0300   (0x0108)  
	FMovieSceneIntegerChannel                          FramesCurve;                                                // 0x0408   (0x0108)  
	FMovieSceneFloatChannel                            SubFramesCurve;                                             // 0x0510   (0x0110)  
	FMovieSceneStringChannel                           Slate;                                                      // 0x0620   (0x0110)  
};

/// Class /Script/TakeMovieScene.MovieSceneTakeSettings
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UMovieSceneTakeSettings : public UObject
{ 
public:
	FString                                            HoursName;                                                  // 0x0028   (0x0010)  
	FString                                            MinutesName;                                                // 0x0038   (0x0010)  
	FString                                            SecondsName;                                                // 0x0048   (0x0010)  
	FString                                            FramesName;                                                 // 0x0058   (0x0010)  
	FString                                            SubFramesName;                                              // 0x0068   (0x0010)  
	FString                                            SlateName;                                                  // 0x0078   (0x0010)  
};

/// Class /Script/TakeMovieScene.MovieSceneTakeTrack
/// Size: 0x00A8 (168 bytes) (0x000098 - 0x0000A8) align 8 MaxSize: 0x00A8
class UMovieSceneTakeTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0098   (0x0010)  
};

#pragma pack(pop)


