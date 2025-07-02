
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/MediaUtils.EMediaPlayerOptionBooleanOverride
/// Size: 0x01 (1 bytes)
enum class EMediaPlayerOptionBooleanOverride : uint8_t
{
	EMediaPlayerOptionBooleanOverride__UseMediaPlayerSetting                         = 0,
	EMediaPlayerOptionBooleanOverride__Enabled                                       = 1,
	EMediaPlayerOptionBooleanOverride__Disabled                                      = 2
};

/// Enum /Script/MediaUtils.EMediaPlayerOptionSeekTimeType
/// Size: 0x01 (1 bytes)
enum class EMediaPlayerOptionSeekTimeType : uint8_t
{
	EMediaPlayerOptionSeekTimeType__Ignored                                          = 0,
	EMediaPlayerOptionSeekTimeType__RelativeToStartTime                              = 1
};

/// Enum /Script/MediaUtils.EMediaPlayerOptionTrackSelectMode
/// Size: 0x01 (1 bytes)
enum class EMediaPlayerOptionTrackSelectMode : uint8_t
{
	EMediaPlayerOptionTrackSelectMode__UseMediaPlayerDefaults                        = 0,
	EMediaPlayerOptionTrackSelectMode__UseTrackOptionIndices                         = 1
};

/// Struct /Script/MediaUtils.MediaPlayerTrackOptions
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FMediaPlayerTrackOptions
{ 
	int32_t                                            Audio;                                                      // 0x0000   (0x0004)  
	int32_t                                            Caption;                                                    // 0x0004   (0x0004)  
	int32_t                                            MetaData;                                                   // 0x0008   (0x0004)  
	int32_t                                            Script;                                                     // 0x000C   (0x0004)  
	int32_t                                            Subtitle;                                                   // 0x0010   (0x0004)  
	int32_t                                            Text;                                                       // 0x0014   (0x0004)  
	int32_t                                            Video;                                                      // 0x0018   (0x0004)  
};

/// Struct /Script/MediaUtils.MediaPlayerOptions
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FMediaPlayerOptions
{ 
	FMediaPlayerTrackOptions                           Tracks;                                                     // 0x0000   (0x001C)  
	EMediaPlayerOptionTrackSelectMode                  TrackSelection;                                             // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FTimespan                                          SeekTime;                                                   // 0x0020   (0x0008)  
	EMediaPlayerOptionSeekTimeType                     SeekTimeType;                                               // 0x0028   (0x0001)  
	EMediaPlayerOptionBooleanOverride                  PlayOnOpen;                                                 // 0x0029   (0x0001)  
	EMediaPlayerOptionBooleanOverride                  Loop;                                                       // 0x002A   (0x0001)  
	unsigned char                                      UnknownData01_7[0x55];                                      // 0x002B   (0x0055)  MISSED
};

#pragma pack(pop)


