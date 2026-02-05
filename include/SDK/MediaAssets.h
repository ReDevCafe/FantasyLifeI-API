
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaUtils

#pragma pack(push, 0x1)

/// Enum /Script/MediaAssets.MediaTextureOutputFormat
/// Size: 0x01 (1 bytes)
enum class MediaTextureOutputFormat : uint8_t
{
	MTOF_Default                                                                     = 0,
	MTOF_SRGB_LINOUT                                                                 = 1
};

/// Enum /Script/MediaAssets.MediaTextureOrientation
/// Size: 0x01 (1 bytes)
enum class MediaTextureOrientation : uint8_t
{
	MTORI_Original                                                                   = 0,
	MTORI_CW90                                                                       = 1,
	MTORI_CW180                                                                      = 2,
	MTORI_CW270                                                                      = 3
};

/// Enum /Script/MediaAssets.EMediaPlayerTrack
/// Size: 0x01 (1 bytes)
enum class EMediaPlayerTrack : uint8_t
{
	EMediaPlayerTrack__Audio                                                         = 0,
	EMediaPlayerTrack__Caption                                                       = 1,
	EMediaPlayerTrack__Metadata                                                      = 2,
	EMediaPlayerTrack__Script                                                        = 3,
	EMediaPlayerTrack__Subtitle                                                      = 4,
	EMediaPlayerTrack__Text                                                          = 5,
	EMediaPlayerTrack__Video                                                         = 6
};

/// Enum /Script/MediaAssets.EMediaTimeRangeBPType
/// Size: 0x01 (1 bytes)
enum class EMediaTimeRangeBPType : uint8_t
{
	EMediaTimeRangeBPType__Absolute                                                  = 0,
	EMediaTimeRangeBPType__Current                                                   = 1
};

/// Enum /Script/MediaAssets.EMediaSoundChannels
/// Size: 0x04 (4 bytes)
enum class EMediaSoundChannels : uint32_t
{
	EMediaSoundChannels__Mono                                                        = 0,
	EMediaSoundChannels__Stereo                                                      = 1,
	EMediaSoundChannels__Surround                                                    = 2
};

/// Enum /Script/MediaAssets.EMediaSoundComponentFFTSize
/// Size: 0x01 (1 bytes)
enum class EMediaSoundComponentFFTSize : uint8_t
{
	EMediaSoundComponentFFTSize__Min                                                 = 0,
	EMediaSoundComponentFFTSize__Small                                               = 1,
	EMediaSoundComponentFFTSize__Medium                                              = 2,
	EMediaSoundComponentFFTSize__Large                                               = 3
};

/// Enum /Script/MediaAssets.EMediaTextureVisibleMipsTiles
/// Size: 0x01 (1 bytes)
enum class EMediaTextureVisibleMipsTiles : uint8_t
{
	EMediaTextureVisibleMipsTiles__None                                              = 0,
	EMediaTextureVisibleMipsTiles__Plane                                             = 1,
	EMediaTextureVisibleMipsTiles__Sphere                                            = 2
};

/// Enum /Script/MediaAssets.EMediaAudioCaptureDeviceFilter
/// Size: 0x01 (1 bytes)
enum class EMediaAudioCaptureDeviceFilter : uint8_t
{
	EMediaAudioCaptureDeviceFilter__None                                             = 0,
	EMediaAudioCaptureDeviceFilter__Card                                             = 1,
	EMediaAudioCaptureDeviceFilter__Microphone                                       = 2,
	EMediaAudioCaptureDeviceFilter__Software                                         = 4,
	EMediaAudioCaptureDeviceFilter__Unknown                                          = 8
};

/// Enum /Script/MediaAssets.EMediaVideoCaptureDeviceFilter
/// Size: 0x01 (1 bytes)
enum class EMediaVideoCaptureDeviceFilter : uint8_t
{
	EMediaVideoCaptureDeviceFilter__None                                             = 0,
	EMediaVideoCaptureDeviceFilter__Card                                             = 1,
	EMediaVideoCaptureDeviceFilter__Software                                         = 2,
	EMediaVideoCaptureDeviceFilter__Unknown                                          = 4,
	EMediaVideoCaptureDeviceFilter__Webcam                                           = 8
};

/// Enum /Script/MediaAssets.EMediaWebcamCaptureDeviceFilter
/// Size: 0x01 (1 bytes)
enum class EMediaWebcamCaptureDeviceFilter : uint8_t
{
	EMediaWebcamCaptureDeviceFilter__None                                            = 0,
	EMediaWebcamCaptureDeviceFilter__DepthSensor                                     = 1,
	EMediaWebcamCaptureDeviceFilter__Front                                           = 2,
	EMediaWebcamCaptureDeviceFilter__Rear                                            = 4,
	EMediaWebcamCaptureDeviceFilter__Unknown                                         = 8
};

/// Class /Script/MediaAssets.MediaSourceRendererInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMediaSourceRendererInterface : public UInterface
{ 
public:
};

/// Class /Script/MediaAssets.MediaTexture
/// Size: 0x0218 (536 bytes) (0x000130 - 0x000218) align 8 MaxSize: 0x0218
class UMediaTexture : public UTexture
{ 
public:
	TEnumAsByte<TextureAddress>                        AddressX;                                                   // 0x0130   (0x0001)  
	TEnumAsByte<TextureAddress>                        AddressY;                                                   // 0x0131   (0x0001)  
	bool                                               AutoClear;                                                  // 0x0132   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0133   (0x0001)  MISSED
	FLinearColor                                       ClearColor;                                                 // 0x0134   (0x0010)  
	bool                                               EnableGenMips;                                              // 0x0144   (0x0001)  
	char                                               NumMips;                                                    // 0x0145   (0x0001)  
	bool                                               NewStyleOutput;                                             // 0x0146   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0147   (0x0001)  MISSED
	float                                              CurrentAspectRatio;                                         // 0x0148   (0x0004)  
	TEnumAsByte<MediaTextureOrientation>               CurrentOrientation;                                         // 0x014C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x014D   (0x0003)  MISSED
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0150   (0x0008)  
	unsigned char                                      UnknownData03_7[0xC0];                                      // 0x0158   (0x00C0)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaTexture.UpdateResource
	// void UpdateResource();                                                                                                   // [0x54430a0] Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaTexture.SetMediaPlayer
	// void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);                                                                 // [0x5442520] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaTexture.GetWidth
	// int32_t GetWidth();                                                                                                      // [0x543fbe0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetTextureNumMips
	// int32_t GetTextureNumMips();                                                                                             // [0x543f1c0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                    // [0x543e580] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetHeight
	// int32_t GetHeight();                                                                                                     // [0x543e340] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetAspectRatio
	// float GetAspectRatio();                                                                                                  // [0x543dea0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.MediaSource
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UMediaSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaSource.Validate
	// bool Validate();                                                                                                         // [0x54430c0] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionString
	// void SetMediaOptionString(FName& Key, FString Value);                                                                    // [0x54421d0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionInt64
	// void SetMediaOptionInt64(FName& Key, int64_t Value);                                                                     // [0x5441ff0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionFloat
	// void SetMediaOptionFloat(FName& Key, float Value);                                                                       // [0x5441f10] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionBool
	// void SetMediaOptionBool(FName& Key, bool Value);                                                                         // [0x5441e30] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.GetUrl
	// FString GetUrl();                                                                                                        // [0x543f5e0] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.BaseMediaSource
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align 8 MaxSize: 0x0088
class UBaseMediaSource : public UMediaSource
{ 
public:
	FName                                              playerName;                                                 // 0x0080   (0x0008)  
};

/// Class /Script/MediaAssets.FileMediaSource
/// Size: 0x00B0 (176 bytes) (0x000088 - 0x0000B0) align 8 MaxSize: 0x00B0
class UFileMediaSource : public UBaseMediaSource
{ 
public:
	FString                                            FilePath;                                                   // 0x0088   (0x0010)  
	bool                                               PrecacheFile;                                               // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x0099   (0x0017)  MISSED


	/// Functions
	// Function /Script/MediaAssets.FileMediaSource.SetFilePath
	// void SetFilePath(FString Path);                                                                                          // [0x5441b20] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaComponent
/// Size: 0x00B0 (176 bytes) (0x0000A0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMediaComponent : public UActorComponent
{ 
public:
	class UMediaTexture*                               MediaTexture;                                               // 0x00A0   (0x0008)  
	class UMediaPlayer*                                MediaPlayer;                                                // 0x00A8   (0x0008)  


	/// Functions
	// Function /Script/MediaAssets.MediaComponent.GetMediaTexture
	// class UMediaTexture* GetMediaTexture();                                                                                  // [0x543e5c0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaComponent.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                    // [0x543e520] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.MediaTimeStampInfo
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UMediaTimeStampInfo : public UObject
{ 
public:
	FTimespan                                          Time;                                                       // 0x0028   (0x0008)  
	int64_t                                            SequenceIndex;                                              // 0x0030   (0x0008)  
};

/// Class /Script/MediaAssets.MediaPlayer
/// Size: 0x0168 (360 bytes) (0x000028 - 0x000168) align 8 MaxSize: 0x0168
class UMediaPlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	SDK_UNDEFINED(16,494) /* FMulticastInlineDelegate */ __um(OnEndReached);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,495) /* FMulticastInlineDelegate */ __um(OnMediaClosed);                                      // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,496) /* FMulticastInlineDelegate */ __um(OnMediaOpened);                                      // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,497) /* FMulticastInlineDelegate */ __um(OnMediaOpenFailed);                                  // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,498) /* FMulticastInlineDelegate */ __um(OnPlaybackResumed);                                  // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,499) /* FMulticastInlineDelegate */ __um(OnPlaybackSuspended);                                // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,500) /* FMulticastInlineDelegate */ __um(OnSeekCompleted);                                    // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,501) /* FMulticastInlineDelegate */ __um(OnTracksChanged);                                    // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,502) /* FMulticastInlineDelegate */ __um(OnMetadataChanged);                                  // 0x00B0   (0x0010)  
	FTimespan                                          CacheAhead;                                                 // 0x00C0   (0x0008)  
	FTimespan                                          CacheBehind;                                                // 0x00C8   (0x0008)  
	FTimespan                                          CacheBehindGame;                                            // 0x00D0   (0x0008)  
	bool                                               NativeAudioOut;                                             // 0x00D8   (0x0001)  
	bool                                               PlayOnOpen;                                                 // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00DA   (0x0002)  MISSED
	bool                                               Shuffle : 1;                                                // 0x00DC:0 (0x0001)  
	bool                                               Loop : 1;                                                   // 0x00DC:1 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00DD   (0x0003)  MISSED
	class UMediaPlaylist*                              Playlist;                                                   // 0x00E0   (0x0008)  
	int32_t                                            PlaylistIndex;                                              // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	FTimespan                                          TimeDelay;                                                  // 0x00F0   (0x0008)  
	float                                              HorizontalFieldOfView;                                      // 0x00F8   (0x0004)  
	float                                              VerticalFieldOfView;                                        // 0x00FC   (0x0004)  
	FRotator                                           ViewRotation;                                               // 0x0100   (0x0018)  
	unsigned char                                      UnknownData04_6[0x28];                                      // 0x0118   (0x0028)  MISSED
	FGuid                                              PlayerGuid;                                                 // 0x0140   (0x0010)  
	unsigned char                                      UnknownData05_7[0x18];                                      // 0x0150   (0x0018)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaPlayer.SupportsSeeking
	// bool SupportsSeeking();                                                                                                  // [0x5443060] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SupportsScrubbing
	// bool SupportsScrubbing();                                                                                                // [0x5443020] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SupportsRate
	// bool SupportsRate(float Rate, bool Unthinned);                                                                           // [0x5442f40] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SupportsPlaybackTimeRange
	// bool SupportsPlaybackTimeRange();                                                                                        // [0x5442f00] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SetViewRotation
	// bool SetViewRotation(FRotator& Rotation, bool Absolute);                                                                 // [0x5442dc0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetViewField
	// bool SetViewField(float Horizontal, float Vertical, bool Absolute);                                                      // [0x5442c70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetVideoTrackFrameRate
	// bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate);                                   // [0x5442b60] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetTrackFormat
	// bool SetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex);                               // [0x5442a50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetTimeDelay
	// void SetTimeDelay(FTimespan TimeDelay);                                                                                  // [0x54429c0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetRate
	// bool SetRate(float Rate);                                                                                                // [0x5442760] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetPlaybackTimeRange
	// bool SetPlaybackTimeRange(FFloatInterval InTimeRange);                                                                   // [0x5442660] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetNativeVolume
	// bool SetNativeVolume(float Volume);                                                                                      // [0x54425c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetMediaOptions
	// void SetMediaOptions(class UMediaSource* OPTIONS);                                                                       // [0x54423f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetLooping
	// bool SetLooping(bool Looping);                                                                                           // [0x5441d60] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetDesiredPlayerName
	// void SetDesiredPlayerName(FName playerName);                                                                             // [0x54417f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetBlockOnTime
	// void SetBlockOnTime(FTimespan& Time);                                                                                    // [0x5441750] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SelectTrack
	// bool SelectTrack(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                                       // [0x5441680] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Seek
	// bool Seek(FTimespan& Time);                                                                                              // [0x54415d0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Rewind
	// bool Rewind();                                                                                                           // [0x5441590] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Reopen
	// bool Reopen();                                                                                                           // [0x5441430] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Previous
	// bool Previous();                                                                                                         // [0x5441160] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.PlayAndSeek
	// void PlayAndSeek();                                                                                                      // [0x5441140] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Play
	// bool Play();                                                                                                             // [0x5441100] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Pause
	// bool Pause();                                                                                                            // [0x54410c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenUrl
	// bool OpenUrl(FString URL);                                                                                               // [0x5440e90] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSourceWithOptions
	// bool OpenSourceWithOptions(class UMediaSource* MediaSource, FMediaPlayerOptions& OPTIONS);                               // [0x5440be0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSourceLatent
	// void OpenSourceLatent(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class UMediaSource* MediaSource, FMediaPlayerOptions& OPTIONS, bool& bSuccess); // [0x5440880] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSource
	// bool OpenSource(class UMediaSource* MediaSource);                                                                        // [0x54406e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylistIndex
	// bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32_t Index);                                                 // [0x5440530] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylist
	// bool OpenPlaylist(class UMediaPlaylist* InPlaylist);                                                                     // [0x54403d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenFile
	// bool OpenFile(FString FilePath);                                                                                         // [0x543ffe0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Next
	// bool Next();                                                                                                             // [0x543ff90] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.IsReady
	// bool IsReady();                                                                                                          // [0x543ff50] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPreparing
	// bool IsPreparing();                                                                                                      // [0x543ff10] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x543fed0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPaused
	// bool IsPaused();                                                                                                         // [0x543fe90] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsLooping
	// bool IsLooping();                                                                                                        // [0x543fe50] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsConnecting
	// bool IsConnecting();                                                                                                     // [0x543fe10] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsClosed
	// bool IsClosed();                                                                                                         // [0x543fdd0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsBuffering
	// bool IsBuffering();                                                                                                      // [0x543fd90] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.HasError
	// bool HasError();                                                                                                         // [0x543fc00] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetViewRotation
	// FRotator GetViewRotation();                                                                                              // [0x543fb60] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackType
	// FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex);                                                      // [0x543fa40] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRates
	// FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex);                                            // [0x543f960] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRate
	// float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex);                                                   // [0x543f890] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackDimensions
	// FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex);                                              // [0x543f7b0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
	// float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex);                                                 // [0x543f6e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVerticalFieldOfView
	// float GetVerticalFieldOfView();                                                                                          // [0x543f660] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetUrl
	// FString GetUrl();                                                                                                        // [0x543f5b0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackLanguage
	// FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                               // [0x543f490] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackFormat
	// int32_t GetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                                 // [0x543f3c0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackDisplayName
	// FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                              // [0x543f2d0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTimeStamp
	// class UMediaTimeStampInfo* GetTimeStamp();                                                                               // [0x543f250] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTimeDelay
	// FTimespan GetTimeDelay();                                                                                                // [0x543f220] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTime
	// FTimespan GetTime();                                                                                                     // [0x543f1e0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetSupportedRates
	// void GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned);                                                   // [0x543f060] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetSelectedTrack
	// int32_t GetSelectedTrack(EMediaPlayerTrack TrackType);                                                                   // [0x543edf0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetRate
	// float GetRate();                                                                                                         // [0x543edb0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlaylistIndex
	// int32_t GetPlaylistIndex();                                                                                              // [0x543ec00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlaylist
	// class UMediaPlaylist* GetPlaylist();                                                                                     // [0x543eb60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlayerName
	// FName GetPlayerName();                                                                                                   // [0x543eb20] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlaybackTimeRange
	// FFloatInterval GetPlaybackTimeRange(EMediaTimeRangeBPType InRangeToGet);                                                 // [0x543ea00] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.GetNumTracks
	// int32_t GetNumTracks(EMediaPlayerTrack TrackType);                                                                       // [0x543e970] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetNumTrackFormats
	// int32_t GetNumTrackFormats(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                             // [0x543e8a0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetMediaName
	// FText GetMediaName();                                                                                                    // [0x543e4d0] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetMediaMetadataItems
	// TMap<FString, FMediaMetadataItemsBPT> GetMediaMetadataItems();                                                           // [0x543e3e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetHorizontalFieldOfView
	// float GetHorizontalFieldOfView();                                                                                        // [0x543e360] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDuration
	// FTimespan GetDuration();                                                                                                 // [0x543e2c0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDisplayTimeStamp
	// class UMediaTimeStampInfo* GetDisplayTimeStamp();                                                                        // [0x543e240] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDisplayTime
	// FTimespan GetDisplayTime();                                                                                              // [0x543e1e0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDesiredPlayerName
	// FName GetDesiredPlayerName();                                                                                            // [0x543e1b0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackType
	// FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex);                                                      // [0x543e090] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackSampleRate
	// int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex);                                                // [0x543dfc0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackChannels
	// int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex);                                                  // [0x543def0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.Close
	// void Close();                                                                                                            // [0x543da30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPlayUrl
	// bool CanPlayUrl(FString URL);                                                                                            // [0x543d940] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPlaySource
	// bool CanPlaySource(class UMediaSource* MediaSource);                                                                     // [0x543d850] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPause
	// bool CanPause();                                                                                                         // [0x543d810] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.MediaPlayerProxyInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMediaPlayerProxyInterface : public UInterface
{ 
public:
};

/// Class /Script/MediaAssets.MediaPlaylist
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UMediaPlaylist : public UObject
{ 
public:
	TArray<class UMediaSource*>                        Items;                                                      // 0x0028   (0x0010)  


	/// Functions
	// Function /Script/MediaAssets.MediaPlaylist.Replace
	// bool Replace(int32_t Index, class UMediaSource* Replacement);                                                            // [0x5441480] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.RemoveAt
	// bool RemoveAt(int32_t Index);                                                                                            // [0x5441360] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Remove
	// bool Remove(class UMediaSource* MediaSource);                                                                            // [0x5441190] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Num
	// int32_t Num();                                                                                                           // [0x543ffc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Insert
	// void Insert(class UMediaSource* MediaSource, int32_t Index);                                                             // [0x543fc40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetRandom
	// class UMediaSource* GetRandom(int32_t& OutIndex);                                                                        // [0x543ed00] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetPrevious
	// class UMediaSource* GetPrevious(int32_t& InOutIndex);                                                                    // [0x543ec20] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetNext
	// class UMediaSource* GetNext(int32_t& InOutIndex);                                                                        // [0x543e5e0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Get
	// class UMediaSource* Get(int32_t Index);                                                                                  // [0x543dde0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.AddUrl
	// bool AddUrl(FString URL);                                                                                                // [0x543d400] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.AddFile
	// bool AddFile(FString FilePath);                                                                                          // [0x543d090] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Add
	// bool Add(class UMediaSource* MediaSource);                                                                               // [0x543cfa0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaSoundComponent
/// Size: 0x0970 (2416 bytes) (0x000890 - 0x000970) align 16 MaxSize: 0x0970
class UMediaSoundComponent : public USynthComponent
{ 
public:
	EMediaSoundChannels                                Channels;                                                   // 0x0890   (0x0004)  
	bool                                               DynamicRateAdjustment;                                      // 0x0894   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0895   (0x0003)  MISSED
	float                                              RateAdjustmentFactor;                                       // 0x0898   (0x0004)  
	FFloatRange                                        RateAdjustmentRange;                                        // 0x089C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x08AC   (0x0004)  MISSED
	class UMediaPlayer*                                MediaPlayer;                                                // 0x08B0   (0x0008)  
	unsigned char                                      UnknownData02_7[0xB8];                                      // 0x08B8   (0x00B8)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
	// void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);           // [0x5442800] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetMediaPlayer
	// void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);                                                                 // [0x5442490] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
	// void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec);                                      // [0x5441a10] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
	// void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);                                                         // [0x5441950] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
	// void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);                                                              // [0x5441880] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetSpectralData
	// TArray<FMediaSoundComponentSpectralData> GetSpectralData();                                                              // [0x543ee80] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetNormalizedSpectralData
	// TArray<FMediaSoundComponentSpectralData> GetNormalizedSpectralData();                                                    // [0x543e6c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                    // [0x543e540] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSoundComponent.GetEnvelopeValue
	// float GetEnvelopeValue();                                                                                                // [0x543e300] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
	// bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);                                // [0x543d5b0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MediaAssets.PlatformMediaSource
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align 8 MaxSize: 0x0088
class UPlatformMediaSource : public UMediaSource
{ 
public:
	class UMediaSource*                                MediaSource;                                                // 0x0080   (0x0008)  
};

/// Class /Script/MediaAssets.StreamMediaSource
/// Size: 0x0098 (152 bytes) (0x000088 - 0x000098) align 8 MaxSize: 0x0098
class UStreamMediaSource : public UBaseMediaSource
{ 
public:
	FString                                            StreamUrl;                                                  // 0x0088   (0x0010)  
};

/// Class /Script/MediaAssets.TimeSynchronizableMediaSource
/// Size: 0x00A0 (160 bytes) (0x000088 - 0x0000A0) align 8 MaxSize: 0x00A0
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{ 
public:
	bool                                               bUseTimeSynchronization;                                    // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	int32_t                                            FrameDelay;                                                 // 0x008C   (0x0004)  
	double                                             TimeDelay;                                                  // 0x0090   (0x0008)  
	bool                                               bAutoDetectInput;                                           // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Class /Script/MediaAssets.MediaBlueprintFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
	// void EnumerateWebcamCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);                             // [0x543dcc0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
	// void EnumerateVideoCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);                              // [0x543dba0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
	// void EnumerateAudioCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);                              // [0x543da80] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/MediaAssets.MediaMetadataItemBPT
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FMediaMetadataItemBPT
{ 
	FString                                            LanguageCode;                                               // 0x0000   (0x0010)  
	FString                                            MimeType;                                                   // 0x0010   (0x0010)  
	FString                                            StringData;                                                 // 0x0020   (0x0010)  
	TArray<char>                                       BinaryData;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/MediaAssets.MediaMetadataItemsBPT
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMediaMetadataItemsBPT
{ 
	TArray<FMediaMetadataItemBPT>                      Items;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/MediaAssets.MediaSoundComponentSpectralData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMediaSoundComponentSpectralData
{ 
	float                                              FrequencyHz;                                                // 0x0000   (0x0004)  
	float                                              Magnitude;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/MediaAssets.MediaSourceCacheSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMediaSourceCacheSettings
{ 
	bool                                               bOverride;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              TimeToLookAhead;                                            // 0x0004   (0x0004)  
};

/// Struct /Script/MediaAssets.MediaCaptureDevice
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMediaCaptureDevice
{ 
	FText                                              DisplayName;                                                // 0x0000   (0x0018)  
	FString                                            URL;                                                        // 0x0010   (0x0010)  
};

#pragma pack(pop)


