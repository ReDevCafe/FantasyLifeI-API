
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
/// dependency: MovieScene
/// dependency: NiagaraCore
/// dependency: NiagaraShader

#pragma pack(push, 0x1)

/// Enum /Script/Niagara.ENiagaraSimCacheAttributeCaptureMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraSimCacheAttributeCaptureMode : uint8_t
{
	ENiagaraSimCacheAttributeCaptureMode__All                                        = 0,
	ENiagaraSimCacheAttributeCaptureMode__RenderingOnly                              = 1,
	ENiagaraSimCacheAttributeCaptureMode__ExplicitAttributes                         = 2
};

/// Enum /Script/Niagara.ENiagaraAssetLibraryAssetTypes
/// Size: 0x01 (1 bytes)
enum class ENiagaraAssetLibraryAssetTypes : uint8_t
{
	ENiagaraAssetLibraryAssetTypes__Emitters                                         = 1,
	ENiagaraAssetLibraryAssetTypes__Systems                                          = 2,
	ENiagaraAssetLibraryAssetTypes__Scripts                                          = 4
};

/// Enum /Script/Niagara.ENiagaraAssetTagDefinitionImportance
/// Size: 0x01 (1 bytes)
enum class ENiagaraAssetTagDefinitionImportance : uint8_t
{
	ENiagaraAssetTagDefinitionImportance__Primary                                    = 0,
	ENiagaraAssetTagDefinitionImportance__Secondary                                  = 1
};

/// Enum /Script/Niagara.ENiagaraCollisionMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraCollisionMode : uint8_t
{
	ENiagaraCollisionMode__None                                                      = 0,
	ENiagaraCollisionMode__SceneGeometry                                             = 1,
	ENiagaraCollisionMode__DepthBuffer                                               = 2,
	ENiagaraCollisionMode__DistanceField                                             = 3
};

/// Enum /Script/Niagara.ENiagaraBaseTypes
/// Size: 0x01 (1 bytes)
enum class ENiagaraBaseTypes : uint8_t
{
	ENiagaraBaseTypes__Half                                                          = 0,
	ENiagaraBaseTypes__Float                                                         = 1,
	ENiagaraBaseTypes__Int32                                                         = 2,
	ENiagaraBaseTypes__Bool                                                          = 3,
	ENiagaraBaseTypes__Max                                                           = 4
};

/// Enum /Script/Niagara.ENiagaraGpuBufferFormat
/// Size: 0x01 (1 bytes)
enum class ENiagaraGpuBufferFormat : uint8_t
{
	ENiagaraGpuBufferFormat__Float                                                   = 0,
	ENiagaraGpuBufferFormat__HalfFloat                                               = 1,
	ENiagaraGpuBufferFormat__UnsignedNormalizedByte                                  = 2,
	ENiagaraGpuBufferFormat__Max                                                     = 3
};

/// Enum /Script/Niagara.ENiagaraGpuSyncMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraGpuSyncMode : uint32_t
{
	ENiagaraGpuSyncMode__None                                                        = 0,
	ENiagaraGpuSyncMode__SyncCpuToGpu                                                = 1,
	ENiagaraGpuSyncMode__SyncGpuToCpu                                                = 2,
	ENiagaraGpuSyncMode__SyncBoth                                                    = 3
};

/// Enum /Script/Niagara.ENiagaraMipMapGeneration
/// Size: 0x01 (1 bytes)
enum class ENiagaraMipMapGeneration : uint8_t
{
	ENiagaraMipMapGeneration__Disabled                                               = 0,
	ENiagaraMipMapGeneration__PostStage                                              = 1,
	ENiagaraMipMapGeneration__PostSimulate                                           = 2
};

/// Enum /Script/Niagara.ENiagaraDefaultMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraDefaultMode : uint8_t
{
	ENiagaraDefaultMode__Value                                                       = 0,
	ENiagaraDefaultMode__Binding                                                     = 1,
	ENiagaraDefaultMode__Custom                                                      = 2,
	ENiagaraDefaultMode__FailIfPreviouslyNotSet                                      = 3
};

/// Enum /Script/Niagara.ENiagaraDefaultRendererMotionVectorSetting
/// Size: 0x04 (4 bytes)
enum class ENiagaraDefaultRendererMotionVectorSetting : uint32_t
{
	ENiagaraDefaultRendererMotionVectorSetting__Precise                              = 0,
	ENiagaraDefaultRendererMotionVectorSetting__Approximate                          = 1
};

/// Enum /Script/Niagara.ENiagaraRendererMotionVectorSetting
/// Size: 0x04 (4 bytes)
enum class ENiagaraRendererMotionVectorSetting : uint32_t
{
	ENiagaraRendererMotionVectorSetting__AutoDetect                                  = 0,
	ENiagaraRendererMotionVectorSetting__Precise                                     = 1,
	ENiagaraRendererMotionVectorSetting__Approximate                                 = 2,
	ENiagaraRendererMotionVectorSetting__Disable                                     = 3
};

/// Enum /Script/Niagara.ENiagaraSimTarget
/// Size: 0x01 (1 bytes)
enum class ENiagaraSimTarget : uint8_t
{
	ENiagaraSimTarget__CPUSim                                                        = 0,
	ENiagaraSimTarget__GPUComputeSim                                                 = 1
};

/// Enum /Script/Niagara.ENiagaraAgeUpdateMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraAgeUpdateMode : uint8_t
{
	ENiagaraAgeUpdateMode__TickDeltaTime                                             = 0,
	ENiagaraAgeUpdateMode__DesiredAge                                                = 1,
	ENiagaraAgeUpdateMode__DesiredAgeNoSeek                                          = 2
};

/// Enum /Script/Niagara.ENiagaraStatEvaluationType
/// Size: 0x01 (1 bytes)
enum class ENiagaraStatEvaluationType : uint8_t
{
	ENiagaraStatEvaluationType__Average                                              = 0,
	ENiagaraStatEvaluationType__Maximum                                              = 1
};

/// Enum /Script/Niagara.ENiagaraStatDisplayMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraStatDisplayMode : uint8_t
{
	ENiagaraStatDisplayMode__Percent                                                 = 0,
	ENiagaraStatDisplayMode__Absolute                                                = 1
};

/// Enum /Script/Niagara.ENiagaraDataSetType
/// Size: 0x01 (1 bytes)
enum class ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData                                                = 0,
	ENiagaraDataSetType__Shared                                                      = 1,
	ENiagaraDataSetType__Event                                                       = 2
};

/// Enum /Script/Niagara.ENiagaraInputNodeUsage
/// Size: 0x01 (1 bytes)
enum class ENiagaraInputNodeUsage : uint8_t
{
	ENiagaraInputNodeUsage__Undefined                                                = 0,
	ENiagaraInputNodeUsage__Parameter                                                = 1,
	ENiagaraInputNodeUsage__Attribute                                                = 2,
	ENiagaraInputNodeUsage__SystemConstant                                           = 3,
	ENiagaraInputNodeUsage__TranslatorConstant                                       = 4,
	ENiagaraInputNodeUsage__RapidIterationParameter                                  = 5
};

/// Enum /Script/Niagara.ENiagaraScriptCompileStatus
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptCompileStatus : uint8_t
{
	ENiagaraScriptCompileStatus__NCS_Unknown                                         = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty                                           = 1,
	ENiagaraScriptCompileStatus__NCS_Error                                           = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate                                        = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated                                    = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings                            = 5,
	ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings                     = 6
};

/// Enum /Script/Niagara.ENiagaraScriptUsage
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptUsage : uint8_t
{
	ENiagaraScriptUsage__Function                                                    = 0,
	ENiagaraScriptUsage__Module                                                      = 1,
	ENiagaraScriptUsage__DynamicInput                                                = 2,
	ENiagaraScriptUsage__ParticleSpawnScript                                         = 3,
	ENiagaraScriptUsage__ParticleSpawnScriptInterpolated                             = 4,
	ENiagaraScriptUsage__ParticleUpdateScript                                        = 5,
	ENiagaraScriptUsage__ParticleEventScript                                         = 6,
	ENiagaraScriptUsage__ParticleSimulationStageScript                               = 7,
	ENiagaraScriptUsage__ParticleGPUComputeScript                                    = 8,
	ENiagaraScriptUsage__EmitterSpawnScript                                          = 9,
	ENiagaraScriptUsage__EmitterUpdateScript                                         = 10,
	ENiagaraScriptUsage__SystemSpawnScript                                           = 11,
	ENiagaraScriptUsage__SystemUpdateScript                                          = 12
};

/// Enum /Script/Niagara.ENiagaraCompileUsageStaticSwitch
/// Size: 0x01 (1 bytes)
enum class ENiagaraCompileUsageStaticSwitch : uint8_t
{
	ENiagaraCompileUsageStaticSwitch__Spawn                                          = 0,
	ENiagaraCompileUsageStaticSwitch__Update                                         = 1,
	ENiagaraCompileUsageStaticSwitch__Event                                          = 2,
	ENiagaraCompileUsageStaticSwitch__SimulationStage                                = 3,
	ENiagaraCompileUsageStaticSwitch__Default                                        = 4
};

/// Enum /Script/Niagara.ENiagaraScriptContextStaticSwitch
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptContextStaticSwitch : uint8_t
{
	ENiagaraScriptContextStaticSwitch__System                                        = 0,
	ENiagaraScriptContextStaticSwitch__Emitter                                       = 1,
	ENiagaraScriptContextStaticSwitch__Particle                                      = 2
};

/// Enum /Script/Niagara.ENiagaraScriptGroup
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptGroup : uint8_t
{
	ENiagaraScriptGroup__Particle                                                    = 0,
	ENiagaraScriptGroup__Emitter                                                     = 1,
	ENiagaraScriptGroup__System                                                      = 2,
	ENiagaraScriptGroup__Max                                                         = 3
};

/// Enum /Script/Niagara.ENiagaraBindingSource
/// Size: 0x01 (1 bytes)
enum class ENiagaraBindingSource : uint8_t
{
	ImplicitFromSource                                                               = 0,
	ExplicitParticles                                                                = 1,
	ExplicitEmitter                                                                  = 2,
	ExplicitSystem                                                                   = 3,
	ExplicitUser                                                                     = 4,
	MaxBindingSource                                                                 = 5
};

/// Enum /Script/Niagara.ENiagaraRendererSourceDataMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRendererSourceDataMode : uint8_t
{
	ENiagaraRendererSourceDataMode__Particles                                        = 0,
	ENiagaraRendererSourceDataMode__Emitter                                          = 1
};

/// Enum /Script/Niagara.ENiagaraLegacyTrailWidthMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
	ENiagaraLegacyTrailWidthMode__FromCentre                                         = 0,
	ENiagaraLegacyTrailWidthMode__FromFirst                                          = 1,
	ENiagaraLegacyTrailWidthMode__FromSecond                                         = 2
};

/// Enum /Script/Niagara.ENiagaraSystemInstanceState
/// Size: 0x01 (1 bytes)
enum class ENiagaraSystemInstanceState : uint8_t
{
	ENiagaraSystemInstanceState__None                                                = 0,
	ENiagaraSystemInstanceState__PendingSpawn                                        = 1,
	ENiagaraSystemInstanceState__PendingSpawnPaused                                  = 2,
	ENiagaraSystemInstanceState__Spawning                                            = 3,
	ENiagaraSystemInstanceState__Running                                             = 4,
	ENiagaraSystemInstanceState__Paused                                              = 5,
	ENiagaraSystemInstanceState__Num                                                 = 6
};

/// Enum /Script/Niagara.ENiagaraFunctionDebugState
/// Size: 0x01 (1 bytes)
enum class ENiagaraFunctionDebugState : uint8_t
{
	ENiagaraFunctionDebugState__NoDebug                                              = 0,
	ENiagaraFunctionDebugState__Basic                                                = 1
};

/// Enum /Script/Niagara.ENiagaraGpuComputeTickStage
/// Size: 0x01 (1 bytes)
enum class ENiagaraGpuComputeTickStage : uint8_t
{
	ENiagaraGpuComputeTickStage__PreInitViews                                        = 0,
	ENiagaraGpuComputeTickStage__PostInitViews                                       = 1,
	ENiagaraGpuComputeTickStage__PostOpaqueRender                                    = 2,
	ENiagaraGpuComputeTickStage__Max                                                 = 3,
	ENiagaraGpuComputeTickStage__First                                               = 0,
	ENiagaraGpuComputeTickStage__Last                                                = 2
};

/// Enum /Script/Niagara.ENiagaraConditionalOperator
/// Size: 0x01 (1 bytes)
enum class ENiagaraConditionalOperator : uint8_t
{
	ENiagaraConditionalOperator__Equals                                              = 0,
	ENiagaraConditionalOperator__NotEqual                                            = 1,
	ENiagaraConditionalOperator__LessThan                                            = 2,
	ENiagaraConditionalOperator__LessThanOrEqual                                     = 3,
	ENiagaraConditionalOperator__GreaterThan                                         = 4,
	ENiagaraConditionalOperator__GreaterThanOrEqual                                  = 5,
	ENiagaraConditionalOperator__Max                                                 = 6
};

/// Enum /Script/Niagara.ENCPoolMethod
/// Size: 0x01 (1 bytes)
enum class ENCPoolMethod : uint8_t
{
	ENCPoolMethod__None                                                              = 0,
	ENCPoolMethod__AutoRelease                                                       = 1,
	ENCPoolMethod__ManualRelease                                                     = 2,
	ENCPoolMethod__ManualRelease_OnComplete                                          = 3,
	ENCPoolMethod__FreeInPool                                                        = 4
};

/// Enum /Script/Niagara.ENiagraDataChannel_IslandMode
/// Size: 0x01 (1 bytes)
enum class ENiagraDataChannel_IslandMode : uint8_t
{
	ENiagraDataChannel_IslandMode__AlignedStatic                                     = 0,
	ENiagraDataChannel_IslandMode__Dynamic                                           = 1
};

/// Enum /Script/Niagara.ENiagaraDataChannelAllocationMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraDataChannelAllocationMode : uint8_t
{
	ENiagaraDataChannelAllocationMode__Static                                        = 0
};

/// Enum /Script/Niagara.ENDIDataChannelSpawnMode
/// Size: 0x01 (1 bytes)
enum class ENDIDataChannelSpawnMode : uint8_t
{
	ENDIDataChannelSpawnMode__Override                                               = 0,
	ENDIDataChannelSpawnMode__Accumulate                                             = 1,
	ENDIDataChannelSpawnMode__None                                                   = 2,
	ENDIDataChannelSpawnMode__Max                                                    = 3
};

/// Enum /Script/Niagara.ENiagaraSortMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraSortMode : uint8_t
{
	ENiagaraSortMode__None                                                           = 0,
	ENiagaraSortMode__ViewDepth                                                      = 1,
	ENiagaraSortMode__ViewDistance                                                   = 2,
	ENiagaraSortMode__CustomAscending                                                = 3,
	ENiagaraSortMode__CustomDecending                                                = 4
};

/// Enum /Script/Niagara.ENDISkelMesh_GpuMaxInfluences
/// Size: 0x01 (1 bytes)
enum class ENDISkelMesh_GpuMaxInfluences : uint8_t
{
	ENDISkelMesh_GpuMaxInfluences__AllowMax4                                         = 0,
	ENDISkelMesh_GpuMaxInfluences__AllowMax8                                         = 1,
	ENDISkelMesh_GpuMaxInfluences__Unlimited                                         = 2
};

/// Enum /Script/Niagara.ENDISkelMesh_GpuUniformSamplingFormat
/// Size: 0x01 (1 bytes)
enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8_t
{
	ENDISkelMesh_GpuUniformSamplingFormat__Full                                      = 0,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_24                                = 1,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_23                                = 2
};

/// Enum /Script/Niagara.ENDISkelMesh_AdjacencyTriangleIndexFormat
/// Size: 0x01 (1 bytes)
enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8_t
{
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Full                                  = 0,
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Half                                  = 1
};

/// Enum /Script/Niagara.ENiagaraDefaultRendererPixelCoverageMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraDefaultRendererPixelCoverageMode : uint8_t
{
	ENiagaraDefaultRendererPixelCoverageMode__Enabled                                = 0,
	ENiagaraDefaultRendererPixelCoverageMode__Disabled                               = 1
};

/// Enum /Script/Niagara.ENiagaraDefaultSortPrecision
/// Size: 0x01 (1 bytes)
enum class ENiagaraDefaultSortPrecision : uint8_t
{
	ENiagaraDefaultSortPrecision__Low                                                = 0,
	ENiagaraDefaultSortPrecision__High                                               = 1
};

/// Enum /Script/Niagara.ENiagaraDefaultGpuTranslucentLatency
/// Size: 0x01 (1 bytes)
enum class ENiagaraDefaultGpuTranslucentLatency : uint8_t
{
	ENiagaraDefaultGpuTranslucentLatency__Immediate                                  = 0,
	ENiagaraDefaultGpuTranslucentLatency__Latent                                     = 1
};

/// Enum /Script/Niagara.ENiagaraCompileErrorSeverity
/// Size: 0x01 (1 bytes)
enum class ENiagaraCompileErrorSeverity : uint8_t
{
	ENiagaraCompileErrorSeverity__Ignore                                             = 0,
	ENiagaraCompileErrorSeverity__LogOnly                                            = 1,
	ENiagaraCompileErrorSeverity__Warning                                            = 2,
	ENiagaraCompileErrorSeverity__Error                                              = 3
};

/// Enum /Script/Niagara.ENDICollisionQuery_AsyncGpuTraceProvider
/// Size: 0x01 (1 bytes)
enum class ENDICollisionQuery_AsyncGpuTraceProvider : uint8_t
{
	ENDICollisionQuery_AsyncGpuTraceProvider__Default                                = 0,
	ENDICollisionQuery_AsyncGpuTraceProvider__HWRT                                   = 1,
	ENDICollisionQuery_AsyncGpuTraceProvider__GSDF                                   = 2,
	ENDICollisionQuery_AsyncGpuTraceProvider__None                                   = 3
};

/// Enum /Script/Niagara.ENiagaraStripScriptByteCodeOption
/// Size: 0x01 (1 bytes)
enum class ENiagaraStripScriptByteCodeOption : uint8_t
{
	ENiagaraStripScriptByteCodeOption__Default                                       = 0,
	ENiagaraStripScriptByteCodeOption__Strip_Original                                = 1,
	ENiagaraStripScriptByteCodeOption__Strip_Experimental                            = 2
};

/// Enum /Script/Niagara.ENiagaraDistributionMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraDistributionMode : uint32_t
{
	ENiagaraDistributionMode__Binding                                                = 0,
	ENiagaraDistributionMode__UniformConstant                                        = 1,
	ENiagaraDistributionMode__NonUniformConstant                                     = 2,
	ENiagaraDistributionMode__UniformRange                                           = 3,
	ENiagaraDistributionMode__NonUniformRange                                        = 4,
	ENiagaraDistributionMode__UniformCurve                                           = 5,
	ENiagaraDistributionMode__NonUniformCurve                                        = 6
};

/// Enum /Script/Niagara.ENSM_VelocityType
/// Size: 0x04 (4 bytes)
enum class ENSM_VelocityType : uint32_t
{
	ENSM_VelocityType__Linear                                                        = 0,
	ENSM_VelocityType__FromPoint                                                     = 1,
	ENSM_VelocityType__InCone                                                        = 2
};

/// Enum /Script/Niagara.ENSM_NoiseMode
/// Size: 0x04 (4 bytes)
enum class ENSM_NoiseMode : uint32_t
{
	ENSM_NoiseMode__VectorField                                                      = 0,
	ENSM_NoiseMode__JacobNoise                                                       = 1,
	ENSM_NoiseMode__LUTJacob                                                         = 2,
	ENSM_NoiseMode__LUTJacobBicubic                                                  = 3
};

/// Enum /Script/Niagara.ENSM_ShapePrimitive
/// Size: 0x04 (4 bytes)
enum class ENSM_ShapePrimitive : uint32_t
{
	ENSM_ShapePrimitive__Box                                                         = 0,
	ENSM_ShapePrimitive__Cylinder                                                    = 1,
	ENSM_ShapePrimitive__Plane                                                       = 2,
	ENSM_ShapePrimitive__Ring                                                        = 3,
	ENSM_ShapePrimitive__Sphere                                                      = 4
};

/// Enum /Script/Niagara.ENSMSubUVAnimation_Mode
/// Size: 0x04 (4 bytes)
enum class ENSMSubUVAnimation_Mode : uint32_t
{
	ENSMSubUVAnimation_Mode__InfiniteLoop                                            = 0,
	ENSMSubUVAnimation_Mode__Linear                                                  = 1,
	ENSMSubUVAnimation_Mode__Random                                                  = 2
};

/// Enum /Script/Niagara.ENiagaraStatelessSpawnInfoType
/// Size: 0x04 (4 bytes)
enum class ENiagaraStatelessSpawnInfoType : uint32_t
{
	ENiagaraStatelessSpawnInfoType__Burst                                            = 0,
	ENiagaraStatelessSpawnInfoType__Rate                                             = 1
};

/// Enum /Script/Niagara.ENiagaraSystemInactiveResponse
/// Size: 0x04 (4 bytes)
enum class ENiagaraSystemInactiveResponse : uint32_t
{
	ENiagaraSystemInactiveResponse__Complete                                         = 0,
	ENiagaraSystemInactiveResponse__Kill                                             = 1
};

/// Enum /Script/Niagara.ENiagaraEmitterInactiveResponse
/// Size: 0x04 (4 bytes)
enum class ENiagaraEmitterInactiveResponse : uint32_t
{
	ENiagaraEmitterInactiveResponse__Complete                                        = 0,
	ENiagaraEmitterInactiveResponse__Kill                                            = 1
};

/// Enum /Script/Niagara.ENiagaraLoopBehavior
/// Size: 0x04 (4 bytes)
enum class ENiagaraLoopBehavior : uint32_t
{
	ENiagaraLoopBehavior__Infinite                                                   = 0,
	ENiagaraLoopBehavior__Multiple                                                   = 1,
	ENiagaraLoopBehavior__Once                                                       = 2
};

/// Enum /Script/Niagara.ENiagaraTickBehavior
/// Size: 0x01 (1 bytes)
enum class ENiagaraTickBehavior : uint8_t
{
	ENiagaraTickBehavior__UsePrereqs                                                 = 0,
	ENiagaraTickBehavior__UseComponentTickGroup                                      = 1,
	ENiagaraTickBehavior__ForceTickFirst                                             = 2,
	ENiagaraTickBehavior__ForceTickLast                                              = 3
};

/// Enum /Script/Niagara.ENiagaraInputWidgetType
/// Size: 0x01 (1 bytes)
enum class ENiagaraInputWidgetType : uint8_t
{
	ENiagaraInputWidgetType__Default                                                 = 0,
	ENiagaraInputWidgetType__Slider                                                  = 1,
	ENiagaraInputWidgetType__Volume                                                  = 2,
	ENiagaraInputWidgetType__NumericDropdown                                         = 3,
	ENiagaraInputWidgetType__EnumStyle                                               = 4,
	ENiagaraInputWidgetType__SegmentedButtons                                        = 5
};

/// Enum /Script/Niagara.ENiagaraBoolDisplayMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraBoolDisplayMode : uint8_t
{
	ENiagaraBoolDisplayMode__DisplayAlways                                           = 0,
	ENiagaraBoolDisplayMode__DisplayIfTrue                                           = 1,
	ENiagaraBoolDisplayMode__DisplayIfFalse                                          = 2
};

/// Enum /Script/Niagara.ENDIActorComponentSourceMode
/// Size: 0x01 (1 bytes)
enum class ENDIActorComponentSourceMode : uint8_t
{
	ENDIActorComponentSourceMode__Default                                            = 0,
	ENDIActorComponentSourceMode__AttachParent                                       = 1,
	ENDIActorComponentSourceMode__LocalPlayer                                        = 2
};

/// Enum /Script/Niagara.ENDISceneCapture2DSourceMode
/// Size: 0x01 (1 bytes)
enum class ENDISceneCapture2DSourceMode : uint8_t
{
	ENDISceneCapture2DSourceMode__UserParameterThenAttachParent                      = 0,
	ENDISceneCapture2DSourceMode__UserParameterOnly                                  = 1,
	ENDISceneCapture2DSourceMode__AttachParentOnly                                   = 2,
	ENDISceneCapture2DSourceMode__Managed                                            = 3
};

/// Enum /Script/Niagara.ENDISceneCapture2DOffsetMode
/// Size: 0x01 (1 bytes)
enum class ENDISceneCapture2DOffsetMode : uint8_t
{
	ENDISceneCapture2DOffsetMode__Disabled                                           = 0,
	ENDISceneCapture2DOffsetMode__RelativeLocal                                      = 1,
	ENDISceneCapture2DOffsetMode__RelativeWorld                                      = 2,
	ENDISceneCapture2DOffsetMode__AbsoluteWorld                                      = 3
};

/// Enum /Script/Niagara.ENDIStaticMesh_SourceMode
/// Size: 0x01 (1 bytes)
enum class ENDIStaticMesh_SourceMode : uint8_t
{
	ENDIStaticMesh_SourceMode__Default                                               = 0,
	ENDIStaticMesh_SourceMode__Source                                                = 1,
	ENDIStaticMesh_SourceMode__AttachParent                                          = 2,
	ENDIStaticMesh_SourceMode__DefaultMeshOnly                                       = 3,
	ENDIStaticMesh_SourceMode__MeshParameterBinding                                  = 4
};

/// Enum /Script/Niagara.ENDIObjectPropertyReaderSourceMode
/// Size: 0x01 (1 bytes)
enum class ENDIObjectPropertyReaderSourceMode : uint8_t
{
	ENDIObjectPropertyReaderSourceMode__Binding                                      = 0,
	ENDIObjectPropertyReaderSourceMode__AttachParentActor                            = 1,
	ENDIObjectPropertyReaderSourceMode__BindingThenAttachParentActor                 = 2
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionStartBehavior
/// Size: 0x04 (4 bytes)
enum class ENiagaraSystemSpawnSectionStartBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionStartBehavior__Activate                                = 0
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
/// Size: 0x04 (4 bytes)
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionEvaluateBehavior__ActivateIfInactive                   = 0,
	ENiagaraSystemSpawnSectionEvaluateBehavior__None                                 = 1
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEndBehavior
/// Size: 0x04 (4 bytes)
enum class ENiagaraSystemSpawnSectionEndBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionEndBehavior__SetSystemInactive                         = 0,
	ENiagaraSystemSpawnSectionEndBehavior__Deactivate                                = 1,
	ENiagaraSystemSpawnSectionEndBehavior__None                                      = 2
};

/// Enum /Script/Niagara.ENiagaraCompilationState
/// Size: 0x01 (1 bytes)
enum class ENiagaraCompilationState : uint8_t
{
	ENiagaraCompilationState__CheckDDC                                               = 0,
	ENiagaraCompilationState__Precompile                                             = 1,
	ENiagaraCompilationState__StartCompileJob                                        = 2,
	ENiagaraCompilationState__AwaitResult                                            = 3,
	ENiagaraCompilationState__OptimizeByteCode                                       = 4,
	ENiagaraCompilationState__ProcessResult                                          = 5,
	ENiagaraCompilationState__PutToDDC                                               = 6,
	ENiagaraCompilationState__Finished                                               = 7,
	ENiagaraCompilationState__Aborted                                                = 8
};

/// Enum /Script/Niagara.ENiagaraBakerViewMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraBakerViewMode : uint32_t
{
	ENiagaraBakerViewMode__Perspective                                               = 0,
	ENiagaraBakerViewMode__OrthoFront                                                = 1,
	ENiagaraBakerViewMode__OrthoBack                                                 = 2,
	ENiagaraBakerViewMode__OrthoLeft                                                 = 3,
	ENiagaraBakerViewMode__OrthoRight                                                = 4,
	ENiagaraBakerViewMode__OrthoTop                                                  = 5,
	ENiagaraBakerViewMode__OrthoBottom                                               = 6,
	ENiagaraBakerViewMode__Num                                                       = 7
};

/// Enum /Script/Niagara.ENiagaraOcclusionQueryMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraOcclusionQueryMode : uint8_t
{
	ENiagaraOcclusionQueryMode__Default                                              = 0,
	ENiagaraOcclusionQueryMode__AlwaysEnabled                                        = 1,
	ENiagaraOcclusionQueryMode__AlwaysDisabled                                       = 2
};

/// Enum /Script/Niagara.ENiagartaDataChannelReadResult
/// Size: 0x01 (1 bytes)
enum class ENiagartaDataChannelReadResult : uint8_t
{
	ENiagartaDataChannelReadResult__Success                                          = 0,
	ENiagartaDataChannelReadResult__Failure                                          = 1
};

/// Enum /Script/Niagara.ENiagaraDataInterfaceEmitterBindingMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraDataInterfaceEmitterBindingMode : uint32_t
{
	ENiagaraDataInterfaceEmitterBindingMode__Self                                    = 0,
	ENiagaraDataInterfaceEmitterBindingMode__Other                                   = 1
};

/// Enum /Script/Niagara.ENDIExport_GPUAllocationMode
/// Size: 0x01 (1 bytes)
enum class ENDIExport_GPUAllocationMode : uint8_t
{
	ENDIExport_GPUAllocationMode__FixedSize                                          = 0,
	ENDIExport_GPUAllocationMode__PerParticle                                        = 1
};

/// Enum /Script/Niagara.ENDILandscape_SourceMode
/// Size: 0x01 (1 bytes)
enum class ENDILandscape_SourceMode : uint8_t
{
	ENDILandscape_SourceMode__Default                                                = 0,
	ENDILandscape_SourceMode__Source                                                 = 1,
	ENDILandscape_SourceMode__AttachParent                                           = 2
};

/// Enum /Script/Niagara.ESetResolutionMethod
/// Size: 0x04 (4 bytes)
enum class ESetResolutionMethod : uint32_t
{
	ESetResolutionMethod__Independent                                                = 0,
	ESetResolutionMethod__MaxAxis                                                    = 1,
	ESetResolutionMethod__CellSize                                                   = 2
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SourceMode
/// Size: 0x01 (1 bytes)
enum class ENDISkeletalMesh_SourceMode : uint8_t
{
	ENDISkeletalMesh_SourceMode__Default                                             = 0,
	ENDISkeletalMesh_SourceMode__Source                                              = 1,
	ENDISkeletalMesh_SourceMode__AttachParent                                        = 2,
	ENDISkeletalMesh_SourceMode__DefaultMeshOnly                                     = 3
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SkinningMode
/// Size: 0x01 (1 bytes)
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
	ENDISkeletalMesh_SkinningMode__Invalid                                           = 255,
	ENDISkeletalMesh_SkinningMode__None                                              = 0,
	ENDISkeletalMesh_SkinningMode__SkinOnTheFly                                      = 1,
	ENDISkeletalMesh_SkinningMode__PreSkin                                           = 2
};

/// Enum /Script/Niagara.ENiagaraDebugPlaybackMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraDebugPlaybackMode : uint8_t
{
	ENiagaraDebugPlaybackMode__Play                                                  = 0,
	ENiagaraDebugPlaybackMode__Loop                                                  = 1,
	ENiagaraDebugPlaybackMode__Paused                                                = 2,
	ENiagaraDebugPlaybackMode__Step                                                  = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHudHAlign
/// Size: 0x01 (1 bytes)
enum class ENiagaraDebugHudHAlign : uint8_t
{
	ENiagaraDebugHudHAlign__Left                                                     = 0,
	ENiagaraDebugHudHAlign__Center                                                   = 1,
	ENiagaraDebugHudHAlign__Right                                                    = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHudVAlign
/// Size: 0x01 (1 bytes)
enum class ENiagaraDebugHudVAlign : uint8_t
{
	ENiagaraDebugHudVAlign__Top                                                      = 0,
	ENiagaraDebugHudVAlign__Center                                                   = 1,
	ENiagaraDebugHudVAlign__Bottom                                                   = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHudFont
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHudFont : uint32_t
{
	ENiagaraDebugHudFont__Small                                                      = 0,
	ENiagaraDebugHudFont__Normal                                                     = 1
};

/// Enum /Script/Niagara.ENiagaraDebugHudVerbosity
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHudVerbosity : uint32_t
{
	ENiagaraDebugHudVerbosity__None                                                  = 0,
	ENiagaraDebugHudVerbosity__Basic                                                 = 1,
	ENiagaraDebugHudVerbosity__Verbose                                               = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHUDOverviewMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHUDOverviewMode : uint32_t
{
	ENiagaraDebugHUDOverviewMode__Overview                                           = 0,
	ENiagaraDebugHUDOverviewMode__Scalability                                        = 1,
	ENiagaraDebugHUDOverviewMode__Performance                                        = 2,
	ENiagaraDebugHUDOverviewMode__PerformanceGraph                                   = 3,
	ENiagaraDebugHUDOverviewMode__GpuComputePerformance                              = 4
};

/// Enum /Script/Niagara.ENiagaraDebugHUDPerfGraphMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHUDPerfGraphMode : uint32_t
{
	ENiagaraDebugHUDPerfGraphMode__GameThread                                        = 0,
	ENiagaraDebugHUDPerfGraphMode__RenderThread                                      = 1,
	ENiagaraDebugHUDPerfGraphMode__GPU                                               = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHUDPerfSampleMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHUDPerfSampleMode : uint32_t
{
	ENiagaraDebugHUDPerfSampleMode__FrameTotal                                       = 0,
	ENiagaraDebugHUDPerfSampleMode__PerInstanceAverage                               = 1
};

/// Enum /Script/Niagara.ENiagaraDebugHUDPerfUnits
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHUDPerfUnits : uint32_t
{
	ENiagaraDebugHUDPerfUnits__Microseconds                                          = 0,
	ENiagaraDebugHUDPerfUnits__Milliseconds                                          = 1
};

/// Enum /Script/Niagara.ENiagaraDebugHUDDOverviewSort
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHUDDOverviewSort : uint32_t
{
	ENiagaraDebugHUDDOverviewSort__Name                                              = 0,
	ENiagaraDebugHUDDOverviewSort__NumberRegistered                                  = 1,
	ENiagaraDebugHUDDOverviewSort__NumberActive                                      = 2,
	ENiagaraDebugHUDDOverviewSort__NumberScalability                                 = 3,
	ENiagaraDebugHUDDOverviewSort__MemoryUsage                                       = 4,
	ENiagaraDebugHUDDOverviewSort__RecentlyVisibilty                                 = 5
};

/// Enum /Script/Niagara.ENiagaraCullReaction
/// Size: 0x04 (4 bytes)
enum class ENiagaraCullReaction : uint32_t
{
	ENiagaraCullReaction__Deactivate                                                 = 0,
	ENiagaraCullReaction__DeactivateImmediate                                        = 1,
	ENiagaraCullReaction__DeactivateResume                                           = 2,
	ENiagaraCullReaction__DeactivateImmediateResume                                  = 3,
	ENiagaraCullReaction__PauseResume                                                = 4
};

/// Enum /Script/Niagara.ENiagaraScalabilityUpdateFrequency
/// Size: 0x04 (4 bytes)
enum class ENiagaraScalabilityUpdateFrequency : uint32_t
{
	ENiagaraScalabilityUpdateFrequency__SpawnOnly                                    = 0,
	ENiagaraScalabilityUpdateFrequency__Low                                          = 1,
	ENiagaraScalabilityUpdateFrequency__Medium                                       = 2,
	ENiagaraScalabilityUpdateFrequency__High                                         = 3,
	ENiagaraScalabilityUpdateFrequency__Continuous                                   = 4
};

/// Enum /Script/Niagara.ENiagaraCullProxyMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraCullProxyMode : uint32_t
{
	ENiagaraCullProxyMode__None                                                      = 0,
	ENiagaraCullProxyMode__Instanced_Rendered                                        = 1
};

/// Enum /Script/Niagara.EScriptExecutionMode
/// Size: 0x01 (1 bytes)
enum class EScriptExecutionMode : uint8_t
{
	EScriptExecutionMode__EveryParticle                                              = 0,
	EScriptExecutionMode__SpawnedParticles                                           = 1,
	EScriptExecutionMode__SingleParticle                                             = 2
};

/// Enum /Script/Niagara.EParticleAllocationMode
/// Size: 0x01 (1 bytes)
enum class EParticleAllocationMode : uint8_t
{
	EParticleAllocationMode__AutomaticEstimate                                       = 0,
	EParticleAllocationMode__ManualEstimate                                          = 1,
	EParticleAllocationMode__FixedCount                                              = 2
};

/// Enum /Script/Niagara.ENiagaraEmitterCalculateBoundMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraEmitterCalculateBoundMode : uint8_t
{
	ENiagaraEmitterCalculateBoundMode__Dynamic                                       = 0,
	ENiagaraEmitterCalculateBoundMode__Fixed                                         = 1,
	ENiagaraEmitterCalculateBoundMode__Programmable                                  = 2
};

/// Enum /Script/Niagara.ENiagaraEmitterMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraEmitterMode : uint8_t
{
	ENiagaraEmitterMode__Standard                                                    = 0,
	ENiagaraEmitterMode__Stateless                                                   = 1
};

/// Enum /Script/Niagara.ENiagaraMeshFacingMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraMeshFacingMode : uint8_t
{
	ENiagaraMeshFacingMode__Default                                                  = 0,
	ENiagaraMeshFacingMode__Velocity                                                 = 1,
	ENiagaraMeshFacingMode__CameraPosition                                           = 2,
	ENiagaraMeshFacingMode__CameraPlane                                              = 3
};

/// Enum /Script/Niagara.ENiagaraMeshPivotOffsetSpace
/// Size: 0x01 (1 bytes)
enum class ENiagaraMeshPivotOffsetSpace : uint8_t
{
	ENiagaraMeshPivotOffsetSpace__Mesh                                               = 0,
	ENiagaraMeshPivotOffsetSpace__Simulation                                         = 1,
	ENiagaraMeshPivotOffsetSpace__World                                              = 2,
	ENiagaraMeshPivotOffsetSpace__Local                                              = 3
};

/// Enum /Script/Niagara.ENiagaraMeshLockedAxisSpace
/// Size: 0x01 (1 bytes)
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
	ENiagaraMeshLockedAxisSpace__Simulation                                          = 0,
	ENiagaraMeshLockedAxisSpace__World                                               = 1,
	ENiagaraMeshLockedAxisSpace__Local                                               = 2
};

/// Enum /Script/Niagara.ENiagaraMeshLODMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraMeshLODMode : uint8_t
{
	ENiagaraMeshLODMode__LODLevel                                                    = 0,
	ENiagaraMeshLODMode__LODBias                                                     = 1,
	ENiagaraMeshLODMode__ByComponentBounds                                           = 2,
	ENiagaraMeshLODMode__PerParticle                                                 = 3
};

/// Enum /Script/Niagara.ENiagaraPlatformSelectionState
/// Size: 0x01 (1 bytes)
enum class ENiagaraPlatformSelectionState : uint8_t
{
	ENiagaraPlatformSelectionState__Default                                          = 0,
	ENiagaraPlatformSelectionState__Enabled                                          = 1,
	ENiagaraPlatformSelectionState__Disabled                                         = 2
};

/// Enum /Script/Niagara.ENiagaraPlatformSetState
/// Size: 0x01 (1 bytes)
enum class ENiagaraPlatformSetState : uint8_t
{
	ENiagaraPlatformSetState__Disabled                                               = 0,
	ENiagaraPlatformSetState__Enabled                                                = 1,
	ENiagaraPlatformSetState__Active                                                 = 2,
	ENiagaraPlatformSetState__Unknown                                                = 3
};

/// Enum /Script/Niagara.ENiagaraCVarConditionResponse
/// Size: 0x01 (1 bytes)
enum class ENiagaraCVarConditionResponse : uint8_t
{
	ENiagaraCVarConditionResponse__None                                              = 0,
	ENiagaraCVarConditionResponse__Enable                                            = 1,
	ENiagaraCVarConditionResponse__Disable                                           = 2
};

/// Enum /Script/Niagara.ENiagaraDeviceProfileRedirectMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraDeviceProfileRedirectMode : uint8_t
{
	ENiagaraDeviceProfileRedirectMode__CVar                                          = 0,
	ENiagaraDeviceProfileRedirectMode__DeviceProfile                                 = 1
};

/// Enum /Script/Niagara.ENiagaraPreviewGridResetMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraPreviewGridResetMode : uint8_t
{
	ENiagaraPreviewGridResetMode__Never                                              = 0,
	ENiagaraPreviewGridResetMode__Individual                                         = 1,
	ENiagaraPreviewGridResetMode__All                                                = 2
};

/// Enum /Script/Niagara.ENiagaraRendererSortPrecision
/// Size: 0x01 (1 bytes)
enum class ENiagaraRendererSortPrecision : uint8_t
{
	ENiagaraRendererSortPrecision__Default                                           = 0,
	ENiagaraRendererSortPrecision__Low                                               = 1,
	ENiagaraRendererSortPrecision__High                                              = 2
};

/// Enum /Script/Niagara.ENiagaraRendererGpuTranslucentLatency
/// Size: 0x01 (1 bytes)
enum class ENiagaraRendererGpuTranslucentLatency : uint8_t
{
	ENiagaraRendererGpuTranslucentLatency__ProjectDefault                            = 0,
	ENiagaraRendererGpuTranslucentLatency__Immediate                                 = 1,
	ENiagaraRendererGpuTranslucentLatency__Latent                                    = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonFacingMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonFacingMode : uint8_t
{
	ENiagaraRibbonFacingMode__Screen                                                 = 0,
	ENiagaraRibbonFacingMode__Custom                                                 = 1,
	ENiagaraRibbonFacingMode__CustomSideVector                                       = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonAgeOffsetMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
	ENiagaraRibbonAgeOffsetMode__Scale                                               = 0,
	ENiagaraRibbonAgeOffsetMode__Clip                                                = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonDrawDirection
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonDrawDirection : uint8_t
{
	ENiagaraRibbonDrawDirection__FrontToBack                                         = 0,
	ENiagaraRibbonDrawDirection__BackToFront                                         = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonShapeMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonShapeMode : uint8_t
{
	ENiagaraRibbonShapeMode__Plane                                                   = 0,
	ENiagaraRibbonShapeMode__MultiPlane                                              = 1,
	ENiagaraRibbonShapeMode__Tube                                                    = 2,
	ENiagaraRibbonShapeMode__Custom                                                  = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonTessellationMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonTessellationMode : uint8_t
{
	ENiagaraRibbonTessellationMode__Automatic                                        = 0,
	ENiagaraRibbonTessellationMode__Custom                                           = 1,
	ENiagaraRibbonTessellationMode__Disabled                                         = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonUVEdgeMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonUVEdgeMode : uint8_t
{
	ENiagaraRibbonUVEdgeMode__SmoothTransition                                       = 0,
	ENiagaraRibbonUVEdgeMode__Locked                                                 = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonUVDistributionMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonUVDistributionMode : uint8_t
{
	ENiagaraRibbonUVDistributionMode__ScaledUniformly                                = 0,
	ENiagaraRibbonUVDistributionMode__ScaledUsingRibbonSegmentLength                 = 1,
	ENiagaraRibbonUVDistributionMode__TiledOverRibbonLength                          = 2,
	ENiagaraRibbonUVDistributionMode__TiledFromStartOverRibbonLength                 = 3
};

/// Enum /Script/Niagara.EUnusedAttributeBehaviour
/// Size: 0x01 (1 bytes)
enum class EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy                                                  = 0,
	EUnusedAttributeBehaviour__Zero                                                  = 1,
	EUnusedAttributeBehaviour__None                                                  = 2,
	EUnusedAttributeBehaviour__MarkInvalid                                           = 3,
	EUnusedAttributeBehaviour__PassThrough                                           = 4
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyType
/// Size: 0x01 (1 bytes)
enum class ENiagaraModuleDependencyType : uint8_t
{
	ENiagaraModuleDependencyType__PreDependency                                      = 0,
	ENiagaraModuleDependencyType__PostDependency                                     = 1
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyScriptConstraint
/// Size: 0x01 (1 bytes)
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	ENiagaraModuleDependencyScriptConstraint__SameScript                             = 0,
	ENiagaraModuleDependencyScriptConstraint__AllScripts                             = 1
};

/// Enum /Script/Niagara.ENiagaraScriptLibraryVisibility
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptLibraryVisibility : uint8_t
{
	ENiagaraScriptLibraryVisibility__Invalid                                         = 0,
	ENiagaraScriptLibraryVisibility__Unexposed                                       = 1,
	ENiagaraScriptLibraryVisibility__Library                                         = 2,
	ENiagaraScriptLibraryVisibility__Hidden                                          = 3
};

/// Enum /Script/Niagara.ENiagaraScriptTemplateSpecification
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptTemplateSpecification : uint8_t
{
	ENiagaraScriptTemplateSpecification__None                                        = 0,
	ENiagaraScriptTemplateSpecification__Template                                    = 1,
	ENiagaraScriptTemplateSpecification__Behavior                                    = 2
};

/// Enum /Script/Niagara.ENiagaraEmitterDefaultSummaryState
/// Size: 0x01 (1 bytes)
enum class ENiagaraEmitterDefaultSummaryState : uint8_t
{
	ENiagaraEmitterDefaultSummaryState__Default                                      = 0,
	ENiagaraEmitterDefaultSummaryState__Summary                                      = 1
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyUsage
/// Size: 0x01 (1 bytes)
enum class ENiagaraModuleDependencyUsage : uint8_t
{
	ENiagaraModuleDependencyUsage__None                                              = 0,
	ENiagaraModuleDependencyUsage__Spawn                                             = 1,
	ENiagaraModuleDependencyUsage__Update                                            = 2,
	ENiagaraModuleDependencyUsage__Event                                             = 3,
	ENiagaraModuleDependencyUsage__SimulationStage                                   = 4
};

/// Enum /Script/Niagara.ENiagaraInlineDynamicInputFormatTokenUsage
/// Size: 0x01 (1 bytes)
enum class ENiagaraInlineDynamicInputFormatTokenUsage : uint8_t
{
	ENiagaraInlineDynamicInputFormatTokenUsage__Input                                = 0,
	ENiagaraInlineDynamicInputFormatTokenUsage__Decorator                            = 1,
	ENiagaraInlineDynamicInputFormatTokenUsage__LineBreak                            = 2
};

/// Enum /Script/Niagara.ENiagaraSpriteAlignment
/// Size: 0x01 (1 bytes)
enum class ENiagaraSpriteAlignment : uint8_t
{
	ENiagaraSpriteAlignment__Unaligned                                               = 0,
	ENiagaraSpriteAlignment__VelocityAligned                                         = 1,
	ENiagaraSpriteAlignment__CustomAlignment                                         = 2,
	ENiagaraSpriteAlignment__Automatic                                               = 3
};

/// Enum /Script/Niagara.ENiagaraSpriteFacingMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraSpriteFacingMode : uint8_t
{
	ENiagaraSpriteFacingMode__FaceCamera                                             = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane                                        = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector                                     = 2,
	ENiagaraSpriteFacingMode__FaceCameraPosition                                     = 3,
	ENiagaraSpriteFacingMode__FaceCameraDistanceBlend                                = 4,
	ENiagaraSpriteFacingMode__Automatic                                              = 5
};

/// Enum /Script/Niagara.ENiagaraRendererPixelCoverageMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRendererPixelCoverageMode : uint8_t
{
	ENiagaraRendererPixelCoverageMode__Automatic                                     = 0,
	ENiagaraRendererPixelCoverageMode__Disabled                                      = 1,
	ENiagaraRendererPixelCoverageMode__Enabled                                       = 2,
	ENiagaraRendererPixelCoverageMode__Enabled_RGBA                                  = 3,
	ENiagaraRendererPixelCoverageMode__Enabled_RGB                                   = 4,
	ENiagaraRendererPixelCoverageMode__Enabled_A                                     = 5
};

/// Enum /Script/Niagara.ENiagaraStructConversionType
/// Size: 0x01 (1 bytes)
enum class ENiagaraStructConversionType : uint8_t
{
	ENiagaraStructConversionType__CopyOnly                                           = 0,
	ENiagaraStructConversionType__DoubleToFloat                                      = 1,
	ENiagaraStructConversionType__Vector2                                            = 2,
	ENiagaraStructConversionType__Vector3                                            = 3,
	ENiagaraStructConversionType__Vector4                                            = 4,
	ENiagaraStructConversionType__Quat                                               = 5
};

/// Enum /Script/Niagara.ENiagaraNumericOutputTypeSelectionMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	ENiagaraNumericOutputTypeSelectionMode__None                                     = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest                                  = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest                                 = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar                                   = 3,
	ENiagaraNumericOutputTypeSelectionMode__Custom                                   = 4
};

/// Enum /Script/Niagara.ENiagaraExecutionStateSource
/// Size: 0x01 (1 bytes)
enum class ENiagaraExecutionStateSource : uint8_t
{
	ENiagaraExecutionStateSource__Scalability                                        = 0,
	ENiagaraExecutionStateSource__Internal                                           = 1,
	ENiagaraExecutionStateSource__Owner                                              = 2,
	ENiagaraExecutionStateSource__InternalCompletion                                 = 3
};

/// Enum /Script/Niagara.ENiagaraExecutionState
/// Size: 0x04 (4 bytes)
enum class ENiagaraExecutionState : uint32_t
{
	ENiagaraExecutionState__Active                                                   = 0,
	ENiagaraExecutionState__Inactive                                                 = 1,
	ENiagaraExecutionState__InactiveClear                                            = 2,
	ENiagaraExecutionState__Complete                                                 = 3,
	ENiagaraExecutionState__Disabled                                                 = 4,
	ENiagaraExecutionState__Num                                                      = 5
};

/// Enum /Script/Niagara.ENiagaraCoordinateSpace
/// Size: 0x01 (1 bytes)
enum class ENiagaraCoordinateSpace : uint8_t
{
	ENiagaraCoordinateSpace__Simulation                                              = 0,
	ENiagaraCoordinateSpace__World                                                   = 1,
	ENiagaraCoordinateSpace__Local                                                   = 2
};

/// Enum /Script/Niagara.ENiagaraPythonUpdateScriptReference
/// Size: 0x01 (1 bytes)
enum class ENiagaraPythonUpdateScriptReference : uint8_t
{
	ENiagaraPythonUpdateScriptReference__None                                        = 0,
	ENiagaraPythonUpdateScriptReference__ScriptAsset                                 = 1,
	ENiagaraPythonUpdateScriptReference__DirectTextEntry                             = 2
};

/// Enum /Script/Niagara.ENiagaraOrientationAxis
/// Size: 0x01 (1 bytes)
enum class ENiagaraOrientationAxis : uint8_t
{
	ENiagaraOrientationAxis__XAxis                                                   = 0,
	ENiagaraOrientationAxis__YAxis                                                   = 1,
	ENiagaraOrientationAxis__ZAxis                                                   = 2
};

/// Enum /Script/Niagara.ENiagaraValidationSeverity
/// Size: 0x01 (1 bytes)
enum class ENiagaraValidationSeverity : uint8_t
{
	ENiagaraValidationSeverity__Info                                                 = 0,
	ENiagaraValidationSeverity__Warning                                              = 1,
	ENiagaraValidationSeverity__Error                                                = 2
};

/// Enum /Script/Niagara.ENiagaraVariantMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraVariantMode : uint32_t
{
	ENiagaraVariantMode__None                                                        = 0,
	ENiagaraVariantMode__Object                                                      = 1,
	ENiagaraVariantMode__DataInterface                                               = 2,
	ENiagaraVariantMode__Bytes                                                       = 3
};

/// Enum /Script/Niagara.EVolumeCacheType
/// Size: 0x01 (1 bytes)
enum class EVolumeCacheType : uint8_t
{
	EVolumeCacheType__OpenVDB                                                        = 0
};

/// Struct /Script/Niagara.NDIRenderTargetVolumeSimCacheFrame
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FNDIRenderTargetVolumeSimCacheFrame
{ 
	FIntVector                                         Size;                                                       // 0x0000   (0x000C)  
	TEnumAsByte<EPixelFormat>                          Format;                                                     // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	int32_t                                            UncompressedSize;                                           // 0x0010   (0x0004)  
	int32_t                                            CompressedSize;                                             // 0x0014   (0x0004)  
	unsigned char                                      UnknownData01_7[0x30];                                      // 0x0018   (0x0030)  MISSED
};

/// Class /Script/Niagara.NDIRenderTargetVolumeSimCacheData
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UNDIRenderTargetVolumeSimCacheData : public UObject
{ 
public:
	FName                                              CompressionType;                                            // 0x0028   (0x0008)  
	TArray<FNDIRenderTargetVolumeSimCacheFrame>        Frames;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraAssetTagDefinition
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FNiagaraAssetTagDefinition
{ 
	FText                                              AssetTag;                                                   // 0x0000   (0x0018)  
	int32_t                                            AssetFlags;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FText                                              Description;                                                // 0x0018   (0x0018)  
	ENiagaraAssetTagDefinitionImportance               DisplayType;                                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x002C   (0x0010)  
	FGuid                                              TagGuid;                                                    // 0x003C   (0x0010)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraAssetTagDefinitions
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraAssetTagDefinitions : public UObject
{ 
public:
	FText                                              DisplayName;                                                // 0x0028   (0x0018)  
	FText                                              Description;                                                // 0x0038   (0x0018)  
	TArray<FNiagaraAssetTagDefinition>                 TagDefinitions;                                             // 0x0048   (0x0010)  
	bool                                               bDisplayTagsAsFlatList;                                     // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	int32_t                                            sortOrder;                                                  // 0x005C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraConvertInPlaceUtilityBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraConvertInPlaceUtilityBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataChannelReader
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataChannelReader : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0028   (0x0018)  MISSED
	class UNiagaraDataChannelHandler*                  Owner;                                                      // 0x0040   (0x0008)  


	/// Functions
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadVector4
	// FVector4 ReadVector4(FName VarName, int32_t Index, bool& IsValid);                                                       // [0x61dbda0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadVector2D
	// FVector2D ReadVector2D(FName VarName, int32_t Index, bool& IsValid);                                                     // [0x61dbc70] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadVector
	// FVector ReadVector(FName VarName, int32_t Index, bool& IsValid);                                                         // [0x61dbef0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadSpawnInfo
	// FNiagaraSpawnInfo ReadSpawnInfo(FName VarName, int32_t Index, bool& IsValid);                                            // [0x61dbb40] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadQuat
	// FQuat ReadQuat(FName VarName, int32_t Index, bool& IsValid);                                                             // [0x61db9f0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadPosition
	// FVector ReadPosition(FName VarName, int32_t Index, bool& IsValid);                                                       // [0x61db8a0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadLinearColor
	// FLinearColor ReadLinearColor(FName VarName, int32_t Index, bool& IsValid);                                               // [0x61db770] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadInt
	// int32_t ReadInt(FName VarName, int32_t Index, bool& IsValid);                                                            // [0x61db650] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadID
	// FNiagaraID ReadID(FName VarName, int32_t Index, bool& IsValid);                                                          // [0x61db520] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadFloat
	// double ReadFloat(FName VarName, int32_t Index, bool& IsValid);                                                           // [0x61db400] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadEnum
	// char ReadEnum(FName VarName, int32_t Index, bool& IsValid);                                                              // [0x61db2e0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadBool
	// bool ReadBool(FName VarName, int32_t Index, bool& IsValid);                                                              // [0x61db1c0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.Num
	// int32_t Num();                                                                                                           // [0x61db160] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.InitAccess
	// bool InitAccess(FNiagaraDataChannelSearchParameters SearchParams, bool bReadPrevFrameData);                              // [0x61dada0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataChannelWriter
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataChannelWriter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	class UNiagaraDataChannelHandler*                  Owner;                                                      // 0x0038   (0x0008)  


	/// Functions
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteVector4
	// void WriteVector4(FName VarName, int32_t Index, FVector4 InData);                                                        // [0x61dcb60] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteVector2D
	// void WriteVector2D(FName VarName, int32_t Index, FVector2D InData);                                                      // [0x61dca40] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteVector
	// void WriteVector(FName VarName, int32_t Index, FVector InData);                                                          // [0x61dcca0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteSpawnInfo
	// void WriteSpawnInfo(FName VarName, int32_t Index, FNiagaraSpawnInfo InData);                                             // [0x61dc920] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteQuat
	// void WriteQuat(FName VarName, int32_t Index, FQuat InData);                                                              // [0x61dc7f0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WritePosition
	// void WritePosition(FName VarName, int32_t Index, FVector InData);                                                        // [0x61dc6c0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteLinearColor
	// void WriteLinearColor(FName VarName, int32_t Index, FLinearColor InData);                                                // [0x61dc5a0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteInt
	// void WriteInt(FName VarName, int32_t Index, int32_t InData);                                                             // [0x61dc490] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteID
	// void WriteID(FName VarName, int32_t Index, FNiagaraID InData);                                                           // [0x61dc380] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteFloat
	// void WriteFloat(FName VarName, int32_t Index, double InData);                                                            // [0x61dc260] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteEnum
	// void WriteEnum(FName VarName, int32_t Index, char InData);                                                               // [0x61dc150] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteBool
	// void WriteBool(FName VarName, int32_t Index, bool InData);                                                               // [0x61dc040] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.Num
	// int32_t Num();                                                                                                           // [0x61db190] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelWriter.InitWrite
	// bool InitWrite(FNiagaraDataChannelSearchParameters SearchParams, int32_t Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU, FString DebugSource); // [0x61daef0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataChannelHandler
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataChannelHandler : public UObject
{ 
public:
	TWeakObjectPtr<class UNiagaraDataChannel*>         DataChannel;                                                // 0x0028   (0x0008)  
	class UNiagaraDataChannelWriter*                   Writer;                                                     // 0x0030   (0x0008)  
	class UNiagaraDataChannelReader*                   Reader;                                                     // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0040   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraDataChannelHandler.GetDataChannelWriter
	// class UNiagaraDataChannelWriter* GetDataChannelWriter();                                                                 // [0x61e2a40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelHandler.GetDataChannelReader
	// class UNiagaraDataChannelReader* GetDataChannelReader();                                                                 // [0x61e2a10] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataChannelAsset
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UNiagaraDataChannelAsset : public UObject
{ 
public:
	class UNiagaraDataChannel*                         DataChannel;                                                // 0x0028   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraTypeDefinitionHandle
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FNiagaraTypeDefinitionHandle
{ 
	int32_t                                            RegisteredTypeIndex;                                        // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVariableBase
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraVariableBase
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FNiagaraTypeDefinitionHandle                       TypeDefHandle;                                              // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraDataChannelVariable
/// Size: 0x000C (12 bytes) (0x00000C - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraDataChannelVariable : FNiagaraVariableBase
{ 
};

/// Struct /Script/Niagara.NiagaraTypeLayoutInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraTypeLayoutInfo
{ 
	uint16_t                                           NumFloatComponents;                                         // 0x0000   (0x0002)  
	uint16_t                                           NumInt32Components;                                         // 0x0002   (0x0002)  
	uint16_t                                           NumHalfComponents;                                          // 0x0004   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	TArray<uint32_t>                                   ComponentsOffsets;                                          // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraVariableLayoutInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraVariableLayoutInfo
{ 
	uint16_t                                           FloatComponentStart;                                        // 0x0000   (0x0002)  
	uint16_t                                           Int32ComponentStart;                                        // 0x0002   (0x0002)  
	uint16_t                                           HalfComponentStart;                                         // 0x0004   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	FNiagaraTypeLayoutInfo                             LayoutInfo;                                                 // 0x0008   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraDataSetID
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraDataSetID
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	ENiagaraDataSetType                                Type;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraDataSetCompiledData
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FNiagaraDataSetCompiledData
{ 
	TArray<FNiagaraVariableBase>                       Variables;                                                  // 0x0000   (0x0010)  
	TArray<FNiagaraVariableLayoutInfo>                 VariableLayouts;                                            // 0x0010   (0x0010)  
	FNiagaraDataSetID                                  ID;                                                         // 0x0020   (0x000C)  
	uint32_t                                           TotalFloatComponents;                                       // 0x002C   (0x0004)  
	uint32_t                                           TotalInt32Components;                                       // 0x0030   (0x0004)  
	uint32_t                                           TotalHalfComponents;                                        // 0x0034   (0x0004)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_7[0xB];                                       // 0x003D   (0x000B)  MISSED
};

/// Class /Script/Niagara.NiagaraDataChannel
/// Size: 0x0130 (304 bytes) (0x000028 - 0x000130) align 8 MaxSize: 0x0130
class UNiagaraDataChannel : public UObject
{ 
public:
	TArray<FNiagaraDataChannelVariable>                ChannelVariables;                                           // 0x0028   (0x0010)  
	bool                                               bKeepPreviousFrameData;                                     // 0x0038   (0x0001)  
	bool                                               bEnforceTickGroupReadWriteOrder;                            // 0x0039   (0x0001)  
	TEnumAsByte<ETickingGroup>                         FinalWriteTickGroup;                                        // 0x003A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x003B   (0x0005)  MISSED
	FNiagaraDataSetCompiledData                        CompiledData;                                               // 0x0040   (0x0048)  
	FNiagaraDataSetCompiledData                        CompiledDataGPU;                                            // 0x0088   (0x0048)  
	unsigned char                                      UnknownData01_7[0x60];                                      // 0x00D0   (0x0060)  MISSED
};

/// Class /Script/Niagara.NiagaraDataChannel_Global
/// Size: 0x0130 (304 bytes) (0x000130 - 0x000130) align 8 MaxSize: 0x0130
class UNiagaraDataChannel_Global : public UNiagaraDataChannel
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataChannelHandler_Global
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraDataChannelHandler_Global : public UNiagaraDataChannelHandler
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Struct /Script/Niagara.NDCIslandDebugDrawSettings
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FNDCIslandDebugDrawSettings
{ 
	bool                                               bEnabled : 1;                                               // 0x0000:0 (0x0001)  
	bool                                               bShowIslandBounds : 1;                                      // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0001   (0x0003)  MISSED
};

/// Class /Script/Niagara.NiagaraDataChannel_Islands
/// Size: 0x01B8 (440 bytes) (0x000130 - 0x0001B8) align 8 MaxSize: 0x01B8
class UNiagaraDataChannel_Islands : public UNiagaraDataChannel
{ 
public:
	ENiagraDataChannel_IslandMode                      Mode;                                                       // 0x0130   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0131   (0x0007)  MISSED
	FVector                                            InitialExtents;                                             // 0x0138   (0x0018)  
	FVector                                            MaxExtents;                                                 // 0x0150   (0x0018)  
	FVector                                            PerElementExtents;                                          // 0x0168   (0x0018)  
	SDK_UNDEFINED(16,406) /* TArray<TWeakObjectPtr<UNiagaraSystem*>> */ __um(Systems);                             // 0x0180   (0x0010)  
	int32_t                                            IslandPoolSize;                                             // 0x0190   (0x0004)  
	FNDCIslandDebugDrawSettings                        DebugDrawSettings;                                          // 0x0194   (0x0004)  
	TArray<class UNiagaraSystem*>                      SystemsInternal;                                            // 0x0198   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x01A8   (0x0010)  MISSED
};

/// Struct /Script/Niagara.NDCIsland
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FNDCIsland
{ 
	class UNiagaraDataChannelHandler_Islands*          Owner;                                                      // 0x0000   (0x0008)  
	FBoxSphereBounds                                   Bounds;                                                     // 0x0008   (0x0038)  
	TArray<class UNiagaraComponent*>                   NiagaraSystems;                                             // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0050   (0x0020)  MISSED
};

/// Class /Script/Niagara.NiagaraDataChannelHandler_Islands
/// Size: 0x0078 (120 bytes) (0x000048 - 0x000078) align 8 MaxSize: 0x0078
class UNiagaraDataChannelHandler_Islands : public UNiagaraDataChannelHandler
{ 
public:
	TArray<int32_t>                                    ActiveIslands;                                              // 0x0048   (0x0010)  
	TArray<int32_t>                                    FreeIslands;                                                // 0x0058   (0x0010)  
	TArray<FNDCIsland>                                 IslandPool;                                                 // 0x0068   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterface
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceRWBase
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{ 
public:
};

/// Struct /Script/Niagara.NDIDataChannelFunctionInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNDIDataChannelFunctionInfo
{ 
	FName                                              FunctionName;                                               // 0x0000   (0x0008)  
	TArray<FNiagaraVariableBase>                       Inputs;                                                     // 0x0008   (0x0010)  
	TArray<FNiagaraVariableBase>                       Outputs;                                                    // 0x0018   (0x0010)  
};

/// Struct /Script/Niagara.NDIDataChannel_GPUScriptParameterAccessInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNDIDataChannel_GPUScriptParameterAccessInfo
{ 
	TArray<FNiagaraVariableBase>                       SortedParameters;                                           // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NDIDataChannelCompiledData
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FNDIDataChannelCompiledData
{ 
	TArray<FNDIDataChannelFunctionInfo>                FunctionInfo;                                               // 0x0000   (0x0010)  
	TMap<FNiagaraCompileHash, FNDIDataChannel_GPUScriptParameterAccessInfo> GPUScriptParameterInfos;               // 0x0010   (0x0050)  
	uint32_t                                           TotalParams;                                                // 0x0060   (0x0004)  
	bool                                               bUsedByCPU;                                                 // 0x0064   (0x0001)  
	bool                                               bUsedByGPU;                                                 // 0x0065   (0x0001)  
	bool                                               bNeedsSpawnDataTable;                                       // 0x0066   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x0067   (0x0001)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceDataChannelRead
/// Size: 0x00B0 (176 bytes) (0x000038 - 0x0000B0) align 8 MaxSize: 0x00B0
class UNiagaraDataInterfaceDataChannelRead : public UNiagaraDataInterfaceRWBase
{ 
public:
	class UNiagaraDataChannelAsset*                    Channel;                                                    // 0x0038   (0x0008)  
	bool                                               bReadCurrentFrame;                                          // 0x0040   (0x0001)  
	bool                                               bUpdateSourceDataEveryTick;                                 // 0x0041   (0x0001)  
	bool                                               bOverrideSpawnGroupToDataChannelIndex;                      // 0x0042   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0043   (0x0005)  MISSED
	FNDIDataChannelCompiledData                        CompiledData;                                               // 0x0048   (0x0068)  
};

/// Struct /Script/Niagara.NDIDataChannelWriteSimCacheFrameBuffer
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNDIDataChannelWriteSimCacheFrameBuffer
{ 
	TArray<char>                                       Data;                                                       // 0x0000   (0x0010)  
	int32_t                                            Size;                                                       // 0x0010   (0x0004)  
	FNiagaraVariableBase                               SourceVar;                                                  // 0x0014   (0x000C)  
};

/// Struct /Script/Niagara.NDIDataChannelWriteSimCacheFrame
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNDIDataChannelWriteSimCacheFrame
{ 
	int32_t                                            NumElements;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FNDIDataChannelWriteSimCacheFrameBuffer>    VariableData;                                               // 0x0008   (0x0010)  
	bool                                               bVisibleToGame;                                             // 0x0018   (0x0001)  
	bool                                               bVisibleToCPUSims;                                          // 0x0019   (0x0001)  
	bool                                               bVisibleToGPUSims;                                          // 0x001A   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x001B   (0x0005)  MISSED
};

/// Class /Script/Niagara.NDIDataChannelWriteSimCacheData
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UNDIDataChannelWriteSimCacheData : public UObject
{ 
public:
	TArray<FNDIDataChannelWriteSimCacheFrame>          FrameData;                                                  // 0x0028   (0x0010)  
	FSoftObjectPath                                    DataChannelReference;                                       // 0x0038   (0x0020)  
};

/// Struct /Script/Niagara.NDIDataChannelWriteCompiledData
/// Size: 0x00B0 (176 bytes) (0x000068 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FNDIDataChannelWriteCompiledData : FNDIDataChannelCompiledData
{ 
	FNiagaraDataSetCompiledData                        DataLayout;                                                 // 0x0068   (0x0048)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceDataChannelWrite
/// Size: 0x0108 (264 bytes) (0x000038 - 0x000108) align 8 MaxSize: 0x0108
class UNiagaraDataInterfaceDataChannelWrite : public UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	ENiagaraDataChannelAllocationMode                  AllocationMode;                                             // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	uint32_t                                           AllocationCount;                                            // 0x0044   (0x0004)  
	bool                                               bPublishToGame;                                             // 0x0048   (0x0001)  
	bool                                               bPublishToCPU;                                              // 0x0049   (0x0001)  
	bool                                               bPublishToGPU;                                              // 0x004A   (0x0001)  
	bool                                               bUpdateDestinationDataEveryTick;                            // 0x004B   (0x0001)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	class UNiagaraDataChannelAsset*                    Channel;                                                    // 0x0050   (0x0008)  
	FNDIDataChannelWriteCompiledData                   CompiledData;                                               // 0x0058   (0x00B0)  
};

/// Class /Script/Niagara.NiagaraMessageDataBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraMessageDataBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraParameterDefinitionsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraParameterDefinitionsBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraRenderableMeshInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraRenderableMeshInterface : public UInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraScriptSourceBase
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraScriptSourceBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Struct /Script/Niagara.NiagaraPlatformSetCVarCondition
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNiagaraPlatformSetCVarCondition
{ 
	FName                                              CVarName;                                                   // 0x0000   (0x0008)  
	ENiagaraCVarConditionResponse                      PassResponse;                                               // 0x0008   (0x0001)  
	ENiagaraCVarConditionResponse                      FailResponse;                                               // 0x0009   (0x0001)  
	bool                                               Value;                                                      // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x000B   (0x0001)  MISSED
	int32_t                                            MinInt;                                                     // 0x000C   (0x0004)  
	int32_t                                            MaxInt;                                                     // 0x0010   (0x0004)  
	float                                              MinFloat;                                                   // 0x0014   (0x0004)  
	float                                              MaxFloat;                                                   // 0x0018   (0x0004)  
	bool                                               bUseMinInt : 1;                                             // 0x001C:0 (0x0001)  
	bool                                               bUseMaxInt : 1;                                             // 0x001C:1 (0x0001)  
	bool                                               bUseMinFloat : 1;                                           // 0x001C:2 (0x0001)  
	bool                                               bUseMaxFloat : 1;                                           // 0x001C:3 (0x0001)  
	unsigned char                                      UnknownData01_7[0x13];                                      // 0x001D   (0x0013)  MISSED
};

/// Struct /Script/Niagara.NiagaraPlatformSetRedirect
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FNiagaraPlatformSetRedirect
{ 
	TArray<FName>                                      ProfileNames;                                               // 0x0000   (0x0010)  
	ENiagaraDeviceProfileRedirectMode                  Mode;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FName                                              RedirectProfileName;                                        // 0x0014   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FNiagaraPlatformSetCVarCondition                   CVarConditionEnabled;                                       // 0x0020   (0x0030)  
	FNiagaraPlatformSetCVarCondition                   CVarConditionDisabled;                                      // 0x0050   (0x0030)  
};

/// Class /Script/Niagara.NiagaraSettings
/// Size: 0x0150 (336 bytes) (0x000038 - 0x000150) align 8 MaxSize: 0x0150
class UNiagaraSettings : public UDeveloperSettings
{ 
public:
	bool                                               bSystemsSupportLargeWorldCoordinates;                       // 0x0038   (0x0001)  
	bool                                               bEnforceStrictStackTypes;                                   // 0x0039   (0x0001)  
	bool                                               bExperimentalVMEnabled;                                     // 0x003A   (0x0001)  
	bool                                               bStatelessEmittersEnabled;                                  // 0x003B   (0x0001)  
	bool                                               bAccurateQuatInterpolation;                                 // 0x003C   (0x0001)  
	ENiagaraCompileErrorSeverity                       InvalidNamespaceWriteSeverity;                              // 0x003D   (0x0001)  
	bool                                               bLimitDeltaTime;                                            // 0x003E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x003F   (0x0001)  MISSED
	float                                              MaxDeltaTimePerTick;                                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FSoftObjectPath                                    DefaultEffectType;                                          // 0x0048   (0x0020)  
	FSoftObjectPath                                    RequiredEffectType;                                         // 0x0068   (0x0020)  
	bool                                               bAllowCreateActorFromSystemWithNoEffectType;                // 0x0088   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	FLinearColor                                       PositionPinTypeColor;                                       // 0x008C   (0x0010)  
	ENiagaraStripScriptByteCodeOption                  ByteCodeStripOption;                                        // 0x009C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x009D   (0x0003)  MISSED
	TArray<FText>                                      QualityLevels;                                              // 0x00A0   (0x0010)  
	TMap<FString, FText>                               ComponentRendererWarningsPerClass;                          // 0x00B0   (0x0050)  
	TEnumAsByte<ETextureRenderTargetFormat>            DefaultRenderTargetFormat;                                  // 0x0100   (0x0001)  
	ENiagaraGpuBufferFormat                            DefaultGridFormat;                                          // 0x0101   (0x0001)  
	unsigned char                                      UnknownData04_6[0x2];                                       // 0x0102   (0x0002)  MISSED
	ENiagaraDefaultRendererMotionVectorSetting         DefaultRendererMotionVectorSetting;                         // 0x0104   (0x0004)  
	ENiagaraDefaultRendererPixelCoverageMode           DefaultPixelCoverageMode;                                   // 0x0108   (0x0001)  
	ENiagaraDefaultSortPrecision                       DefaultSortPrecision;                                       // 0x0109   (0x0001)  
	ENiagaraDefaultGpuTranslucentLatency               DefaultGpuTranslucentLatency;                               // 0x010A   (0x0001)  
	unsigned char                                      UnknownData05_6[0x1];                                       // 0x010B   (0x0001)  MISSED
	float                                              DefaultLightInverseExposureBlend;                           // 0x010C   (0x0004)  
	bool                                               NDISkelMesh_SupportReadingDeformedGeometry;                 // 0x0110   (0x0001)  
	bool                                               NDISkelMesh_Support16BitIndexWeight;                        // 0x0111   (0x0001)  
	TEnumAsByte<ENDISkelMesh_GpuMaxInfluences>         NDISkelMesh_GpuMaxInfluences;                               // 0x0112   (0x0001)  
	TEnumAsByte<ENDISkelMesh_GpuUniformSamplingFormat> NDISkelMesh_GpuUniformSamplingFormat;                       // 0x0113   (0x0001)  
	TEnumAsByte<ENDISkelMesh_AdjacencyTriangleIndexFormat> NDISkelMesh_AdjacencyTriangleIndexFormat;               // 0x0114   (0x0001)  
	bool                                               NDIStaticMesh_AllowDistanceFields;                          // 0x0115   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2];                                       // 0x0116   (0x0002)  MISSED
	SDK_UNDEFINED(16,407) /* TArray<TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider>> */ __um(NDICollisionQuery_AsyncGpuTraceProviderOrder); // 0x0118   (0x0010)  
	FString                                            SimCacheAuxiliaryFileBasePath;                              // 0x0128   (0x0010)  
	int64_t                                            SimCacheMaxCPUMemoryVolumetrics;                            // 0x0138   (0x0008)  
	TArray<FNiagaraPlatformSetRedirect>                PlatformSetRedirects;                                       // 0x0140   (0x0010)  
};

/// Class /Script/Niagara.NiagaraSimCacheCustomStorageInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraSimCacheCustomStorageInterface : public UInterface
{ 
public:
};

/// Struct /Script/Niagara.NiagaraDistributionBase
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraDistributionBase
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	ENiagaraDistributionMode                           Mode;                                                       // 0x0008   (0x0004)  
	FNiagaraVariableBase                               ParameterBinding;                                           // 0x000C   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraDistributionRangeFloat
/// Size: 0x0020 (32 bytes) (0x000018 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraDistributionRangeFloat : FNiagaraDistributionBase
{ 
	float                                              Min;                                                        // 0x0018   (0x0004)  
	float                                              Max;                                                        // 0x001C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraEmitterStateData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FNiagaraEmitterStateData
{ 
	ENiagaraEmitterInactiveResponse                    InactiveResponse;                                           // 0x0000   (0x0004)  
	ENiagaraLoopBehavior                               LoopBehavior;                                               // 0x0004   (0x0004)  
	int32_t                                            LoopCount;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraDistributionRangeFloat                     LoopDuration;                                               // 0x0010   (0x0020)  
	bool                                               bRecalculateDurationEachLoop;                               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FNiagaraDistributionRangeFloat                     LoopDelay;                                                  // 0x0038   (0x0020)  
	bool                                               bDelayFirstLoopOnly;                                        // 0x0058   (0x0001)  
	bool                                               bRecalculateDelayEachLoop;                                  // 0x0059   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6];                                       // 0x005A   (0x0006)  MISSED
};

/// Struct /Script/Niagara.NiagaraDistributionRangeInt
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FNiagaraDistributionRangeInt
{ 
	ENiagaraDistributionMode                           Mode;                                                       // 0x0000   (0x0004)  
	FNiagaraVariableBase                               ParameterBinding;                                           // 0x0004   (0x000C)  
	int32_t                                            Min;                                                        // 0x0010   (0x0004)  
	int32_t                                            Max;                                                        // 0x0014   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraStatelessSpawnInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FNiagaraStatelessSpawnInfo
{ 
	ENiagaraStatelessSpawnInfoType                     Type;                                                       // 0x0000   (0x0004)  
	float                                              SpawnTime;                                                  // 0x0004   (0x0004)  
	FNiagaraDistributionRangeInt                       Amount;                                                     // 0x0008   (0x0018)  
	FNiagaraDistributionRangeFloat                     Rate;                                                       // 0x0020   (0x0020)  
	bool                                               bSpawnProbabilityEnabled;                                   // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              SpawnProbability;                                           // 0x0044   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraDeviceProfileStateEntry
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraDeviceProfileStateEntry
{ 
	FName                                              ProfileName;                                                // 0x0000   (0x0008)  
	uint32_t                                           QualityLevelMask;                                           // 0x0008   (0x0004)  
	uint32_t                                           SetQualityLevelMask;                                        // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraPlatformSet
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNiagaraPlatformSet
{ 
	TArray<FNiagaraDeviceProfileStateEntry>            DeviceProfileStates;                                        // 0x0000   (0x0010)  
	TArray<FNiagaraPlatformSetCVarCondition>           CVarConditions;                                             // 0x0010   (0x0010)  
	int32_t                                            QualityLevelMask;                                           // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0024   (0x000C)  MISSED
};

/// Class /Script/Niagara.NiagaraStatelessEmitter
/// Size: 0x01A8 (424 bytes) (0x000028 - 0x0001A8) align 8 MaxSize: 0x01A8
class UNiagaraStatelessEmitter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	FString                                            UniqueEmitterName;                                          // 0x0038   (0x0010)  
	class UClass*                                      EmitterTemplateClass;                                       // 0x0048   (0x0008)  
	bool                                               bDeterministic;                                             // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	int32_t                                            RandomSeed;                                                 // 0x0054   (0x0004)  
	FBox                                               FixedBounds;                                                // 0x0058   (0x0038)  
	FNiagaraEmitterStateData                           EmitterState;                                               // 0x0090   (0x0060)  
	TArray<FNiagaraStatelessSpawnInfo>                 SpawnInfos;                                                 // 0x00F0   (0x0010)  
	TArray<class UNiagaraStatelessModule*>             Modules;                                                    // 0x0100   (0x0010)  
	TArray<class UNiagaraRendererProperties*>          RendererProperties;                                         // 0x0110   (0x0010)  
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0120   (0x0030)  
	FNiagaraDataSetCompiledData                        ParticleDataSetCompiledData;                                // 0x0150   (0x0048)  
	TArray<int32_t>                                    ComponentOffsets;                                           // 0x0198   (0x0010)  
};

/// Class /Script/Niagara.NiagaraStatelessEmitterTemplate
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraStatelessEmitterTemplate : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraStatelessEmitterDefault
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraStatelessEmitterDefault : public UNiagaraStatelessEmitterTemplate
{ 
public:
};

/// Class /Script/Niagara.NiagaraStatelessEmitterExample1
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraStatelessEmitterExample1 : public UNiagaraStatelessEmitterTemplate
{ 
public:
};

/// Class /Script/Niagara.NiagaraStatelessModule
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UNiagaraStatelessModule : public UNiagaraMergeable
{ 
public:
	bool                                               bModuleEnabled : 1;                                         // 0x0028:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraDistributionRangeVector3
/// Size: 0x0030 (48 bytes) (0x000018 - 0x000030) align 8 MaxSize: 0x0030
struct FNiagaraDistributionRangeVector3 : FNiagaraDistributionBase
{ 
	FVector3f                                          Min;                                                        // 0x0018   (0x000C)  
	FVector3f                                          Max;                                                        // 0x0024   (0x000C)  
};

/// Class /Script/Niagara.NiagaraStatelessModule_AccelerationForce
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraStatelessModule_AccelerationForce : public UNiagaraStatelessModule
{ 
public:
	FNiagaraDistributionRangeVector3                   AccelerationDistribution;                                   // 0x0030   (0x0030)  
};

/// Class /Script/Niagara.NiagaraStatelessModule_AddVelocity
/// Size: 0x00E8 (232 bytes) (0x000030 - 0x0000E8) align 8 MaxSize: 0x00E8
class UNiagaraStatelessModule_AddVelocity : public UNiagaraStatelessModule
{ 
public:
	ENSM_VelocityType                                  VelocityType;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FNiagaraDistributionRangeVector3                   LinearVelocityDistribution;                                 // 0x0038   (0x0030)  
	float                                              LinearVelocityScale;                                        // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FNiagaraDistributionRangeFloat                     ConeVelocityDistribution;                                   // 0x0070   (0x0020)  
	FRotator                                           ConeRotation;                                               // 0x0090   (0x0018)  
	float                                              ConeAngle;                                                  // 0x00A8   (0x0004)  
	float                                              InnerCone;                                                  // 0x00AC   (0x0004)  
	FNiagaraDistributionRangeFloat                     PointVelocityDistribution;                                  // 0x00B0   (0x0020)  
	FVector3f                                          PointOrigin;                                                // 0x00D0   (0x000C)  
	bool                                               bSpeedFalloffFromConeAxisEnabled;                           // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00DD   (0x0003)  MISSED
	float                                              SpeedFalloffFromConeAxis;                                   // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x00E4   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraStatelessModule_CalculateAccurateVelocity
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UNiagaraStatelessModule_CalculateAccurateVelocity : public UNiagaraStatelessModule
{ 
public:
};

/// Struct /Script/Niagara.NiagaraDistributionFloat
/// Size: 0x0028 (40 bytes) (0x000018 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraDistributionFloat : FNiagaraDistributionBase
{ 
	TArray<float>                                      Values;                                                     // 0x0018   (0x0010)  
};

/// Class /Script/Niagara.NiagaraStatelessModule_CameraOffset
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraStatelessModule_CameraOffset : public UNiagaraStatelessModule
{ 
public:
	FNiagaraDistributionFloat                          CameraOffsetDistribution;                                   // 0x0030   (0x0028)  
};

/// Class /Script/Niagara.NiagaraStatelessModule_CurlNoiseForce
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraStatelessModule_CurlNoiseForce : public UNiagaraStatelessModule
{ 
public:
	float                                              NoiseAmplitude;                                             // 0x0030   (0x0004)  
	float                                              NoiseFrequency;                                             // 0x0034   (0x0004)  
	ENSM_NoiseMode                                     NoiseMode;                                                  // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	class UObject*                                     NoiseTexture;                                               // 0x0040   (0x0008)  
};

/// Class /Script/Niagara.NiagaraStatelessModule_Drag
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UNiagaraStatelessModule_Drag : public UNiagaraStatelessModule
{ 
public:
	FNiagaraDistributionRangeFloat                     DragDistribution;                                           // 0x0030   (0x0020)  
};

/// Class /Script/Niagara.NiagaraStatelessModule_DynamicMaterialParameters
/// Size: 0x00D8 (216 bytes) (0x000030 - 0x0000D8) align 8 MaxSize: 0x00D8
class UNiagaraStatelessModule_DynamicMaterialParameters : public UNiagaraStatelessModule
{ 
public:
	bool                                               bParameter0XEnabled : 1;                                    // 0x0030:0 (0x0001)  
	bool                                               bParameter0YEnabled : 1;                                    // 0x0030:1 (0x0001)  
	bool                                               bParameter0ZEnabled : 1;                                    // 0x0030:2 (0x0001)  
	bool                                               bParameter0WEnabled : 1;                                    // 0x0030:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FNiagaraDistributionFloat                          Parameter0XDistribution;                                    // 0x0038   (0x0028)  
	FNiagaraDistributionFloat                          Parameter0YDistribution;                                    // 0x0060   (0x0028)  
	FNiagaraDistributionFloat                          Parameter0ZDistribution;                                    // 0x0088   (0x0028)  
	FNiagaraDistributionFloat                          Parameter0WDistribution;                                    // 0x00B0   (0x0028)  
};

/// Class /Script/Niagara.NiagaraStatelessModule_GravityForce
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraStatelessModule_GravityForce : public UNiagaraStatelessModule
{ 
public:
	FNiagaraDistributionRangeVector3                   GravityDistribution;                                        // 0x0030   (0x0030)  
};

/// Struct /Script/Niagara.NiagaraDistributionRangeColor
/// Size: 0x0038 (56 bytes) (0x000018 - 0x000038) align 8 MaxSize: 0x0038
struct FNiagaraDistributionRangeColor : FNiagaraDistributionBase
{ 
	FLinearColor                                       Min;                                                        // 0x0018   (0x0010)  
	FLinearColor                                       Max;                                                        // 0x0028   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDistributionRangeVector2
/// Size: 0x0028 (40 bytes) (0x000018 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraDistributionRangeVector2 : FNiagaraDistributionBase
{ 
	FVector2f                                          Min;                                                        // 0x0018   (0x0008)  
	FVector2f                                          Max;                                                        // 0x0020   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraDistributionVector3
/// Size: 0x0028 (40 bytes) (0x000018 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraDistributionVector3 : FNiagaraDistributionBase
{ 
	TArray<FVector3f>                                  Values;                                                     // 0x0018   (0x0010)  
};

/// Class /Script/Niagara.NiagaraStatelessModule_InitializeParticle
/// Size: 0x0170 (368 bytes) (0x000030 - 0x000170) align 8 MaxSize: 0x0170
class UNiagaraStatelessModule_InitializeParticle : public UNiagaraStatelessModule
{ 
public:
	FNiagaraDistributionRangeFloat                     LifetimeDistribution;                                       // 0x0030   (0x0020)  
	FNiagaraDistributionRangeColor                     ColorDistribution;                                          // 0x0050   (0x0038)  
	FNiagaraDistributionRangeFloat                     MassDistribution;                                           // 0x0088   (0x0020)  
	FNiagaraDistributionRangeVector2                   SpriteSizeDistribution;                                     // 0x00A8   (0x0028)  
	FNiagaraDistributionRangeFloat                     SpriteRotationDistribution;                                 // 0x00D0   (0x0020)  
	FNiagaraDistributionRangeVector3                   MeshScaleDistribution;                                      // 0x00F0   (0x0030)  
	bool                                               bWriteRibbonWidth;                                          // 0x0120   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0121   (0x0007)  MISSED
	FNiagaraDistributionRangeFloat                     RibbonWidthDistribution;                                    // 0x0128   (0x0020)  
	FNiagaraDistributionVector3                        InitialPosition;                                            // 0x0148   (0x0028)  
};

/// Class /Script/Niagara.NiagaraStatelessModule_InitialMeshOrientation
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraStatelessModule_InitialMeshOrientation : public UNiagaraStatelessModule
{ 
public:
	FVector3f                                          Rotation;                                                   // 0x0030   (0x000C)  
	FVector3f                                          RandomRotationRange;                                        // 0x003C   (0x000C)  
};

/// Class /Script/Niagara.NiagaraStatelessModule_MeshIndex
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraStatelessModule_MeshIndex : public UNiagaraStatelessModule
{ 
public:
	FNiagaraDistributionRangeInt                       MeshIndex;                                                  // 0x0030   (0x0018)  
	TArray<float>                                      MeshIndexWeight;                                            // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/Niagara.NiagaraStatelessModule_MeshIndex.NeedsMeshIndexWeights
	// bool NeedsMeshIndexWeights();                                                                                            // [0x61f1080] Final|Native|Public|Const 
};

/// Class /Script/Niagara.NiagaraStatelessModule_MeshRotationRate
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraStatelessModule_MeshRotationRate : public UNiagaraStatelessModule
{ 
public:
	FNiagaraDistributionRangeVector3                   RotationRateDistribution;                                   // 0x0030   (0x0030)  
};

/// Class /Script/Niagara.NiagaraStatelessModule_RotateAroundPoint
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraStatelessModule_RotateAroundPoint : public UNiagaraStatelessModule
{ 
public:
	float                                              RateMin;                                                    // 0x0030   (0x0004)  
	float                                              RateMax;                                                    // 0x0034   (0x0004)  
	float                                              RadiusMin;                                                  // 0x0038   (0x0004)  
	float                                              RadiusMax;                                                  // 0x003C   (0x0004)  
	float                                              InitialPhaseMin;                                            // 0x0040   (0x0004)  
	float                                              InitialPhaseMax;                                            // 0x0044   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraDistributionColor
/// Size: 0x0028 (40 bytes) (0x000018 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraDistributionColor : FNiagaraDistributionBase
{ 
	TArray<FLinearColor>                               Values;                                                     // 0x0018   (0x0010)  
};

/// Class /Script/Niagara.NiagaraStatelessModule_ScaleColor
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraStatelessModule_ScaleColor : public UNiagaraStatelessModule
{ 
public:
	FNiagaraDistributionColor                          ScaleDistribution;                                          // 0x0030   (0x0028)  
};

/// Struct /Script/Niagara.NiagaraParameterBinding
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraParameterBinding
{ 
	FNiagaraVariableBase                               ResolvedParameter;                                          // 0x0000   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraParameterBindingWithValue
/// Size: 0x0020 (32 bytes) (0x00000C - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraParameterBindingWithValue : FNiagaraParameterBinding
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<char>                                       DefaultValue;                                               // 0x0010   (0x0010)  
};

/// Class /Script/Niagara.NiagaraStatelessModule_ScaleMeshSize
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UNiagaraStatelessModule_ScaleMeshSize : public UNiagaraStatelessModule
{ 
public:
	FNiagaraDistributionVector3                        ScaleDistribution;                                          // 0x0030   (0x0028)  
	FNiagaraParameterBindingWithValue                  ScaleCurveRange;                                            // 0x0058   (0x0020)  


	/// Functions
	// Function /Script/Niagara.NiagaraStatelessModule_ScaleMeshSize.UseScaleCurveRange
	// bool UseScaleCurveRange();                                                                                               // [0x61f10b0] Final|Native|Public|Const 
};

/// Class /Script/Niagara.NiagaraStatelessModule_ScaleMeshSizeBySpeed
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraStatelessModule_ScaleMeshSizeBySpeed : public UNiagaraStatelessModule
{ 
public:
	float                                              VelocityThreshold;                                          // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FNiagaraDistributionVector3                        ScaleDistribution;                                          // 0x0038   (0x0028)  
};

/// Struct /Script/Niagara.NiagaraDistributionVector2
/// Size: 0x0028 (40 bytes) (0x000018 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraDistributionVector2 : FNiagaraDistributionBase
{ 
	TArray<FVector2f>                                  Values;                                                     // 0x0018   (0x0010)  
};

/// Class /Script/Niagara.NiagaraStatelessModule_ScaleSpriteSize
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UNiagaraStatelessModule_ScaleSpriteSize : public UNiagaraStatelessModule
{ 
public:
	FNiagaraDistributionVector2                        ScaleDistribution;                                          // 0x0030   (0x0028)  
	FNiagaraParameterBindingWithValue                  ScaleCurveRange;                                            // 0x0058   (0x0020)  


	/// Functions
	// Function /Script/Niagara.NiagaraStatelessModule_ScaleSpriteSize.UseScaleCurveRange
	// bool UseScaleCurveRange();                                                                                               // [0x61f10b0] Final|Native|Public|Const 
};

/// Class /Script/Niagara.NiagaraStatelessModule_ScaleSpriteSizeBySpeed
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraStatelessModule_ScaleSpriteSizeBySpeed : public UNiagaraStatelessModule
{ 
public:
	float                                              VelocityThreshold;                                          // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FNiagaraDistributionVector2                        ScaleDistribution;                                          // 0x0038   (0x0028)  
};

/// Class /Script/Niagara.NiagaraStatelessModule_ShapeLocation
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UNiagaraStatelessModule_ShapeLocation : public UNiagaraStatelessModule
{ 
public:
	ENSM_ShapePrimitive                                ShapePrimitive;                                             // 0x0030   (0x0004)  
	FVector3f                                          BoxSize;                                                    // 0x0034   (0x000C)  
	bool                                               bBoxSurfaceOnly;                                            // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              BoxSurfaceThicknessMin;                                     // 0x0044   (0x0004)  
	float                                              BoxSurfaceThicknessMax;                                     // 0x0048   (0x0004)  
	FVector2f                                          PlaneSize;                                                  // 0x004C   (0x0008)  
	float                                              CylinderHeight;                                             // 0x0054   (0x0004)  
	float                                              CylinderRadius;                                             // 0x0058   (0x0004)  
	float                                              CylinderHeightMidpoint;                                     // 0x005C   (0x0004)  
	float                                              RingRadius;                                                 // 0x0060   (0x0004)  
	float                                              DiscCoverage;                                               // 0x0064   (0x0004)  
	float                                              RingUDistribution;                                          // 0x0068   (0x0004)  
	float                                              SphereMin;                                                  // 0x006C   (0x0004)  
	float                                              SphereMax;                                                  // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraStatelessModule_SolveVelocitiesAndForces
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UNiagaraStatelessModule_SolveVelocitiesAndForces : public UNiagaraStatelessModule
{ 
public:
};

/// Class /Script/Niagara.NiagaraStatelessModule_SpriteFacingAndAlignment
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UNiagaraStatelessModule_SpriteFacingAndAlignment : public UNiagaraStatelessModule
{ 
public:
	bool                                               bSpriteFacingEnabled;                                       // 0x0030   (0x0001)  
	bool                                               bSpriteAlignmentEnabled;                                    // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0032   (0x0002)  MISSED
	FVector3f                                          SpriteFacing;                                               // 0x0034   (0x000C)  
	FVector3f                                          SpriteAlignment;                                            // 0x0040   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraStatelessModule_SpriteRotationRate
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UNiagaraStatelessModule_SpriteRotationRate : public UNiagaraStatelessModule
{ 
public:
	FNiagaraDistributionRangeFloat                     RotationRateDistribution;                                   // 0x0030   (0x0020)  
};

/// Class /Script/Niagara.NiagaraStatelessModule_SubUVAnimation
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UNiagaraStatelessModule_SubUVAnimation : public UNiagaraStatelessModule
{ 
public:
	int32_t                                            NumFrames;                                                  // 0x0030   (0x0004)  
	bool                                               bStartFrameRangeOverride_Enabled;                           // 0x0034   (0x0001)  
	bool                                               bEndFrameRangeOverride_Enabled;                             // 0x0035   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0036   (0x0002)  MISSED
	int32_t                                            StartFrameRangeOverride;                                    // 0x0038   (0x0004)  
	int32_t                                            EndFrameRangeOverride;                                      // 0x003C   (0x0004)  
	ENSMSubUVAnimation_Mode                            AnimationMode;                                              // 0x0040   (0x0004)  
	float                                              LoopsPerSecond;                                             // 0x0044   (0x0004)  
	float                                              RandomChangeInterval;                                       // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraValidationRuleSet
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraValidationRuleSet : public UObject
{ 
public:
	TArray<class UNiagaraValidationRule*>              ValidationRules;                                            // 0x0028   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraVariable
/// Size: 0x0020 (32 bytes) (0x00000C - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraVariable : FNiagaraVariableBase
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<char>                                       VarData;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraUserParameterBinding
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraUserParameterBinding
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0000   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceActorComponent
/// Size: 0x0080 (128 bytes) (0x000038 - 0x000080) align 8 MaxSize: 0x0080
class UNiagaraDataInterfaceActorComponent : public UNiagaraDataInterface
{ 
public:
	ENDIActorComponentSourceMode                       SourceMode;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            LocalPlayerIndex;                                           // 0x003C   (0x0004)  
	TLazyObjectPtr<class AActor*>                      SourceActor;                                                // 0x0040   (0x0018)  
	FNiagaraUserParameterBinding                       ActorOrComponentParameter;                                  // 0x0058   (0x0020)  
	bool                                               bRequireCurrentFrameData;                                   // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceAsyncGpuTrace
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceAsyncGpuTrace : public UNiagaraDataInterface
{ 
public:
	int32_t                                            MaxTracesPerParticle;                                       // 0x0038   (0x0004)  
	int32_t                                            MaxRetraces;                                                // 0x003C   (0x0004)  
	TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider> TraceProvider;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceConsoleVariable
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraDataInterfaceConsoleVariable : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceDebugDraw
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
{ 
public:
	uint32_t                                           OverrideMaxLineInstances;                                   // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraDynamicMeshSection
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNiagaraDynamicMeshSection
{ 
	int32_t                                            NumTriangles;                                               // 0x0000   (0x0004)  
	int32_t                                            MaterialIndex;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraDynamicMeshMaterial
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraDynamicMeshMaterial
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x0008   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceDynamicMesh
/// Size: 0x00A8 (168 bytes) (0x000038 - 0x0000A8) align 8 MaxSize: 0x00A8
class UNiagaraDataInterfaceDynamicMesh : public UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	TArray<FNiagaraDynamicMeshSection>                 Sections;                                                   // 0x0040   (0x0010)  
	TArray<FNiagaraDynamicMeshMaterial>                Materials;                                                  // 0x0050   (0x0010)  
	int32_t                                            NumVertices;                                                // 0x0060   (0x0004)  
	int32_t                                            NumTexCoords;                                               // 0x0064   (0x0004)  
	bool                                               bHasColors;                                                 // 0x0068   (0x0001)  
	bool                                               bHasTangentBasis;                                           // 0x0069   (0x0001)  
	bool                                               bClearTrianglesPerFrame;                                    // 0x006A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x006B   (0x0005)  MISSED
	FBox                                               DefaultBounds;                                              // 0x0070   (0x0038)  
};

/// Struct /Script/Niagara.NiagaraDataInterfaceEmitterBinding
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraDataInterfaceEmitterBinding
{ 
	ENiagaraDataInterfaceEmitterBindingMode            BindingMode;                                                // 0x0000   (0x0004)  
	FName                                              EmitterName;                                                // 0x0004   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceEmitterProperties
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceEmitterProperties : public UNiagaraDataInterface
{ 
public:
	FNiagaraDataInterfaceEmitterBinding                EmitterBinding;                                             // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGBuffer
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceMemoryBuffer
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceMemoryBuffer : public UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	int32_t                                            DefaultNumElements;                                         // 0x0040   (0x0004)  
	ENiagaraGpuSyncMode                                GpuSyncMode;                                                // 0x0044   (0x0004)  
};

/// Struct /Script/Niagara.NDIMemoryBufferSimCacheDataFrame
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNDIMemoryBufferSimCacheDataFrame
{ 
	int32_t                                            CpuBufferSize;                                              // 0x0000   (0x0004)  
	int32_t                                            CpuDataOffset;                                              // 0x0004   (0x0004)  
	int32_t                                            GpuBufferSize;                                              // 0x0008   (0x0004)  
	int32_t                                            GpuDataOffset;                                              // 0x000C   (0x0004)  
};

/// Class /Script/Niagara.NDIMemoryBufferSimCacheData
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UNDIMemoryBufferSimCacheData : public UObject
{ 
public:
	TArray<FNDIMemoryBufferSimCacheDataFrame>          FrameData;                                                  // 0x0028   (0x0010)  
	TArray<uint32_t>                                   BufferData;                                                 // 0x0038   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfacePhysicsAsset
/// Size: 0x00A8 (168 bytes) (0x000038 - 0x0000A8) align 8 MaxSize: 0x00A8
class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{ 
public:
	class UPhysicsAsset*                               DefaultSource;                                              // 0x0038   (0x0008)  
	TWeakObjectPtr<class AActor*>                      SoftSourceActor;                                            // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0048   (0x0020)  MISSED
	FNiagaraUserParameterBinding                       MeshUserParameter;                                          // 0x0068   (0x0020)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0088   (0x0020)  MISSED
};

/// Class /Script/Niagara.NiagaraPhysicsAssetDICollectorInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraPhysicsAssetDICollectorInterface : public UInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceSceneCapture2D
/// Size: 0x0128 (296 bytes) (0x000038 - 0x000128) align 8 MaxSize: 0x0128
class UNiagaraDataInterfaceSceneCapture2D : public UNiagaraDataInterface
{ 
public:
	ENDISceneCapture2DSourceMode                       SourceMode;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FNiagaraUserParameterBinding                       SceneCaptureUserParameter;                                  // 0x0040   (0x0020)  
	bool                                               bAutoMoveWithComponent;                                     // 0x0060   (0x0001)  
	ENDISceneCapture2DOffsetMode                       AutoMoveOffsetLocationMode;                                 // 0x0061   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0062   (0x0006)  MISSED
	FVector                                            AutoMoveOffsetLocation;                                     // 0x0068   (0x0018)  
	ENDISceneCapture2DOffsetMode                       AutoMoveOffsetRotationMode;                                 // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0081   (0x0007)  MISSED
	FRotator                                           AutoMoveOffsetRotation;                                     // 0x0088   (0x0018)  
	TEnumAsByte<ESceneCaptureSource>                   ManagedCaptureSource;                                       // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FIntPoint                                          ManagedTextureSize;                                         // 0x00A4   (0x0008)  
	TEnumAsByte<ETextureRenderTargetFormat>            ManagedTextureFormat;                                       // 0x00AC   (0x0001)  
	TEnumAsByte<ECameraProjectionMode>                 ManagedProjectionType;                                      // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData04_6[0x2];                                       // 0x00AE   (0x0002)  MISSED
	float                                              ManagedFOVAngle;                                            // 0x00B0   (0x0004)  
	float                                              ManagedOrthoWidth;                                          // 0x00B4   (0x0004)  
	bool                                               bManagedCaptureEveryFrame;                                  // 0x00B8   (0x0001)  
	bool                                               bManagedCaptureOnMovement;                                  // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData05_6[0x6];                                       // 0x00BA   (0x0006)  MISSED
	TArray<class AActor*>                              ManagedShowOnlyActors;                                      // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x00D0   (0x0008)  MISSED
	TMap<uint64_t, class USceneCaptureComponent2D*>    ManagedCaptureComponents;                                   // 0x00D8   (0x0050)  


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceSceneCapture2D.SetSceneCapture2DManagedShowOnlyActors
	// void SetSceneCapture2DManagedShowOnlyActors(class UNiagaraComponent* NiagaraSystem, FName ParameterName, TArray<AActor*> ShowOnlyActors); // [0x627b030] Final|RequiredAPI|Native|Static|Protected|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimCacheReader
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UNiagaraDataInterfaceSimCacheReader : public UNiagaraDataInterface
{ 
public:
	FNiagaraUserParameterBinding                       SimCacheBinding;                                            // 0x0038   (0x0020)  
	class UNiagaraSimCache*                            SimCache;                                                   // 0x0058   (0x0008)  
	FName                                              EmitterBinding;                                             // 0x0060   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimpleCounter
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterfaceRWBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	ENiagaraGpuSyncMode                                GpuSyncMode;                                                // 0x0040   (0x0004)  
	int32_t                                            InitialValue;                                               // 0x0044   (0x0004)  
};

/// Class /Script/Niagara.NDISimpleCounterSimCacheData
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UNDISimpleCounterSimCacheData : public UObject
{ 
public:
	TArray<int32_t>                                    Values;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/Niagara.NDIStaticMeshSectionFilter
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNDIStaticMeshSectionFilter
{ 
	TArray<int32_t>                                    AllowedMaterialSlots;                                       // 0x0000   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceStaticMesh
/// Size: 0x00F0 (240 bytes) (0x000038 - 0x0000F0) align 8 MaxSize: 0x00F0
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{ 
public:
	ENDIStaticMesh_SourceMode                          SourceMode;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	class UStaticMesh*                                 DefaultMesh;                                                // 0x0040   (0x0008)  
	TWeakObjectPtr<class AActor*>                      SoftSourceActor;                                            // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0050   (0x0020)  MISSED
	class UStaticMeshComponent*                        SourceComponent;                                            // 0x0070   (0x0008)  
	FNDIStaticMeshSectionFilter                        SectionFilter;                                              // 0x0078   (0x0010)  
	bool                                               bCaptureTransformsPerFrame;                                 // 0x0088   (0x0001)  
	bool                                               bUsePhysicsBodyVelocity;                                    // 0x0089   (0x0001)  
	bool                                               bAllowSamplingFromStreamingLODs;                            // 0x008A   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x008B   (0x0001)  MISSED
	int32_t                                            LODIndex;                                                   // 0x008C   (0x0004)  
	FNiagaraUserParameterBinding                       LODIndexUserParameter;                                      // 0x0090   (0x0020)  
	FNiagaraUserParameterBinding                       MeshParameterBinding;                                       // 0x00B0   (0x0020)  
	int32_t                                            InstanceIndex;                                              // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
	TArray<FName>                                      FilteredSockets;                                            // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x00E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceStaticMesh.SetNiagaraStaticMeshDIInstanceIndex
	// void SetNiagaraStaticMeshDIInstanceIndex(class UNiagaraComponent* NiagaraSystem, FName UserParameterName, int32_t NewInstanceIndex); // [0x627af00] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceStaticMesh.OnSourceEndPlay
	// void OnSourceEndPlay(class AActor* InSource, TEnumAsByte<EEndPlayReason> Reason);                                        // [0x627ae20] Final|RequiredAPI|Native|Protected 
};

/// Struct /Script/Niagara.NiagaraUObjectPropertyReaderRemap
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraUObjectPropertyReaderRemap
{ 
	FName                                              GraphName;                                                  // 0x0000   (0x0008)  
	FName                                              RemapName;                                                  // 0x0008   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceUObjectPropertyReader
/// Size: 0x00A8 (168 bytes) (0x000038 - 0x0000A8) align 8 MaxSize: 0x00A8
class UNiagaraDataInterfaceUObjectPropertyReader : public UNiagaraDataInterface
{ 
public:
	ENDIObjectPropertyReaderSourceMode                 SourceMode;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FNiagaraUserParameterBinding                       UObjectParameterBinding;                                    // 0x0040   (0x0020)  
	TArray<FNiagaraUObjectPropertyReaderRemap>         PropertyRemap;                                              // 0x0060   (0x0010)  
	TWeakObjectPtr<class AActor*>                      SourceActor;                                                // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0078   (0x0020)  MISSED
	class UClass*                                      SourceActorComponentClass;                                  // 0x0098   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x00A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap
	// void SetUObjectReaderPropertyRemap(class UNiagaraComponent* NiagaraComponent, FName UserParameterName, FName GraphName, FName RemapName); // [0x627b2f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceVirtualTexture
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceVirtualTexture : public UNiagaraDataInterface
{ 
public:
	class URuntimeVirtualTexture*                      Texture;                                                    // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       TextureUserParameter;                                       // 0x0040   (0x0020)  
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemSpawnSection
/// Size: 0x0100 (256 bytes) (0x0000F0 - 0x000100) align 8 MaxSize: 0x0100
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{ 
public:
	ENiagaraSystemSpawnSectionStartBehavior            SectionStartBehavior;                                       // 0x00F0   (0x0004)  
	ENiagaraSystemSpawnSectionEvaluateBehavior         SectionEvaluateBehavior;                                    // 0x00F4   (0x0004)  
	ENiagaraSystemSpawnSectionEndBehavior              SectionEndBehavior;                                         // 0x00F8   (0x0004)  
	ENiagaraAgeUpdateMode                              AgeUpdateMode;                                              // 0x00FC   (0x0001)  
	bool                                               bAllowScalability;                                          // 0x00FD   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x00FE   (0x0002)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraTrack
/// Size: 0x00A8 (168 bytes) (0x000098 - 0x0000A8) align 8 MaxSize: 0x00A8
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0098   (0x0010)  
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemTrack
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraParameterTrack
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{ 
public:
	FNiagaraVariable                                   Parameter;                                                  // 0x00A8   (0x0020)  
};

/// Class /Script/Niagara.MovieSceneNiagaraBoolParameterTrack
/// Size: 0x00D0 (208 bytes) (0x0000C8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraColorParameterTrack
/// Size: 0x00D0 (208 bytes) (0x0000C8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraFloatParameterTrack
/// Size: 0x00D0 (208 bytes) (0x0000C8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraIntegerParameterTrack
/// Size: 0x00D0 (208 bytes) (0x0000C8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraVectorParameterTrack
/// Size: 0x00D8 (216 bytes) (0x0000C8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00C8   (0x0008)  MISSED
	int32_t                                            ChannelsUsed;                                               // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraActor
/// Size: 0x02A0 (672 bytes) (0x000290 - 0x0002A0) align 8 MaxSize: 0x02A0
class ANiagaraActor : public AActor
{ 
public:
	class UNiagaraComponent*                           NiagaraComponent;                                           // 0x0290   (0x0008)  
	bool                                               bDestroyOnSystemFinish : 1;                                 // 0x0298:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0299   (0x0007)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraActor.SetDestroyOnSystemFinish
	// void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);                                                        // [0x62ed1f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraActor.OnNiagaraSystemFinished
	// void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);                                                // [0x62ecbd0] Final|RequiredAPI|Native|Private 
	// Function /Script/Niagara.NiagaraActor.GetDestroyOnSystemFinish
	// bool GetDestroyOnSystemFinish();                                                                                         // [0x62ec800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Niagara.NiagaraBakerOutput
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraBakerOutput : public UObject
{ 
public:
	FString                                            OutputName;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSimCacheCreateParameters
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FNiagaraSimCacheCreateParameters
{ 
	ENiagaraSimCacheAttributeCaptureMode               AttributeCaptureMode;                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	bool                                               bAllowRebasing : 1;                                         // 0x0004:0 (0x0001)  
	bool                                               bAllowDataInterfaceCaching : 1;                             // 0x0004:1 (0x0001)  
	bool                                               bAllowInterpolation : 1;                                    // 0x0004:2 (0x0001)  
	bool                                               bAllowVelocityExtrapolation : 1;                            // 0x0004:3 (0x0001)  
	bool                                               bAllowSerializeLargeCache : 1;                              // 0x0004:4 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	TArray<FName>                                      RebaseIncludeAttributes;                                    // 0x0008   (0x0010)  
	TArray<FName>                                      RebaseExcludeAttributes;                                    // 0x0018   (0x0010)  
	TArray<FName>                                      InterpolationIncludeAttributes;                             // 0x0028   (0x0010)  
	TArray<FName>                                      InterpolationExcludeAttributes;                             // 0x0038   (0x0010)  
	TArray<FName>                                      ExplicitCaptureAttributes;                                  // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraBakerOutputSimCache
/// Size: 0x00A0 (160 bytes) (0x000038 - 0x0000A0) align 8 MaxSize: 0x00A0
class UNiagaraBakerOutputSimCache : public UNiagaraBakerOutput
{ 
public:
	FString                                            SimCacheAssetPathFormat;                                    // 0x0038   (0x0010)  
	FNiagaraSimCacheCreateParameters                   CreateParameters;                                           // 0x0048   (0x0058)  
};

/// Struct /Script/Niagara.NiagaraBakerTextureSource
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraBakerTextureSource
{ 
	FString                                            DisplayString;                                              // 0x0000   (0x0010)  
	FName                                              SourceName;                                                 // 0x0010   (0x0008)  
};

/// Class /Script/Niagara.NiagaraBakerOutputSparseVolumeTexture
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraBakerOutputSparseVolumeTexture : public UNiagaraBakerOutput
{ 
public:
	FNiagaraBakerTextureSource                         SourceBinding;                                              // 0x0038   (0x0018)  
	FString                                            SparseVolumeTextureAssetPathFormat;                         // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraBakerOutputTexture2D
/// Size: 0x00A0 (160 bytes) (0x000038 - 0x0000A0) align 8 MaxSize: 0x00A0
class UNiagaraBakerOutputTexture2D : public UNiagaraBakerOutput
{ 
public:
	FNiagaraBakerTextureSource                         SourceBinding;                                              // 0x0038   (0x0018)  
	bool                                               bGenerateAtlas : 1;                                         // 0x0050:0 (0x0001)  
	bool                                               bGenerateFrames : 1;                                        // 0x0050:1 (0x0001)  
	bool                                               bExportFrames : 1;                                          // 0x0050:2 (0x0001)  
	bool                                               bSetTextureAddressX : 1;                                    // 0x0050:3 (0x0001)  
	bool                                               bSetTextureAddressY : 1;                                    // 0x0050:4 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	FIntPoint                                          FrameSize;                                                  // 0x0054   (0x0008)  
	FIntPoint                                          AtlasTextureSize;                                           // 0x005C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0064   (0x0008)  MISSED
	TEnumAsByte<TextureAddress>                        TextureAddressX;                                            // 0x006C   (0x0001)  
	TEnumAsByte<TextureAddress>                        TextureAddressY;                                            // 0x006D   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x006E   (0x0002)  MISSED
	FString                                            AtlasAssetPathFormat;                                       // 0x0070   (0x0010)  
	FString                                            FramesAssetPathFormat;                                      // 0x0080   (0x0010)  
	FString                                            FramesExportPathFormat;                                     // 0x0090   (0x0010)  
};

/// Class /Script/Niagara.NiagaraBakerOutputVolumeTexture
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class UNiagaraBakerOutputVolumeTexture : public UNiagaraBakerOutput
{ 
public:
	FNiagaraBakerTextureSource                         SourceBinding;                                              // 0x0038   (0x0018)  
	bool                                               bGenerateAtlas : 1;                                         // 0x0050:0 (0x0001)  
	bool                                               bGenerateFrames : 1;                                        // 0x0050:1 (0x0001)  
	bool                                               bExportFrames : 1;                                          // 0x0050:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	FString                                            AtlasAssetPathFormat;                                       // 0x0058   (0x0010)  
	FString                                            FramesAssetPathFormat;                                      // 0x0068   (0x0010)  
	FString                                            FramesExportPathFormat;                                     // 0x0078   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraBakerCameraSettings
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FNiagaraBakerCameraSettings
{ 
	ENiagaraBakerViewMode                              ViewMode;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            ViewportLocation;                                           // 0x0008   (0x0018)  
	FRotator                                           ViewportRotation;                                           // 0x0020   (0x0018)  
	float                                              OrbitDistance;                                              // 0x0038   (0x0004)  
	float                                              FOV;                                                        // 0x003C   (0x0004)  
	float                                              OrthoWidth;                                                 // 0x0040   (0x0004)  
	bool                                               bUseAspectRatio;                                            // 0x0044   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	float                                              AspectRatio;                                                // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraBakerTextureSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FNiagaraBakerTextureSettings
{ 
	FName                                              OutputName;                                                 // 0x0000   (0x0008)  
	FNiagaraBakerTextureSource                         SourceBinding;                                              // 0x0008   (0x0018)  
	bool                                               bUseFrameSize : 1;                                          // 0x0020:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FIntPoint                                          FrameSize;                                                  // 0x0024   (0x0008)  
	FIntPoint                                          TextureSize;                                                // 0x002C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	class UTexture2D*                                  GeneratedTexture;                                           // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraBakerSettings
/// Size: 0x01F0 (496 bytes) (0x000028 - 0x0001F0) align 8 MaxSize: 0x01F0
class UNiagaraBakerSettings : public UObject
{ 
public:
	float                                              StartSeconds;                                               // 0x0028   (0x0004)  
	float                                              DurationSeconds;                                            // 0x002C   (0x0004)  
	int32_t                                            FramesPerSecond;                                            // 0x0030   (0x0004)  
	bool                                               bLockToSimulationFrameRate : 1;                             // 0x0034:0 (0x0001)  
	bool                                               bPreviewLooping : 1;                                        // 0x0034:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	FIntPoint                                          FramesPerDimension;                                         // 0x0038   (0x0008)  
	TArray<class UNiagaraBakerOutput*>                 Outputs;                                                    // 0x0040   (0x0010)  
	TArray<FNiagaraBakerCameraSettings>                CameraSettings;                                             // 0x0050   (0x0010)  
	int32_t                                            CurrentCameraIndex;                                         // 0x0060   (0x0004)  
	FName                                              BakeQualityLevel;                                           // 0x0064   (0x0008)  
	bool                                               bRenderComponentOnly : 1;                                   // 0x006C:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	TArray<FNiagaraBakerTextureSettings>               OutputTextures;                                             // 0x0070   (0x0010)  
	ENiagaraBakerViewMode                              CameraViewportMode;                                         // 0x0080   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	FVector                                            CameraViewportLocation[7];                                  // 0x0088   (0x00A8)  
	FRotator                                           CameraViewportRotation[7];                                  // 0x0130   (0x00A8)  
	float                                              CameraOrbitDistance;                                        // 0x01D8   (0x0004)  
	float                                              cameraFov;                                                  // 0x01DC   (0x0004)  
	float                                              CameraOrthoWidth;                                           // 0x01E0   (0x0004)  
	bool                                               bUseCameraAspectRatio : 1;                                  // 0x01E4:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x01E5   (0x0003)  MISSED
	float                                              CameraAspectRatio;                                          // 0x01E8   (0x0004)  
	unsigned char                                      UnknownData04_7[0x4];                                       // 0x01EC   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraStructConversionStep
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FNiagaraStructConversionStep
{ 
	int32_t                                            LWCBytes;                                                   // 0x0000   (0x0004)  
	int32_t                                            LWCOffset;                                                  // 0x0004   (0x0004)  
	int32_t                                            SimulationBytes;                                            // 0x0008   (0x0004)  
	int32_t                                            SimulationOffset;                                           // 0x000C   (0x0004)  
	ENiagaraStructConversionType                       ConversionType;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraLwcStructConverter
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraLwcStructConverter
{ 
	int32_t                                            LWCSize;                                                    // 0x0000   (0x0004)  
	int32_t                                            SWCSize;                                                    // 0x0004   (0x0004)  
	TArray<FNiagaraStructConversionStep>               ConversionSteps;                                            // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraVariableWithOffset
/// Size: 0x0028 (40 bytes) (0x00000C - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraVariableWithOffset : FNiagaraVariableBase
{ 
	int32_t                                            Offset;                                                     // 0x000C   (0x0004)  
	FNiagaraLwcStructConverter                         StructConverter;                                            // 0x0010   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraPositionSource
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraPositionSource
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraParameterStore
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FNiagaraParameterStore
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TWeakObjectPtr<class UObject*>                     Owner;                                                      // 0x0008   (0x0008)  
	TArray<FNiagaraVariableWithOffset>                 SortedParameterOffsets;                                     // 0x0010   (0x0010)  
	TArray<char>                                       ParameterData;                                              // 0x0020   (0x0010)  
	TArray<class UNiagaraDataInterface*>               DataInterfaces;                                             // 0x0030   (0x0010)  
	TArray<class UObject*>                             UObjects;                                                   // 0x0040   (0x0010)  
	TArray<FNiagaraPositionSource>                     OriginalPositionData;                                       // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0060   (0x0028)  MISSED
};

/// Struct /Script/Niagara.NiagaraUserRedirectionParameterStore
/// Size: 0x00D8 (216 bytes) (0x000088 - 0x0000D8) align 8 MaxSize: 0x00D8
struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore
{ 
	TMap<FNiagaraVariable, FNiagaraVariable>           UserParameterRedirects;                                     // 0x0088   (0x0050)  
};

/// Class /Script/Niagara.NiagaraComponent
/// Size: 0x0780 (1920 bytes) (0x000518 - 0x000780) align 16 MaxSize: 0x0778
class UNiagaraComponent : public UFXSystemComponent
{ 
public:
	class UNiagaraSystem*                              Asset;                                                      // 0x0518   (0x0008)  
	ENiagaraTickBehavior                               TickBehavior;                                               // 0x0520   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0521   (0x0003)  MISSED
	int32_t                                            RandomSeedOffset;                                           // 0x0524   (0x0004)  
	FNiagaraUserRedirectionParameterStore              OverrideParameters;                                         // 0x0528   (0x00D8)  
	bool                                               bForceSolo : 1;                                             // 0x0600:0 (0x0001)  
	bool                                               bEnableGpuComputeDebug : 1;                                 // 0x0600:1 (0x0001)  
	bool                                               bOverrideWarmupSettings : 1;                                // 0x0600:2 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0601   (0x0003)  MISSED
	int32_t                                            WarmupTickCount;                                            // 0x0604   (0x0004)  
	float                                              WarmupTickDelta;                                            // 0x0608   (0x0004)  
	unsigned char                                      UnknownData02_6[0x34];                                      // 0x060C   (0x0034)  MISSED
	bool                                               bAutoDestroy : 1;                                           // 0x0640:0 (0x0001)  
	bool                                               bRenderingEnabled : 1;                                      // 0x0640:1 (0x0001)  
	bool                                               bAutoManageAttachment : 1;                                  // 0x0640:2 (0x0001)  
	bool                                               bAutoAttachWeldSimulatedBodies : 1;                         // 0x0640:3 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0641   (0x0003)  MISSED
	float                                              MaxTimeBeforeForceUpdateTransform;                          // 0x0644   (0x0004)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x0648   (0x0001)  MISSED
	ENiagaraOcclusionQueryMode                         OcclusionQueryMode;                                         // 0x0649   (0x0001)  
	unsigned char                                      UnknownData05_6[0x6];                                       // 0x064A   (0x0006)  MISSED
	SDK_UNDEFINED(16,408) /* FMulticastInlineDelegate */ __um(OnSystemFinished);                                   // 0x0650   (0x0010)  
	TWeakObjectPtr<class USceneComponent*>             AutoAttachParent;                                           // 0x0660   (0x0008)  
	FName                                              AutoAttachSocketName;                                       // 0x0668   (0x0008)  
	EAttachmentRule                                    AutoAttachLocationRule;                                     // 0x0670   (0x0001)  
	EAttachmentRule                                    AutoAttachRotationRule;                                     // 0x0671   (0x0001)  
	EAttachmentRule                                    AutoAttachScaleRule;                                        // 0x0672   (0x0001)  
	unsigned char                                      UnknownData06_6[0x9];                                       // 0x0673   (0x0009)  MISSED
	unsigned char                                      UnknownBit07 : 1;                                           // 0x067C:0 (0x0001)  MISSED
	unsigned char                                      UnknownBit08 : 1;                                           // 0x067C:1 (0x0001)  MISSED
	unsigned char                                      UnknownBit09 : 1;                                           // 0x067C:2 (0x0001)  MISSED
	unsigned char                                      UnknownBit10 : 1;                                           // 0x067C:3 (0x0001)  MISSED
	bool                                               bAllowScalability : 1;                                      // 0x067C:4 (0x0001)  
	unsigned char                                      UnknownData11_5[0xEB];                                      // 0x067D   (0x00EB)  MISSED
	class UNiagaraSimCache*                            SimCache;                                                   // 0x0768   (0x0008)  
	class UNiagaraCullProxyComponent*                  CullProxy;                                                  // 0x0770   (0x0008)  


	/// Functions
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec4
	// void SetVariableVec4(FName InVariableName, FVector4& InValue);                                                           // [0x62ef960] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec3
	// void SetVariableVec3(FName InVariableName, FVector InValue);                                                             // [0x62ef880] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec2
	// void SetVariableVec2(FName InVariableName, FVector2D InValue);                                                           // [0x62ef7b0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableTextureRenderTarget
	// void SetVariableTextureRenderTarget(FName InVariableName, class UTextureRenderTarget* TextureRenderTarget);              // [0x62ef620] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableTexture
	// void SetVariableTexture(FName InVariableName, class UTexture* Texture);                                                  // [0x62ef490] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableStaticMesh
	// void SetVariableStaticMesh(FName InVariableName, class UStaticMesh* InValue);                                            // [0x62ef2f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableQuat
	// void SetVariableQuat(FName InVariableName, FQuat& InValue);                                                              // [0x62ef210] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariablePosition
	// void SetVariablePosition(FName InVariableName, FVector InValue);                                                         // [0x62ef130] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableObject
	// void SetVariableObject(FName InVariableName, class UObject* Object);                                                     // [0x62eea70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableMatrix
	// void SetVariableMatrix(FName InVariableName, FMatrix& InValue);                                                          // [0x62ef030] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableMaterial
	// void SetVariableMaterial(FName InVariableName, class UMaterialInterface* Object);                                        // [0x62eee90] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableLinearColor
	// void SetVariableLinearColor(FName InVariableName, FLinearColor& InValue);                                                // [0x62eedb0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableInt
	// void SetVariableInt(FName InVariableName, int32_t InValue);                                                              // [0x62eece0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableFloat
	// void SetVariableFloat(FName InVariableName, float InValue);                                                              // [0x62eec10] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableBool
	// void SetVariableBool(FName InVariableName, bool InValue);                                                                // [0x62eeb40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableActor
	// void SetVariableActor(FName InVariableName, class AActor* Actor);                                                        // [0x62eea70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetTickBehavior
	// void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);                                                              // [0x62ee9e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSystemFixedBounds
	// void SetSystemFixedBounds(FBox LocalBounds);                                                                             // [0x62ee910] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSimCache
	// void SetSimCache(class UNiagaraSimCache* SimCache, bool bResetSystem);                                                   // [0x62ee800] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSeekDelta
	// void SetSeekDelta(float InSeekDelta);                                                                                    // [0x62ee780] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetRenderingEnabled
	// void SetRenderingEnabled(bool bInRenderingEnabled);                                                                      // [0x62ee6e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetRandomSeedOffset
	// void SetRandomSeedOffset(int32_t NewRandomSeedOffset);                                                                   // [0x62ee640] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPreviewLODDistance
	// void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance);          // [0x62ee530] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPaused
	// void SetPaused(bool bInPaused);                                                                                          // [0x62ee410] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetOcclusionQueryMode
	// void SetOcclusionQueryMode(ENiagaraOcclusionQueryMode Mode);                                                             // [0x62ee380] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec4
	// void SetNiagaraVariableVec4(FString InVariableName, FVector4& InValue);                                                  // [0x62ee250] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec3
	// void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);                                                    // [0x62ee110] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec2
	// void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);                                                  // [0x62ee000] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableQuat
	// void SetNiagaraVariableQuat(FString InVariableName, FQuat& InValue);                                                     // [0x62edee0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariablePosition
	// void SetNiagaraVariablePosition(FString InVariableName, FVector InValue);                                                // [0x62edda0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableObject
	// void SetNiagaraVariableObject(FString InVariableName, class UObject* Object);                                            // [0x62ed740] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableMatrix
	// void SetNiagaraVariableMatrix(FString InVariableName, FMatrix& InValue);                                                 // [0x62edc70] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	// void SetNiagaraVariableLinearColor(FString InVariableName, FLinearColor& InValue);                                       // [0x62edb50] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableInt
	// void SetNiagaraVariableInt(FString InVariableName, int32_t InValue);                                                     // [0x62eda50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableFloat
	// void SetNiagaraVariableFloat(FString InVariableName, float InValue);                                                     // [0x62ed940] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableBool
	// void SetNiagaraVariableBool(FString InVariableName, bool InValue);                                                       // [0x62ed840] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableActor
	// void SetNiagaraVariableActor(FString InVariableName, class AActor* Actor);                                               // [0x62ed740] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetMaxSimTime
	// void SetMaxSimTime(float InMaxTime);                                                                                     // [0x62ed6c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
	// void SetLockDesiredAgeDeltaTimeToSeekDelta(bool block);                                                                  // [0x62ed630] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetGpuComputeDebug
	// void SetGpuComputeDebug(bool bEnableDebug);                                                                              // [0x62ed570] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetForceSolo
	// void SetForceSolo(bool bInForceSolo);                                                                                    // [0x62ed4c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetForceLocalPlayerEffect
	// void SetForceLocalPlayerEffect(bool bIsPlayerEffect);                                                                    // [0x62ed420] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetEmitterFixedBounds
	// void SetEmitterFixedBounds(FName EmitterName, FBox LocalBounds);                                                         // [0x62ed290] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetDesiredAge
	// void SetDesiredAge(float InDesiredAge);                                                                                  // [0x62ed160] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetCustomTimeDilation
	// void SetCustomTimeDilation(float Dilation);                                                                              // [0x62ed0b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	// void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);                                                            // [0x62ed020] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAutoDestroy
	// void SetAutoDestroy(bool bInAutoDestroy);                                                                                // [0x62ecf70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAsset
	// void SetAsset(class UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);                                     // [0x62ecea0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAllowScalability
	// void SetAllowScalability(bool bAllow);                                                                                   // [0x62ecdd0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAgeUpdateMode
	// void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);                                                            // [0x62ecd50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SeekToDesiredAge
	// void SeekToDesiredAge(float InDesiredAge);                                                                               // [0x62eccc0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ResetSystem
	// void ResetSystem();                                                                                                      // [0x62ecc90] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ReinitializeSystem
	// void ReinitializeSystem();                                                                                               // [0x62ecc70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.IsPaused
	// bool IsPaused();                                                                                                         // [0x62ecba0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.InitForPerformanceBaseline
	// void InitForPerformanceBaseline();                                                                                       // [0x62ecb20] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetTickBehavior
	// ENiagaraTickBehavior GetTickBehavior();                                                                                  // [0x62ecb00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSystemFixedBounds
	// FBox GetSystemFixedBounds();                                                                                             // [0x62ecab0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSimCache
	// class UNiagaraSimCache* GetSimCache();                                                                                   // [0x62eca90] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSeekDelta
	// float GetSeekDelta();                                                                                                    // [0x62eca70] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetRandomSeedOffset
	// int32_t GetRandomSeedOffset();                                                                                           // [0x62eca50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
	// bool GetPreviewLODDistanceEnabled();                                                                                     // [0x62eca20] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistance
	// float GetPreviewLODDistance();                                                                                           // [0x62ec9e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetOcclusionQueryMode
	// ENiagaraOcclusionQueryMode GetOcclusionQueryMode();                                                                      // [0x62ec9c0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetMaxSimTime
	// float GetMaxSimTime();                                                                                                   // [0x62ec9a0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
	// bool GetLockDesiredAgeDeltaTimeToSeekDelta();                                                                            // [0x62ec980] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetForceSolo
	// bool GetForceSolo();                                                                                                     // [0x62ec950] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetForceLocalPlayerEffect
	// bool GetForceLocalPlayerEffect();                                                                                        // [0x62ec920] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetEmitterFixedBounds
	// FBox GetEmitterFixedBounds(FName EmitterName);                                                                           // [0x62ec830] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDesiredAge
	// float GetDesiredAge();                                                                                                   // [0x62ec7e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDataInterface
	// class UNiagaraDataInterface* GetDataInterface(FString Name);                                                             // [0x62ec700] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetCustomTimeDilation
	// float GetCustomTimeDilation();                                                                                           // [0x62ec6e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAsset
	// class UNiagaraSystem* GetAsset();                                                                                        // [0x62ec6c0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAllowScalability
	// bool GetAllowScalability();                                                                                              // [0x62ec690] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAgeUpdateMode
	// ENiagaraAgeUpdateMode GetAgeUpdateMode();                                                                                // [0x62ec670] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.ClearSystemFixedBounds
	// void ClearSystemFixedBounds();                                                                                           // [0x62ec5c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ClearSimCache
	// void ClearSimCache(bool bResetSystem);                                                                                   // [0x62ec500] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ClearEmitterFixedBounds
	// void ClearEmitterFixedBounds(FName EmitterName);                                                                         // [0x62ec3d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulationByTime
	// void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);                                                // [0x62ec2d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulation
	// void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);                                                       // [0x62ec1f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Struct /Script/Niagara.NCPoolElement
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNCPoolElement
{ 
	class UNiagaraComponent*                           Component;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NCPool
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNCPool
{ 
	TArray<FNCPoolElement>                             FreeElements;                                               // 0x0000   (0x0010)  
};

/// Class /Script/Niagara.NiagaraComponentPool
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UNiagaraComponentPool : public UObject
{ 
public:
	TMap<class UNiagaraSystem*, FNCPool>               WorldParticleSystemPools;                                   // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableAttributeBinding
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FNiagaraVariableAttributeBinding
{ 
	FNiagaraVariable                                   RootVariable;                                               // 0x0000   (0x0020)  
	FNiagaraVariableBase                               ParamMapVariable;                                           // 0x0020   (0x000C)  
	FName                                              DataSetName;                                                // 0x002C   (0x0008)  
	TEnumAsByte<ENiagaraBindingSource>                 BindingSourceMode;                                          // 0x0034   (0x0001)  
	bool                                               bBindingExistsOnSource : 1;                                 // 0x0035:0 (0x0001)  
	bool                                               bIsCachedParticleValue : 1;                                 // 0x0035:1 (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0036   (0x0002)  MISSED
};

/// Class /Script/Niagara.NiagaraRendererProperties
/// Size: 0x00C0 (192 bytes) (0x000028 - 0x0000C0) align 8 MaxSize: 0x00C0
class UNiagaraRendererProperties : public UNiagaraMergeable
{ 
public:
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0028   (0x0030)  
	int32_t                                            SortOrderHint;                                              // 0x0058   (0x0004)  
	ENiagaraRendererMotionVectorSetting                MotionVectorSetting;                                        // 0x005C   (0x0004)  
	FNiagaraVariableAttributeBinding                   RendererEnabledBinding;                                     // 0x0060   (0x0038)  
	bool                                               bIsEnabled;                                                 // 0x0098   (0x0001)  
	bool                                               bAllowInCullProxies;                                        // 0x0099   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x009A   (0x0002)  MISSED
	FGuid                                              OuterEmitterVersion;                                        // 0x009C   (0x0010)  
	unsigned char                                      UnknownData01_7[0x14];                                      // 0x00AC   (0x0014)  MISSED
};

/// Struct /Script/Niagara.NiagaraTypeDefinition
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraTypeDefinition
{ 
	class UObject*                                     ClassStructOrEnum;                                          // 0x0000   (0x0008)  
	uint16_t                                           UnderlyingType;                                             // 0x0008   (0x0002)  
	char                                               Flags;                                                      // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/Niagara.NiagaraComponentPropertyBinding
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FNiagaraComponentPropertyBinding
{ 
	FNiagaraVariableAttributeBinding                   AttributeBinding;                                           // 0x0000   (0x0038)  
	FName                                              PropertyName;                                               // 0x0038   (0x0008)  
	FNiagaraTypeDefinition                             PropertyType;                                               // 0x0040   (0x0010)  
	FName                                              MetadataSetterName;                                         // 0x0050   (0x0008)  
	TMap<FString, FString>                             PropertySetterParameterDefaults;                            // 0x0058   (0x0050)  
};

/// Class /Script/Niagara.NiagaraComponentRendererProperties
/// Size: 0x01B8 (440 bytes) (0x0000C0 - 0x0001B8) align 8 MaxSize: 0x01B8
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UClass*                                      ComponentType;                                              // 0x00C0   (0x0008)  
	uint32_t                                           ComponentCountLimit;                                        // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   EnabledBinding;                                             // 0x00D0   (0x0038)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0108   (0x0038)  
	bool                                               bAssignComponentsOnParticleID;                              // 0x0140   (0x0001)  
	bool                                               bCreateComponentFirstParticleFrame;                         // 0x0141   (0x0001)  
	bool                                               bOnlyActivateNewlyAquiredComponents;                        // 0x0142   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0143   (0x0001)  MISSED
	int32_t                                            RendererVisibility;                                         // 0x0144   (0x0004)  
	class USceneComponent*                             TemplateComponent;                                          // 0x0148   (0x0008)  
	TArray<FNiagaraComponentPropertyBinding>           PropertyBindings;                                           // 0x0150   (0x0010)  
	unsigned char                                      UnknownData02_7[0x58];                                      // 0x0160   (0x0058)  MISSED
};

/// Struct /Script/Niagara.NiagaraCulledComponentInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNiagaraCulledComponentInfo
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraCullProxyComponent
/// Size: 0x0790 (1936 bytes) (0x000778 - 0x000790) align 16 MaxSize: 0x0790
class UNiagaraCullProxyComponent : public UNiagaraComponent
{ 
public:
	TArray<FNiagaraCulledComponentInfo>                Instances;                                                  // 0x0778   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0788   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraDataChannelLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraDataChannelLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraDataChannelLibrary.WriteToNiagaraDataChannelSingle
	// void WriteToNiagaraDataChannelSingle(class UObject* WorldContextObject, class UNiagaraDataChannelAsset* Channel, FNiagaraDataChannelSearchParameters SearchParams, bool bVisibleToBlueprint, bool bVisibleToNiagaraCPU, bool bVisibleToNiagaraGPU); // [0x6363d30] Final|Native|Static|Public 
	// Function /Script/Niagara.NiagaraDataChannelLibrary.WriteToNiagaraDataChannel
	// class UNiagaraDataChannelWriter* WriteToNiagaraDataChannel(class UObject* WorldContextObject, class UNiagaraDataChannelAsset* Channel, FNiagaraDataChannelSearchParameters SearchParams, int32_t Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU, FString DebugSource); // [0x6363600] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelLibrary.ReadFromNiagaraDataChannelSingle
	// void ReadFromNiagaraDataChannelSingle(class UObject* WorldContextObject, class UNiagaraDataChannelAsset* Channel, int32_t Index, FNiagaraDataChannelSearchParameters SearchParams, bool bReadPreviousFrame, ENiagartaDataChannelReadResult& ReadResult); // [0x6360af0] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Niagara.NiagaraDataChannelLibrary.ReadFromNiagaraDataChannel
	// class UNiagaraDataChannelReader* ReadFromNiagaraDataChannel(class UObject* WorldContextObject, class UNiagaraDataChannelAsset* Channel, FNiagaraDataChannelSearchParameters SearchParams, bool bReadPreviousFrame); // [0x63608f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelLibrary.GetNiagaraDataChannel
	// class UNiagaraDataChannelHandler* GetNiagaraDataChannel(class UObject* WorldContextObject, class UNiagaraDataChannelAsset* Channel); // [0x63607d0] Final|Native|Static|Public 
	// Function /Script/Niagara.NiagaraDataChannelLibrary.GetDataChannelElementCount
	// int32_t GetDataChannelElementCount(class UObject* WorldContextObject, class UNiagaraDataChannelAsset* Channel, FNiagaraDataChannelSearchParameters SearchParams, bool bReadPreviousFrame); // [0x635e690] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterface2DArrayTexture
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{ 
public:
	class UTexture*                                    Texture;                                                    // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       TextureUserParameter;                                       // 0x0040   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArray
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UNiagaraDataInterfaceArray : public UNiagaraDataInterfaceRWBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0038   (0x0010)  MISSED
	ENiagaraGpuSyncMode                                GpuSyncMode;                                                // 0x0048   (0x0004)  
	int32_t                                            MaxElements;                                                // 0x004C   (0x0004)  
};

/// Struct /Script/Niagara.NDIArraySimCacheDataFrame
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNDIArraySimCacheDataFrame
{ 
	int32_t                                            NumElements;                                                // 0x0000   (0x0004)  
	int32_t                                            DataOffset;                                                 // 0x0004   (0x0004)  
};

/// Class /Script/Niagara.NDIArraySimCacheData
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UNDIArraySimCacheData : public UObject
{ 
public:
	TArray<FNDIArraySimCacheDataFrame>                 CpuFrameData;                                               // 0x0028   (0x0010)  
	TArray<FNDIArraySimCacheDataFrame>                 GpuFrameData;                                               // 0x0038   (0x0010)  
	TArray<char>                                       BufferData;                                                 // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<float>                                      FloatData;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat2
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector2f>                                  InternalFloatData;                                          // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat3
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector3f>                                  InternalFloatData;                                          // 0x0050   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraPosition
/// Size: 0x000C (12 bytes) (0x00000C - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraPosition : FVector3f
{ 
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayPosition
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayPosition : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FNiagaraPosition>                           PositionData;                                               // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat4
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector4f>                                  InternalFloatData;                                          // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayColor
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FLinearColor>                               colorData;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayQuat
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FQuat4f>                                    InternalQuatData;                                           // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayMatrix
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayMatrix : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FMatrix44f>                                 InternalMatrixData;                                         // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue
	// void SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector& Value, bool bSizeToFit); // [0x6363420] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value
	// void SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector4& Value, bool bSizeToFit); // [0x63630d0] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
	// void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector4>& ArrayData);    // [0x6362f70] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue
	// void SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector2D& Value, bool bSizeToFit); // [0x6362da0] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
	// void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector2D>& ArrayData);  // [0x6362c40] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
	// void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector>& ArrayData);      // [0x63632c0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8Value
	// void SetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // [0x6362a80] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8
	// void SetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<int32_t>& ArrayData);       // [0x6362920] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue
	// void SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FQuat& Value, bool bSizeToFit); // [0x6362740] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
	// void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FQuat>& ArrayData);          // [0x63625e0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPositionValue
	// void SetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector& Value, bool bSizeToFit); // [0x6362340] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPosition
	// void SetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector>& ArrayData);    // [0x6362080] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayMatrixValue
	// void SetNiagaraArrayMatrixValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FMatrix& Value, bool bSizeToFit, bool bApplyLWCRebase); // [0x6361d60] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayMatrix
	// void SetNiagaraArrayMatrix(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FMatrix>& ArrayData, bool bApplyLWCRebase); // [0x6361980] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value
	// void SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // [0x63617c0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
	// void SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<int32_t>& ArrayData);       // [0x6361660] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue
	// void SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, float Value, bool bSizeToFit); // [0x63614a0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
	// void SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<float>& ArrayData);         // [0x6361340] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue
	// void SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FLinearColor& Value, bool bSizeToFit); // [0x6361170] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
	// void SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FLinearColor>& ArrayData);  // [0x6361010] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue
	// void SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, bool& Value, bool bSizeToFit); // [0x6360e40] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
	// void SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<bool>& ArrayData);           // [0x6360ce0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue
	// FVector GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);           // [0x63606b0] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value
	// FVector4 GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);         // [0x6360420] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
	// TArray<FVector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                     // [0x63602e0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue
	// FVector2D GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);       // [0x63601d0] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
	// TArray<FVector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                   // [0x6360090] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
	// TArray<FVector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                       // [0x6360570] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8Value
	// int32_t GetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);            // [0x635ff90] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8
	// TArray<int32_t> GetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                        // [0x635fe50] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue
	// FQuat GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);               // [0x635fd40] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
	// TArray<FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                           // [0x635fc00] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPositionValue
	// FVector GetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);         // [0x635fa10] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPosition
	// TArray<FVector> GetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                     // [0x635f770] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayMatrixValue
	// FMatrix GetNiagaraArrayMatrixValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, bool bApplyLWCRebase); // [0x635f470] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayMatrix
	// TArray<FMatrix> GetNiagaraArrayMatrix(class UNiagaraComponent* NiagaraSystem, FName OverrideName, bool bApplyLWCRebase); // [0x635f180] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value
	// int32_t GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);            // [0x635f080] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
	// TArray<int32_t> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                        // [0x635ef40] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue
	// float GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);              // [0x635ee40] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
	// TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                          // [0x635ed00] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue
	// FLinearColor GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);       // [0x635ebf0] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
	// TArray<FLinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                   // [0x635eab0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue
	// bool GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);                // [0x635e9b0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
	// TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                            // [0x635e870] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayInt32
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<int32_t>                                    IntData;                                                    // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayUInt8
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayUInt8 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<char>                                       InternalIntData;                                            // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayBool
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<bool>                                       BoolData;                                                   // 0x0050   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNiagaraID
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	int32_t                                            AcquireTag;                                                 // 0x0004   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayNiagaraID
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayNiagaraID : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FNiagaraID>                                 IntData;                                                    // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSubmix
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{ 
public:
	class USoundSubmix*                                Submix;                                                     // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioOscilloscope
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{ 
public:
	class USoundSubmix*                                Submix;                                                     // 0x0038   (0x0008)  
	int32_t                                            Resolution;                                                 // 0x0040   (0x0004)  
	float                                              ScopeInMilliseconds;                                        // 0x0044   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayerSettings
/// Size: 0x0410 (1040 bytes) (0x000028 - 0x000410) align 8 MaxSize: 0x0410
class UNiagaraDataInterfaceAudioPlayerSettings : public UObject
{ 
public:
	bool                                               bOverrideConcurrency;                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	class USoundConcurrency*                           Concurrency;                                                // 0x0030   (0x0008)  
	bool                                               bOverrideAttenuationSettings;                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FSoundAttenuationSettings                          AttenuationSettings;                                        // 0x0040   (0x03D0)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayer
/// Size: 0x0090 (144 bytes) (0x000038 - 0x000090) align 8 MaxSize: 0x0090
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{ 
public:
	class USoundBase*                                  SoundToPlay;                                                // 0x0038   (0x0008)  
	class USoundAttenuation*                           Attenuation;                                                // 0x0040   (0x0008)  
	class USoundConcurrency*                           Concurrency;                                                // 0x0048   (0x0008)  
	TArray<FName>                                      ParameterNames;                                             // 0x0050   (0x0010)  
	FNiagaraUserParameterBinding                       ConfigurationUserParameter;                                 // 0x0060   (0x0020)  
	bool                                               bLimitPlaysPerTick;                                         // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	int32_t                                            MaxPlaysPerTick;                                            // 0x0084   (0x0004)  
	bool                                               bStopWhenComponentIsDestroyed;                              // 0x0088   (0x0001)  
	bool                                               bAllowLoopingOneShotSounds;                                 // 0x0089   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x008A   (0x0006)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSpectrum
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{ 
public:
	int32_t                                            Resolution;                                                 // 0x0040   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x0044   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0048   (0x0004)  
	float                                              NoiseFloorDb;                                               // 0x004C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceCamera
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{ 
public:
	int32_t                                            PlayerControllerIndex;                                      // 0x0038   (0x0004)  
	bool                                               bRequireCurrentFrameData;                                   // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCollisionQuery
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurveBase
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{ 
public:
	TArray<float>                                      ShaderLUT;                                                  // 0x0038   (0x0010)  
	float                                              LUTMinTime;                                                 // 0x0048   (0x0004)  
	float                                              LUTMaxTime;                                                 // 0x004C   (0x0004)  
	float                                              LUTInvTimeRange;                                            // 0x0050   (0x0004)  
	float                                              LUTNumSamplesMinusOne;                                      // 0x0054   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0058   (0x0004)  MISSED
	bool                                               bUseLUT : 1;                                                // 0x005C:0 (0x0001)  
	bool                                               bExposeCurve : 1;                                           // 0x005C:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	FName                                              ExposedName;                                                // 0x0060   (0x0008)  
	class UTexture2D*                                  ExposedTexture;                                             // 0x0068   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceColorCurve
/// Size: 0x0270 (624 bytes) (0x000070 - 0x000270) align 8 MaxSize: 0x0270
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         RedCurve;                                                   // 0x0070   (0x0080)  
	FRichCurve                                         GreenCurve;                                                 // 0x00F0   (0x0080)  
	FRichCurve                                         BlueCurve;                                                  // 0x0170   (0x0080)  
	FRichCurve                                         AlphaCurve;                                                 // 0x01F0   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceCubeTexture
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{ 
public:
	class UTexture*                                    Texture;                                                    // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       TextureUserParameter;                                       // 0x0040   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurlNoise
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{ 
public:
	uint32_t                                           Seed;                                                       // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x003C   (0x000C)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurve
/// Size: 0x00F0 (240 bytes) (0x000070 - 0x0000F0) align 8 MaxSize: 0x00F0
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         Curve;                                                      // 0x0070   (0x0080)  
};

/// Class /Script/Niagara.NiagaraParticleCallbackHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraParticleCallbackHandler : public UInterface
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
	// void ReceiveParticleData(TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, FVector& SimulationPositionOffset); // [0x6390b30] Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraDataInterfaceExport
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{ 
public:
	FNiagaraUserParameterBinding                       CallbackHandlerParameter;                                   // 0x0038   (0x0020)  
	ENDIExport_GPUAllocationMode                       GPUAllocationMode;                                          // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	int32_t                                            GPUAllocationFixedSize;                                     // 0x005C   (0x0004)  
	float                                              GPUAllocationPerParticleSize;                               // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2D
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{ 
public:
	bool                                               ClearBeforeNonIterationStage;                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            NumCellsX;                                                  // 0x003C   (0x0004)  
	int32_t                                            NumCellsY;                                                  // 0x0040   (0x0004)  
	int32_t                                            NumCellsMaxAxis;                                            // 0x0044   (0x0004)  
	int32_t                                            NumAttributes;                                              // 0x0048   (0x0004)  
	bool                                               SetGridFromMaxAxis;                                         // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	FVector2D                                          WorldBBoxSize;                                              // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollection
/// Size: 0x0128 (296 bytes) (0x000060 - 0x000128) align 8 MaxSize: 0x0128
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{ 
public:
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0060   (0x0020)  
	ENiagaraGpuBufferFormat                            OverrideBufferFormat;                                       // 0x0080   (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x0081:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x56];                                      // 0x0082   (0x0056)  MISSED
	TMap<uint64_t, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                                       // 0x00D8   (0x0050)  


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
	// void GetTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                                 // [0x6390870] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
	// void GetRawTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                              // [0x63905b0] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
	// bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t AttributeIndex);      // [0x6390490] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
	// bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY); // [0x6390110] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollectionReader
/// Size: 0x0148 (328 bytes) (0x000128 - 0x000148) align 8 MaxSize: 0x0148
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2DCollection
{ 
public:
	FString                                            EmitterName;                                                // 0x0128   (0x0010)  
	FString                                            DIName;                                                     // 0x0138   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3D
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{ 
public:
	bool                                               ClearBeforeNonIterationStage;                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	FIntVector                                         NumCells;                                                   // 0x003C   (0x000C)  
	float                                              CellSize;                                                   // 0x0048   (0x0004)  
	int32_t                                            NumCellsMaxAxis;                                            // 0x004C   (0x0004)  
	ESetResolutionMethod                               SetResolutionMethod;                                        // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FVector                                            WorldBBoxSize;                                              // 0x0058   (0x0018)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollection
/// Size: 0x00F0 (240 bytes) (0x000070 - 0x0000F0) align 8 MaxSize: 0x00F0
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{ 
public:
	int32_t                                            NumAttributes;                                              // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0078   (0x0020)  
	ENiagaraGpuBufferFormat                            OverrideBufferFormat;                                       // 0x0098   (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x0099:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x56];                                      // 0x009A   (0x0056)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
	// void GetTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);                 // [0x63909a0] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
	// void GetRawTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);              // [0x63906e0] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
	// bool FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t AttributeIndex);          // [0x6390490] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
	// bool FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // [0x6390290] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollectionReader
/// Size: 0x0110 (272 bytes) (0x0000F0 - 0x000110) align 8 MaxSize: 0x0110
class UNiagaraDataInterfaceGrid3DCollectionReader : public UNiagaraDataInterfaceGrid3DCollection
{ 
public:
	FString                                            EmitterName;                                                // 0x00F0   (0x0010)  
	FString                                            DIName;                                                     // 0x0100   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceIntRenderTarget2D
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntPoint                                          Size;                                                       // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0040   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceLandscape
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	class AActor*                                      SourceLandscape;                                            // 0x0040   (0x0008)  
	ENDILandscape_SourceMode                           SourceMode;                                                 // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	TArray<class UPhysicalMaterial*>                   PhysicalMaterials;                                          // 0x0050   (0x0010)  
	bool                                               bVirtualTexturesSupported;                                  // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/Niagara.NDILandscapeSimCacheData
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UNDILandscapeSimCacheData : public UObject
{ 
public:
	TArray<class UTexture2D*>                          HeightFieldTextures;                                        // 0x0028   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceMeshRendererInfo
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{ 
public:
	class UNiagaraMeshRendererProperties*              MeshRenderer;                                               // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceNeighborGrid3D
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{ 
public:
	uint32_t                                           MaxNeighborsPerCell;                                        // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceOcclusion
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceParticleRead
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{ 
public:
	FNiagaraDataInterfaceEmitterBinding                EmitterBinding;                                             // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfacePlatformSet
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{ 
public:
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0038   (0x0030)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRasterizationGrid3D
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UNiagaraDataInterfaceRasterizationGrid3D : public UNiagaraDataInterfaceGrid3D
{ 
public:
	int32_t                                            NumAttributes;                                              // 0x0070   (0x0004)  
	float                                              Precision;                                                  // 0x0074   (0x0004)  
	int32_t                                            ResetValue;                                                 // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2D
/// Size: 0x00C0 (192 bytes) (0x000038 - 0x0000C0) align 8 MaxSize: 0x00C0
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FIntPoint                                          Size;                                                       // 0x0040   (0x0008)  
	ENiagaraMipMapGeneration                           MipMapGeneration;                                           // 0x0048   (0x0001)  
	ENiagaraMipMapGenerationType                       MipMapGenerationType;                                       // 0x0049   (0x0001)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x004A   (0x0001)  
	TEnumAsByte<TextureFilter>                         OverrideRenderTargetFilter;                                 // 0x004B   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x004C:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x004C:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0050   (0x0020)  
	unsigned char                                      UnknownData02_7[0x50];                                      // 0x0070   (0x0050)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2DArray
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         Size;                                                       // 0x0038   (0x000C)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x0044   (0x0001)  
	TEnumAsByte<TextureFilter>                         OverrideRenderTargetFilter;                                 // 0x0045   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x0046:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x0046:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0047   (0x0001)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0048   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetCube
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{ 
public:
	int32_t                                            Size;                                                       // 0x0038   (0x0004)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x003C   (0x0001)  
	TEnumAsByte<TextureFilter>                         OverrideRenderTargetFilter;                                 // 0x003D   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x003E:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x003E:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x003F   (0x0001)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0040   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetVolume
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FIntVector                                         Size;                                                       // 0x0040   (0x000C)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x004C   (0x0001)  
	TEnumAsByte<TextureFilter>                         OverrideRenderTargetFilter;                                 // 0x004D   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x004E:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x004E:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x004F   (0x0001)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0050   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UNiagaraDataInterfaceRigidMeshCollisionQuery : public UNiagaraDataInterface
{ 
public:
	TArray<FName>                                      ActorTags;                                                  // 0x0038   (0x0010)  
	TArray<FName>                                      ComponentTags;                                              // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,409) /* TArray<TWeakObjectPtr<AActor*>> */ __um(SourceActors);                                // 0x0058   (0x0010)  
	bool                                               OnlyUseMoveable;                                            // 0x0068   (0x0001)  
	bool                                               UseComplexCollisions;                                       // 0x0069   (0x0001)  
	bool                                               bFilterByObjectType;                                        // 0x006A   (0x0001)  
	bool                                               GlobalSearchAllowed;                                        // 0x006B   (0x0001)  
	bool                                               GlobalSearchForced;                                         // 0x006C   (0x0001)  
	bool                                               GlobalSearchFallback_Unscripted;                            // 0x006D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x006E   (0x0002)  MISSED
	int32_t                                            MaxNumPrimitives;                                           // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraDIRigidMeshCollisionFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary.SetSourceActors
	// void SetSourceActors(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<AActor*>& SourceActors);         // [0x63c9e50] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceSkeletalMesh
/// Size: 0x0100 (256 bytes) (0x000038 - 0x000100) align 8 MaxSize: 0x0100
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{ 
public:
	ENDISkeletalMesh_SourceMode                        SourceMode;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	class USkeletalMesh*                               DefaultMesh;                                                // 0x0040   (0x0008)  
	TWeakObjectPtr<class AActor*>                      SoftSourceActor;                                            // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0050   (0x0020)  MISSED
	TArray<FName>                                      ComponentTags;                                              // 0x0070   (0x0010)  
	class USkeletalMeshComponent*                      SourceComponent;                                            // 0x0080   (0x0008)  
	FNiagaraUserParameterBinding                       MeshUserParameter;                                          // 0x0088   (0x0020)  
	ENDISkeletalMesh_SkinningMode                      SkinningMode;                                               // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
	TArray<FName>                                      SamplingRegions;                                            // 0x00B0   (0x0010)  
	int32_t                                            WholeMeshLOD;                                               // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	TArray<FName>                                      FilteredBones;                                              // 0x00C8   (0x0010)  
	TArray<FName>                                      FilteredSockets;                                            // 0x00D8   (0x0010)  
	FName                                              ExcludeBoneName;                                            // 0x00E8   (0x0008)  
	bool                                               bExcludeBone : 1;                                           // 0x00F0:0 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00F1   (0x0003)  MISSED
	int32_t                                            UvSetIndex;                                                 // 0x00F4   (0x0004)  
	bool                                               bRequireCurrentFrameData;                                   // 0x00F8   (0x0001)  
	bool                                               bReadDeformedGeometry;                                      // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData05_7[0x6];                                       // 0x00FA   (0x0006)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceSkeletalMesh.OnSourceEndPlay
	// void OnSourceEndPlay(class AActor* InSource, TEnumAsByte<EEndPlayReason> Reason);                                        // [0x640ab90] Final|RequiredAPI|Native|Protected 
};

/// Class /Script/Niagara.NiagaraDataInterfaceSparseVolumeTexture
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceSparseVolumeTexture : public UNiagaraDataInterface
{ 
public:
	class USparseVolumeTexture*                        SparseVolumeTexture;                                        // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       SparseVolumeTextureUserParameter;                           // 0x0040   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpline
/// Size: 0x00D8 (216 bytes) (0x000038 - 0x0000D8) align 8 MaxSize: 0x00D8
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{ 
public:
	TWeakObjectPtr<class AActor*>                      SoftSourceActor;                                            // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0040   (0x0020)  MISSED
	FNiagaraUserParameterBinding                       SplineUserParameter;                                        // 0x0060   (0x0020)  
	bool                                               bUseLUT;                                                    // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	int32_t                                            NumLUTSteps;                                                // 0x0084   (0x0004)  
	unsigned char                                      UnknownData02_7[0x50];                                      // 0x0088   (0x0050)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpriteRendererInfo
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterfaceSpriteRendererInfo : public UNiagaraDataInterface
{ 
public:
	class UNiagaraSpriteRendererProperties*            SpriteRenderer;                                             // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceTexture
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{ 
public:
	class UTexture*                                    Texture;                                                    // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       TextureUserParameter;                                       // 0x0040   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector2DCurve
/// Size: 0x0170 (368 bytes) (0x000070 - 0x000170) align 8 MaxSize: 0x0170
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector4Curve
/// Size: 0x0270 (624 bytes) (0x000070 - 0x000270) align 8 MaxSize: 0x0270
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)  
	FRichCurve                                         ZCurve;                                                     // 0x0170   (0x0080)  
	FRichCurve                                         WCurve;                                                     // 0x01F0   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorCurve
/// Size: 0x01F0 (496 bytes) (0x000070 - 0x0001F0) align 8 MaxSize: 0x01F0
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)  
	FRichCurve                                         ZCurve;                                                     // 0x0170   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorField
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{ 
public:
	class UVectorField*                                Field;                                                      // 0x0038   (0x0008)  
	bool                                               bTileX;                                                     // 0x0040   (0x0001)  
	bool                                               bTileY;                                                     // 0x0041   (0x0001)  
	bool                                               bTileZ;                                                     // 0x0042   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x0043   (0x0005)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeCache
/// Size: 0x0090 (144 bytes) (0x000038 - 0x000090) align 8 MaxSize: 0x0090
class UNiagaraDataInterfaceVolumeCache : public UNiagaraDataInterface
{ 
public:
	class UVolumeCache*                                VolumeCache;                                                // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0040   (0x0050)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeTexture
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{ 
public:
	class UTexture*                                    Texture;                                                    // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       TextureUserParameter;                                       // 0x0040   (0x0020)  
};

/// Struct /Script/Niagara.NiagaraDebugHUDVariable
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraDebugHUDVariable
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Name;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebugHudTextOptions
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraDebugHudTextOptions
{ 
	ENiagaraDebugHudFont                               Font;                                                       // 0x0000   (0x0004)  
	ENiagaraDebugHudHAlign                             HorizontalAlignment;                                        // 0x0004   (0x0001)  
	ENiagaraDebugHudVAlign                             VerticalAlignment;                                          // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	FVector2D                                          ScreenOffset;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebugHUDSettingsData
/// Size: 0x0250 (592 bytes) (0x000000 - 0x000250) align 8 MaxSize: 0x0250
struct FNiagaraDebugHUDSettingsData
{ 
	bool                                               bHudEnabled;                                                // 0x0000   (0x0001)  
	bool                                               bHudRenderingEnabled;                                       // 0x0001   (0x0001)  
	bool                                               bValidateSystemSimulationDataBuffers;                       // 0x0002   (0x0001)  
	bool                                               bValidateParticleDataBuffers;                               // 0x0003   (0x0001)  
	bool                                               bValidationLogErrors;                                       // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            ValidationAttributeDisplayTruncate;                         // 0x0008   (0x0004)  
	bool                                               bOverviewEnabled;                                           // 0x000C   (0x0001)  
	bool                                               bIncludeCascade;                                            // 0x000D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	ENiagaraDebugHUDOverviewMode                       OverviewMode;                                               // 0x0010   (0x0004)  
	ENiagaraDebugHUDDOverviewSort                      OverviewSortMode;                                           // 0x0014   (0x0004)  
	ENiagaraDebugHudFont                               OverviewFont;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FVector2D                                          OverviewLocation;                                           // 0x0020   (0x0010)  
	bool                                               bShowRegisteredComponents;                                  // 0x0030   (0x0001)  
	bool                                               bOverviewShowFilteredSystemOnly;                            // 0x0031   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x0032   (0x0006)  MISSED
	FString                                            ActorFilter;                                                // 0x0038   (0x0010)  
	bool                                               bComponentFilterEnabled;                                    // 0x0048   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	FString                                            ComponentFilter;                                            // 0x0050   (0x0010)  
	bool                                               bSystemFilterEnabled;                                       // 0x0060   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	FString                                            SystemFilter;                                               // 0x0068   (0x0010)  
	bool                                               bEmitterFilterEnabled;                                      // 0x0078   (0x0001)  
	unsigned char                                      UnknownData06_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	FString                                            EmitterFilter;                                              // 0x0080   (0x0010)  
	bool                                               bActorFilterEnabled;                                        // 0x0090   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x0091   (0x0003)  MISSED
	ENiagaraDebugHudVerbosity                          SystemDebugVerbosity;                                       // 0x0094   (0x0004)  
	ENiagaraDebugHudVerbosity                          SystemEmitterVerbosity;                                     // 0x0098   (0x0004)  
	ENiagaraDebugHudVerbosity                          DataInterfaceVerbosity;                                     // 0x009C   (0x0004)  
	bool                                               bSystemShowBounds;                                          // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x00A1   (0x0003)  MISSED
	float                                              SystemBoundsSolidBoxAlpha;                                  // 0x00A4   (0x0004)  
	bool                                               bSystemShowActiveOnlyInWorld;                               // 0x00A8   (0x0001)  
	bool                                               bShowSystemVariables;                                       // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData09_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
	TArray<FNiagaraDebugHUDVariable>                   SystemVariables;                                            // 0x00B0   (0x0010)  
	FNiagaraDebugHudTextOptions                        SystemTextOptions;                                          // 0x00C0   (0x0018)  
	bool                                               bShowParticleVariables;                                     // 0x00D8   (0x0001)  
	bool                                               bEnableGpuParticleReadback;                                 // 0x00D9   (0x0001)  
	bool                                               bShowParticleIndex;                                         // 0x00DA   (0x0001)  
	unsigned char                                      UnknownData10_6[0x5];                                       // 0x00DB   (0x0005)  MISSED
	TArray<FNiagaraDebugHUDVariable>                   ParticlesVariables;                                         // 0x00E0   (0x0010)  
	FNiagaraDebugHudTextOptions                        ParticleTextOptions;                                        // 0x00F0   (0x0018)  
	bool                                               bShowParticlesVariablesWithSystem;                          // 0x0108   (0x0001)  
	bool                                               bShowParticleVariablesVertical;                             // 0x0109   (0x0001)  
	bool                                               bUseMaxParticlesToDisplay;                                  // 0x010A   (0x0001)  
	bool                                               bUseParticleDisplayClip;                                    // 0x010B   (0x0001)  
	unsigned char                                      UnknownData11_6[0x4];                                       // 0x010C   (0x0004)  MISSED
	FVector2D                                          ParticleDisplayClip;                                        // 0x0110   (0x0010)  
	bool                                               bUseParticleDisplayCenterRadius;                            // 0x0120   (0x0001)  
	unsigned char                                      UnknownData12_6[0x3];                                       // 0x0121   (0x0003)  MISSED
	float                                              ParticleDisplayCenterRadius;                                // 0x0124   (0x0004)  
	int32_t                                            MaxParticlesToDisplay;                                      // 0x0128   (0x0004)  
	int32_t                                            PerfReportFrames;                                           // 0x012C   (0x0004)  
	ENiagaraDebugHUDPerfSampleMode                     PerfSampleMode;                                             // 0x0130   (0x0004)  
	ENiagaraDebugHUDPerfUnits                          PerfUnits;                                                  // 0x0134   (0x0004)  
	ENiagaraDebugHUDPerfGraphMode                      PerfGraphMode;                                              // 0x0138   (0x0004)  
	int32_t                                            PerfHistoryFrames;                                          // 0x013C   (0x0004)  
	bool                                               bUsePerfGraphTimeRange;                                     // 0x0140   (0x0001)  
	unsigned char                                      UnknownData13_6[0x3];                                       // 0x0141   (0x0003)  MISSED
	float                                              PerfGraphTimeRange;                                         // 0x0144   (0x0004)  
	FVector2D                                          PerfGraphSize;                                              // 0x0148   (0x0010)  
	FLinearColor                                       PerfGraphAxisColor;                                         // 0x0158   (0x0010)  
	bool                                               bEnableSmoothing;                                           // 0x0168   (0x0001)  
	unsigned char                                      UnknownData14_6[0x3];                                       // 0x0169   (0x0003)  MISSED
	int32_t                                            SmoothingWidth;                                             // 0x016C   (0x0004)  
	FLinearColor                                       DefaultBackgroundColor;                                     // 0x0170   (0x0010)  
	FLinearColor                                       OverviewHeadingColor;                                       // 0x0180   (0x0010)  
	FLinearColor                                       OverviewDetailColor;                                        // 0x0190   (0x0010)  
	FLinearColor                                       OverviewDetailHighlightColor;                               // 0x01A0   (0x0010)  
	FLinearColor                                       InWorldErrorTextColor;                                      // 0x01B0   (0x0010)  
	FLinearColor                                       InWorldTextColor;                                           // 0x01C0   (0x0010)  
	FLinearColor                                       MessageInfoTextColor;                                       // 0x01D0   (0x0010)  
	FLinearColor                                       MessageWarningTextColor;                                    // 0x01E0   (0x0010)  
	FLinearColor                                       MessageErrorTextColor;                                      // 0x01F0   (0x0010)  
	float                                              SystemColorTableOpacity;                                    // 0x0200   (0x0004)  
	uint32_t                                           SystemColorSeed;                                            // 0x0204   (0x0004)  
	FVector                                            SystemColorHSVMin;                                          // 0x0208   (0x0018)  
	FVector                                            SystemColorHSVMax;                                          // 0x0220   (0x0018)  
	ENiagaraDebugPlaybackMode                          PlaybackMode;                                               // 0x0238   (0x0001)  
	bool                                               bPlaybackRateEnabled;                                       // 0x0239   (0x0001)  
	unsigned char                                      UnknownData15_6[0x2];                                       // 0x023A   (0x0002)  MISSED
	float                                              PlaybackRate;                                               // 0x023C   (0x0004)  
	bool                                               bLoopTimeEnabled;                                           // 0x0240   (0x0001)  
	unsigned char                                      UnknownData16_6[0x3];                                       // 0x0241   (0x0003)  MISSED
	float                                              LoopTime;                                                   // 0x0244   (0x0004)  
	bool                                               bShowGlobalBudgetInfo;                                      // 0x0248   (0x0001)  
	unsigned char                                      UnknownData17_7[0x7];                                       // 0x0249   (0x0007)  MISSED
};

/// Class /Script/Niagara.NiagaraDebugHUDSettings
/// Size: 0x0298 (664 bytes) (0x000028 - 0x000298) align 8 MaxSize: 0x0298
class UNiagaraDebugHUDSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0028   (0x0020)  MISSED
	FNiagaraDebugHUDSettingsData                       Data;                                                       // 0x0048   (0x0250)  
};

/// Struct /Script/Niagara.NiagaraMaterialAttributeBinding
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 MaxSize: 0x002C
struct FNiagaraMaterialAttributeBinding
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x0008)  
	FNiagaraVariableBase                               NiagaraVariable;                                            // 0x0008   (0x000C)  
	FNiagaraVariableBase                               ResolvedNiagaraVariable;                                    // 0x0014   (0x000C)  
	FNiagaraVariableBase                               NiagaraChildVariable;                                       // 0x0020   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraRendererMaterialScalarParameter
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraRendererMaterialScalarParameter
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x0008)  
	float                                              Value;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraRendererMaterialVectorParameter
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FNiagaraRendererMaterialVectorParameter
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x0008)  
	FLinearColor                                       Value;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraRendererMaterialTextureParameter
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraRendererMaterialTextureParameter
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x0008)  
	class UTexture*                                    Texture;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraRendererMaterialStaticBoolParameter
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraRendererMaterialStaticBoolParameter
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x0008)  
	FName                                              StaticVariableName;                                         // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraRendererMaterialParameters
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FNiagaraRendererMaterialParameters
{ 
	TArray<FNiagaraMaterialAttributeBinding>           AttributeBindings;                                          // 0x0000   (0x0010)  
	TArray<FNiagaraRendererMaterialScalarParameter>    ScalarParameters;                                           // 0x0010   (0x0010)  
	TArray<FNiagaraRendererMaterialVectorParameter>    VectorParameters;                                           // 0x0020   (0x0010)  
	TArray<FNiagaraRendererMaterialTextureParameter>   TextureParameters;                                          // 0x0030   (0x0010)  
	TArray<FNiagaraRendererMaterialStaticBoolParameter> StaticBoolParameters;                                      // 0x0040   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDecalRendererProperties
/// Size: 0x0328 (808 bytes) (0x0000C0 - 0x000328) align 8 MaxSize: 0x0328
class UNiagaraDecalRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UMaterialInterface*                          Material;                                                   // 0x00C0   (0x0008)  
	FNiagaraParameterBinding                           MaterialParameterBinding;                                   // 0x00C8   (0x000C)  
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00D5   (0x0003)  MISSED
	int32_t                                            RendererVisibility;                                         // 0x00D8   (0x0004)  
	float                                              DecalScreenSizeFade;                                        // 0x00DC   (0x0004)  
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x00E0   (0x0038)  
	FNiagaraVariableAttributeBinding                   DecalOrientationBinding;                                    // 0x0118   (0x0038)  
	FNiagaraVariableAttributeBinding                   DecalSizeBinding;                                           // 0x0150   (0x0038)  
	FNiagaraVariableAttributeBinding                   DecalFadeBinding;                                           // 0x0188   (0x0038)  
	FNiagaraVariableAttributeBinding                   DecalSortOrderBinding;                                      // 0x01C0   (0x0038)  
	FNiagaraVariableAttributeBinding                   DecalColorBinding;                                          // 0x01F8   (0x0038)  
	FNiagaraVariableAttributeBinding                   DecalVisibleBinding;                                        // 0x0230   (0x0038)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0268   (0x0038)  
	FNiagaraRendererMaterialParameters                 MaterialParameters;                                         // 0x02A0   (0x0050)  
	unsigned char                                      UnknownData01_7[0x38];                                      // 0x02F0   (0x0038)  MISSED
};

/// Class /Script/Niagara.NiagaraEditorDataBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraEditorDataBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraEditorParametersAdapterBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraEditorParametersAdapterBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraSignificanceHandler : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerDistance
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerAge
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{ 
public:
};

/// Struct /Script/Niagara.NiagaraSystemVisibilityCullingSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraSystemVisibilityCullingSettings
{ 
	bool                                               bCullWhenNotRendered : 1;                                   // 0x0000:0 (0x0001)  
	bool                                               bCullByViewFrustum : 1;                                     // 0x0000:1 (0x0001)  
	bool                                               bAllowPreCullingByViewFrustum : 1;                          // 0x0000:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MaxTimeOutsideViewFrustum;                                  // 0x0004   (0x0004)  
	float                                              MaxTimeWithoutRender;                                       // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraLinearRamp
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraLinearRamp
{ 
	float                                              StartX;                                                     // 0x0000   (0x0004)  
	float                                              StartY;                                                     // 0x0004   (0x0004)  
	float                                              EndX;                                                       // 0x0008   (0x0004)  
	float                                              EndY;                                                       // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraGlobalBudgetScaling
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 MaxSize: 0x0038
struct FNiagaraGlobalBudgetScaling
{ 
	bool                                               bCullByGlobalBudget : 1;                                    // 0x0000:0 (0x0001)  
	bool                                               bScaleMaxDistanceByGlobalBudgetUse : 1;                     // 0x0000:1 (0x0001)  
	bool                                               bScaleMaxInstanceCountByGlobalBudgetUse : 1;                // 0x0000:2 (0x0001)  
	bool                                               bScaleSystemInstanceCountByGlobalBudgetUse : 1;             // 0x0000:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MaxGlobalBudgetUsage;                                       // 0x0004   (0x0004)  
	FNiagaraLinearRamp                                 MaxDistanceScaleByGlobalBudgetUse;                          // 0x0008   (0x0010)  
	FNiagaraLinearRamp                                 MaxInstanceCountScaleByGlobalBudgetUse;                     // 0x0018   (0x0010)  
	FNiagaraLinearRamp                                 MaxSystemInstanceCountScaleByGlobalBudgetUse;               // 0x0028   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettings
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FNiagaraSystemScalabilitySettings
{ 
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0000   (0x0030)  
	bool                                               bCullByDistance : 1;                                        // 0x0030:0 (0x0001)  
	bool                                               bCullMaxInstanceCount : 1;                                  // 0x0030:1 (0x0001)  
	bool                                               bCullPerSystemMaxInstanceCount : 1;                         // 0x0030:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              MaxDistance;                                                // 0x0034   (0x0004)  
	bool                                               bCullByMaxTimeWithoutRender : 1;                            // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            MaxInstances;                                               // 0x003C   (0x0004)  
	int32_t                                            MaxSystemInstances;                                         // 0x0040   (0x0004)  
	float                                              MaxTimeWithoutRender;                                       // 0x0044   (0x0004)  
	ENiagaraCullProxyMode                              CullProxyMode;                                              // 0x0048   (0x0004)  
	int32_t                                            MaxSystemProxies;                                           // 0x004C   (0x0004)  
	FNiagaraSystemVisibilityCullingSettings            VisibilityCulling;                                          // 0x0050   (0x000C)  
	FNiagaraGlobalBudgetScaling                        BudgetScaling;                                              // 0x005C   (0x0038)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettingsArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraSystemScalabilitySettingsArray
{ 
	TArray<FNiagaraSystemScalabilitySettings>          Settings;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FNiagaraEmitterScalabilitySettings
{ 
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0000   (0x0030)  
	bool                                               bScaleSpawnCount : 1;                                       // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              SpawnCountScale;                                            // 0x0034   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettingsArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraEmitterScalabilitySettingsArray
{ 
	TArray<FNiagaraEmitterScalabilitySettings>         Settings;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraPerfBaselineStats
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraPerfBaselineStats
{ 
	float                                              PerInstanceAvg_GT;                                          // 0x0000   (0x0004)  
	float                                              PerInstanceAvg_RT;                                          // 0x0004   (0x0004)  
	float                                              PerInstanceMax_GT;                                          // 0x0008   (0x0004)  
	float                                              PerInstanceMax_RT;                                          // 0x000C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraEffectType
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 8 MaxSize: 0x00A0
class UNiagaraEffectType : public UObject
{ 
public:
	bool                                               bAllowCullingForLocalPlayers;                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	ENiagaraScalabilityUpdateFrequency                 UpdateFrequency;                                            // 0x002C   (0x0004)  
	ENiagaraCullReaction                               CullReaction;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	class UNiagaraSignificanceHandler*                 SignificanceHandler;                                        // 0x0038   (0x0008)  
	TArray<FNiagaraSystemScalabilitySettings>          DetailLevelScalabilitySettings;                             // 0x0040   (0x0010)  
	FNiagaraSystemScalabilitySettingsArray             SystemScalabilitySettings;                                  // 0x0050   (0x0010)  
	FNiagaraEmitterScalabilitySettingsArray            EmitterScalabilitySettings;                                 // 0x0060   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0070   (0x0008)  MISSED
	class UNiagaraBaselineController*                  PerformanceBaselineController;                              // 0x0078   (0x0008)  
	FNiagaraPerfBaselineStats                          PerfBaselineStats;                                          // 0x0080   (0x0010)  
	FGuid                                              PerfBaselineVersion;                                        // 0x0090   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraAssetVersion
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FNiagaraAssetVersion
{ 
	int32_t                                            MajorVersion;                                               // 0x0000   (0x0004)  
	int32_t                                            MinorVersion;                                               // 0x0004   (0x0004)  
	FGuid                                              VersionGuid;                                                // 0x0008   (0x0010)  
	bool                                               bIsVisibleInVersionSelector;                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraEventReceiverProperties
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FNiagaraEventReceiverProperties
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              SourceEventGenerator;                                       // 0x0008   (0x0008)  
	FName                                              SourceEmitter;                                              // 0x0010   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraEventGeneratorProperties
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FNiagaraEventGeneratorProperties
{ 
	int32_t                                            MaxEventsPerFrame;                                          // 0x0000   (0x0004)  
	FName                                              ID;                                                         // 0x0004   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x0010   (0x0048)  
};

/// Struct /Script/Niagara.NiagaraEmitterScriptProperties
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraEmitterScriptProperties
{ 
	class UNiagaraScript*                              Script;                                                     // 0x0000   (0x0008)  
	TArray<FNiagaraEventReceiverProperties>            EventReceivers;                                             // 0x0008   (0x0010)  
	TArray<FNiagaraEventGeneratorProperties>           EventGenerators;                                            // 0x0018   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEventScriptProperties
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties
{ 
	EScriptExecutionMode                               ExecutionMode;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	uint32_t                                           SpawnNumber;                                                // 0x002C   (0x0004)  
	uint32_t                                           MaxEventsPerFrame;                                          // 0x0030   (0x0004)  
	FGuid                                              SourceEmitterID;                                            // 0x0034   (0x0010)  
	FName                                              SourceEventName;                                            // 0x0044   (0x0008)  
	bool                                               bRandomSpawnNumber;                                         // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	uint32_t                                           MinSpawnNumber;                                             // 0x0050   (0x0004)  
	bool                                               UpdateAttributeInitialValues;                               // 0x0054   (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverride
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings
{ 
	bool                                               bOverrideSpawnCountScale : 1;                               // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverrides
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraEmitterScalabilityOverrides
{ 
	TArray<FNiagaraEmitterScalabilityOverride>         Overrides;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraExternalUObjectInfo
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FNiagaraExternalUObjectInfo
{ 
	FNiagaraVariableBase                               Variable;                                                   // 0x0000   (0x000C)  
	FName                                              ExternalName;                                               // 0x000C   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraSimStageExecutionLoopData
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FNiagaraSimStageExecutionLoopData
{ 
	FName                                              NumLoopsBinding;                                            // 0x0000   (0x0008)  
	int32_t                                            NumLoops;                                                   // 0x0008   (0x0004)  
	int32_t                                            StartStageIndex;                                            // 0x000C   (0x0004)  
	int32_t                                            EndStageIndex;                                              // 0x0010   (0x0004)  
};

/// Struct /Script/Niagara.VersionedNiagaraEmitterData
/// Size: 0x0358 (856 bytes) (0x000000 - 0x000358) align 8 MaxSize: 0x0358
struct FVersionedNiagaraEmitterData
{ 
	FNiagaraAssetVersion                               Version;                                                    // 0x0000   (0x001C)  
	bool                                               bDeprecated;                                                // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FText                                              DeprecationMessage;                                         // 0x0020   (0x0018)  
	bool                                               bLocalSpace;                                                // 0x0030   (0x0001)  
	bool                                               bDeterminism;                                               // 0x0031   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            RandomSeed;                                                 // 0x0034   (0x0004)  
	bool                                               bInterpolatedSpawning : 1;                                  // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x003C   (0x0001)  
	ENiagaraEmitterCalculateBoundMode                  CalculateBoundsMode;                                        // 0x003D   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x003E   (0x0002)  MISSED
	FBox                                               FixedBounds;                                                // 0x0040   (0x0038)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x0078:0 (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	TArray<FNiagaraEventScriptProperties>              EventHandlerScriptProps;                                    // 0x0080   (0x0010)  
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0090   (0x0030)  
	FNiagaraEmitterScalabilityOverrides                ScalabilityOverrides;                                       // 0x00C0   (0x0010)  
	int32_t                                            MaxGPUParticlesSpawnPerFrame;                               // 0x00D0   (0x0004)  
	EParticleAllocationMode                            AllocationMode;                                             // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x00D5   (0x0003)  MISSED
	int32_t                                            PreAllocationCount;                                         // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
	FNiagaraEmitterScriptProperties                    UpdateScriptProps;                                          // 0x00E0   (0x0028)  
	FNiagaraEmitterScriptProperties                    SpawnScriptProps;                                           // 0x0108   (0x0028)  
	FNiagaraParameterStore                             RendererBindings;                                           // 0x0130   (0x0088)  
	TArray<FNiagaraExternalUObjectInfo>                RendererBindingsExternalObjects;                            // 0x01B8   (0x0010)  
	TMap<FNiagaraVariableBase, FNiagaraVariableBase>   ResolvedDIBindings;                                         // 0x01C8   (0x0050)  
	TArray<class UNiagaraRendererProperties*>          RendererProperties;                                         // 0x0218   (0x0010)  
	TArray<class UNiagaraSimulationStageBase*>         SimulationStages;                                           // 0x0228   (0x0010)  
	TArray<FNiagaraSimStageExecutionLoopData>          SimStageExecutionLoops;                                     // 0x0238   (0x0010)  
	unsigned char                                      UnknownData07_6[0x10];                                      // 0x0248   (0x0010)  MISSED
	class UNiagaraScript*                              GPUComputeScript;                                           // 0x0258   (0x0008)  
	TArray<FName>                                      SharedEventGeneratorIds;                                    // 0x0260   (0x0010)  
	FNiagaraEmitterScalabilitySettings                 CurrentScalabilitySettings;                                 // 0x0270   (0x0038)  
	unsigned char                                      UnknownData08_7[0xB0];                                      // 0x02A8   (0x00B0)  MISSED
};

/// Class /Script/Niagara.NiagaraEmitter
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UNiagaraEmitter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FGuid                                              ExposedVersion;                                             // 0x0030   (0x0010)  
	bool                                               bVersioningEnabled;                                         // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	TArray<FVersionedNiagaraEmitterData>               VersionData;                                                // 0x0048   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0058   (0x0008)  MISSED
	FString                                            UniqueEmitterName;                                          // 0x0060   (0x0010)  
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraEventReceiverEmitterAction : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{ 
public:
	uint32_t                                           NumParticles;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAttachedWithParams
	// class UNiagaraComponent* SpawnSystemAttachedWithParams(FFXSystemSpawnParameters& SpawnParams);                           // [0x642ada0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
	// class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // [0x642aa50] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocationWithParams
	// class UNiagaraComponent* SpawnSystemAtLocationWithParams(FFXSystemSpawnParameters& SpawnParams);                         // [0x642a950] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
	// class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // [0x642a450] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
	// void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UVolumeTexture* Texture); // [0x642a330] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetTextureObject
	// void SetTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture* Texture);            // [0x642a330] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject
	// void SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture2DArray* Texture); // [0x642a330] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
	// void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& SamplingRegions); // [0x642a100] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredSockets
	// void SetSkeletalMeshDataInterfaceFilteredSockets(class UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& FilteredSockets); // [0x6429ed0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredBones
	// void SetSkeletalMeshDataInterfaceFilteredBones(class UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& FilteredBones); // [0x6429ca0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetComponentNiagaraGPURayTracedCollisionGroup
	// void SetComponentNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class UPrimitiveComponent* Primitive, int32_t CollisionGroup); // [0x6429b60] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetActorNiagaraGPURayTracedCollisionGroup
	// void SetActorNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class AActor* Actor, int32_t CollisionGroup); // [0x6429950] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.ReleaseNiagaraGPURayTracedCollisionGroup
	// void ReleaseNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, int32_t CollisionGroup);                // [0x6429860] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
	// void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMeshComponent* StaticMeshComponent); // [0x6429650] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
	// void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMesh* StaticMesh); // [0x6429440] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
	// void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent); // [0x6429230] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
	// class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection); // [0x6429130] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.AcquireNiagaraGPURayTracedCollisionGroup
	// int32_t AcquireNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject);                                     // [0x6429060] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraLensEffectBase
/// Size: 0x0330 (816 bytes) (0x0002A0 - 0x000330) align 16 MaxSize: 0x0330
class ANiagaraLensEffectBase : public ANiagaraActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x02A0   (0x0010)  MISSED
	FTransform                                         DesiredRelativeTransform;                                   // 0x02B0   (0x0060)  
	float                                              BaseAuthoredFOV;                                            // 0x0310   (0x0004)  
	bool                                               bAllowMultipleInstances : 1;                                // 0x0314:0 (0x0001)  
	bool                                               bResetWhenRetriggered : 1;                                  // 0x0314:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0315   (0x0003)  MISSED
	TArray<class UClass*>                              EmittersToTreatAsSame;                                      // 0x0318   (0x0010)  
	class APlayerCameraManager*                        OwningCameraManager;                                        // 0x0328   (0x0008)  
};

/// Class /Script/Niagara.NiagaraLightRendererProperties
/// Size: 0x02E0 (736 bytes) (0x0000C0 - 0x0002E0) align 8 MaxSize: 0x02E0
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{ 
public:
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00C1   (0x0003)  MISSED
	bool                                               bUseInverseSquaredFalloff : 1;                              // 0x00C4:0 (0x0001)  
	bool                                               bAffectsTranslucency : 1;                                   // 0x00C4:1 (0x0001)  
	bool                                               bAlphaScalesBrightness : 1;                                 // 0x00C4:2 (0x0001)  
	bool                                               bOverrideInverseExposureBlend : 1;                          // 0x00C4:3 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C5   (0x0003)  MISSED
	float                                              RadiusScale;                                                // 0x00C8   (0x0004)  
	float                                              DefaultExponent;                                            // 0x00CC   (0x0004)  
	float                                              SpecularScale;                                              // 0x00D0   (0x0004)  
	FVector3f                                          ColorAdd;                                                   // 0x00D4   (0x000C)  
	float                                              InverseExposureBlend;                                       // 0x00E0   (0x0004)  
	int32_t                                            RendererVisibility;                                         // 0x00E4   (0x0004)  
	FNiagaraVariableAttributeBinding                   LightRenderingEnabledBinding;                               // 0x00E8   (0x0038)  
	FNiagaraVariableAttributeBinding                   LightExponentBinding;                                       // 0x0120   (0x0038)  
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0158   (0x0038)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0190   (0x0038)  
	FNiagaraVariableAttributeBinding                   RadiusBinding;                                              // 0x01C8   (0x0038)  
	FNiagaraVariableAttributeBinding                   VolumetricScatteringBinding;                                // 0x0200   (0x0038)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0238   (0x0038)  
	FNiagaraVariableAttributeBinding                   SpecularScaleBinding;                                       // 0x0270   (0x0038)  
	unsigned char                                      UnknownData02_7[0x38];                                      // 0x02A8   (0x0038)  MISSED
};

/// Struct /Script/Niagara.NiagaraMeshRendererMeshProperties
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FNiagaraMeshRendererMeshProperties
{ 
	class UStaticMesh*                                 Mesh;                                                       // 0x0000   (0x0008)  
	FNiagaraParameterBinding                           MeshParameterBinding;                                       // 0x0008   (0x000C)  
	ENiagaraMeshLODMode                                LODMode;                                                    // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	int32_t                                            LODLevel;                                                   // 0x0018   (0x0004)  
	int32_t                                            LODBias;                                                    // 0x001C   (0x0004)  
	float                                              LODDistanceFactor;                                          // 0x0020   (0x0004)  
	bool                                               bUseLODRange;                                               // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	FIntVector2                                        LODRange;                                                   // 0x0028   (0x0008)  
	FVector                                            Scale;                                                      // 0x0030   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0048   (0x0018)  
	FVector                                            PivotOffset;                                                // 0x0060   (0x0018)  
	ENiagaraMeshPivotOffsetSpace                       PivotOffsetSpace;                                           // 0x0078   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraMeshMaterialOverride
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraMeshMaterialOverride
{ 
	class UMaterialInterface*                          ExplicitMat;                                                // 0x0000   (0x0008)  
	FNiagaraUserParameterBinding                       UserParamBinding;                                           // 0x0008   (0x0020)  
};

/// Struct /Script/Niagara.NiagaraMeshMICOverride
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraMeshMICOverride
{ 
	class UMaterialInterface*                          OriginalMaterial;                                           // 0x0000   (0x0008)  
	class UMaterialInstanceConstant*                   ReplacementMaterial;                                        // 0x0008   (0x0008)  
};

/// Class /Script/Niagara.NiagaraMeshRendererProperties
/// Size: 0x0690 (1680 bytes) (0x0000C0 - 0x000690) align 8 MaxSize: 0x0690
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{ 
public:
	TArray<FNiagaraMeshRendererMeshProperties>         Meshes;                                                     // 0x00C0   (0x0010)  
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x00D0   (0x0001)  
	ENiagaraSortMode                                   SortMode;                                                   // 0x00D1   (0x0001)  
	ENiagaraRendererSortPrecision                      SortPrecision;                                              // 0x00D2   (0x0001)  
	ENiagaraRendererGpuTranslucentLatency              GpuTranslucentLatency;                                      // 0x00D3   (0x0001)  
	bool                                               bOverrideMaterials : 1;                                     // 0x00D4:0 (0x0001)  
	bool                                               bUseHeterogeneousVolumes : 1;                               // 0x00D4:1 (0x0001)  
	bool                                               bSortOnlyWhenTranslucent : 1;                               // 0x00D4:2 (0x0001)  
	bool                                               bSubImageBlend : 1;                                         // 0x00D4:3 (0x0001)  
	bool                                               bEnableFrustumCulling : 1;                                  // 0x00D4:4 (0x0001)  
	bool                                               bEnableCameraDistanceCulling : 1;                           // 0x00D4:5 (0x0001)  
	bool                                               bEnableMeshFlipbook : 1;                                    // 0x00D4:6 (0x0001)  
	bool                                               bLockedAxisEnable : 1;                                      // 0x00D4:7 (0x0001)  
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x00D5   (0x0003)  MISSED
	bool                                               bCastShadows : 1;                                           // 0x00D8:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	TArray<FNiagaraMeshMaterialOverride>               OverrideMaterials;                                          // 0x00E0   (0x0010)  
	TArray<FNiagaraMeshMICOverride>                    MICOverrideMaterials;                                       // 0x00F0   (0x0010)  
	FVector2D                                          SubImageSize;                                               // 0x0100   (0x0010)  
	FVector                                            LockedAxis;                                                 // 0x0110   (0x0018)  
	FVector                                            MeshBoundsScale;                                            // 0x0128   (0x0018)  
	ENiagaraMeshFacingMode                             FacingMode;                                                 // 0x0140   (0x0001)  
	ENiagaraMeshLockedAxisSpace                        LockedAxisSpace;                                            // 0x0141   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0142   (0x0002)  MISSED
	float                                              MinCameraDistance;                                          // 0x0144   (0x0004)  
	float                                              MaxCameraDistance;                                          // 0x0148   (0x0004)  
	uint32_t                                           RendererVisibility;                                         // 0x014C   (0x0004)  
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0150   (0x0038)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0188   (0x0038)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x01C0   (0x0038)  
	FNiagaraVariableAttributeBinding                   MeshOrientationBinding;                                     // 0x01F8   (0x0038)  
	FNiagaraVariableAttributeBinding                   ScaleBinding;                                               // 0x0230   (0x0038)  
	FNiagaraVariableAttributeBinding                   SubImageIndexBinding;                                       // 0x0268   (0x0038)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x02A0   (0x0038)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x02D8   (0x0038)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x0310   (0x0038)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x0348   (0x0038)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x0380   (0x0038)  
	FNiagaraVariableAttributeBinding                   CustomSortingBinding;                                       // 0x03B8   (0x0038)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x03F0   (0x0038)  
	FNiagaraVariableAttributeBinding                   CameraOffsetBinding;                                        // 0x0428   (0x0038)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0460   (0x0038)  
	FNiagaraVariableAttributeBinding                   MeshIndexBinding;                                           // 0x0498   (0x0038)  
	FNiagaraRendererMaterialParameters                 MaterialParameters;                                         // 0x04D0   (0x0050)  
	FNiagaraVariableAttributeBinding                   PrevPositionBinding;                                        // 0x0520   (0x0038)  
	FNiagaraVariableAttributeBinding                   PrevScaleBinding;                                           // 0x0558   (0x0038)  
	FNiagaraVariableAttributeBinding                   PrevMeshOrientationBinding;                                 // 0x0590   (0x0038)  
	FNiagaraVariableAttributeBinding                   PrevCameraOffsetBinding;                                    // 0x05C8   (0x0038)  
	FNiagaraVariableAttributeBinding                   PrevVelocityBinding;                                        // 0x0600   (0x0038)  
	uint32_t                                           MaterialParamValidMask;                                     // 0x0638   (0x0004)  
	unsigned char                                      UnknownData03_7[0x54];                                      // 0x063C   (0x0054)  MISSED
};

/// Class /Script/Niagara.NiagaraParameterCollectionInstance
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x0000F0) align 8 MaxSize: 0x00F0
class UNiagaraParameterCollectionInstance : public UObject
{ 
public:
	class UNiagaraParameterCollection*                 Collection;                                                 // 0x0028   (0x0008)  
	TArray<FNiagaraVariable>                           OverridenParameters;                                        // 0x0030   (0x0010)  
	FNiagaraParameterStore                             ParameterStorage;                                           // 0x0040   (0x0088)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x00C8   (0x0028)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	// void SetVectorParameter(FString InVariableName, FVector InValue);                                                        // [0x64557e0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	// void SetVector4Parameter(FString InVariableName, FVector4& InValue);                                                     // [0x64555a0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	// void SetVector2DParameter(FString InVariableName, FVector2D InValue);                                                    // [0x6455390] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	// void SetQuatParameter(FString InVariableName, FQuat& InValue);                                                           // [0x6455160] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	// void SetIntParameter(FString InVariableName, int32_t InValue);                                                           // [0x6454f90] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	// void SetFloatParameter(FString InVariableName, float InValue);                                                           // [0x6454db0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	// void SetColorParameter(FString InVariableName, FLinearColor InValue);                                                    // [0x6454bc0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	// void SetBoolParameter(FString InVariableName, bool InValue);                                                             // [0x64549e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	// FVector GetVectorParameter(FString InVariableName);                                                                      // [0x6454710] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	// FVector4 GetVector4Parameter(FString InVariableName);                                                                    // [0x6454530] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	// FVector2D GetVector2DParameter(FString InVariableName);                                                                  // [0x64543a0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	// FQuat GetQuatParameter(FString InVariableName);                                                                          // [0x64541d0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	// int32_t GetIntParameter(FString InVariableName);                                                                         // [0x6454020] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	// float GetFloatParameter(FString InVariableName);                                                                         // [0x6453eb0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	// FLinearColor GetColorParameter(FString InVariableName);                                                                  // [0x6453d40] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
	// bool GetBoolParameter(FString InVariableName);                                                                           // [0x6453be0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraParameterCollection
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraParameterCollection : public UObject
{ 
public:
	FName                                              NameSpace;                                                  // 0x0028   (0x0008)  
	TArray<FNiagaraVariable>                           Parameters;                                                 // 0x0030   (0x0010)  
	class UMaterialParameterCollection*                SourceMaterialCollection;                                   // 0x0040   (0x0008)  
	class UNiagaraParameterCollectionInstance*         DefaultInstance;                                            // 0x0048   (0x0008)  
	FGuid                                              CompileId;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraBaselineController
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UNiagaraBaselineController : public UObject
{ 
public:
	float                                              TestDuration;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UNiagaraEffectType*                          EffectType;                                                 // 0x0030   (0x0008)  
	class ANiagaraPerfBaselineActor*                   Owner;                                                      // 0x0038   (0x0008)  
	TWeakObjectPtr<class UNiagaraSystem*>              System;                                                     // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraBaselineController.OnTickTest
	// bool OnTickTest();                                                                                                       // [0x5a04450] RequiredAPI|Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnOwnerTick
	// void OnOwnerTick(float DeltaTime);                                                                                       // [0x6454950] RequiredAPI|Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnEndTest
	// void OnEndTest(FNiagaraPerfBaselineStats Stats);                                                                         // [0x64548c0] RequiredAPI|Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnBeginTest
	// void OnBeginTest();                                                                                                      // [0x4312180] RequiredAPI|Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.GetSystem
	// class UNiagaraSystem* GetSystem();                                                                                       // [0x5aa5b40] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraBaselineController_Basic
/// Size: 0x0080 (128 bytes) (0x000068 - 0x000080) align 8 MaxSize: 0x0080
class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
{ 
public:
	int32_t                                            NumInstances;                                               // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<class UNiagaraComponent*>                   SpawnedComponents;                                          // 0x0070   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPerfBaselineActor
/// Size: 0x02A0 (672 bytes) (0x000290 - 0x0002A0) align 8 MaxSize: 0x02A0
class ANiagaraPerfBaselineActor : public AActor
{ 
public:
	class UNiagaraBaselineController*                  Controller;                                                 // 0x0290   (0x0008)  
	class UTextRenderComponent*                        Label;                                                      // 0x0298   (0x0008)  
};

/// Class /Script/Niagara.NiagaraPrecompileContainer
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraPrecompileContainer : public UObject
{ 
public:
	TArray<class UNiagaraScript*>                      Scripts;                                                    // 0x0028   (0x0010)  
	class UNiagaraSystem*                              System;                                                     // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraPreviewBase
/// Size: 0x0290 (656 bytes) (0x000290 - 0x000290) align 8 MaxSize: 0x0290
class ANiagaraPreviewBase : public AActor
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewBase.SetSystem
	// void SetSystem(class UNiagaraSystem* InSystem);                                                                          // [0x3617e10] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/Niagara.NiagaraPreviewBase.SetLabelText
	// void SetLabelText(FText& InXAxisText, FText& InYAxisText);                                                               // [0x3617e10] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraPreviewAxis
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraPreviewAxis : public UObject
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewAxis.Num
	// int32_t Num();                                                                                                           // [0x5530a20] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraPreviewAxis.ApplyToPreview
	// void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, FString& OutLabelText); // [0x6490920] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamBase
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{ 
public:
	FName                                              Param;                                                      // 0x0028   (0x0008)  
	int32_t                                            Count;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamInt32
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	int32_t                                            Min;                                                        // 0x0038   (0x0004)  
	int32_t                                            Max;                                                        // 0x003C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamFloat
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	float                                              Min;                                                        // 0x0038   (0x0004)  
	float                                              Max;                                                        // 0x003C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector2D
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FVector2D                                          Min;                                                        // 0x0038   (0x0010)  
	FVector2D                                          Max;                                                        // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FVector                                            Min;                                                        // 0x0038   (0x0018)  
	FVector                                            Max;                                                        // 0x0050   (0x0018)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector4
/// Size: 0x0080 (128 bytes) (0x000038 - 0x000080) align 16 MaxSize: 0x0080
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FVector4                                           Min;                                                        // 0x0040   (0x0020)  
	FVector4                                           Max;                                                        // 0x0060   (0x0020)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamLinearColor
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FLinearColor                                       Min;                                                        // 0x0038   (0x0010)  
	FLinearColor                                       Max;                                                        // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPreviewGrid
/// Size: 0x02E0 (736 bytes) (0x000290 - 0x0002E0) align 8 MaxSize: 0x02E0
class ANiagaraPreviewGrid : public AActor
{ 
public:
	class UNiagaraSystem*                              System;                                                     // 0x0290   (0x0008)  
	ENiagaraPreviewGridResetMode                       ResetMode;                                                  // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0299   (0x0007)  MISSED
	class UNiagaraPreviewAxis*                         PreviewAxisX;                                               // 0x02A0   (0x0008)  
	class UNiagaraPreviewAxis*                         PreviewAxisY;                                               // 0x02A8   (0x0008)  
	class UClass*                                      PreviewClass;                                               // 0x02B0   (0x0008)  
	float                                              SpacingX;                                                   // 0x02B8   (0x0004)  
	float                                              SpacingY;                                                   // 0x02BC   (0x0004)  
	int32_t                                            NumX;                                                       // 0x02C0   (0x0004)  
	int32_t                                            NumY;                                                       // 0x02C4   (0x0004)  
	TArray<class UChildActorComponent*>                PreviewComponents;                                          // 0x02C8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x02D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewGrid.SetPaused
	// void SetPaused(bool bPaused);                                                                                            // [0x6490b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.GetPreviews
	// void GetPreviews(TArray<UNiagaraComponent*>& OutPreviews);                                                               // [0x6490ac0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.DeactivatePreviews
	// void DeactivatePreviews();                                                                                               // [0x6490aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.ActivatePreviews
	// void ActivatePreviews(bool bReset);                                                                                      // [0x6490890] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Niagara.NiagaraRibbonUVSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraRibbonUVSettings
{ 
	ENiagaraRibbonUVDistributionMode                   DistributionMode;                                           // 0x0000   (0x0001)  
	ENiagaraRibbonUVEdgeMode                           LeadingEdgeMode;                                            // 0x0001   (0x0001)  
	ENiagaraRibbonUVEdgeMode                           TrailingEdgeMode;                                           // 0x0002   (0x0001)  
	bool                                               bEnablePerParticleUOverride : 1;                            // 0x0003:0 (0x0001)  
	bool                                               bEnablePerParticleVRangeOverride : 1;                       // 0x0003:1 (0x0001)  
	float                                              TilingLength;                                               // 0x0004   (0x0004)  
	FVector2D                                          Offset;                                                     // 0x0008   (0x0010)  
	FVector2D                                          Scale;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraRibbonShapeCustomVertex
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FNiagaraRibbonShapeCustomVertex
{ 
	FVector2f                                          Position;                                                   // 0x0000   (0x0008)  
	FVector2f                                          Normal;                                                     // 0x0008   (0x0008)  
	float                                              TextureV;                                                   // 0x0010   (0x0004)  
};

/// Class /Script/Niagara.NiagaraRibbonRendererProperties
/// Size: 0x0768 (1896 bytes) (0x0000C0 - 0x000768) align 8 MaxSize: 0x0768
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UMaterialInterface*                          Material;                                                   // 0x00C0   (0x0008)  
	FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x00C8   (0x0020)  
	FNiagaraRibbonUVSettings                           UV0Settings;                                                // 0x00E8   (0x0028)  
	FNiagaraRibbonUVSettings                           UV1Settings;                                                // 0x0110   (0x0028)  
	ENiagaraRibbonFacingMode                           FacingMode;                                                 // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0139   (0x0003)  MISSED
	int32_t                                            MaxNumRibbons;                                              // 0x013C   (0x0004)  
	ENiagaraRibbonDrawDirection                        DrawDirection;                                              // 0x0140   (0x0001)  
	ENiagaraRibbonShapeMode                            Shape;                                                      // 0x0141   (0x0001)  
	bool                                               bEnableAccurateGeometry : 1;                                // 0x0142:0 (0x0001)  
	bool                                               bUseMaterialBackfaceCulling : 1;                            // 0x0142:1 (0x0001)  
	bool                                               bUseGeometryNormals : 1;                                    // 0x0142:2 (0x0001)  
	bool                                               bUseGPUInit : 1;                                            // 0x0142:3 (0x0001)  
	bool                                               bUseConstantFactor : 1;                                     // 0x0142:4 (0x0001)  
	bool                                               bScreenSpaceTessellation : 1;                               // 0x0142:5 (0x0001)  
	bool                                               bLinkOrderUseUniqueID : 1;                                  // 0x0142:6 (0x0001)  
	bool                                               bCastShadows : 1;                                           // 0x0142:7 (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0143   (0x0001)  MISSED
	int32_t                                            WidthSegmentationCount;                                     // 0x0144   (0x0004)  
	int32_t                                            MultiPlaneCount;                                            // 0x0148   (0x0004)  
	int32_t                                            TubeSubdivisions;                                           // 0x014C   (0x0004)  
	TArray<FNiagaraRibbonShapeCustomVertex>            CustomVertices;                                             // 0x0150   (0x0010)  
	ENiagaraRibbonTessellationMode                     TessellationMode;                                           // 0x0160   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0161   (0x0003)  MISSED
	float                                              CurveTension;                                               // 0x0164   (0x0004)  
	int32_t                                            TessellationFactor;                                         // 0x0168   (0x0004)  
	float                                              TessellationAngle;                                          // 0x016C   (0x0004)  
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0170   (0x0038)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x01A8   (0x0038)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x01E0   (0x0038)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x0218   (0x0038)  
	FNiagaraVariableAttributeBinding                   RibbonTwistBinding;                                         // 0x0250   (0x0038)  
	FNiagaraVariableAttributeBinding                   RibbonWidthBinding;                                         // 0x0288   (0x0038)  
	FNiagaraVariableAttributeBinding                   RibbonFacingBinding;                                        // 0x02C0   (0x0038)  
	FNiagaraVariableAttributeBinding                   RibbonIdBinding;                                            // 0x02F8   (0x0038)  
	FNiagaraVariableAttributeBinding                   RibbonLinkOrderBinding;                                     // 0x0330   (0x0038)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x0368   (0x0038)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x03A0   (0x0038)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x03D8   (0x0038)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x0410   (0x0038)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x0448   (0x0038)  
	FNiagaraVariableAttributeBinding                   RibbonUVDistance;                                           // 0x0480   (0x0038)  
	FNiagaraVariableAttributeBinding                   U0OverrideBinding;                                          // 0x04B8   (0x0038)  
	FNiagaraVariableAttributeBinding                   V0RangeOverrideBinding;                                     // 0x04F0   (0x0038)  
	FNiagaraVariableAttributeBinding                   U1OverrideBinding;                                          // 0x0528   (0x0038)  
	FNiagaraVariableAttributeBinding                   V1RangeOverrideBinding;                                     // 0x0560   (0x0038)  
	FNiagaraRendererMaterialParameters                 MaterialParameters;                                         // 0x0598   (0x0050)  
	FNiagaraVariableAttributeBinding                   PrevPositionBinding;                                        // 0x05E8   (0x0038)  
	FNiagaraVariableAttributeBinding                   PrevRibbonWidthBinding;                                     // 0x0620   (0x0038)  
	FNiagaraVariableAttributeBinding                   PrevRibbonFacingBinding;                                    // 0x0658   (0x0038)  
	FNiagaraVariableAttributeBinding                   PrevRibbonTwistBinding;                                     // 0x0690   (0x0038)  
	uint32_t                                           MaterialParamValidMask;                                     // 0x06C8   (0x0004)  
	unsigned char                                      UnknownData03_7[0x9C];                                      // 0x06CC   (0x009C)  MISSED
};

/// Class /Script/Niagara.NiagaraScratchPadContainer
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraScratchPadContainer : public UObject
{ 
public:
};

/// Struct /Script/Niagara.NiagaraScriptExecutionParameterStore
/// Size: 0x0090 (144 bytes) (0x000088 - 0x000090) align 8 MaxSize: 0x0090
struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore
{ 
	int32_t                                            ParameterSize;                                              // 0x0088   (0x0004)  
	bool                                               bInitialized : 1;                                           // 0x008C:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x008D   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraBoundParameter
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FNiagaraBoundParameter
{ 
	FNiagaraVariableBase                               Parameter;                                                  // 0x0000   (0x000C)  
	int32_t                                            SrcOffset;                                                  // 0x000C   (0x0004)  
	int32_t                                            DestOffset;                                                 // 0x0010   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVMExecutableDataId
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FNiagaraVMExecutableDataId
{ 
	FGuid                                              CompilerVersionID;                                          // 0x0000   (0x0010)  
	ENiagaraScriptUsage                                ScriptUsageType;                                            // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FGuid                                              ScriptUsageTypeID;                                          // 0x0014   (0x0010)  
	bool                                               bUsesRapidIterationParams : 1;                              // 0x0024:0 (0x0001)  
	bool                                               bDisableDebugSwitches : 1;                                  // 0x0024:1 (0x0001)  
	bool                                               bInterpolatedSpawn : 1;                                     // 0x0024:2 (0x0001)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x0024:3 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	FGuid                                              BaseScriptID;                                               // 0x0028   (0x0010)  
	FNiagaraCompileHash                                BaseScriptCompileHash;                                      // 0x0038   (0x0010)  
	FGuid                                              ScriptVersionID;                                            // 0x0048   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraVMExecutableByteCode
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraVMExecutableByteCode
{ 
	TArray<char>                                       Data;                                                       // 0x0000   (0x0010)  
	int32_t                                            UncompressedSize;                                           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraCompilerTag
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNiagaraCompilerTag
{ 
	FNiagaraVariable                                   Variable;                                                   // 0x0000   (0x0020)  
	FString                                            StringValue;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraScriptDataUsageInfo
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FNiagaraScriptDataUsageInfo
{ 
	bool                                               bReadsAttributeData;                                        // 0x0000   (0x0001)  
};

/// Struct /Script/Niagara.NiagaraScriptUObjectCompileInfo
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FNiagaraScriptUObjectCompileInfo
{ 
	FNiagaraVariableBase                               Variable;                                                   // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UObject*                                     Object;                                                     // 0x0010   (0x0008)  
	FSoftObjectPath                                    ObjectPath;                                                 // 0x0018   (0x0020)  
	FName                                              RegisteredParameterMapRead;                                 // 0x0038   (0x0008)  
	TArray<FName>                                      RegisteredParameterMapWrites;                               // 0x0040   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceCompileInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FNiagaraScriptDataInterfaceCompileInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	int32_t                                            UserPtrIdx;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraTypeDefinition                             Type;                                                       // 0x0010   (0x0010)  
	FName                                              RegisteredParameterMapRead;                                 // 0x0020   (0x0008)  
	FName                                              RegisteredParameterMapWrite;                                // 0x0028   (0x0008)  
	bool                                               bIsPlaceholder;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FString                                            SourceEmitterName;                                          // 0x0038   (0x0010)  
};

/// Struct /Script/Niagara.VMFunctionSpecifier
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FVMFunctionSpecifier
{ 
	FName                                              Key;                                                        // 0x0000   (0x0008)  
	FName                                              Value;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.VMExternalFunctionBindingInfo
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FVMExternalFunctionBindingInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              OwnerName;                                                  // 0x0008   (0x0008)  
	TArray<bool>                                       InputParamLocations;                                        // 0x0010   (0x0010)  
	int32_t                                            NumOutputs;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FVMFunctionSpecifier>                       FunctionSpecifiers;                                         // 0x0028   (0x0010)  
	TArray<FNiagaraVariableBase>                       VariadicInputs;                                             // 0x0038   (0x0010)  
	TArray<FNiagaraVariableBase>                       VariadicOutputs;                                            // 0x0048   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDataSetProperties
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraDataSetProperties
{ 
	FNiagaraDataSetID                                  ID;                                                         // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FNiagaraVariableBase>                       Variables;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraStatScope
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraStatScope
{ 
	FName                                              FullName;                                                   // 0x0000   (0x0008)  
	FName                                              FriendlyName;                                               // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraVMExecutableData
/// Size: 0x01A0 (416 bytes) (0x000000 - 0x0001A0) align 8 MaxSize: 0x01A0
struct FNiagaraVMExecutableData
{ 
	FNiagaraVMExecutableByteCode                       ByteCode;                                                   // 0x0000   (0x0018)  
	FNiagaraVMExecutableByteCode                       OptimizedByteCode;                                          // 0x0018   (0x0018)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0030   (0x0038)  MISSED
	int32_t                                            NumTempRegisters;                                           // 0x0068   (0x0004)  
	int32_t                                            NumUserPtrs;                                                // 0x006C   (0x0004)  
	TArray<FNiagaraCompilerTag>                        CompileTags;                                                // 0x0070   (0x0010)  
	TArray<char>                                       ScriptLiterals;                                             // 0x0080   (0x0010)  
	TArray<FNiagaraVariableBase>                       Attributes;                                                 // 0x0090   (0x0010)  
	FNiagaraScriptDataUsageInfo                        DataUsage;                                                  // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
	TArray<FNiagaraScriptUObjectCompileInfo>           UObjectInfos;                                               // 0x00A8   (0x0010)  
	TArray<FNiagaraScriptDataInterfaceCompileInfo>     DataInterfaceInfo;                                          // 0x00B8   (0x0010)  
	TArray<FVMExternalFunctionBindingInfo>             CalledVMExternalFunctions;                                  // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00D8   (0x0010)  MISSED
	TArray<FNiagaraDataSetID>                          ReadDataSets;                                               // 0x00E8   (0x0010)  
	TArray<FNiagaraDataSetProperties>                  WriteDataSets;                                              // 0x00F8   (0x0010)  
	TArray<FNiagaraStatScope>                          StatScopes;                                                 // 0x0108   (0x0010)  
	FNiagaraShaderScriptParametersMetadata             ShaderScriptParametersMetadata;                             // 0x0118   (0x0058)  
	ENiagaraScriptCompileStatus                        LastCompileStatus;                                          // 0x0170   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0171   (0x0007)  MISSED
	TArray<FSimulationStageMetaData>                   SimulationStageMetaData;                                    // 0x0178   (0x0010)  
	TArray<char>                                       ExperimentalContextData;                                    // 0x0188   (0x0010)  
	bool                                               bReadsSignificanceIndex : 1;                                // 0x0198:0 (0x0001)  
	bool                                               bNeedsGPUContextInit : 1;                                   // 0x0198:1 (0x0001)  
	unsigned char                                      UnknownData04_7[0x7];                                       // 0x0199   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptResolvedDataInterfaceInfo
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FNiagaraScriptResolvedDataInterfaceInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              CompileName;                                                // 0x0008   (0x0008)  
	FString                                            ResolvedSourceEmitterName;                                  // 0x0010   (0x0010)  
	FNiagaraVariableBase                               ResolvedVariable;                                           // 0x0020   (0x000C)  
	FNiagaraVariableBase                               ParameterStoreVariable;                                     // 0x002C   (0x000C)  
	bool                                               bIsInternal;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	class UNiagaraDataInterface*                       ResolvedDataInterface;                                      // 0x0040   (0x0008)  
	int32_t                                            UserPtrIdx;                                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraResolvedUserDataInterfaceBinding
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNiagaraResolvedUserDataInterfaceBinding
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NiagaraResolvedUObjectInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraResolvedUObjectInfo
{ 
	FName                                              ReadVariableName;                                           // 0x0000   (0x0008)  
	FNiagaraVariableBase                               ResolvedVariable;                                           // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UObject*                                     Object;                                                     // 0x0018   (0x0008)  
};

/// Class /Script/Niagara.NiagaraScript
/// Size: 0x03C0 (960 bytes) (0x000028 - 0x0003C0) align 8 MaxSize: 0x03C0
class UNiagaraScript : public UNiagaraScriptBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	ENiagaraScriptUsage                                Usage;                                                      // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	FGuid                                              UsageId;                                                    // 0x0034   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FNiagaraParameterStore                             RapidIterationParameters;                                   // 0x0048   (0x0088)  
	FNiagaraScriptExecutionParameterStore              ScriptExecutionParamStore;                                  // 0x00D0   (0x0090)  
	TArray<FNiagaraBoundParameter>                     ScriptExecutionBoundParameters;                             // 0x0160   (0x0010)  
	FNiagaraVMExecutableDataId                         CachedScriptVMId;                                           // 0x0170   (0x0058)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x01C8   (0x0010)  MISSED
	FNiagaraVMExecutableData                           CachedScriptVM;                                             // 0x01D8   (0x01A0)  
	TArray<class UNiagaraParameterCollection*>         CachedParameterCollectionReferences;                        // 0x0378   (0x0010)  
	TArray<FNiagaraScriptResolvedDataInterfaceInfo>    ResolvedDataInterfaces;                                     // 0x0388   (0x0010)  
	TArray<FNiagaraResolvedUserDataInterfaceBinding>   ResolvedUserDataInterfaceBindings;                          // 0x0398   (0x0010)  
	TArray<FNiagaraResolvedUObjectInfo>                ResolvedUObjectInfos;                                       // 0x03A8   (0x0010)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x03B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
	// void RaiseOnGPUCompilationComplete();                                                                                    // [0x5368b70] Final|Native|Public  
};

/// Struct /Script/Niagara.NiagaraSimCacheVariable
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FNiagaraSimCacheVariable
{ 
	FNiagaraVariableBase                               Variable;                                                   // 0x0000   (0x000C)  
	uint16_t                                           FloatOffset;                                                // 0x000C   (0x0002)  
	uint16_t                                           FloatCount;                                                 // 0x000E   (0x0002)  
	uint16_t                                           HalfOffset;                                                 // 0x0010   (0x0002)  
	uint16_t                                           HalfCount;                                                  // 0x0012   (0x0002)  
	uint16_t                                           Int32Offset;                                                // 0x0014   (0x0002)  
	uint16_t                                           Int32Count;                                                 // 0x0016   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraSimCacheDataBuffersLayout
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FNiagaraSimCacheDataBuffersLayout
{ 
	FName                                              LayoutName;                                                 // 0x0000   (0x0008)  
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	TArray<FNiagaraSimCacheVariable>                   Variables;                                                  // 0x0010   (0x0010)  
	uint16_t                                           FloatCount;                                                 // 0x0020   (0x0002)  
	uint16_t                                           HalfCount;                                                  // 0x0022   (0x0002)  
	uint16_t                                           Int32Count;                                                 // 0x0024   (0x0002)  
	bool                                               bLocalSpace;                                                // 0x0026   (0x0001)  
	bool                                               bAllowInterpolation;                                        // 0x0027   (0x0001)  
	bool                                               bAllowVelocityExtrapolation;                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<FName>                                      RebaseVariableNames;                                        // 0x0030   (0x0010)  
	TArray<FName>                                      InterpVariableNames;                                        // 0x0040   (0x0010)  
	uint16_t                                           ComponentVelocity;                                          // 0x0050   (0x0002)  
	unsigned char                                      UnknownData02_7[0x66];                                      // 0x0052   (0x0066)  MISSED
};

/// Struct /Script/Niagara.NiagaraSimCacheLayout
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FNiagaraSimCacheLayout
{ 
	FNiagaraSimCacheDataBuffersLayout                  SystemLayout;                                               // 0x0000   (0x00B8)  
	TArray<FNiagaraSimCacheDataBuffersLayout>          EmitterLayouts;                                             // 0x00B8   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSimCacheDataBuffers
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FNiagaraSimCacheDataBuffers
{ 
	uint32_t                                           NumInstances;                                               // 0x0000   (0x0004)  
	uint32_t                                           IDAcquireTag;                                               // 0x0004   (0x0004)  
	uint32_t                                           IDToIndexTableElements;                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8C];                                      // 0x000C   (0x008C)  MISSED
};

/// Struct /Script/Niagara.NiagaraSimCacheSystemFrame
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FNiagaraSimCacheSystemFrame
{ 
	FBox                                               LocalBounds;                                                // 0x0000   (0x0038)  
	FNiagaraSimCacheDataBuffers                        SystemDataBuffers;                                          // 0x0038   (0x0098)  
};

/// Struct /Script/Niagara.NiagaraSimCacheEmitterFrame
/// Size: 0x00D8 (216 bytes) (0x000000 - 0x0000D8) align 8 MaxSize: 0x00D8
struct FNiagaraSimCacheEmitterFrame
{ 
	FBox                                               LocalBounds;                                                // 0x0000   (0x0038)  
	int32_t                                            TotalSpawnedParticles;                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FNiagaraSimCacheDataBuffers                        ParticleDataBuffers;                                        // 0x0040   (0x0098)  
};

/// Struct /Script/Niagara.NiagaraSimCacheFrame
/// Size: 0x0160 (352 bytes) (0x000000 - 0x000160) align 16 MaxSize: 0x0160
struct FNiagaraSimCacheFrame
{ 
	FTransform                                         LocalToWorld;                                               // 0x0000   (0x0060)  
	FVector3f                                          LWCTile;                                                    // 0x0060   (0x000C)  
	float                                              SimulationAge;                                              // 0x006C   (0x0004)  
	int32_t                                            SimulationTickCount;                                        // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FNiagaraSimCacheSystemFrame                        SystemData;                                                 // 0x0078   (0x00D0)  
	TArray<FNiagaraSimCacheEmitterFrame>               EmitterData;                                                // 0x0148   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0158   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraSimCache
/// Size: 0x0208 (520 bytes) (0x000028 - 0x000208) align 8 MaxSize: 0x0208
class UNiagaraSimCache : public UObject
{ 
public:
	FGuid                                              CacheGuid;                                                  // 0x0028   (0x0010)  
	TWeakObjectPtr<class UNiagaraSystem*>              SoftNiagaraSystem;                                          // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0040   (0x0020)  MISSED
	float                                              StartSeconds;                                               // 0x0060   (0x0004)  
	float                                              DurationSeconds;                                            // 0x0064   (0x0004)  
	FNiagaraSimCacheCreateParameters                   CreateParameters;                                           // 0x0068   (0x0058)  
	bool                                               bNeedsReadComponentMappingRecache;                          // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
	FNiagaraSimCacheLayout                             CacheLayout;                                                // 0x00C8   (0x00C8)  
	TArray<FNiagaraSimCacheFrame>                      CacheFrames;                                                // 0x0190   (0x0010)  
	TMap<FNiagaraVariableBase, class UObject*>         DataInterfaceStorage;                                       // 0x01A0   (0x0050)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x01F0   (0x0018)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraSimCache.ReadVectorAttribute
	// void ReadVectorAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);        // [0x64c1510] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadVector4Attribute
	// void ReadVector4Attribute(TArray<FVector4>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);      // [0x64c1390] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadVector2Attribute
	// void ReadVector2Attribute(TArray<FVector2D>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);     // [0x64c1000] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadQuatAttributeWithRebase
	// void ReadQuatAttributeWithRebase(TArray<FQuat>& OutValues, FQuat Quat, FName AttributeName, FName EmitterName, int32_t FrameIndex); // [0x64c0e30] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadQuatAttribute
	// void ReadQuatAttribute(TArray<FQuat>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex); // [0x64c0c70] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadPositionAttributeWithRebase
	// void ReadPositionAttributeWithRebase(TArray<FVector>& OutValues, FTransform Transform, FName AttributeName, FName EmitterName, int32_t FrameIndex); // [0x64c0a00] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadPositionAttribute
	// void ReadPositionAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex); // [0x64c0840] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadIntAttribute
	// void ReadIntAttribute(TArray<int32_t>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);           // [0x64c06c0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadIDAttribute
	// void ReadIDAttribute(TArray<FNiagaraID>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);         // [0x64c0340] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadFloatAttribute
	// void ReadFloatAttribute(TArray<float>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);           // [0x64bfff0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadColorAttribute
	// void ReadColorAttribute(TArray<FLinearColor>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);    // [0x64bfe70] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.IsEmpty
	// bool IsEmpty();                                                                                                          // [0x64bfe40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.IsCacheValid
	// bool IsCacheValid();                                                                                                     // [0x64bfe10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetStartSeconds
	// float GetStartSeconds();                                                                                                 // [0x64bfdf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetNumFrames
	// int32_t GetNumFrames();                                                                                                  // [0x64bfdd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetNumEmitters
	// int32_t GetNumEmitters();                                                                                                // [0x64bfdb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetEmitterNames
	// TArray<FName> GetEmitterNames();                                                                                         // [0x64bfc80] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetEmitterName
	// FName GetEmitterName(int32_t EmitterIndex);                                                                              // [0x64bfbc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetAttributeCaptureMode
	// ENiagaraSimCacheAttributeCaptureMode GetAttributeCaptureMode();                                                          // [0x64bfba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Niagara.AsyncNiagaraCaptureSimCache
/// Size: 0x0130 (304 bytes) (0x000030 - 0x000130) align 8 MaxSize: 0x0130
class UAsyncNiagaraCaptureSimCache : public UCancellableAsyncAction
{ 
public:
	class UNiagaraSimCache*                            CaptureSimCache;                                            // 0x0030   (0x0008)  
	class UNiagaraComponent*                           CaptureComponent;                                           // 0x0038   (0x0008)  
	SDK_UNDEFINED(16,410) /* FMulticastInlineDelegate */ __um(CaptureComplete);                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0xE0];                                      // 0x0050   (0x00E0)  MISSED


	/// Functions
	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.OnCaptureComplete__DelegateSignature
	// void OnCaptureComplete__DelegateSignature(bool bSuccess);                                                                // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheUntilComplete
	// class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheUntilComplete(class UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache*& OutSimCache, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime); // [0x64bf5b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheMultiFrame
	// class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheMultiFrame(class UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache*& OutSimCache, int32_t NumFrames, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime); // [0x64bf0a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCache
	// class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCache(class UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, class UNiagaraComponent* NiagaraComponent, FNiagaraSimCacheCaptureParameters CaptureParameters, class UNiagaraSimCache*& OutSimCache); // [0x64be5e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraSimCacheFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraSimCacheFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraSimCacheFunctionLibrary.CreateNiagaraSimCache
	// class UNiagaraSimCache* CreateNiagaraSimCache(class UObject* WorldContextObject);                                        // [0x64bfa80] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraSimCacheFunctionLibrary.CaptureNiagaraSimCacheImmediate
	// bool CaptureNiagaraSimCacheImmediate(class UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache*& OutSimCache, bool bAdvanceSimulation, float AdvanceDeltaTime); // [0x64bea30] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraSimulationStageBase
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{ 
public:
	class UNiagaraScript*                              Script;                                                     // 0x0028   (0x0008)  
	FName                                              SimulationStageName;                                        // 0x0030   (0x0008)  
	bool                                               bEnabled : 1;                                               // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableDataInterfaceBinding
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraVariableDataInterfaceBinding
{ 
	FNiagaraVariable                                   BoundVariable;                                              // 0x0000   (0x0020)  
};

/// Class /Script/Niagara.NiagaraSimulationStageGeneric
/// Size: 0x01E0 (480 bytes) (0x000040 - 0x0001E0) align 8 MaxSize: 0x01E0
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{ 
public:
	FNiagaraVariableAttributeBinding                   EnabledBinding;                                             // 0x0040   (0x0038)  
	ENiagaraIterationSource                            IterationSource;                                            // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	FNiagaraParameterBindingWithValue                  NumIterations;                                              // 0x0080   (0x0020)  
	ENiagaraSimStageExecuteBehavior                    ExecuteBehavior;                                            // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00A1   (0x0003)  MISSED
	bool                                               bDisablePartialParticleUpdate : 1;                          // 0x00A4:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00A5   (0x0003)  MISSED
	FNiagaraVariableDataInterfaceBinding               DataInterface;                                              // 0x00A8   (0x0020)  
	bool                                               bParticleIterationStateEnabled : 1;                         // 0x00C8:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x00C9   (0x0007)  MISSED
	FNiagaraVariableAttributeBinding                   ParticleIterationStateBinding;                              // 0x00D0   (0x0038)  
	FIntPoint                                          ParticleIterationStateRange;                                // 0x0108   (0x0008)  
	bool                                               bGpuDispatchForceLinear : 1;                                // 0x0110:0 (0x0001)  
	bool                                               bOverrideGpuDispatchNumThreads : 1;                         // 0x0110:1 (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0111   (0x0007)  MISSED
	FNiagaraParameterBindingWithValue                  OverrideGpuDispatchNumThreadsX;                             // 0x0118   (0x0020)  
	FNiagaraParameterBindingWithValue                  OverrideGpuDispatchNumThreadsY;                             // 0x0138   (0x0020)  
	FNiagaraParameterBindingWithValue                  OverrideGpuDispatchNumThreadsZ;                             // 0x0158   (0x0020)  
	ENiagaraGpuDispatchType                            DirectDispatchType;                                         // 0x0178   (0x0001)  
	ENiagaraDirectDispatchElementType                  DirectDispatchElementType;                                  // 0x0179   (0x0001)  
	unsigned char                                      UnknownData05_6[0x6];                                       // 0x017A   (0x0006)  MISSED
	FNiagaraParameterBindingWithValue                  ElementCountX;                                              // 0x0180   (0x0020)  
	FNiagaraParameterBindingWithValue                  ElementCountY;                                              // 0x01A0   (0x0020)  
	FNiagaraParameterBindingWithValue                  ElementCountZ;                                              // 0x01C0   (0x0020)  
};

/// Class /Script/Niagara.NiagaraSpriteRendererProperties
/// Size: 0x07D0 (2000 bytes) (0x0000C0 - 0x0007D0) align 8 MaxSize: 0x07D0
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UMaterialInterface*                          Material;                                                   // 0x00C0   (0x0008)  
	FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x00C8   (0x0020)  
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x00E8   (0x0001)  
	ENiagaraSpriteAlignment                            Alignment;                                                  // 0x00E9   (0x0001)  
	ENiagaraSpriteFacingMode                           FacingMode;                                                 // 0x00EA   (0x0001)  
	ENiagaraSortMode                                   SortMode;                                                   // 0x00EB   (0x0001)  
	float                                              MacroUVRadius;                                              // 0x00EC   (0x0004)  
	FVector2D                                          PivotInUVSpace;                                             // 0x00F0   (0x0010)  
	FVector2D                                          SubImageSize;                                               // 0x0100   (0x0010)  
	bool                                               bSubImageBlend : 1;                                         // 0x0110:0 (0x0001)  
	bool                                               bRemoveHMDRollInVR : 1;                                     // 0x0110:1 (0x0001)  
	bool                                               bSortOnlyWhenTranslucent : 1;                               // 0x0110:2 (0x0001)  
	bool                                               bEnableCameraDistanceCulling : 1;                           // 0x0110:3 (0x0001)  
	bool                                               bCastShadows : 1;                                           // 0x0110:4 (0x0001)  
	ENiagaraRendererSortPrecision                      SortPrecision;                                              // 0x0111   (0x0001)  
	ENiagaraRendererGpuTranslucentLatency              GpuTranslucentLatency;                                      // 0x0112   (0x0001)  
	ENiagaraRendererPixelCoverageMode                  PixelCoverageMode;                                          // 0x0113   (0x0001)  
	float                                              PixelCoverageBlend;                                         // 0x0114   (0x0004)  
	float                                              MinFacingCameraBlendDistance;                               // 0x0118   (0x0004)  
	float                                              MaxFacingCameraBlendDistance;                               // 0x011C   (0x0004)  
	float                                              MinCameraDistance;                                          // 0x0120   (0x0004)  
	float                                              MaxCameraDistance;                                          // 0x0124   (0x0004)  
	uint32_t                                           RendererVisibility;                                         // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x012C   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0130   (0x0038)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0168   (0x0038)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x01A0   (0x0038)  
	FNiagaraVariableAttributeBinding                   SpriteRotationBinding;                                      // 0x01D8   (0x0038)  
	FNiagaraVariableAttributeBinding                   SpriteSizeBinding;                                          // 0x0210   (0x0038)  
	FNiagaraVariableAttributeBinding                   SpriteFacingBinding;                                        // 0x0248   (0x0038)  
	FNiagaraVariableAttributeBinding                   SpriteAlignmentBinding;                                     // 0x0280   (0x0038)  
	FNiagaraVariableAttributeBinding                   SubImageIndexBinding;                                       // 0x02B8   (0x0038)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x02F0   (0x0038)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x0328   (0x0038)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x0360   (0x0038)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x0398   (0x0038)  
	FNiagaraVariableAttributeBinding                   CameraOffsetBinding;                                        // 0x03D0   (0x0038)  
	FNiagaraVariableAttributeBinding                   UVScaleBinding;                                             // 0x0408   (0x0038)  
	FNiagaraVariableAttributeBinding                   PivotOffsetBinding;                                         // 0x0440   (0x0038)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x0478   (0x0038)  
	FNiagaraVariableAttributeBinding                   CustomSortingBinding;                                       // 0x04B0   (0x0038)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x04E8   (0x0038)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0520   (0x0038)  
	FNiagaraRendererMaterialParameters                 MaterialParameters;                                         // 0x0558   (0x0050)  
	FNiagaraVariableAttributeBinding                   PrevPositionBinding;                                        // 0x05A8   (0x0038)  
	FNiagaraVariableAttributeBinding                   PrevVelocityBinding;                                        // 0x05E0   (0x0038)  
	FNiagaraVariableAttributeBinding                   PrevSpriteRotationBinding;                                  // 0x0618   (0x0038)  
	FNiagaraVariableAttributeBinding                   PrevSpriteSizeBinding;                                      // 0x0650   (0x0038)  
	FNiagaraVariableAttributeBinding                   PrevSpriteFacingBinding;                                    // 0x0688   (0x0038)  
	FNiagaraVariableAttributeBinding                   PrevSpriteAlignmentBinding;                                 // 0x06C0   (0x0038)  
	FNiagaraVariableAttributeBinding                   PrevCameraOffsetBinding;                                    // 0x06F8   (0x0038)  
	FNiagaraVariableAttributeBinding                   PrevPivotOffsetBinding;                                     // 0x0730   (0x0038)  
	uint32_t                                           MaterialParamValidMask;                                     // 0x0768   (0x0004)  
	unsigned char                                      UnknownData01_7[0x64];                                      // 0x076C   (0x0064)  MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverride
/// Size: 0x00A0 (160 bytes) (0x000098 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings
{ 
	bool                                               bOverrideDistanceSettings : 1;                              // 0x0098:0 (0x0001)  
	bool                                               bOverrideInstanceCountSettings : 1;                         // 0x0098:1 (0x0001)  
	bool                                               bOverridePerSystemInstanceCountSettings : 1;                // 0x0098:2 (0x0001)  
	bool                                               bOverrideVisibilitySettings : 1;                            // 0x0098:3 (0x0001)  
	bool                                               bOverrideGlobalBudgetScalingSettings : 1;                   // 0x0098:4 (0x0001)  
	bool                                               bOverrideCullProxySettings : 1;                             // 0x0098:5 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverrides
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraSystemScalabilityOverrides
{ 
	TArray<FNiagaraSystemScalabilityOverride>          Overrides;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.VersionedNiagaraEmitter
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FVersionedNiagaraEmitter
{ 
	class UNiagaraEmitter*                             Emitter;                                                    // 0x0000   (0x0008)  
	FGuid                                              Version;                                                    // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEmitterHandle
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FNiagaraEmitterHandle
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FGuid                                              ID;                                                         // 0x0008   (0x0010)  
	FName                                              IdName;                                                     // 0x0018   (0x0008)  
	bool                                               bIsEnabled;                                                 // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
	FVersionedNiagaraEmitter                           VersionedInstance;                                          // 0x0028   (0x0018)  
	class UNiagaraStatelessEmitter*                    StatelessEmitter;                                           // 0x0040   (0x0008)  
	ENiagaraEmitterMode                                EmitterMode;                                                // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBinding
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNiagaraParameterDataSetBinding
{ 
	int32_t                                            ParameterOffset;                                            // 0x0000   (0x0004)  
	int32_t                                            DataSetComponentOffset;                                     // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBindingCollection
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraParameterDataSetBindingCollection
{ 
	TArray<FNiagaraParameterDataSetBinding>            FloatOffsets;                                               // 0x0000   (0x0010)  
	TArray<FNiagaraParameterDataSetBinding>            Int32Offsets;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemCompiledData
/// Size: 0x0240 (576 bytes) (0x000000 - 0x000240) align 8 MaxSize: 0x0240
struct FNiagaraSystemCompiledData
{ 
	FNiagaraParameterStore                             InstanceParamStore;                                         // 0x0000   (0x0088)  
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x0088   (0x0048)  
	FNiagaraDataSetCompiledData                        SpawnInstanceParamsDataSetCompiledData;                     // 0x00D0   (0x0048)  
	FNiagaraDataSetCompiledData                        UpdateInstanceParamsDataSetCompiledData;                    // 0x0118   (0x0048)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceGlobalBinding;                                 // 0x0160   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceSystemBinding;                                 // 0x0180   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceOwnerBinding;                                  // 0x01A0   (0x0020)  
	TArray<FNiagaraParameterDataSetBindingCollection>  SpawnInstanceEmitterBindings;                               // 0x01C0   (0x0010)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceGlobalBinding;                                // 0x01D0   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceSystemBinding;                                // 0x01F0   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceOwnerBinding;                                 // 0x0210   (0x0020)  
	TArray<FNiagaraParameterDataSetBindingCollection>  UpdateInstanceEmitterBindings;                              // 0x0230   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemStateData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FNiagaraSystemStateData
{ 
	bool                                               bIgnoreSystemState;                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	ENiagaraSystemInactiveResponse                     InactiveResponse;                                           // 0x0004   (0x0004)  
	ENiagaraLoopBehavior                               LoopBehavior;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraDistributionRangeFloat                     LoopDuration;                                               // 0x0010   (0x0020)  
	int32_t                                            LoopCount;                                                  // 0x0030   (0x0004)  
	bool                                               bRecalculateDurationEachLoop;                               // 0x0034   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	FNiagaraDistributionRangeFloat                     LoopDelay;                                                  // 0x0038   (0x0020)  
	bool                                               bDelayFirstLoopOnly;                                        // 0x0058   (0x0001)  
	bool                                               bRecalculateDelayEachLoop;                                  // 0x0059   (0x0001)  
	unsigned char                                      UnknownData03_7[0x6];                                       // 0x005A   (0x0006)  MISSED
};

/// Class /Script/Niagara.NiagaraSystem
/// Size: 0x0578 (1400 bytes) (0x000048 - 0x000578) align 8 MaxSize: 0x0578
class UNiagaraSystem : public UFXSystemAsset
{ 
public:
	bool                                               bSupportLargeWorldCoordinates : 1;                          // 0x0048:0 (0x0001)  
	bool                                               bOverrideCastShadow : 1;                                    // 0x0048:1 (0x0001)  
	bool                                               bOverrideReceivesDecals : 1;                                // 0x0048:2 (0x0001)  
	bool                                               bOverrideRenderCustomDepth : 1;                             // 0x0048:3 (0x0001)  
	bool                                               bOverrideCustomDepthStencilValue : 1;                       // 0x0048:4 (0x0001)  
	bool                                               bOverrideCustomDepthStencilWriteMask : 1;                   // 0x0048:5 (0x0001)  
	bool                                               bOverrideTranslucencySortPriority : 1;                      // 0x0048:6 (0x0001)  
	bool                                               bOverrideTranslucencySortDistanceOffset : 1;                // 0x0048:7 (0x0001)  
	bool                                               bCastShadow : 1;                                            // 0x0049:0 (0x0001)  
	bool                                               bReceivesDecals : 1;                                        // 0x0049:1 (0x0001)  
	bool                                               bRenderCustomDepth : 1;                                     // 0x0049:2 (0x0001)  
	bool                                               bDisableExperimentalVM : 1;                                 // 0x0049:3 (0x0001)  
	bool                                               bInitialOwnerVelocityFromActor : 1;                         // 0x0049:4 (0x0001)  
	ERendererStencilMask                               CustomDepthStencilWriteMask;                                // 0x004A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x004B   (0x0001)  MISSED
	int32_t                                            CustomDepthStencilValue;                                    // 0x004C   (0x0004)  
	int32_t                                            TranslucencySortPriority;                                   // 0x0050   (0x0004)  
	float                                              TranslucencySortDistanceOffset;                             // 0x0054   (0x0004)  
	bool                                               bDumpDebugSystemInfo;                                       // 0x0058   (0x0001)  
	bool                                               bDumpDebugEmitterInfo;                                      // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x005A   (0x0001)  MISSED
	bool                                               bRequireCurrentFrameData;                                   // 0x005B   (0x0001)  
	bool                                               bFixedBounds : 1;                                           // 0x005C:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	class UNiagaraEffectType*                          EffectType;                                                 // 0x0060   (0x0008)  
	bool                                               bOverrideScalabilitySettings;                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0069   (0x0003)  MISSED
	bool                                               bOverrideAllowCullingForLocalPlayers : 1;                   // 0x006C:0 (0x0001)  
	bool                                               bAllowCullingForLocalPlayersOverride : 1;                   // 0x006C:1 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	FNiagaraSystemScalabilityOverrides                 SystemScalabilityOverrides;                                 // 0x0070   (0x0010)  
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0080   (0x0030)  
	TArray<FNiagaraEmitterHandle>                      EmitterHandles;                                             // 0x00B0   (0x0010)  
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                               // 0x00C0   (0x0010)  
	class UNiagaraScript*                              SystemSpawnScript;                                          // 0x00D0   (0x0008)  
	class UNiagaraScript*                              SystemUpdateScript;                                         // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData05_6[0x10];                                      // 0x00E0   (0x0010)  MISSED
	FNiagaraSystemCompiledData                         SystemCompiledData;                                         // 0x00F0   (0x0240)  
	FNiagaraUserRedirectionParameterStore              ExposedParameters;                                          // 0x0330   (0x00D8)  
	FBox                                               FixedBounds;                                                // 0x0408   (0x0038)  
	bool                                               bDeterminism;                                               // 0x0440   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x0441   (0x0003)  MISSED
	int32_t                                            RandomSeed;                                                 // 0x0444   (0x0004)  
	float                                              WarmupTime;                                                 // 0x0448   (0x0004)  
	int32_t                                            WarmupTickCount;                                            // 0x044C   (0x0004)  
	float                                              WarmupTickDelta;                                            // 0x0450   (0x0004)  
	bool                                               bFixedTickDelta;                                            // 0x0454   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x0455   (0x0003)  MISSED
	float                                              FixedTickDeltaTime;                                         // 0x0458   (0x0004)  
	bool                                               bNeedsGPUContextInitForDataInterfaces;                      // 0x045C   (0x0001)  
	unsigned char                                      UnknownData08_6[0xA3];                                      // 0x045D   (0x00A3)  MISSED
	unsigned char                                      UnknownBit09 : 1;                                           // 0x0500:0 (0x0001)  MISSED
	unsigned char                                      UnknownBit10 : 1;                                           // 0x0500:1 (0x0001)  MISSED
	unsigned char                                      UnknownBit11 : 1;                                           // 0x0500:2 (0x0001)  MISSED
	unsigned char                                      UnknownBit12 : 1;                                           // 0x0500:3 (0x0001)  MISSED
	unsigned char                                      UnknownBit13 : 1;                                           // 0x0500:4 (0x0001)  MISSED
	bool                                               bAllowSystemStateFastPath : 1;                              // 0x0500:5 (0x0001)  
	bool                                               bSystemStateFastPathEnabled : 1;                            // 0x0500:6 (0x0001)  
	unsigned char                                      UnknownData14_5[0xF];                                       // 0x0501   (0x000F)  MISSED
	FNiagaraSystemStateData                            SystemStateData;                                            // 0x0510   (0x0060)  
	unsigned char                                      UnknownData15_7[0x8];                                       // 0x0570   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraValidationRule
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraValidationRule : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraVolumeRendererProperties
/// Size: 0x02B8 (696 bytes) (0x0000C0 - 0x0002B8) align 8 MaxSize: 0x02B8
class UNiagaraVolumeRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UMaterialInterface*                          Material;                                                   // 0x00C0   (0x0008)  
	FNiagaraParameterBinding                           MaterialParameterBinding;                                   // 0x00C8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
	int32_t                                            RendererVisibility;                                         // 0x00D8   (0x0004)  
	float                                              StepFactor;                                                 // 0x00DC   (0x0004)  
	float                                              LightingDownsampleFactor;                                   // 0x00E0   (0x0004)  
	float                                              ShadowStepFactor;                                           // 0x00E4   (0x0004)  
	float                                              ShadowBiasFactor;                                           // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData01_6[0xAC];                                      // 0x00EC   (0x00AC)  MISSED
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0198   (0x0038)  
	FNiagaraVariableAttributeBinding                   VolumeResolutionMaxAxisBinding;                             // 0x01D0   (0x0038)  
	FNiagaraVariableAttributeBinding                   VolumeWorldSpaceSizeBinding;                                // 0x0208   (0x0038)  
	FNiagaraRendererMaterialParameters                 MaterialParameters;                                         // 0x0240   (0x0050)  
	unsigned char                                      UnknownData02_7[0x28];                                      // 0x0290   (0x0028)  MISSED
};

/// Class /Script/Niagara.VolumeCache
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UVolumeCache : public UObject
{ 
public:
	FString                                            FilePath;                                                   // 0x0028   (0x0010)  
	EVolumeCacheType                                   CacheType;                                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	FIntVector                                         Resolution;                                                 // 0x003C   (0x000C)  
	int32_t                                            FrameRangeStart;                                            // 0x0048   (0x0004)  
	int32_t                                            FrameRangeEnd;                                              // 0x004C   (0x0004)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Struct /Script/Niagara.NiagaraSimCacheCaptureParameters
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FNiagaraSimCacheCaptureParameters
{ 
	bool                                               bAppendToSimCache : 1;                                      // 0x0000:0 (0x0001)  
	bool                                               bCaptureFixedNumberOfFrames : 1;                            // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            NumFrames;                                                  // 0x0004   (0x0004)  
	int32_t                                            CaptureRate;                                                // 0x0008   (0x0004)  
	bool                                               bUseTimeout : 1;                                            // 0x000C:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	int32_t                                            TimeoutFrameCount;                                          // 0x0010   (0x0004)  
	bool                                               bCaptureAllFramesImmediatly : 1;                            // 0x0014:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              ImmediateCaptureDeltaTime;                                  // 0x0018   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraAssetTagDefinitionReference
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraAssetTagDefinitionReference
{ 
	FGuid                                              AssetTagDefinitionGuid;                                     // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraFunctionSignature
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FNiagaraFunctionSignature
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	TArray<FNiagaraVariable>                           Inputs;                                                     // 0x0008   (0x0010)  
	TArray<FNiagaraVariable>                           Outputs;                                                    // 0x0018   (0x0010)  
	FName                                              OwnerName;                                                  // 0x0028   (0x0008)  
	bool                                               bRequiresContext : 1;                                       // 0x0030:0 (0x0001)  
	bool                                               bRequiresExecPin : 1;                                       // 0x0030:1 (0x0001)  
	bool                                               bMemberFunction : 1;                                        // 0x0030:2 (0x0001)  
	bool                                               bExperimental : 1;                                          // 0x0030:3 (0x0001)  
	bool                                               bSupportsCPU : 1;                                           // 0x0030:4 (0x0001)  
	bool                                               bSupportsGPU : 1;                                           // 0x0030:5 (0x0001)  
	bool                                               bWriteFunction : 1;                                         // 0x0030:6 (0x0001)  
	bool                                               bReadFunction : 1;                                          // 0x0030:7 (0x0001)  
	bool                                               bSoftDeprecatedFunction : 1;                                // 0x0031:0 (0x0001)  
	bool                                               bIsCompileTagGenerator : 1;                                 // 0x0031:1 (0x0001)  
	bool                                               bHidden : 1;                                                // 0x0031:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            ModuleUsageBitmask;                                         // 0x0034   (0x0004)  
	uint16_t                                           MiscUsageBitMask;                                           // 0x0038   (0x0002)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x003A   (0x0002)  MISSED
	int32_t                                            ContextStageIndex;                                          // 0x003C   (0x0004)  
	int16_t                                            RequiredInputs;                                             // 0x0040   (0x0002)  
	int16_t                                            RequiredOutputs;                                            // 0x0042   (0x0002)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TMap<FName, FName>                                 FunctionSpecifiers;                                         // 0x0048   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceInfo
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FNiagaraScriptDataInterfaceInfo
{ 
	class UNiagaraDataInterface*                       DataInterface;                                              // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              CompileName;                                                // 0x0010   (0x0008)  
	int32_t                                            UserPtrIdx;                                                 // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FNiagaraTypeDefinition                             Type;                                                       // 0x0020   (0x0010)  
	FName                                              RegisteredParameterMapRead;                                 // 0x0030   (0x0008)  
	FName                                              RegisteredParameterMapWrite;                                // 0x0038   (0x0008)  
	FString                                            SourceEmitterName;                                          // 0x0040   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemUpdateContext
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FNiagaraSystemUpdateContext
{ 
	TArray<class UNiagaraComponent*>                   ComponentsToReset;                                          // 0x0000   (0x0010)  
	TArray<class UNiagaraComponent*>                   ComponentsToReInit;                                         // 0x0010   (0x0010)  
	TArray<class UNiagaraComponent*>                   ComponentsToNotifySimDestroy;                               // 0x0020   (0x0010)  
	TArray<class UNiagaraComponent*>                   ComponentsToDestroyInstance;                                // 0x0030   (0x0010)  
	TArray<class UNiagaraSystem*>                      SystemSimsToDestroy;                                        // 0x0040   (0x0010)  
	TArray<class UNiagaraSystem*>                      SystemSimsToRecache;                                        // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0060   (0x0028)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FNiagaraVariableInfo
{ 
	FNiagaraVariable                                   Variable;                                                   // 0x0000   (0x0020)  
	FText                                              Definition;                                                 // 0x0020   (0x0018)  
	class UNiagaraDataInterface*                       DataInterface;                                              // 0x0030   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraScriptVariableBinding
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNiagaraScriptVariableBinding
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraCompileDependency
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FNiagaraCompileDependency
{ 
	FString                                            LinkerErrorMessage;                                         // 0x0000   (0x0010)  
	FGuid                                              NodeGuid;                                                   // 0x0010   (0x0010)  
	FGuid                                              PinGuid;                                                    // 0x0020   (0x0010)  
	TArray<FGuid>                                      StackGuids;                                                 // 0x0030   (0x0010)  
	FNiagaraVariableBase                               DependentVariable;                                          // 0x0040   (0x000C)  
	bool                                               bDependentVariableFromCustomIterationNamespace;             // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x004D   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptAsyncCompileData
/// Size: 0x0110 (272 bytes) (0x000000 - 0x000110) align 8 MaxSize: 0x0110
struct FNiagaraScriptAsyncCompileData
{ 
	unsigned char                                      UnknownData00_7[0xB0];                                      // 0x0000   (0x00B0)  MISSED
	TArray<FNiagaraVariable>                           RapidIterationParameters;                                   // 0x00B0   (0x0010)  
	TMap<FName, class UNiagaraDataInterface*>          NamedDataInterfaces;                                        // 0x00C0   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraSystemAsyncCompileResults
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FNiagaraSystemAsyncCompileResults
{ 
	TArray<class UObject*>                             RootObjects;                                                // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0010   (0x0058)  MISSED
	TArray<FNiagaraVariable>                           ExposedVariables;                                           // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0078   (0x0010)  MISSED
};

/// Struct /Script/Niagara.NiagaraCompileHashVisitorDebugInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNiagaraCompileHashVisitorDebugInfo
{ 
	FString                                            Object;                                                     // 0x0000   (0x0010)  
	TArray<FString>                                    PropertyKeys;                                               // 0x0010   (0x0010)  
	TArray<FString>                                    PropertyValues;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDataChannelSearchParameters
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraDataChannelSearchParameters
{ 
	class USceneComponent*                             OwningComponent;                                            // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
	bool                                               bOverrideLocation : 1;                                      // 0x0020:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraDataChannelGameDataLayout
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FNiagaraDataChannelGameDataLayout
{ 
	TMap<FNiagaraVariableBase, int32_t>                VariableIndices;                                            // 0x0000   (0x0050)  
	TArray<FNiagaraLwcStructConverter>                 LwcConverters;                                              // 0x0050   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraMessageStore
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FNiagaraMessageStore
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraScalabilityState
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraScalabilityState
{ 
	float                                              Significance;                                               // 0x0000   (0x0004)  
	float                                              LastVisibleTime;                                            // 0x0004   (0x0004)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0008   (0x0002)  MISSED
	bool                                               bNewlyRegistered : 1;                                       // 0x000A:0 (0x0001)  
	bool                                               bNewlyRegisteredDirty : 1;                                  // 0x000A:1 (0x0001)  
	bool                                               bCulled : 1;                                                // 0x000A:2 (0x0001)  
	bool                                               bPreviousCulled : 1;                                        // 0x000A:3 (0x0001)  
	bool                                               bCulledByDistance : 1;                                      // 0x000A:4 (0x0001)  
	bool                                               bCulledByInstanceCount : 1;                                 // 0x000A:5 (0x0001)  
	bool                                               bCulledByVisibility : 1;                                    // 0x000A:6 (0x0001)  
	bool                                               bCulledByGlobalBudget : 1;                                  // 0x000A:7 (0x0001)  
	unsigned char                                      UnknownData01_7[0x1];                                       // 0x000B   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraSimStageExecutionLoopEditorData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FNiagaraSimStageExecutionLoopEditorData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraStackSection
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FNiagaraStackSection
{ 
	FName                                              SectionIdentifier;                                          // 0x0000   (0x0008)  
	FText                                              SectionDisplayName;                                         // 0x0008   (0x0018)  
	TArray<FText>                                      Categories;                                                 // 0x0018   (0x0010)  
	FText                                              ToolTip;                                                    // 0x0028   (0x0018)  
	bool                                               bEnabled;                                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraInputConditionMetadata
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraInputConditionMetadata
{ 
	FName                                              InputName;                                                  // 0x0000   (0x0008)  
	TArray<FString>                                    TargetValues;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEnumParameterMetaData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraEnumParameterMetaData
{ 
	FName                                              OverrideName;                                               // 0x0000   (0x0008)  
	class UTexture2D*                                  IconOverride;                                               // 0x0008   (0x0008)  
	bool                                               bUseColorOverride;                                          // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FLinearColor                                       ColorOverride;                                              // 0x0014   (0x0010)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/Niagara.WidgetNamedInputValue
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FWidgetNamedInputValue
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FText                                              DisplayName;                                                // 0x0008   (0x0018)  
	FText                                              ToolTip;                                                    // 0x0018   (0x0018)  
};

/// Struct /Script/Niagara.WidgetSegmentValueOverride
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FWidgetSegmentValueOverride
{ 
	int32_t                                            EnumIndexToOverride;                                        // 0x0000   (0x0004)  
	bool                                               bOverrideDisplayName;                                       // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	FText                                              DisplayNameOverride;                                        // 0x0008   (0x0018)  
	class UTexture2D*                                  DisplayIcon;                                                // 0x0018   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraWidgetNamedIntegerInputValue
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraWidgetNamedIntegerInputValue
{ 
	FText                                              DisplayName;                                                // 0x0000   (0x0018)  
	FText                                              ToolTip;                                                    // 0x0010   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraInputParameterCustomization
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FNiagaraInputParameterCustomization
{ 
	ENiagaraInputWidgetType                            WidgetType;                                                 // 0x0000   (0x0001)  
	bool                                               bHasMinValue;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              MinValue;                                                   // 0x0004   (0x0004)  
	bool                                               bHasMaxValue;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              MaxValue;                                                   // 0x000C   (0x0004)  
	bool                                               bHasStepWidth;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              StepWidth;                                                  // 0x0014   (0x0004)  
	TArray<FWidgetNamedInputValue>                     InputDropdownValues;                                        // 0x0018   (0x0010)  
	TArray<FNiagaraWidgetNamedIntegerInputValue>       EnumStyleDropdownValues;                                    // 0x0028   (0x0010)  
	int32_t                                            MaxSegmentsPerRow;                                          // 0x0038   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FWidgetSegmentValueOverride>                SegmentValueOverrides;                                      // 0x0040   (0x0010)  
	bool                                               bBroadcastValueChangesOnCommitOnly;                         // 0x0050   (0x0001)  
	unsigned char                                      UnknownData04_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraBoolParameterMetaData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraBoolParameterMetaData
{ 
	ENiagaraBoolDisplayMode                            DisplayMode;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              OverrideNameTrue;                                           // 0x0004   (0x0008)  
	FName                                              OverrideNameFalse;                                          // 0x000C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UTexture2D*                                  IconOverrideTrue;                                           // 0x0018   (0x0008)  
	class UTexture2D*                                  IconOverrideFalse;                                          // 0x0020   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraVariableMetaData
/// Size: 0x0190 (400 bytes) (0x000000 - 0x000190) align 8 MaxSize: 0x0190
struct FNiagaraVariableMetaData
{ 
	FText                                              Description;                                                // 0x0000   (0x0018)  
	FText                                              CategoryName;                                               // 0x0010   (0x0018)  
	EUnit                                              DisplayUnit;                                                // 0x0020   (0x0001)  
	bool                                               bAdvancedDisplay;                                           // 0x0021   (0x0001)  
	bool                                               bDisplayInOverviewStack;                                    // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0023   (0x0001)  MISSED
	int32_t                                            InlineParameterSortPriority;                                // 0x0024   (0x0004)  
	bool                                               bOverrideColor;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	FLinearColor                                       InlineParameterColorOverride;                               // 0x002C   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FNiagaraEnumParameterMetaData>              InlineParameterEnumOverrides;                               // 0x0040   (0x0010)  
	bool                                               bEnableBoolOverride;                                        // 0x0050   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	FNiagaraBoolParameterMetaData                      InlineParameterBoolOverride;                                // 0x0058   (0x0028)  
	int32_t                                            EditorSortPriority;                                         // 0x0080   (0x0004)  
	bool                                               bInlineEditConditionToggle;                                 // 0x0084   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0085   (0x0003)  MISSED
	FNiagaraInputConditionMetadata                     EditCondition;                                              // 0x0088   (0x0018)  
	FNiagaraInputConditionMetadata                     VisibleCondition;                                           // 0x00A0   (0x0018)  
	TMap<FName, FString>                               PropertyMetaData;                                           // 0x00B8   (0x0050)  
	FName                                              ParentAttribute;                                            // 0x0108   (0x0008)  
	TArray<FName>                                      AlternateAliases;                                           // 0x0110   (0x0010)  
	FNiagaraInputParameterCustomization                WidgetCustomization;                                        // 0x0120   (0x0058)  
	FGuid                                              VariableGuid;                                               // 0x0178   (0x0010)  
	bool                                               bIsStaticSwitch;                                            // 0x0188   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0189   (0x0003)  MISSED
	int32_t                                            StaticSwitchDefaultValue;                                   // 0x018C   (0x0004)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackTemplate
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate
{ 
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackImplementation
/// Size: 0x0028 (40 bytes) (0x000010 - 0x000028) align 8 MaxSize: 0x0028
struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation
{ 
	FFrameNumber                                       SpawnSectionStartFrame;                                     // 0x0010   (0x0004)  
	FFrameNumber                                       SpawnSectionEndFrame;                                       // 0x0014   (0x0004)  
	ENiagaraSystemSpawnSectionStartBehavior            SpawnSectionStartBehavior;                                  // 0x0018   (0x0004)  
	ENiagaraSystemSpawnSectionEvaluateBehavior         SpawnSectionEvaluateBehavior;                               // 0x001C   (0x0004)  
	ENiagaraSystemSpawnSectionEndBehavior              SpawnSectionEndBehavior;                                    // 0x0020   (0x0004)  
	ENiagaraAgeUpdateMode                              AgeUpdateMode;                                              // 0x0024   (0x0001)  
	bool                                               bAllowScalability;                                          // 0x0025   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0026   (0x0002)  MISSED
};

/// Struct /Script/Niagara.MovieSceneNiagaraParameterSectionTemplate
/// Size: 0x0040 (64 bytes) (0x000020 - 0x000040) align 8 MaxSize: 0x0040
struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0020   (0x0020)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
/// Size: 0x0148 (328 bytes) (0x000040 - 0x000148) align 8 MaxSize: 0x0148
struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneBoolChannel                             BoolChannel;                                                // 0x0040   (0x0108)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraColorParameterSectionTemplate
/// Size: 0x0480 (1152 bytes) (0x000040 - 0x000480) align 8 MaxSize: 0x0480
struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            RedChannel;                                                 // 0x0040   (0x0110)  
	FMovieSceneFloatChannel                            GreenChannel;                                               // 0x0150   (0x0110)  
	FMovieSceneFloatChannel                            BlueChannel;                                                // 0x0260   (0x0110)  
	FMovieSceneFloatChannel                            AlphaChannel;                                               // 0x0370   (0x0110)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
/// Size: 0x0150 (336 bytes) (0x000040 - 0x000150) align 8 MaxSize: 0x0150
struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            FloatChannel;                                               // 0x0040   (0x0110)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
/// Size: 0x0148 (328 bytes) (0x000040 - 0x000148) align 8 MaxSize: 0x0148
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneIntegerChannel                          IntegerChannel;                                             // 0x0040   (0x0108)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
/// Size: 0x0488 (1160 bytes) (0x000040 - 0x000488) align 8 MaxSize: 0x0488
struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            VectorChannels[4];                                          // 0x0040   (0x0440)  
	int32_t                                            ChannelsUsed;                                               // 0x0480   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0484   (0x0004)  MISSED
};

/// Struct /Script/Niagara.EmitterCompiledScriptPair
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FEmitterCompiledScriptPair
{ 
	unsigned char                                      UnknownData00_2[0xA0];                                      // 0x0000   (0x00A0)  MISSED
};

/// Struct /Script/Niagara.BasicParticleData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FBasicParticleData
{ 
	FVector                                            Position;                                                   // 0x0000   (0x0018)  
	float                                              Size;                                                       // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FVector                                            Velocity;                                                   // 0x0020   (0x0018)  
};

/// Struct /Script/Niagara.MeshTriCoordinate
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMeshTriCoordinate
{ 
	int32_t                                            Tri;                                                        // 0x0000   (0x0004)  
	FVector3f                                          BaryCoord;                                                  // 0x0004   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraDataInterfaceSplineLUT
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FNiagaraDataInterfaceSplineLUT
{ 
	TArray<FVector>                                    Positions;                                                  // 0x0000   (0x0010)  
	TArray<FVector>                                    Scales;                                                     // 0x0010   (0x0010)  
	TArray<FQuat>                                      Rotations;                                                  // 0x0020   (0x0010)  
	float                                              SplineLength;                                               // 0x0030   (0x0004)  
	float                                              SplineDistanceStep;                                         // 0x0034   (0x0004)  
	float                                              InvSplineDistanceStep;                                      // 0x0038   (0x0004)  
	int32_t                                            MaxIndex;                                                   // 0x003C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraOutlinerTimingData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNiagaraOutlinerTimingData
{ 
	float                                              GameThread;                                                 // 0x0000   (0x0004)  
	float                                              RenderThread;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraOutlinerEmitterInstanceData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraOutlinerEmitterInstanceData
{ 
	FString                                            EmitterName;                                                // 0x0000   (0x0010)  
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	ENiagaraExecutionState                             ExecState;                                                  // 0x0014   (0x0004)  
	int32_t                                            NumParticles;                                               // 0x0018   (0x0004)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x001C:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraOutlinerSystemInstanceData
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FNiagaraOutlinerSystemInstanceData
{ 
	FString                                            ComponentName;                                              // 0x0000   (0x0010)  
	FVector3f                                          LWCTile;                                                    // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<FNiagaraOutlinerEmitterInstanceData>        Emitters;                                                   // 0x0020   (0x0010)  
	ENiagaraExecutionState                             ActualExecutionState;                                       // 0x0030   (0x0004)  
	ENiagaraExecutionState                             RequestedExecutionState;                                    // 0x0034   (0x0004)  
	FNiagaraScalabilityState                           ScalabilityState;                                           // 0x0038   (0x000C)  
	bool                                               bPendingKill : 1;                                           // 0x0044:0 (0x0001)  
	bool                                               bUsingCullProxy : 1;                                        // 0x0044:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	ENCPoolMethod                                      PoolMethod;                                                 // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	FNiagaraOutlinerTimingData                         AverageTime;                                                // 0x004C   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxTime;                                                    // 0x0054   (0x0008)  
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                  // 0x005C   (0x0001)  
	TEnumAsByte<ENiagaraGpuComputeTickStage>           GpuTickStage;                                               // 0x005D   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x005E   (0x0002)  MISSED
	bool                                               bIsSolo : 1;                                                // 0x0060:0 (0x0001)  
	bool                                               bRequiresGlobalDistanceField : 1;                           // 0x0060:1 (0x0001)  
	bool                                               bRequiresDepthBuffer : 1;                                   // 0x0060:2 (0x0001)  
	bool                                               bRequiresEarlyViewData : 1;                                 // 0x0060:3 (0x0001)  
	bool                                               bRequiresViewUniformBuffer : 1;                             // 0x0060:4 (0x0001)  
	bool                                               bRequiresRayTracingScene : 1;                               // 0x0060:5 (0x0001)  
	unsigned char                                      UnknownData04_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraOutlinerSystemData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNiagaraOutlinerSystemData
{ 
	TArray<FNiagaraOutlinerSystemInstanceData>         SystemInstances;                                            // 0x0000   (0x0010)  
	FNiagaraOutlinerTimingData                         AveragePerFrameTime;                                        // 0x0010   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxPerFrameTime;                                            // 0x0018   (0x0008)  
	FNiagaraOutlinerTimingData                         AveragePerInstanceTime;                                     // 0x0020   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxPerInstanceTime;                                         // 0x0028   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraOutlinerWorldData
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FNiagaraOutlinerWorldData
{ 
	TMap<FString, FNiagaraOutlinerSystemData>          Systems;                                                    // 0x0000   (0x0050)  
	bool                                               bHasBegunPlay;                                              // 0x0050   (0x0001)  
	char                                               WorldType;                                                  // 0x0051   (0x0001)  
	char                                               NetMode;                                                    // 0x0052   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0053   (0x0001)  MISSED
	FNiagaraOutlinerTimingData                         AveragePerFrameTime;                                        // 0x0054   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxPerFrameTime;                                            // 0x005C   (0x0008)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraOutlinerData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FNiagaraOutlinerData
{ 
	TMap<FString, FNiagaraOutlinerWorldData>           WorldData;                                                  // 0x0000   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraDebuggerRequestConnection
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FNiagaraDebuggerRequestConnection
{ 
	FGuid                                              SessionId;                                                  // 0x0000   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebuggerAcceptConnection
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FNiagaraDebuggerAcceptConnection
{ 
	FGuid                                              SessionId;                                                  // 0x0000   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebuggerConnectionClosed
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FNiagaraDebuggerConnectionClosed
{ 
	FGuid                                              SessionId;                                                  // 0x0000   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebuggerExecuteConsoleCommand
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraDebuggerExecuteConsoleCommand
{ 
	FString                                            Command;                                                    // 0x0000   (0x0010)  
	bool                                               bRequiresWorld;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraDebuggerOutlinerUpdate
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FNiagaraDebuggerOutlinerUpdate
{ 
	FNiagaraOutlinerData                               OutlinerData;                                               // 0x0000   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraRequestSimpleClientInfoMessage
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FNiagaraRequestSimpleClientInfoMessage
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraOutlinerCaptureSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraOutlinerCaptureSettings
{ 
	bool                                               bTriggerCapture;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	uint32_t                                           CaptureDelayFrames;                                         // 0x0004   (0x0004)  
	bool                                               bGatherPerfData;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	uint32_t                                           SimCacheCaptureFrames;                                      // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraSimpleClientInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FNiagaraSimpleClientInfo
{ 
	TArray<FString>                                    Systems;                                                    // 0x0000   (0x0010)  
	TArray<FString>                                    Actors;                                                     // 0x0010   (0x0010)  
	TArray<FString>                                    Components;                                                 // 0x0020   (0x0010)  
	TArray<FString>                                    Emitters;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemSimCacheCaptureRequest
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraSystemSimCacheCaptureRequest
{ 
	FName                                              ComponentName;                                              // 0x0000   (0x0008)  
	uint32_t                                           CaptureDelayFrames;                                         // 0x0008   (0x0004)  
	uint32_t                                           CaptureFrames;                                              // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraSystemSimCacheCaptureReply
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraSystemSimCacheCaptureReply
{ 
	FName                                              ComponentName;                                              // 0x0000   (0x0008)  
	TArray<char>                                       SimCacheData;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraGraphViewSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraGraphViewSettings
{ 
	FVector2D                                          Location;                                                   // 0x0000   (0x0010)  
	float                                              Zoom;                                                       // 0x0010   (0x0004)  
	bool                                               bIsValid;                                                   // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraDetailsLevelScaleOverrides
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FNiagaraDetailsLevelScaleOverrides
{ 
	float                                              Low;                                                        // 0x0000   (0x0004)  
	float                                              Medium;                                                     // 0x0004   (0x0004)  
	float                                              High;                                                       // 0x0008   (0x0004)  
	float                                              Epic;                                                       // 0x000C   (0x0004)  
	float                                              Cine;                                                       // 0x0010   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraCollisionEventPayload
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FNiagaraCollisionEventPayload
{ 
	FVector                                            CollisionPos;                                               // 0x0000   (0x0018)  
	FVector                                            CollisionNormal;                                            // 0x0018   (0x0018)  
	FVector                                            CollisionVelocity;                                          // 0x0030   (0x0018)  
	int32_t                                            ParticleIndex;                                              // 0x0048   (0x0004)  
	int32_t                                            PhysicalMaterialIndex;                                      // 0x004C   (0x0004)  
};

/// Struct /Script/Niagara.ParameterDefinitionsSubscription
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FParameterDefinitionsSubscription
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraParameters
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraParameters
{ 
	TArray<FNiagaraVariable>                           Parameters;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictEntry
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraPlatformSetConflictEntry
{ 
	FName                                              ProfileName;                                                // 0x0000   (0x0008)  
	int32_t                                            QualityLevelMask;                                           // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraPlatformSetConflictInfo
{ 
	int32_t                                            SetAIndex;                                                  // 0x0000   (0x0004)  
	int32_t                                            SetBIndex;                                                  // 0x0004   (0x0004)  
	TArray<FNiagaraPlatformSetConflictEntry>           Conflicts;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraScalabilityManager
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 8 MaxSize: 0x00E0
struct FNiagaraScalabilityManager
{ 
	class UNiagaraEffectType*                          EffectType;                                                 // 0x0000   (0x0008)  
	TArray<class UNiagaraComponent*>                   ManagedComponents;                                          // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_7[0xC8];                                      // 0x0018   (0x00C8)  MISSED
};

/// Struct /Script/Niagara.NiagaraModuleDependency
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FNiagaraModuleDependency
{ 
	FName                                              ID;                                                         // 0x0000   (0x0008)  
	ENiagaraModuleDependencyType                       Type;                                                       // 0x0008   (0x0001)  
	ENiagaraModuleDependencyScriptConstraint           ScriptConstraint;                                           // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
	FString                                            RequiredVersion;                                            // 0x0010   (0x0010)  
	int32_t                                            OnlyEvaluateInScriptUsage;                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FText                                              Description;                                                // 0x0028   (0x0018)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Struct /Script/Niagara.NiagaraInlineDynamicInputFormatToken
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FNiagaraInlineDynamicInputFormatToken
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.VersionedNiagaraScriptData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FVersionedNiagaraScriptData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptExecutionPaddingInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 2 MaxSize: 0x0008
struct FNiagaraScriptExecutionPaddingInfo
{ 
	uint16_t                                           SrcOffset;                                                  // 0x0000   (0x0002)  
	uint16_t                                           DestOffset;                                                 // 0x0002   (0x0002)  
	uint16_t                                           SrcSize;                                                    // 0x0004   (0x0002)  
	uint16_t                                           DestSize;                                                   // 0x0006   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraScriptInstanceParameterStore
/// Size: 0x0098 (152 bytes) (0x000088 - 0x000098) align 8 MaxSize: 0x0098
struct FNiagaraScriptInstanceParameterStore : FNiagaraParameterStore
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0088   (0x0010)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptHighlight
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraScriptHighlight
{ 
	FLinearColor                                       Color;                                                      // 0x0000   (0x0010)  
	FText                                              DisplayName;                                                // 0x0010   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraEmitterCompiledData
/// Size: 0x0138 (312 bytes) (0x000000 - 0x000138) align 8 MaxSize: 0x0138
struct FNiagaraEmitterCompiledData
{ 
	TArray<FName>                                      SpawnAttributes;                                            // 0x0000   (0x0010)  
	FNiagaraVariable                                   EmitterSpawnIntervalVar;                                    // 0x0010   (0x0020)  
	FNiagaraVariable                                   EmitterInterpSpawnStartDTVar;                               // 0x0030   (0x0020)  
	FNiagaraVariable                                   EmitterSpawnGroupVar;                                       // 0x0050   (0x0020)  
	FNiagaraVariable                                   EmitterAgeVar;                                              // 0x0070   (0x0020)  
	FNiagaraVariable                                   EmitterRandomSeedVar;                                       // 0x0090   (0x0020)  
	FNiagaraVariable                                   EmitterInstanceSeedVar;                                     // 0x00B0   (0x0020)  
	FNiagaraVariable                                   EmitterTotalSpawnedParticlesVar;                            // 0x00D0   (0x0020)  
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x00F0   (0x0048)  
};

/// Struct /Script/Niagara.NiagaraWildcard
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FNiagaraWildcard
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraFloat
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FNiagaraFloat
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraInt32
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FNiagaraInt32
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraBool
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FNiagaraBool
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraHalf
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 2 MaxSize: 0x0002
struct FNiagaraHalf
{ 
	uint16_t                                           Value;                                                      // 0x0000   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalfVector2
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 2 MaxSize: 0x0004
struct FNiagaraHalfVector2
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalfVector3
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 2 MaxSize: 0x0006
struct FNiagaraHalfVector3
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
	uint16_t                                           Z;                                                          // 0x0004   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalfVector4
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 2 MaxSize: 0x0008
struct FNiagaraHalfVector4
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
	uint16_t                                           Z;                                                          // 0x0004   (0x0002)  
	uint16_t                                           W;                                                          // 0x0006   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraNumeric
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FNiagaraNumeric
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraParameterMap
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FNiagaraParameterMap
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraDouble
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FNiagaraDouble
{ 
	double                                             Value;                                                      // 0x0000   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraMatrix
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FNiagaraMatrix
{ 
	FVector4f                                          Row0;                                                       // 0x0000   (0x0010)  
	FVector4f                                          Row1;                                                       // 0x0010   (0x0010)  
	FVector4f                                          Row2;                                                       // 0x0020   (0x0010)  
	FVector4f                                          Row3;                                                       // 0x0030   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEmitterID
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FNiagaraEmitterID
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraSpawnInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraSpawnInfo
{ 
	int32_t                                            Count;                                                      // 0x0000   (0x0004)  
	float                                              InterpStartDt;                                              // 0x0004   (0x0004)  
	float                                              IntervalDt;                                                 // 0x0008   (0x0004)  
	int32_t                                            SpawnGroup;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraRandInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraRandInfo
{ 
	int32_t                                            Seed1;                                                      // 0x0000   (0x0004)  
	int32_t                                            Seed2;                                                      // 0x0004   (0x0004)  
	int32_t                                            Seed3;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVariant
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraVariant
{ 
	class UObject*                                     Object;                                                     // 0x0000   (0x0008)  
	class UNiagaraDataInterface*                       DataInterface;                                              // 0x0008   (0x0008)  
	TArray<char>                                       Bytes;                                                      // 0x0010   (0x0010)  
	ENiagaraVariantMode                                CurrentMode;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraWorldManagerTickFunction
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
struct FNiagaraWorldManagerTickFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

#pragma pack(pop)


