
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaAssets

#pragma pack(push, 0x1)

/// Enum /Script/MediaPlate.EMediaPlateEventState
/// Size: 0x01 (1 bytes)
enum class EMediaPlateEventState : uint8_t
{
	EMediaPlateEventState__Play                                                      = 0,
	EMediaPlateEventState__Open                                                      = 1,
	EMediaPlateEventState__Close                                                     = 2,
	EMediaPlateEventState__Pause                                                     = 3,
	EMediaPlateEventState__Reverse                                                   = 4,
	EMediaPlateEventState__Forward                                                   = 5,
	EMediaPlateEventState__Rewind                                                    = 6
};

/// Class /Script/MediaPlate.MediaPlate
/// Size: 0x02A0 (672 bytes) (0x000290 - 0x0002A0) align 8 MaxSize: 0x02A0
class AMediaPlate : public AActor
{ 
public:
	class UMediaPlateComponent*                        MediaPlateComponent;                                        // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x0298   (0x0008)  
};

/// Class /Script/MediaPlate.MediaPlateAssetUserData
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UMediaPlateAssetUserData : public UAssetUserData
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Struct /Script/MediaPlate.MediaTextureResourceSettings
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FMediaTextureResourceSettings
{ 
	bool                                               bEnableGenMips;                                             // 0x0000   (0x0001)  
	char                                               CurrentNumMips;                                             // 0x0001   (0x0001)  
};

/// Class /Script/MediaPlate.MediaPlateComponent
/// Size: 0x0188 (392 bytes) (0x0000A0 - 0x000188) align 8 MaxSize: 0x0188
class UMediaPlateComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00A0   (0x0008)  MISSED
	bool                                               bPlayOnOpen;                                                // 0x00A8   (0x0001)  
	bool                                               bAutoPlay;                                                  // 0x00A9   (0x0001)  
	bool                                               bEnableAudio;                                               // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x00AB   (0x0001)  MISSED
	float                                              StartTime;                                                  // 0x00AC   (0x0004)  
	class UMediaSoundComponent*                        SoundComponent;                                             // 0x00B0   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x00B8   (0x0008)  
	TArray<class UStaticMeshComponent*>                Letterboxes;                                                // 0x00C0   (0x0010)  
	class UMediaPlaylist*                              MediaPlaylist;                                              // 0x00D0   (0x0008)  
	int32_t                                            PlaylistIndex;                                              // 0x00D8   (0x0004)  
	FMediaSourceCacheSettings                          CacheSettings;                                              // 0x00DC   (0x0008)  
	bool                                               bIsMediaPlatePlaying;                                       // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData02_6[0x13];                                      // 0x00E5   (0x0013)  MISSED
	bool                                               bPlayOnlyWhenVisible;                                       // 0x00F8   (0x0001)  
	bool                                               bLoop;                                                      // 0x00F9   (0x0001)  
	EMediaTextureVisibleMipsTiles                      VisibleMipsTilesCalculations;                               // 0x00FA   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1];                                       // 0x00FB   (0x0001)  MISSED
	float                                              MipMapBias;                                                 // 0x00FC   (0x0004)  
	bool                                               bIsAspectRatioAuto;                                         // 0x0100   (0x0001)  
	bool                                               bEnableMipMapUpscaling;                                     // 0x0101   (0x0001)  
	unsigned char                                      UnknownData04_6[0x2];                                       // 0x0102   (0x0002)  MISSED
	int32_t                                            MipLevelToUpscale;                                          // 0x0104   (0x0004)  
	bool                                               bAdaptivePoleMipUpscaling;                                  // 0x0108   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0109   (0x0003)  MISSED
	float                                              LetterboxAspectRatio;                                       // 0x010C   (0x0004)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x0110   (0x0008)  MISSED
	FVector2D                                          MeshRange;                                                  // 0x0118   (0x0010)  
	TArray<class UMediaTexture*>                       MediaTextures;                                              // 0x0128   (0x0010)  
	FMediaTextureResourceSettings                      MediaTextureSettings;                                       // 0x0138   (0x0002)  
	unsigned char                                      UnknownData07_6[0x6];                                       // 0x013A   (0x0006)  MISSED
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0140   (0x0008)  
	unsigned char                                      UnknownData08_7[0x40];                                      // 0x0148   (0x0040)  MISSED


	/// Functions
	// Function /Script/MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible
	// void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible);                                                                // [0x8b4fa40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetMeshRange
	// void SetMeshRange(FVector2D InMeshRange);                                                                                // [0x8b4f9b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetLoop
	// void SetLoop(bool bInLoop);                                                                                              // [0x8b4f910] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio
	// void SetLetterboxAspectRatio(float AspectRatio);                                                                         // [0x8b4f7f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetIsAspectRatioAuto
	// void SetIsAspectRatioAuto(bool bInIsAspectRatioAuto);                                                                    // [0x8b4f750] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Seek
	// bool Seek(FTimespan& Time);                                                                                              // [0x8b4f6a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Rewind
	// bool Rewind();                                                                                                           // [0x8b4f650] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Play
	// void Play();                                                                                                             // [0x8b4f620] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Pause
	// void Pause();                                                                                                            // [0x8b4f5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Open
	// void Open();                                                                                                             // [0x8b4f5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaSuspended
	// void OnMediaSuspended();                                                                                                 // [0x8b4f5b0] Final|Native|Private 
	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaResumed
	// void OnMediaResumed();                                                                                                   // [0x8b4f590] Final|Native|Private 
	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaOpened
	// void OnMediaOpened(FString DeviceUrl);                                                                                   // [0x8b4f460] Final|Native|Private 
	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaEnd
	// void OnMediaEnd();                                                                                                       // [0x8b4f3f0] Final|Native|Private 
	// Function /Script/MediaPlate.MediaPlateComponent.IsMediaPlatePlaying
	// bool IsMediaPlatePlaying();                                                                                              // [0x8b4f3d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMeshRange
	// FVector2D GetMeshRange();                                                                                                // [0x8b4f3a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMediaTexture
	// class UMediaTexture* GetMediaTexture(int32_t Index);                                                                     // [0x8b4f2e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                    // [0x5571d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetLoop
	// bool GetLoop();                                                                                                          // [0x5881280] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio
	// float GetLetterboxAspectRatio();                                                                                         // [0x8b4f2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetIsAspectRatioAuto
	// bool GetIsAspectRatioAuto();                                                                                             // [0x8b4f2a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.Close
	// void Close();                                                                                                            // [0x8b4f240] Final|Native|Public|BlueprintCallable 
};

#pragma pack(pop)


