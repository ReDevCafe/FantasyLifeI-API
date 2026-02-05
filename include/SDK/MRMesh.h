
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/MRMesh.EMeshTrackerVertexColorMode
/// Size: 0x01 (1 bytes)
enum class EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None                                                = 0,
	EMeshTrackerVertexColorMode__Confidence                                          = 1,
	EMeshTrackerVertexColorMode__Block                                               = 2
};

/// Class /Script/MRMesh.MockDataMeshTrackerComponent
/// Size: 0x02A0 (672 bytes) (0x000230 - 0x0002A0) align 16 MaxSize: 0x02A0
class UMockDataMeshTrackerComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,1182) /* FMulticastInlineDelegate */ __um(OnMeshTrackerUpdated);                              // 0x0230   (0x0010)  
	bool                                               ScanWorld;                                                  // 0x0240   (0x0001)  
	bool                                               RequestNormals;                                             // 0x0241   (0x0001)  
	bool                                               RequestVertexConfidence;                                    // 0x0242   (0x0001)  
	EMeshTrackerVertexColorMode                        VertexColorMode;                                            // 0x0243   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0244   (0x0004)  MISSED
	TArray<FColor>                                     BlockVertexColors;                                          // 0x0248   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x0258   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x0268   (0x0010)  
	float                                              UpdateInterval;                                             // 0x0278   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x027C   (0x0004)  MISSED
	class UMRMeshComponent*                            MRMesh;                                                     // 0x0280   (0x0008)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0288   (0x0018)  MISSED


	/// Functions
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	// void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x35d7f00] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	// void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x545dd90] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0x545dcc0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MRMeshBodyHolder
/// Size: 0x0238 (568 bytes) (0x000028 - 0x000238) align 8 MaxSize: 0x0238
class UMRMeshBodyHolder : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UBodySetup*                                  BodySetup;                                                  // 0x0030   (0x0008)  
	FBodyInstance                                      BodyInstance;                                               // 0x0038   (0x0198)  
	unsigned char                                      UnknownData01_7[0x68];                                      // 0x01D0   (0x0068)  MISSED
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x05A0 (1440 bytes) (0x000518 - 0x0005A0) align 16 MaxSize: 0x05A0
class UMRMeshComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0518   (0x0008)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0520   (0x0008)  
	class UMaterialInterface*                          WireframeMaterial;                                          // 0x0528   (0x0008)  
	bool                                               bCreateMeshProxySections;                                   // 0x0530   (0x0001)  
	bool                                               bUpdateNavMeshOnMeshUpdate;                                 // 0x0531   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0532   (0x0001)  MISSED
	bool                                               bNeverCreateCollisionMesh;                                  // 0x0533   (0x0001)  
	unsigned char                                      UnknownData02_6[0x44];                                      // 0x0534   (0x0044)  MISSED
	TArray<class UMRMeshBodyHolder*>                   BodyHolders;                                                // 0x0578   (0x0010)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x0588   (0x0018)  MISSED


	/// Functions
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeMaterial
	// void SetWireframeMaterial(class UMaterialInterface* InMaterial);                                                         // [0x545e2a0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeColor
	// void SetWireframeColor(FLinearColor& InColor);                                                                           // [0x545e210] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetUseWireframe
	// void SetUseWireframe(bool bUseWireframe);                                                                                // [0x545e180] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	// void SetEnableMeshOcclusion(bool bEnable);                                                                               // [0x545df80] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.RequestNavMeshUpdate
	// void RequestNavMeshUpdate();                                                                                             // [0x545df40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.IsConnected
	// bool IsConnected();                                                                                                      // [0x545ded0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetWireframeColor
	// FLinearColor GetWireframeColor();                                                                                        // [0x545dea0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetUseWireframe
	// bool GetUseWireframe();                                                                                                  // [0x545de80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	// bool GetEnableMeshOcclusion();                                                                                           // [0x545de60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate
	// void ForceNavMeshUpdate();                                                                                               // [0x545de30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.Clear
	// void Clear();                                                                                                            // [0x545dc00] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshReconstructorBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/MRMesh.MeshReconstructorBase.StopReconstruction
	// void StopReconstruction();                                                                                               // [0x545e350] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.StartReconstruction
	// void StartReconstruction();                                                                                              // [0x545e330] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.PauseReconstruction
	// void PauseReconstruction();                                                                                              // [0x42e04f0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionStarted
	// bool IsReconstructionStarted();                                                                                          // [0x5336a10] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionPaused
	// bool IsReconstructionPaused();                                                                                           // [0x545df10] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.DisconnectMRMesh
	// void DisconnectMRMesh();                                                                                                 // [0x42e0210] RequiredAPI|Native|Public 
	// Function /Script/MRMesh.MeshReconstructorBase.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* Mesh);                                                                        // [0x545dc30] RequiredAPI|Native|Public 
};

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMRMeshConfiguration
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


