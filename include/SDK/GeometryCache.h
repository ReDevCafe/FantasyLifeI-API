
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara
/// dependency: NiagaraCore

#pragma pack(push, 0x1)

/// Class /Script/GeometryCache.GeometryCache
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UGeometryCache : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0030   (0x0010)  
	TArray<FName>                                      MaterialSlotNames;                                          // 0x0040   (0x0010)  
	TArray<class UGeometryCacheTrack*>                 Tracks;                                                     // 0x0050   (0x0010)  
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x0060   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0070   (0x0008)  MISSED
	int32_t                                            StartFrame;                                                 // 0x0078   (0x0004)  
	int32_t                                            EndFrame;                                                   // 0x007C   (0x0004)  
	uint64_t                                           Hash;                                                       // 0x0080   (0x0008)  
};

/// Class /Script/GeometryCache.GeometryCacheActor
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class AGeometryCacheActor : public AActor
{ 
public:
	class UGeometryCacheComponent*                     GeometryCacheComponent;                                     // 0x0290   (0x0008)  


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	// class UGeometryCacheComponent* GetGeometryCacheComponent();                                                              // [0x4fd20e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheCodecBase
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UGeometryCacheCodecBase : public UObject
{ 
public:
	TArray<int32_t>                                    TopologyRanges;                                             // 0x0028   (0x0010)  
};

/// Class /Script/GeometryCache.GeometryCacheCodecRaw
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{ 
public:
	int32_t                                            DummyProperty;                                              // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheCodecV1
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheComponent
/// Size: 0x05E0 (1504 bytes) (0x000550 - 0x0005E0) align 16 MaxSize: 0x05E0
class UGeometryCacheComponent : public UMeshComponent
{ 
public:
	class UGeometryCache*                              GeometryCache;                                              // 0x0550   (0x0008)  
	bool                                               bRunning;                                                   // 0x0558   (0x0001)  
	bool                                               bLooping;                                                   // 0x0559   (0x0001)  
	bool                                               bExtrapolateFrames;                                         // 0x055A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x055B   (0x0001)  MISSED
	float                                              StartTimeOffset;                                            // 0x055C   (0x0004)  
	float                                              playbackSpeed;                                              // 0x0560   (0x0004)  
	float                                              MotionVectorScale;                                          // 0x0564   (0x0004)  
	int32_t                                            NumTracks;                                                  // 0x0568   (0x0004)  
	float                                              ElapsedTime;                                                // 0x056C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4C];                                      // 0x0570   (0x004C)  MISSED
	float                                              Duration;                                                   // 0x05BC   (0x0004)  
	bool                                               bManualTick;                                                // 0x05C0   (0x0001)  
	bool                                               bOverrideWireframeColor;                                    // 0x05C1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x05C2   (0x0002)  MISSED
	FLinearColor                                       WireframeOverrideColor;                                     // 0x05C4   (0x0010)  
	unsigned char                                      UnknownData03_7[0xC];                                       // 0x05D4   (0x000C)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheComponent.TickAtThisTime
	// void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);                                // [0x8b79e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Stop
	// void Stop();                                                                                                             // [0x8b79e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetWireframeOverrideColor
	// void SetWireframeOverrideColor(FLinearColor Color);                                                                      // [0x8b79d90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	// void SetStartTimeOffset(float NewStartTimeOffset);                                                                       // [0x8b79ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	// void SetPlaybackSpeed(float NewPlaybackSpeed);                                                                           // [0x8b79c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetOverrideWireframeColor
	// void SetOverrideWireframeColor(bool bOverride);                                                                          // [0x8b79bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetMotionVectorScale
	// void SetMotionVectorScale(float NewMotionVectorScale);                                                                   // [0x8b79b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetLooping
	// void SetLooping(bool bNewLooping);                                                                                       // [0x8b79810] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetGeometryCache
	// bool SetGeometryCache(class UGeometryCache* NewGeomCache);                                                               // [0x8b79770] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
	// void SetExtrapolateFrames(bool bNewExtrapolating);                                                                       // [0x8b796e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	// void PlayReversedFromEnd();                                                                                              // [0x8b79680] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversed
	// void PlayReversed();                                                                                                     // [0x8b79630] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayFromStart
	// void PlayFromStart();                                                                                                    // [0x8b795d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Play
	// void Play();                                                                                                             // [0x8b79580] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Pause
	// void Pause();                                                                                                            // [0x8b79550] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlayingReversed
	// bool IsPlayingReversed();                                                                                                // [0x8b79510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x8b794f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsLooping
	// bool IsLooping();                                                                                                        // [0x8b794d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
	// bool IsExtrapolatingFrames();                                                                                            // [0x8b794b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetWireframeOverrideColor
	// FLinearColor GetWireframeOverrideColor();                                                                                // [0x8b79480] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	// float GetStartTimeOffset();                                                                                              // [0x8b79460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	// float GetPlaybackSpeed();                                                                                                // [0x8b79420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	// float GetPlaybackDirection();                                                                                            // [0x8b79400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetOverrideWireframeColor
	// bool GetOverrideWireframeColor();                                                                                        // [0x8b793e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	// int32_t GetNumberOfFrames();                                                                                             // [0x8b793a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetMotionVectorScale
	// float GetMotionVectorScale();                                                                                            // [0x8b79360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetDuration
	// float GetDuration();                                                                                                     // [0x8b79340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetAnimationTime
	// float GetAnimationTime();                                                                                                // [0x8b79300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheTrack
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UGeometryCacheTrack : public UObject
{ 
public:
	float                                              Duration;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x2C];                                      // 0x002C   (0x002C)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation
/// Size: 0x0080 (128 bytes) (0x000058 - 0x000080) align 8 MaxSize: 0x0080
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{ 
public:
	uint32_t                                           NumMeshSamples;                                             // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_7[0x24];                                      // 0x005C   (0x0024)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	// void AddMeshSample(FGeometryCacheMeshData& MeshData, float SampleTime);                                                  // [0x8b78ff0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrackStreamable
/// Size: 0x00D0 (208 bytes) (0x000058 - 0x0000D0) align 8 MaxSize: 0x00D0
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{ 
public:
	class UGeometryCacheCodecBase*                     Codec;                                                      // 0x0058   (0x0008)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0060   (0x0060)  MISSED
	float                                              StartSampleTime;                                            // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x00C4   (0x000C)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformAnimation
/// Size: 0x0120 (288 bytes) (0x000058 - 0x000120) align 8 MaxSize: 0x0120
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0058   (0x00C8)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
	// void SetMesh(FGeometryCacheMeshData& NewMeshData);                                                                       // [0x8b798a0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation
/// Size: 0x0120 (288 bytes) (0x000058 - 0x000120) align 8 MaxSize: 0x0120
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0058   (0x00C8)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
	// void SetMesh(FGeometryCacheMeshData& NewMeshData);                                                                       // [0x8b798a0] Final|Native|Public|HasOutParms 
};

/// Struct /Script/GeometryCache.NiagaraGeometryCacheMICOverride
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraGeometryCacheMICOverride
{ 
	class UMaterialInterface*                          OriginalMaterial;                                           // 0x0000   (0x0008)  
	class UMaterialInstanceConstant*                   ReplacementMaterial;                                        // 0x0008   (0x0008)  
};

/// Struct /Script/GeometryCache.NiagaraGeometryCacheReference
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FNiagaraGeometryCacheReference
{ 
	class UGeometryCache*                              GeometryCache;                                              // 0x0000   (0x0008)  
	FNiagaraUserParameterBinding                       GeometryCacheUserParamBinding;                              // 0x0008   (0x0020)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0028   (0x0010)  
	TArray<FNiagaraGeometryCacheMICOverride>           MICOverrideMaterials;                                       // 0x0038   (0x0010)  
};

/// Class /Script/GeometryCache.NiagaraGeometryCacheRendererProperties
/// Size: 0x02E8 (744 bytes) (0x0000C0 - 0x0002E8) align 8 MaxSize: 0x02E8
class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties
{ 
public:
	TArray<FNiagaraGeometryCacheReference>             GeometryCaches;                                             // 0x00C0   (0x0010)  
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x00D0   (0x0001)  
	bool                                               bIsLooping;                                                 // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00D2   (0x0002)  MISSED
	uint32_t                                           ComponentCountLimit;                                        // 0x00D4   (0x0004)  
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x00D8   (0x0038)  
	FNiagaraVariableAttributeBinding                   RotationBinding;                                            // 0x0110   (0x0038)  
	FNiagaraVariableAttributeBinding                   ScaleBinding;                                               // 0x0148   (0x0038)  
	FNiagaraVariableAttributeBinding                   ElapsedTimeBinding;                                         // 0x0180   (0x0038)  
	FNiagaraVariableAttributeBinding                   EnabledBinding;                                             // 0x01B8   (0x0038)  
	FNiagaraVariableAttributeBinding                   ArrayIndexBinding;                                          // 0x01F0   (0x0038)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0228   (0x0038)  
	int32_t                                            RendererVisibility;                                         // 0x0260   (0x0004)  
	bool                                               bAssignComponentsOnParticleID;                              // 0x0264   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0265   (0x0003)  MISSED
	FNiagaraRendererMaterialParameters                 MaterialParameters;                                         // 0x0268   (0x0050)  
	unsigned char                                      UnknownData02_7[0x30];                                      // 0x02B8   (0x0030)  MISSED
};

/// Struct /Script/GeometryCache.TrackRenderData
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FTrackRenderData
{ 
	unsigned char                                      UnknownData00_2[0xC0];                                      // 0x0000   (0x00C0)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshBatchInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryCacheMeshBatchInfo
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheVertexInfo
/// Size: 0x0009 (9 bytes) (0x000000 - 0x000009) align 1 MaxSize: 0x0009
struct FGeometryCacheVertexInfo
{ 
	unsigned char                                      UnknownData00_2[0x9];                                       // 0x0000   (0x0009)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshData
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FGeometryCacheMeshData
{ 
	unsigned char                                      UnknownData00_2[0xC8];                                      // 0x0000   (0x00C8)  MISSED
};

#pragma pack(pop)


