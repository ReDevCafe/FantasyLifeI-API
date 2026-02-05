
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Enum /Script/GeometryFramework.EDynamicMeshComponentTangentsMode
/// Size: 0x01 (1 bytes)
enum class EDynamicMeshComponentTangentsMode : uint8_t
{
	EDynamicMeshComponentTangentsMode__NoTangents                                    = 0,
	EDynamicMeshComponentTangentsMode__AutoCalculated                                = 1,
	EDynamicMeshComponentTangentsMode__ExternallyProvided                            = 2,
	EDynamicMeshComponentTangentsMode__Default                                       = 255
};

/// Enum /Script/GeometryFramework.EDynamicMeshComponentColorOverrideMode
/// Size: 0x01 (1 bytes)
enum class EDynamicMeshComponentColorOverrideMode : uint8_t
{
	EDynamicMeshComponentColorOverrideMode__None                                     = 0,
	EDynamicMeshComponentColorOverrideMode__VertexColors                             = 1,
	EDynamicMeshComponentColorOverrideMode__Polygroups                               = 2,
	EDynamicMeshComponentColorOverrideMode__Constant                                 = 3
};

/// Enum /Script/GeometryFramework.EDynamicMeshVertexColorTransformMode
/// Size: 0x01 (1 bytes)
enum class EDynamicMeshVertexColorTransformMode : uint8_t
{
	EDynamicMeshVertexColorTransformMode__NoTransform                                = 0,
	EDynamicMeshVertexColorTransformMode__LinearToSRGB                               = 1,
	EDynamicMeshVertexColorTransformMode__SRGBToLinear                               = 2
};

/// Enum /Script/GeometryFramework.EDynamicMeshComponentRenderUpdateMode
/// Size: 0x01 (1 bytes)
enum class EDynamicMeshComponentRenderUpdateMode : uint8_t
{
	EDynamicMeshComponentRenderUpdateMode__NoUpdate                                  = 0,
	EDynamicMeshComponentRenderUpdateMode__FullUpdate                                = 1,
	EDynamicMeshComponentRenderUpdateMode__FastUpdate                                = 2
};

/// Enum /Script/GeometryFramework.EDynamicMeshChangeType
/// Size: 0x01 (1 bytes)
enum class EDynamicMeshChangeType : uint8_t
{
	EDynamicMeshChangeType__GeneralEdit                                              = 0,
	EDynamicMeshChangeType__MeshChange                                               = 1,
	EDynamicMeshChangeType__MeshReplacementChange                                    = 2,
	EDynamicMeshChangeType__MeshVertexChange                                         = 3,
	EDynamicMeshChangeType__DeformationEdit                                          = 4,
	EDynamicMeshChangeType__AttributeEdit                                            = 5
};

/// Enum /Script/GeometryFramework.EDynamicMeshAttributeChangeFlags
/// Size: 0x01 (1 bytes)
enum class EDynamicMeshAttributeChangeFlags : uint8_t
{
	EDynamicMeshAttributeChangeFlags__Unknown                                        = 0,
	EDynamicMeshAttributeChangeFlags__MeshTopology                                   = 1,
	EDynamicMeshAttributeChangeFlags__VertexPositions                                = 2,
	EDynamicMeshAttributeChangeFlags__NormalsTangents                                = 4,
	EDynamicMeshAttributeChangeFlags__VertexColors                                   = 8,
	EDynamicMeshAttributeChangeFlags__UVs                                            = 16,
	EDynamicMeshAttributeChangeFlags__TriangleGroups                                 = 32
};

/// Class /Script/GeometryFramework.MeshCommandChangeTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshCommandChangeTarget : public UInterface
{ 
public:
};

/// Class /Script/GeometryFramework.MeshReplacementCommandChangeTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshReplacementCommandChangeTarget : public UInterface
{ 
public:
};

/// Class /Script/GeometryFramework.MeshVertexCommandChangeTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshVertexCommandChangeTarget : public UInterface
{ 
public:
};

/// Class /Script/GeometryFramework.BaseDynamicMeshComponent
/// Size: 0x05C0 (1472 bytes) (0x000550 - 0x0005C0) align 16 MaxSize: 0x05C0
class UBaseDynamicMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0550   (0x0020)  MISSED
	bool                                               bExplicitShowWireframe;                                     // 0x0570   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0571   (0x0003)  MISSED
	FLinearColor                                       WireframeColor;                                             // 0x0574   (0x0010)  
	EDynamicMeshComponentColorOverrideMode             ColorMode;                                                  // 0x0584   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0585   (0x0003)  MISSED
	FColor                                             ConstantColor;                                              // 0x0588   (0x0004)  
	EDynamicMeshVertexColorTransformMode               ColorSpaceMode;                                             // 0x058C   (0x0001)  
	bool                                               bEnableFlatShading;                                         // 0x058D   (0x0001)  
	bool                                               bEnableViewModeOverrides;                                   // 0x058E   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1];                                       // 0x058F   (0x0001)  MISSED
	class UMaterialInterface*                          OverrideRenderMaterial;                                     // 0x0590   (0x0008)  
	class UMaterialInterface*                          SecondaryRenderMaterial;                                    // 0x0598   (0x0008)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x05A0   (0x0001)  MISSED
	bool                                               bEnableRayTracing;                                          // 0x05A1   (0x0001)  
	unsigned char                                      UnknownData05_6[0x6];                                       // 0x05A2   (0x0006)  MISSED
	TArray<class UMaterialInterface*>                  BaseMaterials;                                              // 0x05A8   (0x0010)  
	unsigned char                                      UnknownData06_7[0x8];                                       // 0x05B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetViewModeOverridesEnabled
	// void SetViewModeOverridesEnabled(bool bEnabled);                                                                         // [0x81dc8d0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetVertexColorSpaceTransformMode
	// void SetVertexColorSpaceTransformMode(EDynamicMeshVertexColorTransformMode NewMode);                                     // [0x81dc850] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetShadowsEnabled
	// void SetShadowsEnabled(bool bEnabled);                                                                                   // [0x81dc730] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetSecondaryRenderMaterial
	// void SetSecondaryRenderMaterial(class UMaterialInterface* Material);                                                     // [0x81dc6a0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetSecondaryBuffersVisibility
	// void SetSecondaryBuffersVisibility(bool bSetVisible);                                                                    // [0x81dc610] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetOverrideRenderMaterial
	// void SetOverrideRenderMaterial(class UMaterialInterface* Material);                                                      // [0x81dc580] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableWireframeRenderPass
	// void SetEnableWireframeRenderPass(bool bEnable);                                                                         // [0x81dc4f0] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableRaytracing
	// void SetEnableRaytracing(bool bSetEnabled);                                                                              // [0x81dc460] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableFlatShading
	// void SetEnableFlatShading(bool bEnable);                                                                                 // [0x81dc3d0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetConstantOverrideColor
	// void SetConstantOverrideColor(FColor NewColor);                                                                          // [0x81dc100] RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetColorOverrideMode
	// void SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode);                                               // [0x81dbfb0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.HasOverrideRenderMaterial
	// bool HasOverrideRenderMaterial(int32_t K);                                                                               // [0x81db870] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetViewModeOverridesEnabled
	// bool GetViewModeOverridesEnabled();                                                                                      // [0x81db840] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetVertexColorSpaceTransformMode
	// EDynamicMeshVertexColorTransformMode GetVertexColorSpaceTransformMode();                                                 // [0x81db810] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetShadowsEnabled
	// bool GetShadowsEnabled();                                                                                                // [0x81db780] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetSecondaryRenderMaterial
	// class UMaterialInterface* GetSecondaryRenderMaterial();                                                                  // [0x81db750] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetSecondaryBuffersVisibility
	// bool GetSecondaryBuffersVisibility();                                                                                    // [0x81db720] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetOverrideRenderMaterial
	// class UMaterialInterface* GetOverrideRenderMaterial(int32_t MaterialIndex);                                              // [0x81db680] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetFlatShadingEnabled
	// bool GetFlatShadingEnabled();                                                                                            // [0x81db650] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetEnableWireframeRenderPass
	// bool GetEnableWireframeRenderPass();                                                                                     // [0x81db620] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetEnableRaytracing
	// bool GetEnableRaytracing();                                                                                              // [0x81db5f0] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetDynamicMesh
	// class UDynamicMesh* GetDynamicMesh();                                                                                    // [0x81db5c0] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetConstantOverrideColor
	// FColor GetConstantOverrideColor();                                                                                       // [0x81db580] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetColorOverrideMode
	// EDynamicMeshComponentColorOverrideMode GetColorOverrideMode();                                                           // [0x81db520] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.ClearSecondaryRenderMaterial
	// void ClearSecondaryRenderMaterial();                                                                                     // [0x81db2e0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.ClearOverrideRenderMaterial
	// void ClearOverrideRenderMaterial();                                                                                      // [0x81db2c0] RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryFramework.DynamicMeshComponent
/// Size: 0x0820 (2080 bytes) (0x0005C0 - 0x000820) align 16 MaxSize: 0x0820
class UDynamicMeshComponent : public UBaseDynamicMeshComponent
{ 
public:
	class UDynamicMesh*                                MeshObject;                                                 // 0x05C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x138];                                     // 0x05C8   (0x0138)  MISSED
	EDynamicMeshComponentTangentsMode                  TangentsType;                                               // 0x0700   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3F];                                      // 0x0701   (0x003F)  MISSED
	TEnumAsByte<ECollisionTraceFlag>                   CollisionType;                                              // 0x0740   (0x0001)  
	bool                                               bUseAsyncCooking;                                           // 0x0741   (0x0001)  
	bool                                               bEnableComplexCollision;                                    // 0x0742   (0x0001)  
	bool                                               bDeferCollisionUpdates;                                     // 0x0743   (0x0001)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0744   (0x0004)  MISSED
	class UBodySetup*                                  MeshBodySetup;                                              // 0x0748   (0x0008)  
	unsigned char                                      UnknownData03_6[0x38];                                      // 0x0750   (0x0038)  MISSED
	FKAggregateGeom                                    AggGeom;                                                    // 0x0788   (0x0080)  
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                        // 0x0808   (0x0010)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x0818   (0x0008)  MISSED


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshComponent.ValidateMaterialSlots
	// bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots);                                               // [0x81dc9f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.UpdateCollision
	// void UpdateCollision(bool bOnlyIfPending);                                                                               // [0x81dc960] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetTangentsType
	// void SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType);                                                 // [0x81dc7c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetDynamicMesh
	// void SetDynamicMesh(class UDynamicMesh* NewMesh);                                                                        // [0x81dc270] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetDeferredCollisionUpdatesEnabled
	// void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate);                                           // [0x81dc180] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetComplexAsSimpleCollisionEnabled
	// void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate);                                           // [0x81dc030] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.NotifyMeshVertexAttributesModified
	// void NotifyMeshVertexAttributesModified(bool bPositions, bool bNormals, bool bUVs, bool bColors);                        // [0x81db960] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.NotifyMeshModified
	// void NotifyMeshModified();                                                                                               // [0x81db940] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.GetTangentsTypePure
	// EDynamicMeshComponentTangentsMode GetTangentsTypePure();                                                                 // [0x81db7b0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshComponent.GetTangentsType
	// EDynamicMeshComponentTangentsMode GetTangentsType();                                                                     // [0x81db7b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshComponent.EnableComplexAsSimpleCollision
	// void EnableComplexAsSimpleCollision();                                                                                   // [0x81db3e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.ConfigureMaterialSet
	// void ConfigureMaterialSet(TArray<UMaterialInterface*>& NewMaterialSet);                                                  // [0x81db300] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryFramework.DynamicMeshActor
/// Size: 0x02A8 (680 bytes) (0x000290 - 0x0002A8) align 8 MaxSize: 0x02A8
class ADynamicMeshActor : public AActor
{ 
public:
	class UDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x0290   (0x0008)  
	bool                                               bEnableComputeMeshPool;                                     // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0299   (0x0007)  MISSED
	class UDynamicMeshPool*                            DynamicMeshPool;                                            // 0x02A0   (0x0008)  


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshActor.ReleaseComputeMesh
	// bool ReleaseComputeMesh(class UDynamicMesh* Mesh);                                                                       // [0x81dbb20] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.ReleaseAllComputeMeshes
	// void ReleaseAllComputeMeshes();                                                                                          // [0x81dbae0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.GetDynamicMeshComponent
	// class UDynamicMeshComponent* GetDynamicMeshComponent();                                                                  // [0x4fa0150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshActor.GetComputeMeshPool
	// class UDynamicMeshPool* GetComputeMeshPool();                                                                            // [0x81db550] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.FreeAllComputeMeshes
	// void FreeAllComputeMeshes();                                                                                             // [0x81db450] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.AllocateComputeMesh
	// class UDynamicMesh* AllocateComputeMesh();                                                                               // [0x81db250] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryFramework.DynamicMeshGenerator
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDynamicMeshGenerator : public UObject
{ 
public:
};

/// Class /Script/GeometryFramework.DynamicMesh
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align 8 MaxSize: 0x00B0
class UDynamicMesh : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x0028   (0x0048)  MISSED
	SDK_UNDEFINED(16,691) /* FMulticastInlineDelegate */ __um(MeshModifiedBPEvent);                                // 0x0070   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0080   (0x0020)  MISSED
	class UDynamicMeshGenerator*                       MeshGenerator;                                              // 0x00A0   (0x0008)  
	bool                                               bEnableMeshGenerator;                                       // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00A9   (0x0007)  MISSED


	/// Functions
	// Function /Script/GeometryFramework.DynamicMesh.ResetToCube
	// class UDynamicMesh* ResetToCube();                                                                                       // [0x81dbd00] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMesh.Reset
	// class UDynamicMesh* Reset();                                                                                             // [0x81dbcd0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMesh.IsEmpty
	// bool IsEmpty();                                                                                                          // [0x81db910] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMesh.GetTriangleCount
	// int32_t GetTriangleCount();                                                                                              // [0x81db7e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryFramework.DynamicMeshPool
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UDynamicMeshPool : public UObject
{ 
public:
	TArray<class UDynamicMesh*>                        CachedMeshes;                                               // 0x0028   (0x0010)  
	TArray<class UDynamicMesh*>                        AllCreatedMeshes;                                           // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshPool.ReturnMesh
	// void ReturnMesh(class UDynamicMesh* Mesh);                                                                               // [0x81dbe50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.ReturnAllMeshes
	// void ReturnAllMeshes();                                                                                                  // [0x81dbe30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.RequestMesh
	// class UDynamicMesh* RequestMesh();                                                                                       // [0x81dbca0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.FreeAllMeshes
	// void FreeAllMeshes();                                                                                                    // [0x81db4c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Struct /Script/GeometryFramework.DynamicMeshChangeInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FDynamicMeshChangeInfo
{ 
	EDynamicMeshChangeType                             Type;                                                       // 0x0000   (0x0001)  
	EDynamicMeshAttributeChangeFlags                   Flags;                                                      // 0x0001   (0x0001)  
	bool                                               bIsRevertChange;                                            // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1D];                                      // 0x0003   (0x001D)  MISSED
};

#pragma pack(pop)


