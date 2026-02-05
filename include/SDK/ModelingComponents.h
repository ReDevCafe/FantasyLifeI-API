
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GeometryFramework
/// dependency: InteractiveToolsFramework
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Enum /Script/ModelingComponents.EBakeTextureResolution
/// Size: 0x04 (4 bytes)
enum class EBakeTextureResolution : uint32_t
{
	EBakeTextureResolution__Resolution16                                             = 16,
	EBakeTextureResolution__Resolution32                                             = 32,
	EBakeTextureResolution__Resolution64                                             = 64,
	EBakeTextureResolution__Resolution128                                            = 128,
	EBakeTextureResolution__Resolution256                                            = 256,
	EBakeTextureResolution__Resolution512                                            = 512,
	EBakeTextureResolution__Resolution1024                                           = 1024,
	EBakeTextureResolution__Resolution2048                                           = 2048,
	EBakeTextureResolution__Resolution4096                                           = 4096,
	EBakeTextureResolution__Resolution8192                                           = 8192
};

/// Enum /Script/ModelingComponents.EBakeTextureBitDepth
/// Size: 0x04 (4 bytes)
enum class EBakeTextureBitDepth : uint32_t
{
	EBakeTextureBitDepth__ChannelBits8                                               = 0,
	EBakeTextureBitDepth__ChannelBits16                                              = 1
};

/// Enum /Script/ModelingComponents.EBakeTextureSamplesPerPixel
/// Size: 0x04 (4 bytes)
enum class EBakeTextureSamplesPerPixel : uint32_t
{
	EBakeTextureSamplesPerPixel__Sample1                                             = 1,
	EBakeTextureSamplesPerPixel__Sample4                                             = 4,
	EBakeTextureSamplesPerPixel__Sample16                                            = 16,
	EBakeTextureSamplesPerPixel__Sample64                                            = 64,
	EBakeTextureSamplesPerPixel__Sample256                                           = 256
};

/// Enum /Script/ModelingComponents.EGeometrySelectionElementType
/// Size: 0x01 (1 bytes)
enum class EGeometrySelectionElementType : uint8_t
{
	EGeometrySelectionElementType__Vertex                                            = 1,
	EGeometrySelectionElementType__Edge                                              = 2,
	EGeometrySelectionElementType__Face                                              = 4
};

/// Enum /Script/ModelingComponents.EGeometrySelectionTopologyType
/// Size: 0x01 (1 bytes)
enum class EGeometrySelectionTopologyType : uint8_t
{
	EGeometrySelectionTopologyType__Triangle                                         = 1,
	EGeometrySelectionTopologyType__Polygroup                                        = 2
};

/// Enum /Script/ModelingComponents.EMarqueeSelectionUpdateType
/// Size: 0x04 (4 bytes)
enum class EMarqueeSelectionUpdateType : uint32_t
{
	EMarqueeSelectionUpdateType__OnDrag                                              = 0,
	EMarqueeSelectionUpdateType__OnTickAndRelease                                    = 1,
	EMarqueeSelectionUpdateType__OnRelease                                           = 2
};

/// Enum /Script/ModelingComponents.EBaseCreateFromSelectedTargetType
/// Size: 0x04 (4 bytes)
enum class EBaseCreateFromSelectedTargetType : uint32_t
{
	EBaseCreateFromSelectedTargetType__NewObject                                     = 0,
	EBaseCreateFromSelectedTargetType__FirstInputObject                              = 1,
	EBaseCreateFromSelectedTargetType__LastInputObject                               = 2
};

/// Enum /Script/ModelingComponents.EUVLayoutPreviewSide
/// Size: 0x04 (4 bytes)
enum class EUVLayoutPreviewSide : uint32_t
{
	EUVLayoutPreviewSide__Left                                                       = 0,
	EUVLayoutPreviewSide__Right                                                      = 1
};

/// Enum /Script/ModelingComponents.ESpaceCurveControlPointTransformMode
/// Size: 0x04 (4 bytes)
enum class ESpaceCurveControlPointTransformMode : uint32_t
{
	ESpaceCurveControlPointTransformMode__Shared                                     = 0,
	ESpaceCurveControlPointTransformMode__PerVertex                                  = 1
};

/// Enum /Script/ModelingComponents.ESpaceCurveControlPointOriginMode
/// Size: 0x04 (4 bytes)
enum class ESpaceCurveControlPointOriginMode : uint32_t
{
	ESpaceCurveControlPointOriginMode__Shared                                        = 0,
	ESpaceCurveControlPointOriginMode__First                                         = 1,
	ESpaceCurveControlPointOriginMode__Last                                          = 2
};

/// Enum /Script/ModelingComponents.ESpaceCurveControlPointFalloffType
/// Size: 0x04 (4 bytes)
enum class ESpaceCurveControlPointFalloffType : uint32_t
{
	ESpaceCurveControlPointFalloffType__Linear                                       = 0,
	ESpaceCurveControlPointFalloffType__Smooth                                       = 1
};

/// Enum /Script/ModelingComponents.EModelingComponentsPlaneVisualizationMode
/// Size: 0x01 (1 bytes)
enum class EModelingComponentsPlaneVisualizationMode : uint8_t
{
	EModelingComponentsPlaneVisualizationMode__SimpleGrid                            = 0,
	EModelingComponentsPlaneVisualizationMode__HierarchicalGrid                      = 1,
	EModelingComponentsPlaneVisualizationMode__FixedScreenAreaGrid                   = 2
};

/// Enum /Script/ModelingComponents.ECreateModelingObjectResult
/// Size: 0x01 (1 bytes)
enum class ECreateModelingObjectResult : uint8_t
{
	ECreateModelingObjectResult__Ok                                                  = 0,
	ECreateModelingObjectResult__Cancelled                                           = 1,
	ECreateModelingObjectResult__Failed_Unknown                                      = 2,
	ECreateModelingObjectResult__Failed_NoAPIFound                                   = 3,
	ECreateModelingObjectResult__Failed_InvalidWorld                                 = 4,
	ECreateModelingObjectResult__Failed_InvalidMesh                                  = 5,
	ECreateModelingObjectResult__Failed_InvalidTexture                               = 6,
	ECreateModelingObjectResult__Failed_AssetCreationFailed                          = 7,
	ECreateModelingObjectResult__Failed_ActorCreationFailed                          = 8,
	ECreateModelingObjectResult__Failed_InvalidMaterial                              = 9
};

/// Enum /Script/ModelingComponents.ECreateMeshObjectSourceMeshType
/// Size: 0x01 (1 bytes)
enum class ECreateMeshObjectSourceMeshType : uint8_t
{
	ECreateMeshObjectSourceMeshType__MeshDescription                                 = 0,
	ECreateMeshObjectSourceMeshType__DynamicMesh                                     = 1
};

/// Enum /Script/ModelingComponents.ECreateObjectTypeHint
/// Size: 0x01 (1 bytes)
enum class ECreateObjectTypeHint : uint8_t
{
	ECreateObjectTypeHint__Undefined                                                 = 0,
	ECreateObjectTypeHint__StaticMesh                                                = 1,
	ECreateObjectTypeHint__Volume                                                    = 2,
	ECreateObjectTypeHint__DynamicMeshActor                                          = 3
};

/// Enum /Script/ModelingComponents.EHandleSourcesMethod
/// Size: 0x01 (1 bytes)
enum class EHandleSourcesMethod : uint8_t
{
	EHandleSourcesMethod__DeleteSources                                              = 0,
	EHandleSourcesMethod__HideSources                                                = 1,
	EHandleSourcesMethod__KeepSources                                                = 2,
	EHandleSourcesMethod__KeepFirstSource                                            = 3,
	EHandleSourcesMethod__KeepLastSource                                             = 4
};

/// Enum /Script/ModelingComponents.EMultiTransformerMode
/// Size: 0x01 (1 bytes)
enum class EMultiTransformerMode : uint8_t
{
	EMultiTransformerMode__DefaultGizmo                                              = 1,
	EMultiTransformerMode__QuickAxisTranslation                                      = 2
};

/// Class /Script/ModelingComponents.MeshTopologySelectionMechanic
/// Size: 0x0B30 (2864 bytes) (0x000030 - 0x000B30) align 16 MaxSize: 0x0B30
class UMeshTopologySelectionMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x0030   (0x0048)  MISSED
	class UMeshTopologySelectionMechanicProperties*    Properties;                                                 // 0x0078   (0x0008)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x0080   (0x0060)  MISSED
	class UMouseHoverBehavior*                         HoverBehavior;                                              // 0x00E0   (0x0008)  
	class USingleClickOrDragInputBehavior*             ClickOrDragBehavior;                                        // 0x00E8   (0x0008)  
	class URectangleMarqueeMechanic*                   MarqueeMechanic;                                            // 0x00F0   (0x0008)  
	EMarqueeSelectionUpdateType                        MarqueeSelectionUpdateType;                                 // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x604];                                     // 0x00FC   (0x0604)  MISSED
	class APreviewGeometryActor*                       PreviewGeometryActor;                                       // 0x0700   (0x0008)  
	class UTriangleSetComponent*                       DrawnTriangleSetComponent;                                  // 0x0708   (0x0008)  
	unsigned char                                      UnknownData03_6[0x50];                                      // 0x0710   (0x0050)  MISSED
	class UMaterialInterface*                          HighlightedFaceMaterial;                                    // 0x0760   (0x0008)  
	unsigned char                                      UnknownData04_7[0x3C8];                                     // 0x0768   (0x03C8)  MISSED
};

/// Class /Script/ModelingComponents.BoundarySelectionMechanic
/// Size: 0x0B30 (2864 bytes) (0x000B30 - 0x000B30) align 16 MaxSize: 0x0B30
class UBoundarySelectionMechanic : public UMeshTopologySelectionMechanic
{ 
public:
};

/// Class /Script/ModelingComponents.DynamicMeshCommitter
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDynamicMeshCommitter : public UInterface
{ 
public:
};

/// Class /Script/ModelingComponents.DynamicMeshProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDynamicMeshProvider : public UInterface
{ 
public:
};

/// Class /Script/ModelingComponents.PersistentDynamicMeshSource
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPersistentDynamicMeshSource : public UInterface
{ 
public:
};

/// Class /Script/ModelingComponents.GeometrySelectionVisualizationProperties
/// Size: 0x0108 (264 bytes) (0x0000A8 - 0x000108) align 8 MaxSize: 0x0108
class UGeometrySelectionVisualizationProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bEnableShowTriangleROIBorder;                               // 0x00A8   (0x0001)  
	bool                                               bEnableShowEdgeSelectionVertices;                           // 0x00A9   (0x0001)  
	EGeometrySelectionElementType                      SelectionElementType;                                       // 0x00AA   (0x0001)  
	EGeometrySelectionTopologyType                     SelectionTopologyType;                                      // 0x00AB   (0x0001)  
	bool                                               bShowSelection;                                             // 0x00AC   (0x0001)  
	bool                                               bShowTriangleROIBorder;                                     // 0x00AD   (0x0001)  
	bool                                               bShowHidden;                                                // 0x00AE   (0x0001)  
	bool                                               bShowEdgeSelectionVertices;                                 // 0x00AF   (0x0001)  
	float                                              LineThickness;                                              // 0x00B0   (0x0004)  
	float                                              PointSize;                                                  // 0x00B4   (0x0004)  
	float                                              DepthBias;                                                  // 0x00B8   (0x0004)  
	FColor                                             FaceColor;                                                  // 0x00BC   (0x0004)  
	FColor                                             LineColor;                                                  // 0x00C0   (0x0004)  
	FColor                                             PointColor;                                                 // 0x00C4   (0x0004)  
	FColor                                             TriangleROIBorderColor;                                     // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	class UMaterialInterface*                          TriangleMaterial;                                           // 0x00D0   (0x0008)  
	class UMaterialInterface*                          LineMaterial;                                               // 0x00D8   (0x0008)  
	class UMaterialInterface*                          PointMaterial;                                              // 0x00E0   (0x0008)  
	class UMaterialInterface*                          TriangleMaterialShowingHidden;                              // 0x00E8   (0x0008)  
	class UMaterialInterface*                          LineMaterialShowingHidden;                                  // 0x00F0   (0x0008)  
	class UMaterialInterface*                          PointMaterialShowingHidden;                                 // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0100   (0x0008)  MISSED
};

/// Class /Script/ModelingComponents.InteractiveToolActivity
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInteractiveToolActivity : public UInteractionMechanic
{ 
public:
};

/// Class /Script/ModelingComponents.ToolActivityHost
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UToolActivityHost : public UInterface
{ 
public:
};

/// Class /Script/ModelingComponents.MeshTopologySelectionMechanicProperties
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UMeshTopologySelectionMechanicProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bSelectVertices;                                            // 0x00A8   (0x0001)  
	bool                                               bSelectEdges;                                               // 0x00A9   (0x0001)  
	bool                                               bSelectFaces;                                               // 0x00AA   (0x0001)  
	bool                                               bSelectEdgeLoops;                                           // 0x00AB   (0x0001)  
	bool                                               bSelectEdgeRings;                                           // 0x00AC   (0x0001)  
	bool                                               bHitBackFaces;                                              // 0x00AD   (0x0001)  
	bool                                               bEnableMarquee;                                             // 0x00AE   (0x0001)  
	bool                                               bMarqueeIgnoreOcclusion;                                    // 0x00AF   (0x0001)  
	bool                                               bPreferProjectedElement;                                    // 0x00B0   (0x0001)  
	bool                                               bSelectDownRay;                                             // 0x00B1   (0x0001)  
	bool                                               bIgnoreOcclusion;                                           // 0x00B2   (0x0001)  
	unsigned char                                      UnknownData00_7[0xD];                                       // 0x00B3   (0x000D)  MISSED


	/// Functions
	// Function /Script/ModelingComponents.MeshTopologySelectionMechanicProperties.SelectAll
	// void SelectAll();                                                                                                        // [0x82082a0] Final|Native|Public  
	// Function /Script/ModelingComponents.MeshTopologySelectionMechanicProperties.InvertSelection
	// void InvertSelection();                                                                                                  // [0x8208280] Final|Native|Public  
};

/// Class /Script/ModelingComponents.GeometrySelectionEditCommandArguments
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UGeometrySelectionEditCommandArguments : public UInteractiveCommandArguments
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/ModelingComponents.GeometrySelectionEditCommandResult
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 8 MaxSize: 0x00A0
class UGeometrySelectionEditCommandResult : public UInteractiveCommandResult
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0028   (0x0078)  MISSED
};

/// Class /Script/ModelingComponents.GeometrySelectionEditCommand
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometrySelectionEditCommand : public UInteractiveCommand
{ 
public:
};

/// Class /Script/ModelingComponents.ToolHostCustomizationAPI
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UToolHostCustomizationAPI : public UInterface
{ 
public:
};

/// Class /Script/ModelingComponents.VoxelProperties
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UVoxelProperties : public UInteractiveToolPropertySet
{ 
public:
	int32_t                                            VoxelCount;                                                 // 0x00A8   (0x0004)  
	bool                                               bAutoSimplify;                                              // 0x00AC   (0x0001)  
	bool                                               bRemoveInternalSurfaces;                                    // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00AE   (0x0002)  MISSED
	double                                             SimplifyMaxErrorFactor;                                     // 0x00B0   (0x0008)  
	double                                             CubeRootMinComponentVolume;                                 // 0x00B8   (0x0008)  
};

/// Class /Script/ModelingComponents.MultiSelectionMeshEditingToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMultiSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{ 
public:
};

/// Class /Script/ModelingComponents.BaseCreateFromSelectedToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBaseCreateFromSelectedToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/ModelingComponents.OnAcceptHandleSourcesPropertiesBase
/// Size: 0x00A8 (168 bytes) (0x0000A8 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnAcceptHandleSourcesPropertiesBase : public UInteractiveToolPropertySet
{ 
public:
};

/// Class /Script/ModelingComponents.OnAcceptHandleSourcesProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnAcceptHandleSourcesProperties : public UOnAcceptHandleSourcesPropertiesBase
{ 
public:
	EHandleSourcesMethod                               HandleInputs;                                               // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
/// Size: 0x00D8 (216 bytes) (0x0000B0 - 0x0000D8) align 8 MaxSize: 0x00D8
class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
{ 
public:
	EBaseCreateFromSelectedTargetType                  OutputWriteTo;                                              // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FString                                            OutputNewName;                                              // 0x00B8   (0x0010)  
	FString                                            OutputExistingName;                                         // 0x00C8   (0x0010)  
};

/// Class /Script/ModelingComponents.BaseCreateFromSelectedCollisionProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UBaseCreateFromSelectedCollisionProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bTransferCollision;                                         // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/ModelingComponents.TransformInputsToolProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UTransformInputsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bShowTransformGizmo;                                        // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/ModelingComponents.MultiSelectionMeshEditingTool
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMultiSelectionMeshEditingTool : public UMultiSelectionTool
{ 
public:
	TWeakObjectPtr<class UWorld*>                      TargetWorld;                                                // 0x00B0   (0x0008)  
};

/// Class /Script/ModelingComponents.BaseCreateFromSelectedTool
/// Size: 0x0108 (264 bytes) (0x0000B8 - 0x000108) align 8 MaxSize: 0x0108
class UBaseCreateFromSelectedTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UTransformInputsToolProperties*              TransformProperties;                                        // 0x00C0   (0x0008)  
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x00C8   (0x0008)  
	class UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties;                                  // 0x00D0   (0x0008)  
	class UBaseCreateFromSelectedCollisionProperties*  CollisionProperties;                                        // 0x00D8   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00E0   (0x0008)  
	TArray<class UTransformProxy*>                     TransformProxies;                                           // 0x00E8   (0x0010)  
	TArray<class UCombinedTransformGizmo*>             TransformGizmos;                                            // 0x00F8   (0x0010)  
};

/// Class /Script/ModelingComponents.BaseMeshProcessingToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBaseMeshProcessingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{ 
public:
};

/// Class /Script/ModelingComponents.BaseMeshProcessingTool
/// Size: 0x0400 (1024 bytes) (0x0000A8 - 0x000400) align 16 MaxSize: 0x0400
class UBaseMeshProcessingTool : public USingleSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x00A8   (0x0020)  MISSED
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x330];                                     // 0x00D0   (0x0330)  MISSED
};

/// Class /Script/ModelingComponents.BaseVoxelTool
/// Size: 0x0120 (288 bytes) (0x000108 - 0x000120) align 8 MaxSize: 0x0120
class UBaseVoxelTool : public UBaseCreateFromSelectedTool
{ 
public:
	class UVoxelProperties*                            VoxProperties;                                              // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0110   (0x0010)  MISSED
};

/// Class /Script/ModelingComponents.MeshSurfacePointMeshEditingToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMeshSurfacePointMeshEditingToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
};

/// Class /Script/ModelingComponents.SingleSelectionMeshEditingToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USingleSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{ 
public:
};

/// Class /Script/ModelingComponents.SingleSelectionMeshEditingTool
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class USingleSelectionMeshEditingTool : public USingleSelectionTool
{ 
public:
	TWeakObjectPtr<class UWorld*>                      TargetWorld;                                                // 0x00A8   (0x0008)  
};

/// Class /Script/ModelingComponents.SingleTargetWithSelectionToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USingleTargetWithSelectionToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{ 
public:
};

/// Class /Script/ModelingComponents.SingleTargetWithSelectionTool
/// Size: 0x0120 (288 bytes) (0x0000A8 - 0x000120) align 8 MaxSize: 0x0120
class USingleTargetWithSelectionTool : public USingleSelectionTool
{ 
public:
	TWeakObjectPtr<class UWorld*>                      TargetWorld;                                                // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x00B0   (0x0060)  MISSED
	class UGeometrySelectionVisualizationProperties*   GeometrySelectionVizProperties;                             // 0x0110   (0x0008)  
	class UPreviewGeometry*                            GeometrySelectionViz;                                       // 0x0118   (0x0008)  
};

/// Class /Script/ModelingComponents.DynamicMeshReplacementChangeTarget
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UDynamicMeshReplacementChangeTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0028   (0x0030)  MISSED
};

/// Class /Script/ModelingComponents.OctreeDynamicMeshComponent
/// Size: 0x06D0 (1744 bytes) (0x0005C0 - 0x0006D0) align 16 MaxSize: 0x06D0
class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x50];                                      // 0x05C0   (0x0050)  MISSED
	class UDynamicMesh*                                MeshObject;                                                 // 0x0610   (0x0008)  
	unsigned char                                      UnknownData01_7[0xB8];                                      // 0x0618   (0x00B8)  MISSED


	/// Functions
	// Function /Script/ModelingComponents.OctreeDynamicMeshComponent.SetDynamicMesh
	// void SetDynamicMesh(class UDynamicMesh* NewMesh);                                                                        // [0x82082c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModelingComponents.LineSetComponent
/// Size: 0x05D0 (1488 bytes) (0x000550 - 0x0005D0) align 16 MaxSize: 0x05D0
class ULineSetComponent : public UMeshComponent
{ 
public:
	class UMaterialInterface*                          LineMaterial;                                               // 0x0550   (0x0008)  
	FBoxSphereBounds                                   Bounds;                                                     // 0x0558   (0x0038)  
	bool                                               bBoundsDirty;                                               // 0x0590   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3F];                                      // 0x0591   (0x003F)  MISSED
};

/// Class /Script/ModelingComponents.MeshElementsVisualizerProperties
/// Size: 0x00D8 (216 bytes) (0x0000A8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UMeshElementsVisualizerProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bVisible;                                                   // 0x00A8   (0x0001)  
	bool                                               bShowWireframe;                                             // 0x00A9   (0x0001)  
	bool                                               bShowBorders;                                               // 0x00AA   (0x0001)  
	bool                                               bShowUVSeams;                                               // 0x00AB   (0x0001)  
	bool                                               bShowNormalSeams;                                           // 0x00AC   (0x0001)  
	bool                                               bShowTangentSeams;                                          // 0x00AD   (0x0001)  
	bool                                               bShowColorSeams;                                            // 0x00AE   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00AF   (0x0001)  MISSED
	float                                              ThicknessScale;                                             // 0x00B0   (0x0004)  
	FColor                                             WireframeColor;                                             // 0x00B4   (0x0004)  
	FColor                                             BoundaryEdgeColor;                                          // 0x00B8   (0x0004)  
	FColor                                             UVSeamColor;                                                // 0x00BC   (0x0004)  
	FColor                                             NormalSeamColor;                                            // 0x00C0   (0x0004)  
	FColor                                             TangentSeamColor;                                           // 0x00C4   (0x0004)  
	FColor                                             ColorSeamColor;                                             // 0x00C8   (0x0004)  
	float                                              DepthBias;                                                  // 0x00CC   (0x0004)  
	bool                                               bAdjustDepthBiasUsingMeshSize;                              // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00D1   (0x0007)  MISSED
};

/// Class /Script/ModelingComponents.PreviewGeometry
/// Size: 0x0120 (288 bytes) (0x000028 - 0x000120) align 8 MaxSize: 0x0120
class UPreviewGeometry : public UObject
{ 
public:
	class APreviewGeometryActor*                       ParentActor;                                                // 0x0028   (0x0008)  
	TMap<FString, class UTriangleSetComponent*>        TriangleSets;                                               // 0x0030   (0x0050)  
	TMap<FString, class ULineSetComponent*>            LineSets;                                                   // 0x0080   (0x0050)  
	TMap<FString, class UPointSetComponent*>           PointSets;                                                  // 0x00D0   (0x0050)  


	/// Functions
	// Function /Script/ModelingComponents.PreviewGeometry.SetPointSetVisibility
	// bool SetPointSetVisibility(FString PointSetIdentifier, bool bVisible);                                                   // [0x825aae0] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.SetPointSetMaterial
	// bool SetPointSetMaterial(FString PointSetIdentifier, class UMaterialInterface* NewMaterial);                             // [0x825a960] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.SetLineSetVisibility
	// bool SetLineSetVisibility(FString LineSetIdentifier, bool bVisible);                                                     // [0x825a800] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.SetLineSetMaterial
	// bool SetLineSetMaterial(FString LineSetIdentifier, class UMaterialInterface* NewMaterial);                               // [0x825a6b0] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.SetAllPointSetsMaterial
	// void SetAllPointSetsMaterial(class UMaterialInterface* Material);                                                        // [0x825a620] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
	// void SetAllLineSetsMaterial(class UMaterialInterface* Material);                                                         // [0x825a590] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemoveTriangleSet
	// bool RemoveTriangleSet(FString TriangleSetIdentifier, bool bDestroy);                                                    // [0x825a420] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemovePointSet
	// bool RemovePointSet(FString PointSetIdentifier, bool bDestroy);                                                          // [0x825a2a0] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemoveLineSet
	// bool RemoveLineSet(FString LineSetIdentifier, bool bDestroy);                                                            // [0x825a120] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemoveAllTriangleSets
	// void RemoveAllTriangleSets(bool bDestroy);                                                                               // [0x825a090] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemoveAllPointSets
	// void RemoveAllPointSets(bool bDestroy);                                                                                  // [0x825a000] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemoveAllLineSets
	// void RemoveAllLineSets(bool bDestroy);                                                                                   // [0x8259f70] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.GetActor
	// class APreviewGeometryActor* GetActor();                                                                                 // [0x6087ad0] Final|Native|Public|Const 
	// Function /Script/ModelingComponents.PreviewGeometry.FindTriangleSet
	// class UTriangleSetComponent* FindTriangleSet(FString TriangleSetIdentifier);                                             // [0x8259e80] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.FindPointSet
	// class UPointSetComponent* FindPointSet(FString PointSetIdentifier);                                                      // [0x8259d80] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.FindLineSet
	// class ULineSetComponent* FindLineSet(FString LineSetIdentifier);                                                         // [0x8259c80] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.Disconnect
	// void Disconnect();                                                                                                       // [0x8259c30] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.CreateInWorld
	// void CreateInWorld(class UWorld* World, FTransform& WithTransform);                                                      // [0x8259640] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/ModelingComponents.PreviewGeometry.AddTriangleSet
	// class UTriangleSetComponent* AddTriangleSet(FString TriangleSetIdentifier);                                              // [0x8259590] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.AddPointSet
	// class UPointSetComponent* AddPointSet(FString PointSetIdentifier);                                                       // [0x82594e0] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.AddLineSet
	// class ULineSetComponent* AddLineSet(FString LineSetIdentifier);                                                          // [0x8259430] Final|Native|Public  
};

/// Class /Script/ModelingComponents.MeshElementsVisualizer
/// Size: 0x0148 (328 bytes) (0x000120 - 0x000148) align 8 MaxSize: 0x0148
class UMeshElementsVisualizer : public UPreviewGeometry
{ 
public:
	class UMeshElementsVisualizerProperties*           Settings;                                                   // 0x0120   (0x0008)  
	class UMeshWireframeComponent*                     WireframeComponent;                                         // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0130   (0x0018)  MISSED
};

/// Class /Script/ModelingComponents.MeshWireframeComponent
/// Size: 0x0600 (1536 bytes) (0x000550 - 0x000600) align 16 MaxSize: 0x0600
class UMeshWireframeComponent : public UMeshComponent
{ 
public:
	float                                              LineDepthBias;                                              // 0x0550   (0x0004)  
	float                                              LineDepthBiasSizeScale;                                     // 0x0554   (0x0004)  
	float                                              ThicknessScale;                                             // 0x0558   (0x0004)  
	bool                                               bEnableWireframe;                                           // 0x055C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x055D   (0x0003)  MISSED
	FColor                                             WireframeColor;                                             // 0x0560   (0x0004)  
	float                                              WireframeThickness;                                         // 0x0564   (0x0004)  
	bool                                               bEnableBoundaryEdges;                                       // 0x0568   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0569   (0x0003)  MISSED
	FColor                                             BoundaryEdgeColor;                                          // 0x056C   (0x0004)  
	float                                              BoundaryEdgeThickness;                                      // 0x0570   (0x0004)  
	bool                                               bEnableUVSeams;                                             // 0x0574   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0575   (0x0003)  MISSED
	FColor                                             UVSeamColor;                                                // 0x0578   (0x0004)  
	float                                              UVSeamThickness;                                            // 0x057C   (0x0004)  
	bool                                               bEnableNormalSeams;                                         // 0x0580   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0581   (0x0003)  MISSED
	FColor                                             NormalSeamColor;                                            // 0x0584   (0x0004)  
	float                                              NormalSeamThickness;                                        // 0x0588   (0x0004)  
	bool                                               bEnableTangentSeams;                                        // 0x058C   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x058D   (0x0003)  MISSED
	FColor                                             TangentSeamColor;                                           // 0x0590   (0x0004)  
	float                                              TangentSeamThickness;                                       // 0x0594   (0x0004)  
	bool                                               bEnableColorSeams;                                          // 0x0598   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0599   (0x0003)  MISSED
	FColor                                             ColorSeamColor;                                             // 0x059C   (0x0004)  
	float                                              ColorSeamThickness;                                         // 0x05A0   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x05A4   (0x0004)  MISSED
	class UMaterialInterface*                          LineMaterial;                                               // 0x05A8   (0x0008)  
	FBoxSphereBounds                                   LocalBounds;                                                // 0x05B0   (0x0038)  
	unsigned char                                      UnknownData07_7[0x18];                                      // 0x05E8   (0x0018)  MISSED
};

/// Class /Script/ModelingComponents.PointSetComponent
/// Size: 0x05D0 (1488 bytes) (0x000550 - 0x0005D0) align 16 MaxSize: 0x05D0
class UPointSetComponent : public UMeshComponent
{ 
public:
	class UMaterialInterface*                          PointMaterial;                                              // 0x0550   (0x0008)  
	FBoxSphereBounds                                   Bounds;                                                     // 0x0558   (0x0038)  
	bool                                               bBoundsDirty;                                               // 0x0590   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3F];                                      // 0x0591   (0x003F)  MISSED
};

/// Class /Script/ModelingComponents.PreviewMesh
/// Size: 0x0140 (320 bytes) (0x000028 - 0x000140) align 16 MaxSize: 0x0140
class UPreviewMesh : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0028   (0x0018)  MISSED
	bool                                               bBuildSpatialDataStructure;                                 // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0041   (0x000F)  MISSED
	class UDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x0050   (0x0008)  
	unsigned char                                      UnknownData02_7[0xE8];                                      // 0x0058   (0x00E8)  MISSED
};

/// Class /Script/ModelingComponents.PolyEditPreviewMesh
/// Size: 0x0480 (1152 bytes) (0x000140 - 0x000480) align 16 MaxSize: 0x0480
class UPolyEditPreviewMesh : public UPreviewMesh
{ 
public:
	unsigned char                                      UnknownData00_1[0x340];                                     // 0x0140   (0x0340)  MISSED
};

/// Class /Script/ModelingComponents.PreviewGeometryActor
/// Size: 0x0298 (664 bytes) (0x000298 - 0x000298) align 8 MaxSize: 0x0298
class APreviewGeometryActor : public AInternalToolFrameworkActor
{ 
public:
};

/// Class /Script/ModelingComponents.TriangleSetComponent
/// Size: 0x0650 (1616 bytes) (0x000550 - 0x000650) align 16 MaxSize: 0x0650
class UTriangleSetComponent : public UMeshComponent
{ 
public:
	FBoxSphereBounds                                   Bounds;                                                     // 0x0550   (0x0038)  
	bool                                               bBoundsDirty;                                               // 0x0588   (0x0001)  
	unsigned char                                      UnknownData00_7[0xC7];                                      // 0x0589   (0x00C7)  MISSED
};

/// Class /Script/ModelingComponents.UVLayoutPreviewProperties
/// Size: 0x00D0 (208 bytes) (0x0000A8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bEnabled;                                                   // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	EUVLayoutPreviewSide                               Side;                                                       // 0x00AC   (0x0004)  
	float                                              Scale;                                                      // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FVector2D                                          Offset;                                                     // 0x00B8   (0x0010)  
	bool                                               bShowWireframe;                                             // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

/// Class /Script/ModelingComponents.UVLayoutPreview
/// Size: 0x0170 (368 bytes) (0x000028 - 0x000170) align 16 MaxSize: 0x0170
class UUVLayoutPreview : public UObject
{ 
public:
	class UUVLayoutPreviewProperties*                  Settings;                                                   // 0x0028   (0x0008)  
	class UPreviewMesh*                                PreviewMesh;                                                // 0x0030   (0x0008)  
	class UMeshElementsVisualizer*                     MeshElementsVisualizer;                                     // 0x0038   (0x0008)  
	class UTriangleSetComponent*                       TriangleComponent;                                          // 0x0040   (0x0008)  
	bool                                               bShowBackingRectangle;                                      // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	class UMaterialInterface*                          BackingRectangleMaterial;                                   // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_7[0x118];                                     // 0x0058   (0x0118)  MISSED
};

/// Class /Script/ModelingComponents.CollectSurfacePathMechanic
/// Size: 0x05C0 (1472 bytes) (0x000030 - 0x0005C0) align 16 MaxSize: 0x05C0
class UCollectSurfacePathMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_1[0x590];                                     // 0x0030   (0x0590)  MISSED
};

/// Class /Script/ModelingComponents.CollisionPrimitivesMechanic
/// Size: 0x0570 (1392 bytes) (0x000030 - 0x000570) align 16 MaxSize: 0x0570
class UCollisionPrimitivesMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_8[0x210];                                     // 0x0030   (0x0210)  MISSED
	class UPreviewGeometry*                            PreviewGeometry;                                            // 0x0240   (0x0008)  
	class ULineSetComponent*                           DrawnPrimitiveEdges;                                        // 0x0248   (0x0008)  
	unsigned char                                      UnknownData01_6[0x150];                                     // 0x0250   (0x0150)  MISSED
	class UTransformProxy*                             TranslateTransformProxy;                                    // 0x03A0   (0x0008)  
	class UTransformProxy*                             SphereTransformProxy;                                       // 0x03A8   (0x0008)  
	class UTransformProxy*                             BoxTransformProxy;                                          // 0x03B0   (0x0008)  
	class UTransformProxy*                             CapsuleTransformProxy;                                      // 0x03B8   (0x0008)  
	class UTransformProxy*                             FullTransformProxy;                                         // 0x03C0   (0x0008)  
	class UTransformProxy*                             CurrentActiveProxy;                                         // 0x03C8   (0x0008)  
	class UCombinedTransformGizmo*                     TranslateTransformGizmo;                                    // 0x03D0   (0x0008)  
	class UCombinedTransformGizmo*                     SphereTransformGizmo;                                       // 0x03D8   (0x0008)  
	class UCombinedTransformGizmo*                     BoxTransformGizmo;                                          // 0x03E0   (0x0008)  
	class UCombinedTransformGizmo*                     CapsuleTransformGizmo;                                      // 0x03E8   (0x0008)  
	class UCombinedTransformGizmo*                     FullTransformGizmo;                                         // 0x03F0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x03F8   (0x0050)  MISSED
	class URectangleMarqueeMechanic*                   MarqueeMechanic;                                            // 0x0448   (0x0008)  
	unsigned char                                      UnknownData03_7[0x120];                                     // 0x0450   (0x0120)  MISSED
};

/// Class /Script/ModelingComponents.ConstructionPlaneMechanic
/// Size: 0x00F0 (240 bytes) (0x000030 - 0x0000F0) align 16 MaxSize: 0x00F0
class UConstructionPlaneMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_8[0x98];                                      // 0x0030   (0x0098)  MISSED
	class UCombinedTransformGizmo*                     PlaneTransformGizmo;                                        // 0x00C8   (0x0008)  
	class UTransformProxy*                             PlaneTransformProxy;                                        // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
	class USingleClickInputBehavior*                   ClickToSetPlaneBehavior;                                    // 0x00E0   (0x0008)  
	class ULocalSingleClickInputBehavior*              MiddleClickToSetGizmoBehavior;                              // 0x00E8   (0x0008)  
};

/// Class /Script/ModelingComponents.CurveControlPointsMechanic
/// Size: 0x0680 (1664 bytes) (0x000030 - 0x000680) align 16 MaxSize: 0x0680
class UCurveControlPointsMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	class USingleClickInputBehavior*                   ClickBehavior;                                              // 0x0040   (0x0008)  
	class UMouseHoverBehavior*                         HoverBehavior;                                              // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_6[0x498];                                     // 0x0050   (0x0498)  MISSED
	class APreviewGeometryActor*                       PreviewGeometryActor;                                       // 0x04E8   (0x0008)  
	class UPointSetComponent*                          DrawnControlPoints;                                         // 0x04F0   (0x0008)  
	class ULineSetComponent*                           DrawnControlSegments;                                       // 0x04F8   (0x0008)  
	class UPointSetComponent*                          PreviewPoint;                                               // 0x0500   (0x0008)  
	class ULineSetComponent*                           PreviewSegment;                                             // 0x0508   (0x0008)  
	unsigned char                                      UnknownData02_6[0x78];                                      // 0x0510   (0x0078)  MISSED
	class UTransformProxy*                             PointTransformProxy;                                        // 0x0588   (0x0008)  
	class UCombinedTransformGizmo*                     PointTransformGizmo;                                        // 0x0590   (0x0008)  
	unsigned char                                      UnknownData03_7[0xE8];                                      // 0x0598   (0x00E8)  MISSED
};

/// Class /Script/ModelingComponents.DragAlignmentMechanic
/// Size: 0x0280 (640 bytes) (0x000030 - 0x000280) align 16 MaxSize: 0x0280
class UDragAlignmentMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_1[0x250];                                     // 0x0030   (0x0250)  MISSED
};

/// Class /Script/ModelingComponents.DragAlignmentInteraction
/// Size: 0x02E0 (736 bytes) (0x000028 - 0x0002E0) align 16 MaxSize: 0x02E0
class UDragAlignmentInteraction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x2B8];                                     // 0x0028   (0x02B8)  MISSED
};

/// Class /Script/ModelingComponents.LatticeControlPointsMechanic
/// Size: 0x0510 (1296 bytes) (0x000030 - 0x000510) align 16 MaxSize: 0x0510
class ULatticeControlPointsMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_8[0x1F0];                                     // 0x0030   (0x01F0)  MISSED
	class APreviewGeometryActor*                       PreviewGeometryActor;                                       // 0x0220   (0x0008)  
	class UPointSetComponent*                          DrawnControlPoints;                                         // 0x0228   (0x0008)  
	class ULineSetComponent*                           DrawnLatticeEdges;                                          // 0x0230   (0x0008)  
	unsigned char                                      UnknownData01_6[0xA8];                                      // 0x0238   (0x00A8)  MISSED
	class UTransformProxy*                             PointTransformProxy;                                        // 0x02E0   (0x0008)  
	class UCombinedTransformGizmo*                     PointTransformGizmo;                                        // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x58];                                      // 0x02F0   (0x0058)  MISSED
	class URectangleMarqueeMechanic*                   MarqueeMechanic;                                            // 0x0348   (0x0008)  
	unsigned char                                      UnknownData03_7[0x1C0];                                     // 0x0350   (0x01C0)  MISSED
};

/// Class /Script/ModelingComponents.PlaneDistanceFromHitMechanic
/// Size: 0x0520 (1312 bytes) (0x000030 - 0x000520) align 16 MaxSize: 0x0520
class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_1[0x4F0];                                     // 0x0030   (0x04F0)  MISSED
};

/// Class /Script/ModelingComponents.PolyLassoMarqueeMechanic
/// Size: 0x01D0 (464 bytes) (0x000030 - 0x0001D0) align 16 MaxSize: 0x01D0
class UPolyLassoMarqueeMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_8[0x58];                                      // 0x0030   (0x0058)  MISSED
	float                                              SpacingTolerance;                                           // 0x0088   (0x0004)  
	float                                              LineThickness;                                              // 0x008C   (0x0004)  
	FLinearColor                                       LineColor;                                                  // 0x0090   (0x0010)  
	FLinearColor                                       ClosedColor;                                                // 0x00A0   (0x0010)  
	bool                                               bEnableFreehandPolygons;                                    // 0x00B0   (0x0001)  
	bool                                               bEnableMultiClickPolygons;                                  // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00B2   (0x0006)  MISSED
	class UClickDragInputBehavior*                     ClickDragBehavior;                                          // 0x00B8   (0x0008)  
	class UMouseHoverBehavior*                         HoverBehavior;                                              // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x108];                                     // 0x00C8   (0x0108)  MISSED
};

/// Class /Script/ModelingComponents.RectangleMarqueeMechanic
/// Size: 0x0220 (544 bytes) (0x000030 - 0x000220) align 16 MaxSize: 0x0220
class URectangleMarqueeMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	bool                                               bUseExternalClickDragBehavior;                              // 0x0038   (0x0001)  
	bool                                               bUseExternalUpdateCameraState;                              // 0x0039   (0x0001)  
	unsigned char                                      UnknownData01_6[0x46];                                      // 0x003A   (0x0046)  MISSED
	double                                             OnDragRectangleChangedDeferredThreshold;                    // 0x0080   (0x0008)  
	unsigned char                                      UnknownData02_6[0x48];                                      // 0x0088   (0x0048)  MISSED
	class UClickDragInputBehavior*                     ClickDragBehavior;                                          // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData03_7[0x148];                                     // 0x00D8   (0x0148)  MISSED
};

/// Class /Script/ModelingComponents.RectangleMarqueeInteraction
/// Size: 0x0210 (528 bytes) (0x000028 - 0x000210) align 16 MaxSize: 0x0210
class URectangleMarqueeInteraction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x1E8];                                     // 0x0028   (0x01E8)  MISSED
};

/// Class /Script/ModelingComponents.SpaceCurveDeformationMechanicPropertySet
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
{ 
public:
	ESpaceCurveControlPointTransformMode               TransformMode;                                              // 0x00A8   (0x0004)  
	ESpaceCurveControlPointOriginMode                  TransformOrigin;                                            // 0x00AC   (0x0004)  
	float                                              Softness;                                                   // 0x00B0   (0x0004)  
	ESpaceCurveControlPointFalloffType                 SoftFalloff;                                                // 0x00B4   (0x0004)  
};

/// Class /Script/ModelingComponents.SpaceCurveDeformationMechanic
/// Size: 0x02D0 (720 bytes) (0x000030 - 0x0002D0) align 16 MaxSize: 0x02D0
class USpaceCurveDeformationMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	class USingleClickInputBehavior*                   ClickBehavior;                                              // 0x0040   (0x0008)  
	class UMouseHoverBehavior*                         HoverBehavior;                                              // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0050   (0x0018)  MISSED
	class USpaceCurveDeformationMechanicPropertySet*   TransformProperties;                                        // 0x0068   (0x0008)  
	unsigned char                                      UnknownData02_6[0xF8];                                      // 0x0070   (0x00F8)  MISSED
	class APreviewGeometryActor*                       PreviewGeometryActor;                                       // 0x0168   (0x0008)  
	class UPointSetComponent*                          RenderPoints;                                               // 0x0170   (0x0008)  
	class ULineSetComponent*                           RenderSegments;                                             // 0x0178   (0x0008)  
	unsigned char                                      UnknownData03_6[0x38];                                      // 0x0180   (0x0038)  MISSED
	class UTransformProxy*                             PointTransformProxy;                                        // 0x01B8   (0x0008)  
	class UCombinedTransformGizmo*                     PointTransformGizmo;                                        // 0x01C0   (0x0008)  
	unsigned char                                      UnknownData04_7[0x108];                                     // 0x01C8   (0x0108)  MISSED
};

/// Class /Script/ModelingComponents.SpatialCurveDistanceMechanic
/// Size: 0x0410 (1040 bytes) (0x000030 - 0x000410) align 16 MaxSize: 0x0410
class USpatialCurveDistanceMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_1[0x3E0];                                     // 0x0030   (0x03E0)  MISSED
};

/// Class /Script/ModelingComponents.MeshOpPreviewWithBackgroundCompute
/// Size: 0x00B8 (184 bytes) (0x000028 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMeshOpPreviewWithBackgroundCompute : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0028   (0x0030)  MISSED
	class UPreviewMesh*                                PreviewMesh;                                                // 0x0058   (0x0008)  
	TArray<class UMaterialInterface*>                  StandardMaterials;                                          // 0x0060   (0x0010)  
	class UMaterialInterface*                          OverrideMaterial;                                           // 0x0070   (0x0008)  
	class UMaterialInterface*                          WorkingMaterial;                                            // 0x0078   (0x0008)  
	class UMaterialInterface*                          SecondaryMaterial;                                          // 0x0080   (0x0008)  
	TWeakObjectPtr<class UWorld*>                      PreviewWorld;                                               // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0090   (0x0028)  MISSED
};

/// Class /Script/ModelingComponents.ModelingComponentsSettings
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UModelingComponentsSettings : public UDeveloperSettings
{ 
public:
	bool                                               bEnableRayTracingWhileEditing;                              // 0x0038   (0x0001)  
	bool                                               bEnableRayTracing;                                          // 0x0039   (0x0001)  
	bool                                               bGenerateLightmapUVs;                                       // 0x003A   (0x0001)  
	bool                                               bEnableCollision;                                           // 0x003B   (0x0001)  
	TEnumAsByte<ECollisionTraceFlag>                   CollisionMode;                                              // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/ModelingComponents.ModelingComponentsEditorSettings
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UModelingComponentsEditorSettings : public UDeveloperSettings
{ 
public:
	EModelingComponentsPlaneVisualizationMode          GridMode;                                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            NumGridLines;                                               // 0x003C   (0x0004)  
	float                                              GridSpacing;                                                // 0x0040   (0x0004)  
	float                                              GridScale;                                                  // 0x0044   (0x0004)  
	float                                              GridSize;                                                   // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/ModelingComponents.ModelingObjectsCreationAPI
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UModelingObjectsCreationAPI : public UObject
{ 
public:


	/// Functions
	// Function /Script/ModelingComponents.ModelingObjectsCreationAPI.CreateTextureObject
	// FCreateTextureObjectResult CreateTextureObject(FCreateTextureObjectParams& CreateTexParams);                             // [0x8259b30] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModelingComponents.ModelingObjectsCreationAPI.CreateNewActor
	// FCreateActorResult CreateNewActor(FCreateActorParams& CreateActorParams);                                                // [0x82599d0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModelingComponents.ModelingObjectsCreationAPI.CreateMeshObject
	// FCreateMeshObjectResult CreateMeshObject(FCreateMeshObjectParams& CreateMeshParams);                                     // [0x8259890] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModelingComponents.ModelingObjectsCreationAPI.CreateMaterialObject
	// FCreateMaterialObjectResult CreateMaterialObject(FCreateMaterialObjectParams& CreateMaterialParams);                     // [0x8259790] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/ModelingComponents.PreviewMeshActor
/// Size: 0x0298 (664 bytes) (0x000298 - 0x000298) align 8 MaxSize: 0x0298
class APreviewMeshActor : public AInternalToolFrameworkActor
{ 
public:
};

/// Class /Script/ModelingComponents.CreateMeshObjectTypeProperties
/// Size: 0x00D8 (216 bytes) (0x0000A8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UCreateMeshObjectTypeProperties : public UInteractiveToolPropertySet
{ 
public:
	FString                                            OutputType;                                                 // 0x00A8   (0x0010)  
	class UClass*                                      VolumeType;                                                 // 0x00B8   (0x0008)  
	TArray<FString>                                    OutputTypeNamesList;                                        // 0x00C0   (0x0010)  
	bool                                               bShowVolumeList;                                            // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00D1   (0x0007)  MISSED


	/// Functions
	// Function /Script/ModelingComponents.CreateMeshObjectTypeProperties.ShouldShowPropertySet
	// bool ShouldShowPropertySet();                                                                                            // [0x8298390] Final|Native|Public|Const 
	// Function /Script/ModelingComponents.CreateMeshObjectTypeProperties.GetOutputTypeNamesFunc
	// TArray<FString> GetOutputTypeNamesFunc();                                                                                // [0x8298300] Final|Native|Public  
	// Function /Script/ModelingComponents.CreateMeshObjectTypeProperties.GetCurrentCreateMeshType
	// ECreateObjectTypeHint GetCurrentCreateMeshType();                                                                        // [0x8298070] Final|Native|Public|Const 
};

/// Class /Script/ModelingComponents.OnAcceptHandleSourcesPropertiesSingle
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnAcceptHandleSourcesPropertiesSingle : public UOnAcceptHandleSourcesPropertiesBase
{ 
public:
	EHandleSourcesMethod                               HandleInputs;                                               // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/ModelingComponents.PolygroupLayersProperties
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UPolygroupLayersProperties : public UInteractiveToolPropertySet
{ 
public:
	FName                                              ActiveGroupLayer;                                           // 0x00A8   (0x0008)  
	TArray<FString>                                    GroupLayersList;                                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/ModelingComponents.PolygroupLayersProperties.GetGroupLayersFunc
	// TArray<FString> GetGroupLayersFunc();                                                                                    // [0x8298180] Final|Native|Public  
};

/// Class /Script/ModelingComponents.WeightMapSetProperties
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UWeightMapSetProperties : public UInteractiveToolPropertySet
{ 
public:
	FName                                              WeightMap;                                                  // 0x00A8   (0x0008)  
	TArray<FString>                                    WeightMapsList;                                             // 0x00B0   (0x0010)  
	bool                                               bInvertWeightMap;                                           // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00C1   (0x0007)  MISSED


	/// Functions
	// Function /Script/ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
	// TArray<FString> GetWeightMapsFunc();                                                                                     // [0x8298180] Final|Native|Public  
};

/// Class /Script/ModelingComponents.GeometrySelectionManager
/// Size: 0x02C0 (704 bytes) (0x000028 - 0x0002C0) align 8 MaxSize: 0x02C0
class UGeometrySelectionManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0028   (0x0028)  MISSED
	class UGeometrySelectionEditCommandArguments*      SelectionArguments;                                         // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
	class UInteractiveToolsContext*                    ToolsContext;                                               // 0x0060   (0x0008)  
	unsigned char                                      UnknownData02_7[0x258];                                     // 0x0068   (0x0258)  MISSED
};

/// Class /Script/ModelingComponents.PolygonSelectionMechanicProperties
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UPolygonSelectionMechanicProperties : public UMeshTopologySelectionMechanicProperties
{ 
public:
};

/// Class /Script/ModelingComponents.PolygonSelectionMechanic
/// Size: 0x0B40 (2880 bytes) (0x000B30 - 0x000B40) align 16 MaxSize: 0x0B40
class UPolygonSelectionMechanic : public UMeshTopologySelectionMechanic
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0B30   (0x0010)  MISSED
};

/// Class /Script/ModelingComponents.ModelingSceneSnappingManager
/// Size: 0x0150 (336 bytes) (0x000028 - 0x000150) align 8 MaxSize: 0x0150
class UModelingSceneSnappingManager : public USceneSnappingManager
{ 
public:
	class UInteractiveToolsContext*                    ParentContext;                                              // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x120];                                     // 0x0030   (0x0120)  MISSED
};

/// Class /Script/ModelingComponents.MultiTransformer
/// Size: 0x01B0 (432 bytes) (0x000028 - 0x0001B0) align 16 MaxSize: 0x01B0
class UMultiTransformer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x60];                                      // 0x0028   (0x0060)  MISSED
	class UInteractiveGizmoManager*                    GizmoManager;                                               // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_6[0x70];                                      // 0x0090   (0x0070)  MISSED
	class UCombinedTransformGizmo*                     TransformGizmo;                                             // 0x0100   (0x0008)  
	class UTransformProxy*                             TransformProxy;                                             // 0x0108   (0x0008)  
	class UDragAlignmentMechanic*                      DragAlignmentMechanic;                                      // 0x0110   (0x0008)  
	unsigned char                                      UnknownData02_7[0x98];                                      // 0x0118   (0x0098)  MISSED
};

/// Struct /Script/ModelingComponents.ModelingToolsAxisFilter
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 MaxSize: 0x0003
struct FModelingToolsAxisFilter
{ 
	bool                                               bAxisX;                                                     // 0x0000   (0x0001)  
	bool                                               bAxisY;                                                     // 0x0001   (0x0001)  
	bool                                               bAxisZ;                                                     // 0x0002   (0x0001)  
};

/// Struct /Script/ModelingComponents.ModelingToolsColorChannelFilter
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 1 MaxSize: 0x0004
struct FModelingToolsColorChannelFilter
{ 
	bool                                               bRed;                                                       // 0x0000   (0x0001)  
	bool                                               bGreen;                                                     // 0x0001   (0x0001)  
	bool                                               bBlue;                                                      // 0x0002   (0x0001)  
	bool                                               bAlpha;                                                     // 0x0003   (0x0001)  
};

/// Struct /Script/ModelingComponents.RenderableTriangleVertex
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRenderableTriangleVertex
{ 
	FVector                                            Position;                                                   // 0x0000   (0x0018)  
	FVector2D                                          uv;                                                         // 0x0018   (0x0010)  
	FVector                                            Normal;                                                     // 0x0028   (0x0018)  
	FColor                                             Color;                                                      // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/ModelingComponents.RenderableTriangle
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 8 MaxSize: 0x00E0
struct FRenderableTriangle
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	FRenderableTriangleVertex                          Vertex0;                                                    // 0x0008   (0x0048)  
	FRenderableTriangleVertex                          Vertex1;                                                    // 0x0050   (0x0048)  
	FRenderableTriangleVertex                          Vertex2;                                                    // 0x0098   (0x0048)  
};

/// Struct /Script/ModelingComponents.CreateMeshObjectParams
/// Size: 0x0670 (1648 bytes) (0x000000 - 0x000670) align 16 MaxSize: 0x0670
struct FCreateMeshObjectParams
{ 
	class UPrimitiveComponent*                         SourceComponent;                                            // 0x0000   (0x0008)  
	ECreateObjectTypeHint                              TypeHint;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	class UClass*                                      TypeHintClass;                                              // 0x0010   (0x0008)  
	int32_t                                            TypeHintExtended;                                           // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	class UWorld*                                      TargetWorld;                                                // 0x0020   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0030   (0x0060)  
	FString                                            BaseName;                                                   // 0x0090   (0x0010)  
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x00A0   (0x0010)  
	TArray<class UMaterialInterface*>                  AssetMaterials;                                             // 0x00B0   (0x0010)  
	bool                                               bEnableCollision;                                           // 0x00C0   (0x0001)  
	TEnumAsByte<ECollisionTraceFlag>                   CollisionMode;                                              // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData03_6[0x5E];                                      // 0x00C2   (0x005E)  MISSED
	bool                                               bEnableRaytracingSupport;                                   // 0x0120   (0x0001)  
	bool                                               bGenerateLightmapUVs;                                       // 0x0121   (0x0001)  
	bool                                               bEnableRecomputeNormals;                                    // 0x0122   (0x0001)  
	bool                                               bEnableRecomputeTangents;                                   // 0x0123   (0x0001)  
	bool                                               bEnableNanite;                                              // 0x0124   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0125   (0x0003)  MISSED
	float                                              NaniteProxyTrianglePercent;                                 // 0x0128   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x012C   (0x0004)  MISSED
	FMeshNaniteSettings                                NaniteSettings;                                             // 0x0130   (0x0040)  
	unsigned char                                      UnknownData06_7[0x500];                                     // 0x0170   (0x0500)  MISSED
};

/// Struct /Script/ModelingComponents.CreateMeshObjectResult
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FCreateMeshObjectResult
{ 
	ECreateModelingObjectResult                        ResultCode;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class AActor*                                      NewActor;                                                   // 0x0008   (0x0008)  
	class UPrimitiveComponent*                         NewComponent;                                               // 0x0010   (0x0008)  
	class UObject*                                     NewAsset;                                                   // 0x0018   (0x0008)  
};

/// Struct /Script/ModelingComponents.CreateTextureObjectParams
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FCreateTextureObjectParams
{ 
	int32_t                                            TypeHintExtended;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UWorld*                                      TargetWorld;                                                // 0x0008   (0x0008)  
	class UObject*                                     StoreRelativeToObject;                                      // 0x0010   (0x0008)  
	FString                                            BaseName;                                                   // 0x0018   (0x0010)  
	class UTexture2D*                                  GeneratedTransientTexture;                                  // 0x0028   (0x0008)  
};

/// Struct /Script/ModelingComponents.CreateTextureObjectResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FCreateTextureObjectResult
{ 
	ECreateModelingObjectResult                        ResultCode;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UObject*                                     NewAsset;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/ModelingComponents.CreateMaterialObjectParams
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FCreateMaterialObjectParams
{ 
	class UWorld*                                      TargetWorld;                                                // 0x0000   (0x0008)  
	class UObject*                                     StoreRelativeToObject;                                      // 0x0008   (0x0008)  
	FString                                            BaseName;                                                   // 0x0010   (0x0010)  
	class UMaterialInterface*                          MaterialToDuplicate;                                        // 0x0020   (0x0008)  
};

/// Struct /Script/ModelingComponents.CreateMaterialObjectResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FCreateMaterialObjectResult
{ 
	ECreateModelingObjectResult                        ResultCode;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UObject*                                     NewAsset;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/ModelingComponents.CreateActorParams
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 MaxSize: 0x0090
struct FCreateActorParams
{ 
	class UWorld*                                      TargetWorld;                                                // 0x0000   (0x0008)  
	FString                                            BaseName;                                                   // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
	class AActor*                                      TemplateActor;                                              // 0x0080   (0x0008)  
	class UObject*                                     TemplateAsset;                                              // 0x0088   (0x0008)  
};

/// Struct /Script/ModelingComponents.CreateActorResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FCreateActorResult
{ 
	ECreateModelingObjectResult                        ResultCode;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class AActor*                                      NewActor;                                                   // 0x0008   (0x0008)  
};

#pragma pack(pop)


