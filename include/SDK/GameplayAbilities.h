
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataRegistry
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: IrisCore
/// dependency: MovieScene
/// dependency: NetCore
/// dependency: Niagara
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Enum /Script/GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	EGameplayEffectGrantedAbilityRemovePolicy__CancelAbilityImmediately              = 0,
	EGameplayEffectGrantedAbilityRemovePolicy__RemoveAbilityOnEnd                    = 1,
	EGameplayEffectGrantedAbilityRemovePolicy__DoNothing                             = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectAttributeCaptureSource
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
	EGameplayEffectAttributeCaptureSource__Source                                    = 0,
	EGameplayEffectAttributeCaptureSource__Target                                    = 1
};

/// Enum /Script/GameplayAbilities.EGameplayCueEvent
/// Size: 0x01 (1 bytes)
enum class EGameplayCueEvent : uint8_t
{
	EGameplayCueEvent__OnActive                                                      = 0,
	EGameplayCueEvent__WhileActive                                                   = 1,
	EGameplayCueEvent__Executed                                                      = 2,
	EGameplayCueEvent__Removed                                                       = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityActivationMode
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityActivationMode : uint8_t
{
	EGameplayAbilityActivationMode__Authority                                        = 0,
	EGameplayAbilityActivationMode__NonAuthority                                     = 1,
	EGameplayAbilityActivationMode__Predicting                                       = 2,
	EGameplayAbilityActivationMode__Confirmed                                        = 3,
	EGameplayAbilityActivationMode__Rejected                                         = 4
};

/// Enum /Script/GameplayAbilities.EAbilityGenericReplicatedEvent
/// Size: 0x01 (1 bytes)
enum class EAbilityGenericReplicatedEvent : uint8_t
{
	EAbilityGenericReplicatedEvent__GenericConfirm                                   = 0,
	EAbilityGenericReplicatedEvent__GenericCancel                                    = 1,
	EAbilityGenericReplicatedEvent__InputPressed                                     = 2,
	EAbilityGenericReplicatedEvent__InputReleased                                    = 3,
	EAbilityGenericReplicatedEvent__GenericSignalFromClient                          = 4,
	EAbilityGenericReplicatedEvent__GenericSignalFromServer                          = 5,
	EAbilityGenericReplicatedEvent__GameCustom1                                      = 6,
	EAbilityGenericReplicatedEvent__GameCustom2                                      = 7,
	EAbilityGenericReplicatedEvent__GameCustom3                                      = 8,
	EAbilityGenericReplicatedEvent__GameCustom4                                      = 9,
	EAbilityGenericReplicatedEvent__GameCustom5                                      = 10,
	EAbilityGenericReplicatedEvent__GameCustom6                                      = 11
};

/// Enum /Script/GameplayAbilities.EGameplayCuePayloadType
/// Size: 0x01 (1 bytes)
enum class EGameplayCuePayloadType : uint8_t
{
	EGameplayCuePayloadType__CueParameters                                           = 0,
	EGameplayCuePayloadType__FromSpec                                                = 1
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityInputBinds
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityInputBinds : uint8_t
{
	EGameplayAbilityInputBinds__Ability1                                             = 0,
	EGameplayAbilityInputBinds__Ability2                                             = 1,
	EGameplayAbilityInputBinds__Ability3                                             = 2,
	EGameplayAbilityInputBinds__Ability4                                             = 3,
	EGameplayAbilityInputBinds__Ability5                                             = 4,
	EGameplayAbilityInputBinds__Ability6                                             = 5,
	EGameplayAbilityInputBinds__Ability7                                             = 6,
	EGameplayAbilityInputBinds__Ability8                                             = 7,
	EGameplayAbilityInputBinds__Ability9                                             = 8
};

/// Enum /Script/GameplayAbilities.ETargetDataFilterSelf
/// Size: 0x01 (1 bytes)
enum class ETargetDataFilterSelf : uint8_t
{
	ETargetDataFilterSelf__TDFS_Any                                                  = 0,
	ETargetDataFilterSelf__TDFS_NoSelf                                               = 1,
	ETargetDataFilterSelf__TDFS_NoOthers                                             = 2
};

/// Enum /Script/GameplayAbilities.EAbilityTaskWaitState
/// Size: 0x01 (1 bytes)
enum class EAbilityTaskWaitState : uint8_t
{
	EAbilityTaskWaitState__WaitingOnGame                                             = 1,
	EAbilityTaskWaitState__WaitingOnUser                                             = 2,
	EAbilityTaskWaitState__WaitingOnAvatar                                           = 4
};

/// Enum /Script/GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
/// Size: 0x01 (1 bytes)
enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
{
	ERootMotionMoveToActorTargetOffsetType__AlignFromTargetToSource                  = 0,
	ERootMotionMoveToActorTargetOffsetType__AlignToTargetForward                     = 1,
	ERootMotionMoveToActorTargetOffsetType__AlignToWorldSpace                        = 2
};

/// Enum /Script/GameplayAbilities.EAbilityTaskNetSyncType
/// Size: 0x01 (1 bytes)
enum class EAbilityTaskNetSyncType : uint8_t
{
	EAbilityTaskNetSyncType__BothWait                                                = 0,
	EAbilityTaskNetSyncType__OnlyServerWait                                          = 1,
	EAbilityTaskNetSyncType__OnlyClientWait                                          = 2
};

/// Enum /Script/GameplayAbilities.EWaitAttributeChangeComparison
/// Size: 0x01 (1 bytes)
enum class EWaitAttributeChangeComparison : uint8_t
{
	EWaitAttributeChangeComparison__None                                             = 0,
	EWaitAttributeChangeComparison__GreaterThan                                      = 1,
	EWaitAttributeChangeComparison__LessThan                                         = 2,
	EWaitAttributeChangeComparison__GreaterThanOrEqualTo                             = 3,
	EWaitAttributeChangeComparison__LessThanOrEqualTo                                = 4,
	EWaitAttributeChangeComparison__NotEqualTo                                       = 5,
	EWaitAttributeChangeComparison__ExactlyEqualTo                                   = 6
};

/// Enum /Script/GameplayAbilities.EWaitGameplayTagQueryTriggerCondition
/// Size: 0x01 (1 bytes)
enum class EWaitGameplayTagQueryTriggerCondition : uint8_t
{
	EWaitGameplayTagQueryTriggerCondition__WhenTrue                                  = 0,
	EWaitGameplayTagQueryTriggerCondition__WhenFalse                                 = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectReplicationMode
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectReplicationMode : uint8_t
{
	EGameplayEffectReplicationMode__Minimal                                          = 0,
	EGameplayEffectReplicationMode__Mixed                                            = 1,
	EGameplayEffectReplicationMode__Full                                             = 2
};

/// Enum /Script/GameplayAbilities.ERepAnimPositionMethod
/// Size: 0x01 (1 bytes)
enum class ERepAnimPositionMethod : uint8_t
{
	ERepAnimPositionMethod__Position                                                 = 0,
	ERepAnimPositionMethod__CurrentSectionId                                         = 1
};

/// Enum /Script/GameplayAbilities.EGameplayTargetingConfirmation
/// Size: 0x01 (1 bytes)
enum class EGameplayTargetingConfirmation : uint8_t
{
	EGameplayTargetingConfirmation__Instant                                          = 0,
	EGameplayTargetingConfirmation__UserConfirmed                                    = 1,
	EGameplayTargetingConfirmation__Custom                                           = 2,
	EGameplayTargetingConfirmation__CustomMulti                                      = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityTargetingLocationType
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityTargetingLocationType : uint8_t
{
	EGameplayAbilityTargetingLocationType__LiteralTransform                          = 0,
	EGameplayAbilityTargetingLocationType__ActorTransform                            = 1,
	EGameplayAbilityTargetingLocationType__SocketTransform                           = 2
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityInstancingPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityInstancingPolicy : uint8_t
{
	EGameplayAbilityInstancingPolicy__NonInstanced                                   = 0,
	EGameplayAbilityInstancingPolicy__InstancedPerActor                              = 1,
	EGameplayAbilityInstancingPolicy__InstancedPerExecution                          = 2
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityNetExecutionPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{
	EGameplayAbilityNetExecutionPolicy__LocalPredicted                               = 0,
	EGameplayAbilityNetExecutionPolicy__LocalOnly                                    = 1,
	EGameplayAbilityNetExecutionPolicy__ServerInitiated                              = 2,
	EGameplayAbilityNetExecutionPolicy__ServerOnly                                   = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityNetSecurityPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityNetSecurityPolicy : uint8_t
{
	EGameplayAbilityNetSecurityPolicy__ClientOrServer                                = 0,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyExecution                           = 1,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyTermination                         = 2,
	EGameplayAbilityNetSecurityPolicy__ServerOnly                                    = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityReplicationPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityReplicationPolicy : uint8_t
{
	EGameplayAbilityReplicationPolicy__ReplicateNo                                   = 0,
	EGameplayAbilityReplicationPolicy__ReplicateYes                                  = 1
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityTriggerSource
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityTriggerSource : uint8_t
{
	EGameplayAbilityTriggerSource__GameplayEvent                                     = 0,
	EGameplayAbilityTriggerSource__OwnedTagAdded                                     = 1,
	EGameplayAbilityTriggerSource__OwnedTagPresent                                   = 2
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_EffectPlaySpace
/// Size: 0x01 (1 bytes)
enum class EGameplayCueNotify_EffectPlaySpace : uint8_t
{
	EGameplayCueNotify_EffectPlaySpace__WorldSpace                                   = 0,
	EGameplayCueNotify_EffectPlaySpace__CameraSpace                                  = 1
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_LocallyControlledSource
/// Size: 0x01 (1 bytes)
enum class EGameplayCueNotify_LocallyControlledSource : uint8_t
{
	EGameplayCueNotify_LocallyControlledSource__InstigatorActor                      = 0,
	EGameplayCueNotify_LocallyControlledSource__TargetActor                          = 1
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_LocallyControlledPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayCueNotify_LocallyControlledPolicy : uint8_t
{
	EGameplayCueNotify_LocallyControlledPolicy__Always                               = 0,
	EGameplayCueNotify_LocallyControlledPolicy__LocalOnly                            = 1,
	EGameplayCueNotify_LocallyControlledPolicy__NotLocal                             = 2
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_AttachPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayCueNotify_AttachPolicy : uint8_t
{
	EGameplayCueNotify_AttachPolicy__DoNotAttach                                     = 0,
	EGameplayCueNotify_AttachPolicy__AttachToTarget                                  = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectMagnitudeCalculation
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
	EGameplayEffectMagnitudeCalculation__ScalableFloat                               = 0,
	EGameplayEffectMagnitudeCalculation__AttributeBased                              = 1,
	EGameplayEffectMagnitudeCalculation__CustomCalculationClass                      = 2,
	EGameplayEffectMagnitudeCalculation__SetByCaller                                 = 3
};

/// Enum /Script/GameplayAbilities.EAttributeBasedFloatCalculationType
/// Size: 0x01 (1 bytes)
enum class EAttributeBasedFloatCalculationType : uint8_t
{
	EAttributeBasedFloatCalculationType__AttributeMagnitude                          = 0,
	EAttributeBasedFloatCalculationType__AttributeBaseValue                          = 1,
	EAttributeBasedFloatCalculationType__AttributeBonusMagnitude                     = 2,
	EAttributeBasedFloatCalculationType__AttributeMagnitudeEvaluatedUpToChannel      = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectVersion
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectVersion : uint8_t
{
	EGameplayEffectVersion__Monolithic                                               = 0,
	EGameplayEffectVersion__Modular53                                                = 1,
	EGameplayEffectVersion__AbilitiesComponent53                                     = 2,
	EGameplayEffectVersion__Current                                                  = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectScopedModifierAggregatorType : uint8_t
{
	EGameplayEffectScopedModifierAggregatorType__CapturedAttributeBacked             = 0,
	EGameplayEffectScopedModifierAggregatorType__Transient                           = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectDurationType
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectDurationType : uint8_t
{
	EGameplayEffectDurationType__Instant                                             = 0,
	EGameplayEffectDurationType__Infinite                                            = 1,
	EGameplayEffectDurationType__HasDuration                                         = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingDurationPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingDurationPolicy : uint8_t
{
	EGameplayEffectStackingDurationPolicy__RefreshOnSuccessfulApplication            = 0,
	EGameplayEffectStackingDurationPolicy__NeverRefresh                              = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingPeriodPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingPeriodPolicy : uint8_t
{
	EGameplayEffectStackingPeriodPolicy__ResetOnSuccessfulApplication                = 0,
	EGameplayEffectStackingPeriodPolicy__NeverReset                                  = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingExpirationPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingExpirationPolicy : uint8_t
{
	EGameplayEffectStackingExpirationPolicy__ClearEntireStack                        = 0,
	EGameplayEffectStackingExpirationPolicy__RemoveSingleStackAndRefreshDuration     = 1,
	EGameplayEffectStackingExpirationPolicy__RefreshDuration                         = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t
{
	EGameplayEffectPeriodInhibitionRemovedPolicy__NeverReset                         = 0,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ResetPeriod                        = 1,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ExecuteAndResetPeriod              = 2
};

/// Enum /Script/GameplayAbilities.EGameplayModEvaluationChannel
/// Size: 0x01 (1 bytes)
enum class EGameplayModEvaluationChannel : uint8_t
{
	EGameplayModEvaluationChannel__Channel0                                          = 0,
	EGameplayModEvaluationChannel__Channel1                                          = 1,
	EGameplayModEvaluationChannel__Channel2                                          = 2,
	EGameplayModEvaluationChannel__Channel3                                          = 3,
	EGameplayModEvaluationChannel__Channel4                                          = 4,
	EGameplayModEvaluationChannel__Channel5                                          = 5,
	EGameplayModEvaluationChannel__Channel6                                          = 6,
	EGameplayModEvaluationChannel__Channel7                                          = 7,
	EGameplayModEvaluationChannel__Channel8                                          = 8,
	EGameplayModEvaluationChannel__Channel9                                          = 9
};

/// Enum /Script/GameplayAbilities.EGameplayModOp
/// Size: 0x01 (1 bytes)
enum class EGameplayModOp : uint8_t
{
	EGameplayModOp__Additive                                                         = 0,
	EGameplayModOp__Multiplicitive                                                   = 1,
	EGameplayModOp__Division                                                         = 2,
	EGameplayModOp__Override                                                         = 3,
	EGameplayModOp__Max                                                              = 4
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingType
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingType : uint8_t
{
	EGameplayEffectStackingType__None                                                = 0,
	EGameplayEffectStackingType__AggregateBySource                                   = 1,
	EGameplayEffectStackingType__AggregateByTarget                                   = 2
};

/// Enum /Script/GameplayAbilities.EGameplayTagEventType
/// Size: 0x01 (1 bytes)
enum class EGameplayTagEventType : uint8_t
{
	EGameplayTagEventType__NewOrRemoved                                              = 0,
	EGameplayTagEventType__AnyCountChange                                            = 1
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUD
/// Size: 0x0380 (896 bytes) (0x000380 - 0x000380) align 8 MaxSize: 0x0380
class AAbilitySystemDebugHUD : public AHUD
{ 
public:
};

/// Struct /Script/GameplayAbilities.ScalableFloat
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FScalableFloat
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FCurveTableRowHandle                               Curve;                                                      // 0x0008   (0x0010)  
	FDataRegistryType                                  RegistryType;                                               // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAttribute
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FGameplayAttribute
{ 
	FString                                            AttributeName;                                              // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0010   (0x0020)  MISSED
	class UStruct*                                     AttributeOwner;                                             // 0x0030   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureDefinition
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FGameplayEffectAttributeCaptureDefinition
{ 
	FGameplayAttribute                                 AttributeToCapture;                                         // 0x0000   (0x0038)  
	EGameplayEffectAttributeCaptureSource              AttributeSource;                                            // 0x0038   (0x0001)  
	bool                                               bSnapshot;                                                  // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Struct /Script/GameplayAbilities.AttributeBasedFloat
/// Size: 0x0110 (272 bytes) (0x000000 - 0x000110) align 8 MaxSize: 0x0110
struct FAttributeBasedFloat
{ 
	FScalableFloat                                     Coefficient;                                                // 0x0000   (0x0028)  
	FScalableFloat                                     PreMultiplyAdditiveValue;                                   // 0x0028   (0x0028)  
	FScalableFloat                                     PostMultiplyAdditiveValue;                                  // 0x0050   (0x0028)  
	FGameplayEffectAttributeCaptureDefinition          BackingAttribute;                                           // 0x0078   (0x0040)  
	FCurveTableRowHandle                               AttributeCurve;                                             // 0x00B8   (0x0010)  
	EAttributeBasedFloatCalculationType                AttributeCalculationType;                                   // 0x00C8   (0x0001)  
	EGameplayModEvaluationChannel                      FinalChannel;                                               // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00CA   (0x0006)  MISSED
	FGameplayTagContainer                              SourceTagFilter;                                            // 0x00D0   (0x0020)  
	FGameplayTagContainer                              TargetTagFilter;                                            // 0x00F0   (0x0020)  
};

/// Struct /Script/GameplayAbilities.CustomCalculationBasedFloat
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FCustomCalculationBasedFloat
{ 
	class UClass*                                      CalculationClassMagnitude;                                  // 0x0000   (0x0008)  
	FScalableFloat                                     Coefficient;                                                // 0x0008   (0x0028)  
	FScalableFloat                                     PreMultiplyAdditiveValue;                                   // 0x0030   (0x0028)  
	FScalableFloat                                     PostMultiplyAdditiveValue;                                  // 0x0058   (0x0028)  
	FCurveTableRowHandle                               FinalLookupCurve;                                           // 0x0080   (0x0010)  
};

/// Struct /Script/GameplayAbilities.SetByCallerFloat
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSetByCallerFloat
{ 
	FName                                              DataName;                                                   // 0x0000   (0x0008)  
	FGameplayTag                                       DataTag;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifierMagnitude
/// Size: 0x01E0 (480 bytes) (0x000000 - 0x0001E0) align 8 MaxSize: 0x01E0
struct FGameplayEffectModifierMagnitude
{ 
	EGameplayEffectMagnitudeCalculation                MagnitudeCalculationType;                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FScalableFloat                                     ScalableFloatMagnitude;                                     // 0x0008   (0x0028)  
	FAttributeBasedFloat                               AttributeBasedMagnitude;                                    // 0x0030   (0x0110)  
	FCustomCalculationBasedFloat                       CustomMagnitude;                                            // 0x0140   (0x0090)  
	FSetByCallerFloat                                  SetByCallerMagnitude;                                       // 0x01D0   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayModEvaluationChannelSettings
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGameplayModEvaluationChannelSettings
{ 
	EGameplayModEvaluationChannel                      Channel;                                                    // 0x0000   (0x0001)  
};

/// Struct /Script/GameplayAbilities.GameplayTagRequirements
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FGameplayTagRequirements
{ 
	FGameplayTagContainer                              RequireTags;                                                // 0x0000   (0x0020)  
	FGameplayTagContainer                              IgnoreTags;                                                 // 0x0020   (0x0020)  
	FGameplayTagQuery                                  TagQuery;                                                   // 0x0040   (0x0048)  
};

/// Struct /Script/GameplayAbilities.GameplayModifierInfo
/// Size: 0x0338 (824 bytes) (0x000000 - 0x000338) align 8 MaxSize: 0x0338
struct FGameplayModifierInfo
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FGameplayEffectModifierMagnitude                   ModifierMagnitude;                                          // 0x0040   (0x01E0)  
	FGameplayModEvaluationChannelSettings              EvaluationChannelSettings;                                  // 0x0220   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0221   (0x0007)  MISSED
	FGameplayTagRequirements                           SourceTags;                                                 // 0x0228   (0x0088)  
	FGameplayTagRequirements                           TargetTags;                                                 // 0x02B0   (0x0088)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
/// Size: 0x0348 (840 bytes) (0x000000 - 0x000348) align 8 MaxSize: 0x0348
struct FGameplayEffectExecutionScopedModifierInfo
{ 
	FGameplayEffectAttributeCaptureDefinition          CapturedAttribute;                                          // 0x0000   (0x0040)  
	FGameplayTag                                       TransientAggregatorIdentifier;                              // 0x0040   (0x0008)  
	EGameplayEffectScopedModifierAggregatorType        AggregatorType;                                             // 0x0048   (0x0001)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x004A   (0x0006)  MISSED
	FGameplayEffectModifierMagnitude                   ModifierMagnitude;                                          // 0x0050   (0x01E0)  
	FGameplayModEvaluationChannelSettings              EvaluationChannelSettings;                                  // 0x0230   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0231   (0x0007)  MISSED
	FGameplayTagRequirements                           SourceTags;                                                 // 0x0238   (0x0088)  
	FGameplayTagRequirements                           TargetTags;                                                 // 0x02C0   (0x0088)  
};

/// Struct /Script/GameplayAbilities.ConditionalGameplayEffect
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FConditionalGameplayEffect
{ 
	class UClass*                                      EffectClass;                                                // 0x0000   (0x0008)  
	FGameplayTagContainer                              RequiredSourceTags;                                         // 0x0008   (0x0020)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionDefinition
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FGameplayEffectExecutionDefinition
{ 
	class UClass*                                      CalculationClass;                                           // 0x0000   (0x0008)  
	FGameplayTagContainer                              PassedInTags;                                               // 0x0008   (0x0020)  
	TArray<FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                                       // 0x0028   (0x0010)  
	TArray<FConditionalGameplayEffect>                 ConditionalGameplayEffects;                                 // 0x0038   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectCue
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FGameplayEffectCue
{ 
	FGameplayAttribute                                 MagnitudeAttribute;                                         // 0x0000   (0x0038)  
	float                                              MinLevel;                                                   // 0x0038   (0x0004)  
	float                                              MaxLevel;                                                   // 0x003C   (0x0004)  
	FGameplayTagContainer                              GameplayCueTags;                                            // 0x0040   (0x0020)  
};

/// Struct /Script/GameplayAbilities.InheritedTagContainer
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FInheritedTagContainer
{ 
	FGameplayTagContainer                              CombinedTags;                                               // 0x0000   (0x0020)  
	FGameplayTagContainer                              Added;                                                      // 0x0020   (0x0020)  
	FGameplayTagContainer                              Removed;                                                    // 0x0040   (0x0020)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectQuery
/// Size: 0x0198 (408 bytes) (0x000000 - 0x000198) align 8 MaxSize: 0x0198
struct FGameplayEffectQuery
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	SDK_UNDEFINED(16,427) /* FDelegateProperty */      __um(CustomMatchDelegate_BP);                               // 0x0010   (0x0010)  
	FGameplayTagQuery                                  OwningTagQuery;                                             // 0x0020   (0x0048)  
	FGameplayTagQuery                                  EffectTagQuery;                                             // 0x0068   (0x0048)  
	FGameplayTagQuery                                  SourceTagQuery;                                             // 0x00B0   (0x0048)  
	FGameplayTagQuery                                  SourceAggregateTagQuery;                                    // 0x00F8   (0x0048)  
	FGameplayAttribute                                 ModifyingAttribute;                                         // 0x0140   (0x0038)  
	class UObject*                                     EffectSource;                                               // 0x0178   (0x0008)  
	class UClass*                                      EffectDefinition;                                           // 0x0180   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0188   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandle
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FGameplayAbilitySpecHandle
{ 
	int32_t                                            Handle;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecDef
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FGameplayAbilitySpecDef
{ 
	class UClass*                                      Ability;                                                    // 0x0000   (0x0008)  
	FScalableFloat                                     LevelScalableFloat;                                         // 0x0008   (0x0028)  
	int32_t                                            InputID;                                                    // 0x0030   (0x0004)  
	EGameplayEffectGrantedAbilityRemovePolicy          RemovalPolicy;                                              // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	TWeakObjectPtr<class UObject*>                     SourceObject;                                               // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0040   (0x0050)  MISSED
	FGameplayAbilitySpecHandle                         AssignedHandle;                                             // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayEffect
/// Size: 0x0A70 (2672 bytes) (0x000028 - 0x000A70) align 8 MaxSize: 0x0A70
class UGameplayEffect : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	EGameplayEffectDurationType                        DurationPolicy;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FGameplayEffectModifierMagnitude                   DurationMagnitude;                                          // 0x0038   (0x01E0)  
	FScalableFloat                                     Period;                                                     // 0x0218   (0x0028)  
	bool                                               bExecutePeriodicEffectOnApplication;                        // 0x0240   (0x0001)  
	EGameplayEffectPeriodInhibitionRemovedPolicy       PeriodicInhibitionPolicy;                                   // 0x0241   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0242   (0x0006)  MISSED
	TArray<FGameplayModifierInfo>                      Modifiers;                                                  // 0x0248   (0x0010)  
	TArray<FGameplayEffectExecutionDefinition>         Executions;                                                 // 0x0258   (0x0010)  
	FScalableFloat                                     ChanceToApplyToTarget;                                      // 0x0268   (0x0028)  
	TArray<class UClass*>                              ApplicationRequirements;                                    // 0x0290   (0x0010)  
	TArray<FConditionalGameplayEffect>                 ConditionalGameplayEffects;                                 // 0x02A0   (0x0010)  
	TArray<class UClass*>                              OverflowEffects;                                            // 0x02B0   (0x0010)  
	bool                                               bDenyOverflowApplication;                                   // 0x02C0   (0x0001)  
	bool                                               bClearStackOnOverflow;                                      // 0x02C1   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x02C2   (0x0006)  MISSED
	TArray<class UClass*>                              PrematureExpirationEffectClasses;                           // 0x02C8   (0x0010)  
	TArray<class UClass*>                              RoutineExpirationEffectClasses;                             // 0x02D8   (0x0010)  
	bool                                               bRequireModifierSuccessToTriggerCues;                       // 0x02E8   (0x0001)  
	bool                                               bSuppressStackingCues;                                      // 0x02E9   (0x0001)  
	unsigned char                                      UnknownData04_6[0x6];                                       // 0x02EA   (0x0006)  MISSED
	TArray<FGameplayEffectCue>                         GameplayCues;                                               // 0x02F0   (0x0010)  
	class UGameplayEffectUIData*                       UIData;                                                     // 0x0300   (0x0008)  
	FInheritedTagContainer                             InheritableGameplayEffectTags;                              // 0x0308   (0x0060)  
	FInheritedTagContainer                             InheritableOwnedTagsContainer;                              // 0x0368   (0x0060)  
	FInheritedTagContainer                             InheritableBlockedAbilityTagsContainer;                     // 0x03C8   (0x0060)  
	FGameplayTagRequirements                           OngoingTagRequirements;                                     // 0x0428   (0x0088)  
	FGameplayTagRequirements                           ApplicationTagRequirements;                                 // 0x04B0   (0x0088)  
	FGameplayTagRequirements                           RemovalTagRequirements;                                     // 0x0538   (0x0088)  
	FInheritedTagContainer                             RemoveGameplayEffectsWithTags;                              // 0x05C0   (0x0060)  
	FGameplayTagRequirements                           GrantedApplicationImmunityTags;                             // 0x0620   (0x0088)  
	FGameplayEffectQuery                               GrantedApplicationImmunityQuery;                            // 0x06A8   (0x0198)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x0840   (0x0008)  MISSED
	FGameplayEffectQuery                               RemoveGameplayEffectQuery;                                  // 0x0848   (0x0198)  
	unsigned char                                      UnknownData06_6[0x1];                                       // 0x09E0   (0x0001)  MISSED
	EGameplayEffectStackingType                        StackingType;                                               // 0x09E1   (0x0001)  
	unsigned char                                      UnknownData07_6[0x2];                                       // 0x09E2   (0x0002)  MISSED
	int32_t                                            StackLimitCount;                                            // 0x09E4   (0x0004)  
	EGameplayEffectStackingDurationPolicy              StackDurationRefreshPolicy;                                 // 0x09E8   (0x0001)  
	EGameplayEffectStackingPeriodPolicy                StackPeriodResetPolicy;                                     // 0x09E9   (0x0001)  
	EGameplayEffectStackingExpirationPolicy            StackExpirationPolicy;                                      // 0x09EA   (0x0001)  
	unsigned char                                      UnknownData08_6[0x5];                                       // 0x09EB   (0x0005)  MISSED
	TArray<FGameplayAbilitySpecDef>                    GrantedAbilities;                                           // 0x09F0   (0x0010)  
	unsigned char                                      UnknownData09_6[0x60];                                      // 0x0A00   (0x0060)  MISSED
	TArray<class UGameplayEffectComponent*>            GEComponents;                                               // 0x0A60   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayEffectComponent
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayEffectComponent : public UObject
{ 
public:
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecConfig
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FGameplayAbilitySpecConfig
{ 
	class UClass*                                      Ability;                                                    // 0x0000   (0x0008)  
	FScalableFloat                                     LevelScalableFloat;                                         // 0x0008   (0x0028)  
	int32_t                                            InputID;                                                    // 0x0030   (0x0004)  
	EGameplayEffectGrantedAbilityRemovePolicy          RemovalPolicy;                                              // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Class /Script/GameplayAbilities.AbilitiesGameplayEffectComponent
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UAbilitiesGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	TArray<FGameplayAbilitySpecConfig>                 GrantAbilityConfigs;                                        // 0x0028   (0x0010)  
};

/// Class /Script/GameplayAbilities.AbilityAsync
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UAbilityAsync : public UCancellableAsyncAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync.EndAction
	// void EndAction();                                                                                                        // [0x576f990] Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagCountChanged
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align 8 MaxSize: 0x0058
class UAbilityAsync_WaitGameplayTagCountChanged : public UAbilityAsync
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0038   (0x0010)  MISSED
	SDK_UNDEFINED(16,428) /* FMulticastInlineDelegate */ __um(TagCountChanged);                                    // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagCountChanged.WaitGameplayTagCountChangedOnActor
	// class UAbilityAsync_WaitGameplayTagCountChanged* WaitGameplayTagCountChangedOnActor(class AActor* TargetActor, FGameplayTag Tag); // [0x64ffd00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagCountChanged.AsyncWaitGameplayTagCountDelegate__DelegateSignature
	// void AsyncWaitGameplayTagCountDelegate__DelegateSignature(int32_t TagCount);                                             // [0x35d7f00] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilitySystemCheatManagerExtension
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAbilitySystemCheatManagerExtension : public UCheatManagerExtension
{ 
public:


	/// Functions
	// Function /Script/GameplayAbilities.AbilitySystemCheatManagerExtension.EffectRemove
	// void EffectRemove(FString NameOrHandle);                                                                                 // [0x64fcc70] Final|Exec|Native|Public|Const 
	// Function /Script/GameplayAbilities.AbilitySystemCheatManagerExtension.EffectListActive
	// void EffectListActive();                                                                                                 // [0x64fcc50] Final|Exec|Native|Public|Const 
	// Function /Script/GameplayAbilities.AbilitySystemCheatManagerExtension.EffectApply
	// void EffectApply(FString PartialName, float EffectLevel);                                                                // [0x64fcb70] Final|Exec|Native|Public|Const 
	// Function /Script/GameplayAbilities.AbilitySystemCheatManagerExtension.AbilityListGranted
	// void AbilityListGranted();                                                                                               // [0x64fba90] Final|Exec|Native|Public|Const 
	// Function /Script/GameplayAbilities.AbilitySystemCheatManagerExtension.AbilityGrant
	// void AbilityGrant(FString AssetSearchString);                                                                            // [0x64fb9f0] Final|Exec|Native|Public|Const 
	// Function /Script/GameplayAbilities.AbilitySystemCheatManagerExtension.AbilityCancel
	// void AbilityCancel(FString PartialName);                                                                                 // [0x64fb950] Final|Exec|Native|Public|Const 
	// Function /Script/GameplayAbilities.AbilitySystemCheatManagerExtension.AbilityActivate
	// void AbilityActivate(FString PartialName);                                                                               // [0x64fb8b0] Final|Exec|Native|Public|Const 
};

/// Class /Script/GameplayAbilities.AbilityTask
/// Size: 0x0080 (128 bytes) (0x000068 - 0x000080) align 8 MaxSize: 0x0080
class UAbilityTask : public UGameplayTask
{ 
public:
	class UGameplayAbility*                            Ability;                                                    // 0x0068   (0x0008)  
	TWeakObjectPtr<class UAbilitySystemComponent*>     AbilitySystemComponent;                                     // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityTask_PlayAnimAndWait
/// Size: 0x0130 (304 bytes) (0x000080 - 0x000130) align 8 MaxSize: 0x0130
class UAbilityTask_PlayAnimAndWait : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,429) /* FMulticastInlineDelegate */ __um(OnCompleted);                                        // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,430) /* FMulticastInlineDelegate */ __um(OnBlendOut);                                         // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,431) /* FMulticastInlineDelegate */ __um(OnBlendIn);                                          // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,432) /* FMulticastInlineDelegate */ __um(OnInterrupted);                                      // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,433) /* FMulticastInlineDelegate */ __um(OnCancelled);                                        // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x00D0   (0x0038)  MISSED
	class UAnimSequence*                               AnimSequenceToPlay;                                         // 0x0108   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0110   (0x0020)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_PlayAnimAndWait.OnMontageInterrupted
	// void OnMontageInterrupted();                                                                                             // [0x64fee80] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayAnimAndWait.OnMontageEnded
	// void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);                                                     // [0x64fedb0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayAnimAndWait.OnMontageBlendingOut
	// void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);                                               // [0x64fece0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayAnimAndWait.OnMontageBlendedIn
	// void OnMontageBlendedIn(class UAnimMontage* Montage);                                                                    // [0x64fec50] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayAnimAndWait.CreatePlayAnimAndWaitProxy
	// class UAbilityTask_PlayAnimAndWait* CreatePlayAnimAndWaitProxy(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class UAnimSequence* AnimSequence, FName SlotName, float BlendInTime, float BlendOutTime, float InPlayRate, float StartTimeSeconds, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale); // [0x64fc880] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagCountChanged
/// Size: 0x00A8 (168 bytes) (0x000080 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAbilityTask_WaitGameplayTagCountChanged : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,434) /* FMulticastInlineDelegate */ __um(TagCountChanged);                                    // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0090   (0x0008)  MISSED
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                     // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagCountChanged.WaitGameplayTagCountChange
	// class UAbilityTask_WaitGameplayTagCountChanged* WaitGameplayTagCountChange(class UGameplayAbility* OwningAbility, FGameplayTag Tag, class AActor* InOptionalExternalTarget); // [0x64ffc00] Final|Native|Static|Protected|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AdditionalEffectsGameplayEffectComponent
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UAdditionalEffectsGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	bool                                               bOnApplicationCopyDataFromOriginalSpec;                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<FConditionalGameplayEffect>                 OnApplicationGameplayEffects;                               // 0x0030   (0x0010)  
	TArray<class UClass*>                              OnCompleteAlways;                                           // 0x0040   (0x0010)  
	TArray<class UClass*>                              OnCompleteNormal;                                           // 0x0050   (0x0010)  
	TArray<class UClass*>                              OnCompletePrematurely;                                      // 0x0060   (0x0010)  
};

/// Class /Script/GameplayAbilities.AssetTagsGameplayEffectComponent
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UAssetTagsGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	FInheritedTagContainer                             InheritableAssetTags;                                       // 0x0028   (0x0060)  
};

/// Class /Script/GameplayAbilities.BlockAbilityTagsGameplayEffectComponent
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UBlockAbilityTagsGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	FInheritedTagContainer                             InheritableBlockedAbilityTagsContainer;                     // 0x0028   (0x0060)  
};

/// Class /Script/GameplayAbilities.ChanceToApplyGameplayEffectComponent
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UChanceToApplyGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	FScalableFloat                                     ChanceToApplyToTarget;                                      // 0x0028   (0x0028)  
};

/// Class /Script/GameplayAbilities.CustomCanApplyGameplayEffectComponent
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UCustomCanApplyGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	TArray<class UClass*>                              ApplicationRequirements;                                    // 0x0028   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Static
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UGameplayCueNotify_Static : public UObject
{ 
public:
	FGameplayTag                                       GameplayCueTag;                                             // 0x0028   (0x0008)  
	FName                                              GameplayCueName;                                            // 0x0030   (0x0008)  
	bool                                               isOverride;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.WhileActive
	// bool WhileActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                            // [0x65a4ee0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnRemove
	// bool OnRemove(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0x65a4830] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnExecute
	// bool OnExecute(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                              // [0x65a43e0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnActive
	// bool OnActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0x65a4020] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x35d7f00] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_UnitTest
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UGameplayCueNotify_UnitTest : public UGameplayCueNotify_Static
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayEffectUIData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayEffectUIData : public UGameplayEffectComponent
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayEffectUIData_TextOnly
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{ 
public:
	FText                                              Description;                                                // 0x0028   (0x0018)  
};

/// Class /Script/GameplayAbilities.ImmunityGameplayEffectComponent
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UImmunityGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	TArray<FGameplayEffectQuery>                       ImmunityQueries;                                            // 0x0028   (0x0010)  
};

/// Class /Script/GameplayAbilities.RemoveOtherGameplayEffectComponent
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class URemoveOtherGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	TArray<FGameplayEffectQuery>                       RemoveGameplayEffectQueries;                                // 0x0028   (0x0010)  
};

/// Class /Script/GameplayAbilities.TargetTagRequirementsGameplayEffectComponent
/// Size: 0x01C0 (448 bytes) (0x000028 - 0x0001C0) align 8 MaxSize: 0x01C0
class UTargetTagRequirementsGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	FGameplayTagRequirements                           ApplicationTagRequirements;                                 // 0x0028   (0x0088)  
	FGameplayTagRequirements                           OngoingTagRequirements;                                     // 0x00B0   (0x0088)  
	FGameplayTagRequirements                           RemovalTagRequirements;                                     // 0x0138   (0x0088)  
};

/// Class /Script/GameplayAbilities.TargetTagsGameplayEffectComponent
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UTargetTagsGameplayEffectComponent : public UGameplayEffectComponent
{ 
public:
	FInheritedTagContainer                             InheritableGrantedTagsContainer;                            // 0x0028   (0x0060)  
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged
/// Size: 0x0090 (144 bytes) (0x000038 - 0x000090) align 8 MaxSize: 0x0090
class UAbilityAsync_WaitAttributeChanged : public UAbilityAsync
{ 
public:
	SDK_UNDEFINED(16,435) /* FMulticastInlineDelegate */ __um(Changed);                                            // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0048   (0x0048)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged.WaitForAttributeChanged
	// class UAbilityAsync_WaitAttributeChanged* WaitForAttributeChanged(class AActor* TargetActor, FGameplayAttribute Attribute, bool OnlyTriggerOnce); // [0x64ff1b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged.AsyncWaitAttributeChangedDelegate__DelegateSignature
	// void AsyncWaitAttributeChangedDelegate__DelegateSignature(FGameplayAttribute Attribute, float NewValue, float OldValue); // [0x35d7f00] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
/// Size: 0x0188 (392 bytes) (0x000038 - 0x000188) align 8 MaxSize: 0x0188
class UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync
{ 
public:
	SDK_UNDEFINED(16,436) /* FMulticastInlineDelegate */ __um(OnApplied);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x140];                                     // 0x0048   (0x0140)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor
	// class UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(class AActor* TargetActor, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect); // [0x64ff3d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature
	// void OnAppliedDelegate__DelegateSignature(class AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle); // [0x35d7f00] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync
{ 
public:
	SDK_UNDEFINED(16,437) /* FMulticastInlineDelegate */ __um(EventReceived);                                      // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0048   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor
	// class UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(class AActor* TargetActor, FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact); // [0x64ff840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature
	// void EventReceivedDelegate__DelegateSignature(FGameplayEventData Payload);                                               // [0x35d7f00] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTag
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UAbilityAsync_WaitGameplayTag : public UAbilityAsync
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0038   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTag.AsyncWaitGameplayTagDelegate__DelegateSignature
	// void AsyncWaitGameplayTagDelegate__DelegateSignature();                                                                  // [0x35d7f00] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagAdded
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UAbilityAsync_WaitGameplayTagAdded : public UAbilityAsync_WaitGameplayTag
{ 
public:
	SDK_UNDEFINED(16,438) /* FMulticastInlineDelegate */ __um(Added);                                              // 0x0050   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagAdded.WaitGameplayTagAddToActor
	// class UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(class AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce); // [0x64ffa40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UAbilityAsync_WaitGameplayTagRemoved : public UAbilityAsync_WaitGameplayTag
{ 
public:
	SDK_UNDEFINED(16,439) /* FMulticastInlineDelegate */ __um(Removed);                                            // 0x0050   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved.WaitGameplayTagRemoveFromActor
	// class UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(class AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce); // [0x65000f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagQuery
/// Size: 0x0108 (264 bytes) (0x000038 - 0x000108) align 8 MaxSize: 0x0108
class UAbilityAsync_WaitGameplayTagQuery : public UAbilityAsync
{ 
public:
	unsigned char                                      UnknownData00_8[0xC0];                                      // 0x0038   (0x00C0)  MISSED
	SDK_UNDEFINED(16,440) /* FMulticastInlineDelegate */ __um(Triggered);                                          // 0x00F8   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagQuery.WaitGameplayTagQueryOnActor
	// class UAbilityAsync_WaitGameplayTagQuery* WaitGameplayTagQueryOnActor(class AActor* TargetActor, FGameplayTagQuery TagQuery, EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce); // [0x64ffe60] Final|Native|Static|Protected|BlueprintCallable 
};

/// Struct /Script/GameplayAbilities.PredictionKey
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPredictionKey
{ 
	int16_t                                            Current;                                                    // 0x0000   (0x0002)  
	int16_t                                            base;                                                       // 0x0002   (0x0002)  
	bool                                               bIsServerInitiated;                                         // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0xB];                                       // 0x0005   (0x000B)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActivationInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameplayAbilityActivationInfo
{ 
	TEnumAsByte<EGameplayAbilityActivationMode>        ActivationMode;                                             // 0x0000   (0x0001)  
	bool                                               bCanBeEndedByOtherInstance : 1;                             // 0x0001:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FPredictionKey                                     PredictionKeyWhenActivated;                                 // 0x0008   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextHandle
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameplayEffectContextHandle
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetDataHandle
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGameplayAbilityTargetDataHandle
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEventData
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FGameplayEventData
{ 
	FGameplayTag                                       EventTag;                                                   // 0x0000   (0x0008)  
	class AActor*                                      Instigator;                                                 // 0x0008   (0x0008)  
	class AActor*                                      Target;                                                     // 0x0010   (0x0008)  
	class UObject*                                     OptionalObject;                                             // 0x0018   (0x0008)  
	class UObject*                                     OptionalObject2;                                            // 0x0020   (0x0008)  
	FGameplayEffectContextHandle                       ContextHandle;                                              // 0x0028   (0x0018)  
	FGameplayTagContainer                              InstigatorTags;                                             // 0x0040   (0x0020)  
	FGameplayTagContainer                              TargetTags;                                                 // 0x0060   (0x0020)  
	float                                              EventMagnitude;                                             // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	FGameplayAbilityTargetDataHandle                   TargetData;                                                 // 0x0088   (0x0028)  
};

/// Struct /Script/GameplayAbilities.AbilityTriggerData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FAbilityTriggerData
{ 
	FGameplayTag                                       TriggerTag;                                                 // 0x0000   (0x0008)  
	TEnumAsByte<EGameplayAbilityTriggerSource>         TriggerSource;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbility
/// Size: 0x03B0 (944 bytes) (0x000028 - 0x0003B0) align 8 MaxSize: 0x03B0
class UGameplayAbility : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x80];                                      // 0x0028   (0x0080)  MISSED
	FGameplayTagContainer                              AbilityTags;                                                // 0x00A8   (0x0020)  
	bool                                               bReplicateInputDirectly;                                    // 0x00C8   (0x0001)  
	bool                                               RemoteInstanceEnded;                                        // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00CA   (0x0004)  MISSED
	TEnumAsByte<EGameplayAbilityReplicationPolicy>     ReplicationPolicy;                                          // 0x00CE   (0x0001)  
	TEnumAsByte<EGameplayAbilityInstancingPolicy>      InstancingPolicy;                                           // 0x00CF   (0x0001)  
	bool                                               bServerRespectsRemoteAbilityCancellation;                   // 0x00D0   (0x0001)  
	bool                                               bRetriggerInstancedAbility;                                 // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x00D2   (0x0006)  MISSED
	FGameplayAbilityActivationInfo                     CurrentActivationInfo;                                      // 0x00D8   (0x0018)  
	FGameplayEventData                                 CurrentEventData;                                           // 0x00F0   (0x00B0)  
	TEnumAsByte<EGameplayAbilityNetExecutionPolicy>    NetExecutionPolicy;                                         // 0x01A0   (0x0001)  
	TEnumAsByte<EGameplayAbilityNetSecurityPolicy>     NetSecurityPolicy;                                          // 0x01A1   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x01A2   (0x0006)  MISSED
	class UClass*                                      CostGameplayEffectClass;                                    // 0x01A8   (0x0008)  
	TArray<FAbilityTriggerData>                        AbilityTriggers;                                            // 0x01B0   (0x0010)  
	class UClass*                                      CooldownGameplayEffectClass;                                // 0x01C0   (0x0008)  
	FGameplayTagContainer                              CancelAbilitiesWithTag;                                     // 0x01C8   (0x0020)  
	FGameplayTagContainer                              BlockAbilitiesWithTag;                                      // 0x01E8   (0x0020)  
	FGameplayTagContainer                              ActivationOwnedTags;                                        // 0x0208   (0x0020)  
	FGameplayTagContainer                              ActivationRequiredTags;                                     // 0x0228   (0x0020)  
	FGameplayTagContainer                              ActivationBlockedTags;                                      // 0x0248   (0x0020)  
	FGameplayTagContainer                              SourceRequiredTags;                                         // 0x0268   (0x0020)  
	FGameplayTagContainer                              SourceBlockedTags;                                          // 0x0288   (0x0020)  
	FGameplayTagContainer                              TargetRequiredTags;                                         // 0x02A8   (0x0020)  
	FGameplayTagContainer                              TargetBlockedTags;                                          // 0x02C8   (0x0020)  
	unsigned char                                      UnknownData04_6[0x20];                                      // 0x02E8   (0x0020)  MISSED
	TArray<class UGameplayTask*>                       ActiveTasks;                                                // 0x0308   (0x0010)  
	unsigned char                                      UnknownData05_6[0x10];                                      // 0x0318   (0x0010)  MISSED
	class UAnimMontage*                                CurrentMontage;                                             // 0x0328   (0x0008)  
	unsigned char                                      UnknownData06_6[0x60];                                      // 0x0330   (0x0060)  MISSED
	bool                                               bIsActive;                                                  // 0x0390   (0x0001)  
	bool                                               bIsAbilityEnding;                                           // 0x0391   (0x0001)  
	bool                                               bIsCancelable;                                              // 0x0392   (0x0001)  
	bool                                               bIsBlockingOtherAbilities;                                  // 0x0393   (0x0001)  
	unsigned char                                      UnknownData07_6[0x14];                                      // 0x0394   (0x0014)  MISSED
	bool                                               bMarkPendingKillOnAbilityEnd;                               // 0x03A8   (0x0001)  
	unsigned char                                      UnknownData08_7[0x7];                                       // 0x03A9   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
	// void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);                                                           // [0x64ff120] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.SetCanBeCanceled
	// void SetCanBeCanceled(bool bCanBeCanceled);                                                                              // [0x64ff090] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.SendGameplayEvent
	// void SendGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload);                                               // [0x64feea0] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
	// void RemoveGrantedByEffect();                                                                                            // [0x5771360] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageStop
	// void MontageStop(float OverrideBlendOutTime);                                                                            // [0x64feb90] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageSetNextSectionName
	// void MontageSetNextSectionName(FName FromSectionName, FName ToSectionName);                                              // [0x64fea90] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageJumpToSection
	// void MontageJumpToSection(FName SectionName);                                                                            // [0x64fe9d0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
	// FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(FName SocketName);            // [0x64fe910] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
	// FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();                                            // [0x64fe8a0] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
	// FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level);                // [0x64fe6b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
	// bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo actorInfo, FGameplayEventData Payload);                    // [0x35d7f00] Event|Protected|BlueprintEvent|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
	// void K2_RemoveGameplayCue(FGameplayTag GameplayCueTag);                                                                  // [0x64fe620] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_HasAuthority
	// bool K2_HasAuthority();                                                                                                  // [0x64fe5f0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
	// void K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters);        // [0x64fe420] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
	// void K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context);                           // [0x64fe2d0] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_EndAbilityLocally
	// void K2_EndAbilityLocally();                                                                                             // [0x64fe2b0] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_EndAbility
	// void K2_EndAbility();                                                                                                    // [0x64fe290] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitExecute
	// void K2_CommitExecute();                                                                                                 // [0x35d7f00] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
	// bool K2_CommitAbilityCost(bool BroadcastCommitEvent);                                                                    // [0x64fe1f0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
	// bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);                                            // [0x64fe100] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbility
	// bool K2_CommitAbility();                                                                                                 // [0x540ea30] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
	// bool K2_CheckAbilityCost();                                                                                              // [0x64fe0d0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
	// bool K2_CheckAbilityCooldown();                                                                                          // [0x64fe0a0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CancelAbility
	// void K2_CancelAbility();                                                                                                 // [0x64fe040] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CanActivateAbility
	// bool K2_CanActivateAbility(FGameplayAbilityActorInfo actorInfo, FGameplayAbilitySpecHandle Handle, FGameplayTagContainer& RelevantTags); // [0x35d7f00] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
	// TArray<FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle EffectSpecHandle, FGameplayAbilityTargetDataHandle TargetData); // [0x64fdd90] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
	// FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(FGameplayEffectSpecHandle EffectSpecHandle);               // [0x64fdc20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
	// void K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd); // [0x64fda10] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_AddGameplayCue
	// void K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd);     // [0x64fd880] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x35d7f00] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.IsLocallyControlled
	// bool IsLocallyControlled();                                                                                              // [0x64fd810] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
	// void InvalidateClientPredictionKey();                                                                                    // [0x64fd7c0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetSourceObject_BP
	// class UObject* GetSourceObject_BP(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo& actorInfo);              // [0x64fd680] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
	// class USkeletalMeshComponent* GetOwningComponentFromActorInfo();                                                         // [0x64fd630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
	// class AActor* GetOwningActorFromActorInfo();                                                                             // [0x64fd5d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
	// FGameplayEffectContextHandle GetGrantedByEffectContext();                                                                // [0x64fd4c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCurrentSourceObject
	// class UObject* GetCurrentSourceObject();                                                                                 // [0x64fd430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCurrentMontage
	// class UAnimMontage* GetCurrentMontage();                                                                                 // [0x596eb30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
	// float GetCooldownTimeRemaining();                                                                                        // [0x64fd3d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetContextFromOwner
	// FGameplayEffectContextHandle GetContextFromOwner(FGameplayAbilityTargetDataHandle OptionalTargetData);                   // [0x64fd220] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
	// class AActor* GetAvatarActorFromActorInfo();                                                                             // [0x64fd1d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetActorInfo
	// FGameplayAbilityActorInfo GetActorInfo();                                                                                // [0x64fd100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo
	// class UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo();                                                 // [0x64fd0b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilityLevel_BP
	// int32_t GetAbilityLevel_BP(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo& actorInfo);                     // [0x64fcf70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilityLevel
	// int32_t GetAbilityLevel();                                                                                               // [0x64fced0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.EndTaskByInstanceName
	// void EndTaskByInstanceName(FName InstanceName);                                                                          // [0x64fce40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.EndAbilityState
	// void EndAbilityState(FName OptionalStateNameToEnd);                                                                      // [0x64fcd10] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
	// void ConfirmTaskByInstanceName(FName InstanceName, bool bEndTask);                                                       // [0x64fc690] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
	// void CancelTaskByInstanceName(FName InstanceName);                                                                       // [0x64fc600] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
	// void BP_RemoveGameplayEffectFromOwnerWithHandle(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);             // [0x64fc4f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
	// void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove);     // [0x64fc340] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
	// void BP_RemoveGameplayEffectFromOwnerWithAssetTags(FGameplayTagContainer WithAssetTags, int32_t StacksToRemove);         // [0x64fc190] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
	// TArray<FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(FGameplayAbilityTargetDataHandle TargetData, class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // [0x64fbce0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // [0x64fbab0] Final|Native|Protected|BlueprintCallable 
};

/// Struct /Script/GameplayAbilities.GameplayAbilityBindInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayAbilityBindInfo
{ 
	TEnumAsByte<EGameplayAbilityInputBinds>            Command;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UClass*                                      GameplayAbilityClass;                                       // 0x0008   (0x0008)  
};

/// Class /Script/GameplayAbilities.GameplayAbilitySet
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGameplayAbilitySet : public UDataAsset
{ 
public:
	TArray<FGameplayAbilityBindInfo>                   Abilities;                                                  // 0x0030   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetingLocationInfo
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FGameplayAbilityTargetingLocationInfo
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	TEnumAsByte<EGameplayAbilityTargetingLocationType> LocationType;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         LiteralTransform;                                           // 0x0020   (0x0060)  
	class AActor*                                      SourceActor;                                                // 0x0080   (0x0008)  
	class UMeshComponent*                              SourceComponent;                                            // 0x0088   (0x0008)  
	class UGameplayAbility*                            SourceAbility;                                              // 0x0090   (0x0008)  
	FName                                              SourceSocketName;                                           // 0x0098   (0x0008)  
};

/// Struct /Script/GameplayAbilities.WorldReticleParameters
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FWorldReticleParameters
{ 
	FVector                                            AOEScale;                                                   // 0x0000   (0x0018)  
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilterHandle
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayTargetDataFilterHandle
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor
/// Size: 0x03E0 (992 bytes) (0x000290 - 0x0003E0) align 16 MaxSize: 0x03E0
class AGameplayAbilityTargetActor : public AActor
{ 
public:
	bool                                               ShouldProduceTargetDataOnServer;                            // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0291   (0x000F)  MISSED
	FGameplayAbilityTargetingLocationInfo              StartLocation;                                              // 0x02A0   (0x00A0)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0340   (0x0030)  MISSED
	class APlayerController*                           PrimaryPC;                                                  // 0x0370   (0x0008)  
	class UGameplayAbility*                            OwningAbility;                                              // 0x0378   (0x0008)  
	bool                                               bDestroyOnConfirmation;                                     // 0x0380   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0381   (0x0007)  MISSED
	class AActor*                                      SourceActor;                                                // 0x0388   (0x0008)  
	FWorldReticleParameters                            ReticleParams;                                              // 0x0390   (0x0018)  
	class UClass*                                      ReticleClass;                                               // 0x03A8   (0x0008)  
	FGameplayTargetDataFilterHandle                    Filter;                                                     // 0x03B0   (0x0010)  
	bool                                               bDebug;                                                     // 0x03C0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x17];                                      // 0x03C1   (0x0017)  MISSED
	class UAbilitySystemComponent*                     GenericDelegateBoundASC;                                    // 0x03D8   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
	// void ConfirmTargeting();                                                                                                 // [0x5500ed0] Native|Public        
	// Function /Script/GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
	// void CancelTargeting();                                                                                                  // [0x5da1200] Native|Public        
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Trace
/// Size: 0x0400 (1024 bytes) (0x0003E0 - 0x000400) align 16 MaxSize: 0x03F8
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{ 
public:
	float                                              MaxRange;                                                   // 0x03E0   (0x0004)  
	FCollisionProfileName                              TraceProfile;                                               // 0x03E4   (0x0008)  
	bool                                               bTraceAffectsAimPitch;                                      // 0x03EC   (0x0001)  
	unsigned char                                      UnknownData00_7[0xB];                                       // 0x03ED   (0x000B)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
/// Size: 0x0420 (1056 bytes) (0x0003F8 - 0x000420) align 16 MaxSize: 0x0418
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{ 
public:
	float                                              CollisionRadius;                                            // 0x03F8   (0x0004)  
	float                                              CollisionHeight;                                            // 0x03FC   (0x0004)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0400   (0x0018)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
/// Size: 0x0430 (1072 bytes) (0x000418 - 0x000430) align 16 MaxSize: 0x0430
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{ 
public:
	class UClass*                                      PlacedActorClass;                                           // 0x0418   (0x0008)  
	class UMaterialInterface*                          PlacedActorMaterial;                                        // 0x0420   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0428   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Radius
/// Size: 0x03F0 (1008 bytes) (0x0003E0 - 0x0003F0) align 16 MaxSize: 0x03F0
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{ 
public:
	float                                              Radius;                                                     // 0x03E0   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x03E4   (0x000C)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
/// Size: 0x0400 (1024 bytes) (0x0003F8 - 0x000400) align 16 MaxSize: 0x0400
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x03F8   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle
/// Size: 0x02C0 (704 bytes) (0x000290 - 0x0002C0) align 8 MaxSize: 0x02C0
class AGameplayAbilityWorldReticle : public AActor
{ 
public:
	FWorldReticleParameters                            Parameters;                                                 // 0x0290   (0x0018)  
	bool                                               bFaceOwnerFlat;                                             // 0x02A8   (0x0001)  
	bool                                               bSnapToTargetedActor;                                       // 0x02A9   (0x0001)  
	bool                                               bIsTargetValid;                                             // 0x02AA   (0x0001)  
	bool                                               bIsTargetAnActor;                                           // 0x02AB   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02AC   (0x0004)  MISSED
	class APlayerController*                           PrimaryPC;                                                  // 0x02B0   (0x0008)  
	class AGameplayAbilityTargetActor*                 TargetingActor;                                             // 0x02B8   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
	// void SetReticleMaterialParamVector(FName ParamName, FVector Value);                                                      // [0x35d7f00] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
	// void SetReticleMaterialParamFloat(FName ParamName, float Value);                                                         // [0x35d7f00] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
	// void OnValidTargetChanged(bool bNewValue);                                                                               // [0x35d7f00] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
	// void OnTargetingAnActor(bool bNewValue);                                                                                 // [0x35d7f00] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
	// void OnParametersInitialized();                                                                                          // [0x35d7f00] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
	// void FaceTowardSource(bool bFaceIn2D);                                                                                   // [0x6548c90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
/// Size: 0x02D8 (728 bytes) (0x0002C0 - 0x0002D8) align 8 MaxSize: 0x02D8
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{ 
public:
	class UCapsuleComponent*                           CollisionComponent;                                         // 0x02C0   (0x0008)  
	TArray<class UActorComponent*>                     VisualizationComponents;                                    // 0x02C8   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayAbility_CharacterJump
/// Size: 0x03B0 (944 bytes) (0x0003B0 - 0x0003B0) align 8 MaxSize: 0x03B0
class UGameplayAbility_CharacterJump : public UGameplayAbility
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayAbility_Montage
/// Size: 0x03E8 (1000 bytes) (0x0003B0 - 0x0003E8) align 8 MaxSize: 0x03E8
class UGameplayAbility_Montage : public UGameplayAbility
{ 
public:
	class UAnimMontage*                                MontageToPlay;                                              // 0x03B0   (0x0008)  
	float                                              PlayRate;                                                   // 0x03B8   (0x0004)  
	FName                                              SectionName;                                                // 0x03BC   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03C4   (0x0004)  MISSED
	TArray<class UClass*>                              GameplayEffectClassesWhileAnimating;                        // 0x03C8   (0x0010)  
	TArray<class UGameplayEffect*>                     GameplayEffectsWhileAnimating;                              // 0x03D8   (0x0010)  
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotion_Base
/// Size: 0x00C8 (200 bytes) (0x000080 - 0x0000C8) align 8 MaxSize: 0x00C8
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{ 
public:
	FName                                              ForceName;                                                  // 0x0080   (0x0008)  
	ERootMotionFinishVelocityMode                      FinishVelocityMode;                                         // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0089   (0x0007)  MISSED
	FVector                                            FinishSetVelocity;                                          // 0x0090   (0x0018)  
	float                                              FinishClampVelocity;                                        // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	class UCharacterMovementComponent*                 MovementComponent;                                          // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
/// Size: 0x0110 (272 bytes) (0x0000C8 - 0x000110) align 8 MaxSize: 0x0110
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,441) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x00C8   (0x0010)  
	FVector                                            WorldDirection;                                             // 0x00D8   (0x0018)  
	float                                              Strength;                                                   // 0x00F0   (0x0004)  
	float                                              Duration;                                                   // 0x00F4   (0x0004)  
	bool                                               bIsAdditive;                                                // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00F9   (0x0007)  MISSED
	class UCurveFloat*                                 StrengthOverTime;                                           // 0x0100   (0x0008)  
	bool                                               bEnableGravity;                                             // 0x0108   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0109   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
	// class UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity); // [0x6540340] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
/// Size: 0x0130 (304 bytes) (0x0000C8 - 0x000130) align 8 MaxSize: 0x0130
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,442) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,443) /* FMulticastInlineDelegate */ __um(OnLanded);                                           // 0x00D8   (0x0010)  
	FRotator                                           Rotation;                                                   // 0x00E8   (0x0018)  
	float                                              Distance;                                                   // 0x0100   (0x0004)  
	float                                              Height;                                                     // 0x0104   (0x0004)  
	float                                              Duration;                                                   // 0x0108   (0x0004)  
	float                                              MinimumLandedTriggerTime;                                   // 0x010C   (0x0004)  
	bool                                               bFinishOnLanded;                                            // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0111   (0x0007)  MISSED
	class UCurveVector*                                PathOffsetCurve;                                            // 0x0118   (0x0008)  
	class UCurveFloat*                                 TimeMappingCurve;                                           // 0x0120   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0128   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
	// void OnLandedCallback(FHitResult& Hit);                                                                                  // [0x6552ef0] Final|Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
	// void Finish();                                                                                                           // [0x65493f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
	// class UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve); // [0x6540970] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
/// Size: 0x0190 (400 bytes) (0x0000C8 - 0x000190) align 8 MaxSize: 0x0190
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,444) /* FMulticastInlineDelegate */ __um(OnFinished);                                         // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FVector                                            StartLocation;                                              // 0x00E0   (0x0018)  
	FVector                                            TargetLocation;                                             // 0x00F8   (0x0018)  
	class AActor*                                      TargetActor;                                                // 0x0110   (0x0008)  
	class USceneComponent*                             TargetComponent;                                            // 0x0118   (0x0008)  
	FVector                                            TargetComponentRelativeLocation;                            // 0x0120   (0x0018)  
	FVector                                            TargetLocationOffset;                                       // 0x0138   (0x0018)  
	ERootMotionMoveToActorTargetOffsetType             OffsetAlignment;                                            // 0x0150   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0151   (0x0003)  MISSED
	float                                              Duration;                                                   // 0x0154   (0x0004)  
	bool                                               bDisableDestinationReachedInterrupt;                        // 0x0158   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0159   (0x0003)  MISSED
	float                                              ReachedDestinationDistance;                                 // 0x015C   (0x0004)  
	bool                                               bSetNewMovementMode;                                        // 0x0160   (0x0001)  
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                            // 0x0161   (0x0001)  
	bool                                               bRestrictSpeedToExpected;                                   // 0x0162   (0x0001)  
	unsigned char                                      UnknownData03_6[0x5];                                       // 0x0163   (0x0005)  MISSED
	class UCurveVector*                                PathOffsetCurve;                                            // 0x0168   (0x0008)  
	class UCurveFloat*                                 TimeMappingCurve;                                           // 0x0170   (0x0008)  
	class UCurveFloat*                                 TargetLerpSpeedHorizontalCurve;                             // 0x0178   (0x0008)  
	class UCurveFloat*                                 TargetLerpSpeedVerticalCurve;                               // 0x0180   (0x0008)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x0188   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
	// void OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget);                                        // [0x6553750] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
	// void OnRep_TargetLocation();                                                                                             // [0x6553610] Final|Native|Protected 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
	// class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt, float ReachedDestinationDistance); // [0x6542680] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToComponentForce
	// class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToComponentForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class USceneComponent* TargetComponent, FVector TargetComponentRelativeLocation, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt, float ReachedDestinationDistance); // [0x65417c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
	// class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class AActor* TargetActor, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt, float ReachedDestinationDistance); // [0x6540fe0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
/// Size: 0x0130 (304 bytes) (0x0000C8 - 0x000130) align 8 MaxSize: 0x0130
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,445) /* FMulticastInlineDelegate */ __um(OnTimedOut);                                         // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,446) /* FMulticastInlineDelegate */ __um(OnTimedOutAndDestinationReached);                    // 0x00D8   (0x0010)  
	FVector                                            StartLocation;                                              // 0x00E8   (0x0018)  
	FVector                                            TargetLocation;                                             // 0x0100   (0x0018)  
	float                                              Duration;                                                   // 0x0118   (0x0004)  
	bool                                               bSetNewMovementMode;                                        // 0x011C   (0x0001)  
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                            // 0x011D   (0x0001)  
	bool                                               bRestrictSpeedToExpected;                                   // 0x011E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x011F   (0x0001)  MISSED
	class UCurveVector*                                PathOffsetCurve;                                            // 0x0120   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0128   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
	// class UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // [0x6542060] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
/// Size: 0x0138 (312 bytes) (0x0000C8 - 0x000138) align 8 MaxSize: 0x0138
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,447) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x00C8   (0x0010)  
	FVector                                            Location;                                                   // 0x00D8   (0x0018)  
	class AActor*                                      LocationActor;                                              // 0x00F0   (0x0008)  
	float                                              Strength;                                                   // 0x00F8   (0x0004)  
	float                                              Duration;                                                   // 0x00FC   (0x0004)  
	float                                              Radius;                                                     // 0x0100   (0x0004)  
	bool                                               bIsPush;                                                    // 0x0104   (0x0001)  
	bool                                               bIsAdditive;                                                // 0x0105   (0x0001)  
	bool                                               bNoZForce;                                                  // 0x0106   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0107   (0x0001)  MISSED
	class UCurveFloat*                                 StrengthDistanceFalloff;                                    // 0x0108   (0x0008)  
	class UCurveFloat*                                 StrengthOverTime;                                           // 0x0110   (0x0008)  
	bool                                               bUseFixedWorldDirection;                                    // 0x0118   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0119   (0x0007)  MISSED
	FRotator                                           FixedWorldDirection;                                        // 0x0120   (0x0018)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
	// class UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, FRotator FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // [0x6542dc0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_MoveToLocation
/// Size: 0x00E8 (232 bytes) (0x000080 - 0x0000E8) align 8 MaxSize: 0x00E8
class UAbilityTask_MoveToLocation : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,448) /* FMulticastInlineDelegate */ __um(OnTargetLocationReached);                            // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0090   (0x0008)  MISSED
	FVector                                            StartLocation;                                              // 0x0098   (0x0018)  
	FVector                                            TargetLocation;                                             // 0x00B0   (0x0018)  
	float                                              DurationOfMovement;                                         // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00CC   (0x000C)  MISSED
	class UCurveFloat*                                 LerpCurve;                                                  // 0x00D8   (0x0008)  
	class UCurveVector*                                LerpCurveVector;                                            // 0x00E0   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
	// class UAbilityTask_MoveToLocation* MoveToLocation(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve); // [0x65507b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint
/// Size: 0x0098 (152 bytes) (0x000080 - 0x000098) align 8 MaxSize: 0x0098
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,449) /* FMulticastInlineDelegate */ __um(OnSync);                                             // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0090   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
	// class UAbilityTask_NetworkSyncPoint* WaitNetSync(class UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType); // [0x655dca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
	// void OnSignalCallback();                                                                                                 // [0x6553660] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait
/// Size: 0x0108 (264 bytes) (0x000080 - 0x000108) align 8 MaxSize: 0x0108
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,450) /* FMulticastInlineDelegate */ __um(OnCompleted);                                        // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,451) /* FMulticastInlineDelegate */ __um(OnBlendOut);                                         // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,452) /* FMulticastInlineDelegate */ __um(OnInterrupted);                                      // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,453) /* FMulticastInlineDelegate */ __um(OnCancelled);                                        // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00C0   (0x0028)  MISSED
	class UAnimMontage*                                MontageToPlay;                                              // 0x00E8   (0x0008)  
	float                                              Rate;                                                       // 0x00F0   (0x0004)  
	FName                                              StartSection;                                               // 0x00F4   (0x0008)  
	float                                              AnimRootMotionTranslationScale;                             // 0x00FC   (0x0004)  
	float                                              StartTimeSeconds;                                           // 0x0100   (0x0004)  
	bool                                               bStopWhenAbilityEnds;                                       // 0x0104   (0x0001)  
	bool                                               bAllowInterruptAfterBlendOut;                               // 0x0105   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x0106   (0x0002)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
	// void OnMontageInterrupted();                                                                                             // [0x6552860] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
	// void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);                                                     // [0x6553110] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
	// void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);                                               // [0x6553040] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnGameplayAbilityCancelled
	// void OnGameplayAbilityCancelled();                                                                                       // [0x6552860] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
	// class UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds, bool bAllowInterruptAfterBlendOut); // [0x6545e10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_Repeat
/// Size: 0x00B8 (184 bytes) (0x000080 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAbilityTask_Repeat : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,454) /* FMulticastInlineDelegate */ __um(OnPerformAction);                                    // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,455) /* FMulticastInlineDelegate */ __um(OnFinished);                                         // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_Repeat.RepeatAction
	// class UAbilityTask_Repeat* RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount); // [0x6554450] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_SpawnActor
/// Size: 0x00C8 (200 bytes) (0x000080 - 0x0000C8) align 8 MaxSize: 0x00C8
class UAbilityTask_SpawnActor : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,456) /* FMulticastInlineDelegate */ __um(Success);                                            // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,457) /* FMulticastInlineDelegate */ __um(DidNotSpawn);                                        // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x00A0   (0x0028)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
	// class UAbilityTask_SpawnActor* SpawnActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, class UClass* Class); // [0x65568a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
	// void FinishSpawningActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, class AActor* SpawnedActor); // [0x6549460] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
	// bool BeginSpawningActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, class UClass* Class, class AActor*& SpawnedActor); // [0x65442a0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_StartAbilityState
/// Size: 0x00B8 (184 bytes) (0x000080 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAbilityTask_StartAbilityState : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,458) /* FMulticastInlineDelegate */ __um(OnStateEnded);                                       // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,459) /* FMulticastInlineDelegate */ __um(OnStateInterrupted);                                 // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
	// class UAbilityTask_StartAbilityState* StartAbilityState(class UGameplayAbility* OwningAbility, FName StateName, bool bEndCurrentState); // [0x6556c30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_VisualizeTargeting
/// Size: 0x00A8 (168 bytes) (0x000080 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,460) /* FMulticastInlineDelegate */ __um(TimeElapsed);                                        // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0090   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
	// class UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, FName TaskInstanceName, float Duration); // [0x6557d00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
	// class UAbilityTask_VisualizeTargeting* VisualizeTargeting(class UGameplayAbility* OwningAbility, class UClass* Class, FName TaskInstanceName, float Duration); // [0x6557b40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
	// void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);        // [0x6549790] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
	// bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor*& SpawnedActor); // [0x65444e0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate
/// Size: 0x0180 (384 bytes) (0x000080 - 0x000180) align 8 MaxSize: 0x0180
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,461) /* FMulticastInlineDelegate */ __um(OnActivate);                                         // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0xF0];                                      // 0x0090   (0x00F0)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
	// class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x6558a70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
	// class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x6558d90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
	// class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(class UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x6558890] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
	// void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);                                                        // [0x6552440] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit
/// Size: 0x00F8 (248 bytes) (0x000080 - 0x0000F8) align 8 MaxSize: 0x00F8
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,462) /* FMulticastInlineDelegate */ __um(OnCommit);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x68];                                      // 0x0090   (0x0068)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
	// class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool TriggerOnce); // [0x6559130] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
	// class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(class UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTage, bool TriggerOnce); // [0x6558fc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
	// void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);                                                          // [0x65524d0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChange
/// Size: 0x00F8 (248 bytes) (0x000080 - 0x0000F8) align 8 MaxSize: 0x00F8
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,463) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0090   (0x0060)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x00F0   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
	// class UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, FGameplayAttribute InAttribute, FGameplayTag InWithTag, FGameplayTag InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce, class AActor* OptionalExternalOwner); // [0x6559f70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
	// class UAbilityTask_WaitAttributeChange* WaitForAttributeChange(class UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, FGameplayTag WithSrcTag, FGameplayTag WithoutSrcTag, bool TriggerOnce, class AActor* OptionalExternalOwner); // [0x6559310] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
/// Size: 0x0140 (320 bytes) (0x000080 - 0x000140) align 8 MaxSize: 0x0140
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,464) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0xA8];                                      // 0x0090   (0x00A8)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x0138   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
	// class UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, FGameplayAttribute AttributeNumerator, FGameplayAttribute AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner); // [0x65595c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
/// Size: 0x00F0 (240 bytes) (0x000080 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,465) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0090   (0x0058)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x00E8   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
	// class UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner); // [0x6559b00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitCancel
/// Size: 0x0098 (152 bytes) (0x000080 - 0x000098) align 8 MaxSize: 0x0098
class UAbilityTask_WaitCancel : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,466) /* FMulticastInlineDelegate */ __um(OnCancel);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0090   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
	// class UAbilityTask_WaitCancel* WaitCancel(class UGameplayAbility* OwningAbility);                                        // [0x6557e80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
	// void OnLocalCancelCallback();                                                                                            // [0x6552fe0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
	// void OnCancelCallback();                                                                                                 // [0x6552760] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirm
/// Size: 0x00A0 (160 bytes) (0x000080 - 0x0000A0) align 8 MaxSize: 0x00A0
class UAbilityTask_WaitConfirm : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,467) /* FMulticastInlineDelegate */ __um(OnConfirm);                                          // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
	// class UAbilityTask_WaitConfirm* WaitConfirm(class UGameplayAbility* OwningAbility);                                      // [0x65580f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
	// void OnConfirmCallback(class UGameplayAbility* InAbility);                                                               // [0x65527a0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel
/// Size: 0x00A8 (168 bytes) (0x000080 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,468) /* FMulticastInlineDelegate */ __um(OnConfirm);                                          // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,469) /* FMulticastInlineDelegate */ __um(OnCancel);                                           // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
	// class UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(class UGameplayAbility* OwningAbility);                          // [0x6558360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
	// void OnLocalConfirmCallback();                                                                                           // [0x6553020] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
	// void OnLocalCancelCallback();                                                                                            // [0x6553000] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
	// void OnConfirmCallback();                                                                                                // [0x6552840] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
	// void OnCancelCallback();                                                                                                 // [0x6552780] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitDelay
/// Size: 0x0098 (152 bytes) (0x000080 - 0x000098) align 8 MaxSize: 0x0098
class UAbilityTask_WaitDelay : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,470) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0090   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
	// class UAbilityTask_WaitDelay* WaitDelay(class UGameplayAbility* OwningAbility, float Time);                              // [0x65585d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
/// Size: 0x0248 (584 bytes) (0x000080 - 0x000248) align 8 MaxSize: 0x0248
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{ 
public:
	unsigned char                                      UnknownData00_8[0x1B8];                                     // 0x0080   (0x01B8)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x0238   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0240   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
	// void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle); // [0x6552560] Final|Native|Public|HasOutParms 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
/// Size: 0x0268 (616 bytes) (0x000248 - 0x000268) align 8 MaxSize: 0x0268
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{ 
public:
	SDK_UNDEFINED(16,471) /* FMulticastInlineDelegate */ __um(OnApplied);                                          // 0x0248   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0258   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
	// class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x655b170] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
	// class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x655aaa0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
/// Size: 0x0268 (616 bytes) (0x000248 - 0x000268) align 8 MaxSize: 0x0268
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{ 
public:
	SDK_UNDEFINED(16,472) /* FMulticastInlineDelegate */ __um(OnApplied);                                          // 0x0248   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0258   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
	// class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x655bcd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
	// class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle TargetFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects); // [0x655b600] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
/// Size: 0x01B8 (440 bytes) (0x000080 - 0x0001B8) align 8 MaxSize: 0x01B8
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,473) /* FMulticastInlineDelegate */ __um(bLocked);                                            // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x118];                                     // 0x0090   (0x0118)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x01A8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x01B0   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
	// class UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce); // [0x655c160] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
/// Size: 0x00C0 (192 bytes) (0x000080 - 0x0000C0) align 8 MaxSize: 0x00C0
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,474) /* FMulticastInlineDelegate */ __um(OnRemoved);                                          // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,475) /* FMulticastInlineDelegate */ __um(InvalidHandle);                                      // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x00A0   (0x0020)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
	// class UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle); // [0x655a2d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
	// void OnGameplayEffectRemoved(FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);                                   // [0x65528d0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
/// Size: 0x00B8 (184 bytes) (0x000080 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,476) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,477) /* FMulticastInlineDelegate */ __um(InvalidHandle);                                      // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
	// class UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle); // [0x655a580] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
	// void OnGameplayEffectStackChange(FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount);                // [0x65529f0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent
/// Size: 0x00B0 (176 bytes) (0x000080 - 0x0000B0) align 8 MaxSize: 0x00B0
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,478) /* FMulticastInlineDelegate */ __um(EventReceived);                                      // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0090   (0x0008)  MISSED
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                     // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00A0   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
	// class UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(class UGameplayAbility* OwningAbility, FGameplayTag EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact); // [0x655c880] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTag
/// Size: 0x00A8 (168 bytes) (0x000080 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0080   (0x0010)  MISSED
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                     // 0x0090   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0098   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
	// void GameplayTagCallback(FGameplayTag Tag, int32_t NewCount);                                                            // [0x6549cc0] Native|Public        
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{ 
public:
	SDK_UNDEFINED(16,479) /* FMulticastInlineDelegate */ __um(Added);                                              // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
	// class UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, FGameplayTag Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // [0x655cc30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{ 
public:
	SDK_UNDEFINED(16,480) /* FMulticastInlineDelegate */ __um(Removed);                                            // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
	// class UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, FGameplayTag Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // [0x655d3e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery
/// Size: 0x0160 (352 bytes) (0x000080 - 0x000160) align 8 MaxSize: 0x0160
class UAbilityTask_WaitGameplayTagQuery : public UAbilityTask
{ 
public:
	unsigned char                                      UnknownData00_8[0xC0];                                      // 0x0080   (0x00C0)  MISSED
	SDK_UNDEFINED(16,481) /* FMulticastInlineDelegate */ __um(Triggered);                                          // 0x0140   (0x0010)  
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                     // 0x0150   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0158   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery.WaitGameplayTagQuery
	// class UAbilityTask_WaitGameplayTagQuery* WaitGameplayTagQuery(class UGameplayAbility* OwningAbility, FGameplayTagQuery TagQuery, class AActor* InOptionalExternalTarget, EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce); // [0x655cf90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery.UpdateTargetTags
	// void UpdateTargetTags(FGameplayTag Tag, int32_t NewCount);                                                               // [0x6557a50] Final|Native|Protected 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputPress
/// Size: 0x00A0 (160 bytes) (0x000080 - 0x0000A0) align 8 MaxSize: 0x00A0
class UAbilityTask_WaitInputPress : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,482) /* FMulticastInlineDelegate */ __um(OnPress);                                            // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
	// class UAbilityTask_WaitInputPress* WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);      // [0x655d740] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
	// void OnPressCallback();                                                                                                  // [0x6553420] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputRelease
/// Size: 0x00A0 (160 bytes) (0x000080 - 0x0000A0) align 8 MaxSize: 0x00A0
class UAbilityTask_WaitInputRelease : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,483) /* FMulticastInlineDelegate */ __um(OnRelease);                                          // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
	// class UAbilityTask_WaitInputRelease* WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased); // [0x655d9f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
	// void OnReleaseCallback();                                                                                                // [0x6553440] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange
/// Size: 0x00A0 (160 bytes) (0x000080 - 0x0000A0) align 8 MaxSize: 0x00A0
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,484) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
	// void OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x6553200] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
	// class UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode); // [0x65462d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitOverlap
/// Size: 0x0090 (144 bytes) (0x000080 - 0x000090) align 8 MaxSize: 0x0090
class UAbilityTask_WaitOverlap : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,485) /* FMulticastInlineDelegate */ __um(OnOverlap);                                          // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
	// class UAbilityTask_WaitOverlap* WaitForOverlap(class UGameplayAbility* OwningAbility);                                   // [0x655a830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
	// void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0x6552b10] Final|Native|Public|HasOutParms|HasDefaults 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitTargetData
/// Size: 0x00C0 (192 bytes) (0x000080 - 0x0000C0) align 8 MaxSize: 0x00C0
class UAbilityTask_WaitTargetData : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,486) /* FMulticastInlineDelegate */ __um(ValidData);                                          // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,487) /* FMulticastInlineDelegate */ __um(Cancelled);                                          // 0x0090   (0x0010)  
	class UClass*                                      TargetClass;                                                // 0x00A0   (0x0008)  
	class AGameplayAbilityTargetActor*                 TargetActor;                                                // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00B0   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
	// class UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor); // [0x655e100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
	// class UAbilityTask_WaitTargetData* WaitTargetData(class UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class); // [0x655df70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
	// void OnTargetDataReplicatedCancelledCallback();                                                                          // [0x53335a0] Native|Public        
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
	// void OnTargetDataReplicatedCallback(FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag);                 // [0x6553a20] Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
	// void OnTargetDataReadyCallback(FGameplayAbilityTargetDataHandle& Data);                                                  // [0x6553950] Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
	// void OnTargetDataCancelledCallback(FGameplayAbilityTargetDataHandle& Data);                                              // [0x6553880] Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
	// void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);        // [0x6549970] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
	// bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor*& SpawnedActor); // [0x65446d0] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitVelocityChange
/// Size: 0x00B8 (184 bytes) (0x000080 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,488) /* FMulticastInlineDelegate */ __um(OnVelocityChage);                                    // 0x0080   (0x0010)  
	class UMovementComponent*                          CachedMovementComponent;                                    // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0098   (0x0020)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
	// class UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, FVector Direction, float MinimumMagnitude); // [0x65465a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilitySystemBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
	// bool TargetDataHasOrigin(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                                   // [0x6557300] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
	// bool TargetDataHasHitResult(FGameplayAbilityTargetDataHandle& HitResult, int32_t Index);                                 // [0x65571c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
	// bool TargetDataHasEndPoint(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                                 // [0x6557060] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
	// bool TargetDataHasActor(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                                    // [0x6556f00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
	// FGameplayEffectSpecHandle SetStackCountToMax(FGameplayEffectSpecHandle SpecHandle);                                      // [0x65566c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
	// FGameplayEffectSpecHandle SetStackCount(FGameplayEffectSpecHandle SpecHandle, int32_t StackCount);                       // [0x6556530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
	// FGameplayEffectSpecHandle SetDuration(FGameplayEffectSpecHandle SpecHandle, float Duration);                             // [0x65563a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
	// void SendGameplayEventToActor(class AActor* Actor, FGameplayTag EventTag, FGameplayEventData Payload);                   // [0x6554750] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.RemoveLooseGameplayTags
	// bool RemoveLooseGameplayTags(class AActor* Actor, FGameplayTagContainer& GameplayTags, bool bShouldReplicate);           // [0x65542a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
	// bool NotEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB);          // [0x6552280] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAbilitySpecHandle
	// bool NotEqual_GameplayAbilitySpecHandle(FGameplayAbilitySpecHandle& A, FGameplayAbilitySpecHandle& B);                   // [0x6552180] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_ActiveGameplayEffectHandle
	// bool NotEqual_ActiveGameplayEffectHandle(FActiveGameplayEffectHandle& A, FActiveGameplayEffectHandle& B);                // [0x6552070] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
	// FGameplayEffectSpecHandle MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel); // [0x6550540] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters
	// FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, FGameplayEffectContextHandle EffectContext, FGameplayTag MatchedTagName, FGameplayTag OriginalTag, FGameplayTagContainer AggregatedSourceTags, FGameplayTagContainer AggregatedTargetTags, FVector Location, FVector Normal, class AActor* Instigator, class AActor* EffectCauser, class UObject* SourceObject, class UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, class USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy); // [0x654f980] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
	// FGameplayTargetDataFilterHandle MakeFilterHandle(FGameplayTargetDataFilter Filter, class AActor* FilterActor);           // [0x654f710] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
	// bool IsValid(FGameplayAttribute Attribute);                                                                              // [0x654efa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
	// bool IsInstigatorLocallyControlledPlayer(FGameplayCueParameters Parameters);                                             // [0x654edf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
	// bool IsInstigatorLocallyControlled(FGameplayCueParameters Parameters);                                                   // [0x654ec40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
	// bool HasHitResult(FGameplayCueParameters Parameters);                                                                    // [0x654e9c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
	// FTransform GetTargetDataOrigin(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                             // [0x654e850] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
	// FTransform GetTargetDataEndPointTransform(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                  // [0x654e690] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
	// FVector GetTargetDataEndPoint(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                              // [0x654e500] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
	// FVector GetOrigin(FGameplayCueParameters Parameters);                                                                    // [0x654e2f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
	// float GetModifiedAttributeMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayAttribute Attribute);                 // [0x654e170] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
	// FTransform GetInstigatorTransform(FGameplayCueParameters Parameters);                                                    // [0x654ded0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
	// class AActor* GetInstigatorActor(FGameplayCueParameters Parameters);                                                     // [0x654dd20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
	// FHitResult GetHitResultFromTargetData(FGameplayAbilityTargetDataHandle& HitResult, int32_t Index);                       // [0x654dad0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
	// FHitResult GetHitResult(FGameplayCueParameters Parameters);                                                              // [0x654d820] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectUIData
	// class UGameplayEffectUIData* GetGameplayEffectUIData(class UClass* EffectClass, class UClass* DataType);                 // [0x654d500] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectGrantedTags
	// FGameplayTagContainer GetGameplayEffectGrantedTags(class UClass* EffectClass);                                           // [0x654d250] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectFromActiveEffectHandle
	// class UGameplayEffect* GetGameplayEffectFromActiveEffectHandle(FActiveGameplayEffectHandle& ActiveHandle);               // [0x654d180] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectAssetTags
	// FGameplayTagContainer GetGameplayEffectAssetTags(class UClass* EffectClass);                                             // [0x654cc60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
	// bool GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Location, FVector& Normal); // [0x654c860] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
	// bool GetGameplayCueDirection(class AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Direction);          // [0x654c620] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayAbilityFromSpecHandle
	// class UGameplayAbility* GetGameplayAbilityFromSpecHandle(class UAbilitySystemComponent* AbilitySystem, FGameplayAbilitySpecHandle& AbilitySpecHandle, bool& bIsInstance); // [0x654c2c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
	// float GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // [0x654c0d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
	// float GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // [0x654bee0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
	// float GetFloatAttributeBase(class AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);       // [0x654bd20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
	// float GetFloatAttribute(class AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);           // [0x654bb60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
	// FGameplayEffectContextHandle GetEffectContext(FGameplayEffectSpecHandle SpecHandle);                                     // [0x654b9a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetDebugStringFromGameplayAttribute
	// FString GetDebugStringFromGameplayAttribute(FGameplayAttribute& Attribute);                                              // [0x654b740] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
	// int32_t GetDataCountFromTargetData(FGameplayAbilityTargetDataHandle& TargetData);                                        // [0x654b670] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
	// TArray<FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(FGameplayEffectSpecHandle SpecHandle);           // [0x654b340] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData
	// TArray<AActor*> GetAllActorsFromTargetData(FGameplayAbilityTargetDataHandle& TargetData);                                // [0x654afd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
	// TArray<AActor*> GetActorsFromTargetData(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                    // [0x654ac90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
	// int32_t GetActorCount(FGameplayCueParameters Parameters);                                                                // [0x654aa60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
	// class AActor* GetActorByIndex(FGameplayCueParameters Parameters, int32_t Index);                                         // [0x654a7c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration
	// float GetActiveGameplayEffectTotalDuration(FActiveGameplayEffectHandle ActiveHandle);                                    // [0x654a6f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime
	// float GetActiveGameplayEffectStartTime(FActiveGameplayEffectHandle ActiveHandle);                                        // [0x654a620] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
	// int32_t GetActiveGameplayEffectStackLimitCount(FActiveGameplayEffectHandle ActiveHandle);                                // [0x654a550] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
	// int32_t GetActiveGameplayEffectStackCount(FActiveGameplayEffectHandle ActiveHandle);                                     // [0x654a490] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration
	// float GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, FActiveGameplayEffectHandle ActiveHandle); // [0x654a360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime
	// float GetActiveGameplayEffectExpectedEndTime(FActiveGameplayEffectHandle ActiveHandle);                                  // [0x654a270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
	// FString GetActiveGameplayEffectDebugString(FActiveGameplayEffectHandle ActiveHandle);                                    // [0x654a0c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
	// class UAbilitySystemComponent* GetAbilitySystemComponent(class AActor* Actor);                                           // [0x6549d90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
	// void ForwardGameplayCueToTarget(TScriptInterface<Class> TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x6549a40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
	// FGameplayAbilityTargetDataHandle FilterTargetData(FGameplayAbilityTargetDataHandle& TargetDataHandle, FGameplayTargetDataFilterHandle ActorFilterClass); // [0x6548d20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
	// float EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags, float BaseValue, bool& bSuccess); // [0x6548780] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
	// float EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags, bool& bSuccess); // [0x65482b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
	// bool EqualEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB);        // [0x65480f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAbilitySpecHandle
	// bool EqualEqual_GameplayAbilitySpecHandle(FGameplayAbilitySpecHandle& A, FGameplayAbilitySpecHandle& B);                 // [0x6547ff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_ActiveGameplayEffectHandle
	// bool EqualEqual_ActiveGameplayEffectHandle(FActiveGameplayEffectHandle& A, FActiveGameplayEffectHandle& B);              // [0x6547ee0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
	// void EffectContextSetOrigin(FGameplayEffectContextHandle EffectContext, FVector Origin);                                 // [0x6547d70] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
	// bool EffectContextIsValid(FGameplayEffectContextHandle EffectContext);                                                   // [0x6547c40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
	// bool EffectContextIsInstigatorLocallyControlled(FGameplayEffectContextHandle EffectContext);                             // [0x6547b00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
	// bool EffectContextHasHitResult(FGameplayEffectContextHandle EffectContext);                                              // [0x65479c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
	// class UObject* EffectContextGetSourceObject(FGameplayEffectContextHandle EffectContext);                                 // [0x6547880] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
	// class AActor* EffectContextGetOriginalInstigatorActor(FGameplayEffectContextHandle EffectContext);                       // [0x6547740] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
	// FVector EffectContextGetOrigin(FGameplayEffectContextHandle EffectContext);                                              // [0x65475b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
	// class AActor* EffectContextGetInstigatorActor(FGameplayEffectContextHandle EffectContext);                               // [0x6547470] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
	// FHitResult EffectContextGetHitResult(FGameplayEffectContextHandle EffectContext);                                        // [0x6547230] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
	// class AActor* EffectContextGetEffectCauser(FGameplayEffectContextHandle EffectContext);                                  // [0x65470f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
	// void EffectContextAddHitResult(FGameplayEffectContextHandle EffectContext, FHitResult HitResult, bool bReset);           // [0x6546ed0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
	// bool DoesTargetDataContainActor(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index, class AActor* Actor);       // [0x6546d00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
	// bool DoesGameplayCueMeetTagRequirements(FGameplayCueParameters Parameters, FGameplayTagRequirements& SourceTagReqs, FGameplayTagRequirements& TargetTagReqs); // [0x6546930] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle
	// FGameplayEffectSpecHandle CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone); // [0x6545b50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters
	// void BreakGameplayCueParameters(FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, FGameplayEffectContextHandle& EffectContext, FGameplayTag& MatchedTagName, FGameplayTag& OriginalTag, FGameplayTagContainer& AggregatedSourceTags, FGameplayTagContainer& AggregatedTargetTags, FVector& Location, FVector& Normal, class AActor*& Instigator, class AActor*& EffectCauser, class UObject*& SourceObject, class UPhysicalMaterial*& PhysicalMaterial, int32_t& GameplayEffectLevel, int32_t& AbilityLevel, class USceneComponent*& TargetAttachComponent, bool& bReplicateLocationWhenUsingMinimalRepProxy); // [0x6544820] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude
	// FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayTag DataTag, float Magnitude); // [0x6543760] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
	// FGameplayEffectSpecHandle AssignSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FName DataName, float Magnitude); // [0x6543580] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
	// FGameplayAbilityTargetDataHandle AppendTargetDataHandle(FGameplayAbilityTargetDataHandle TargetHandle, FGameplayAbilityTargetDataHandle& HandleToAdd); // [0x6540140] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddLooseGameplayTags
	// bool AddLooseGameplayTags(class AActor* Actor, FGameplayTagContainer& GameplayTags, bool bShouldReplicate);              // [0x653ff60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
	// FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(FGameplayEffectSpecHandle SpecHandle, FGameplayEffectSpecHandle LinkedGameplayEffectSpec); // [0x653fcf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
	// FGameplayEffectSpecHandle AddLinkedGameplayEffect(FGameplayEffectSpecHandle SpecHandle, class UClass* LinkedGameplayEffect); // [0x653fb50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
	// FGameplayEffectSpecHandle AddGrantedTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags);   // [0x653f950] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
	// FGameplayEffectSpecHandle AddGrantedTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag);              // [0x653f7b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
	// FGameplayEffectSpecHandle AddAssetTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags);     // [0x653f5c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
	// FGameplayEffectSpecHandle AddAssetTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag);                // [0x653f420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(FGameplayAbilityTargetingLocationInfo& SourceLocation, FGameplayAbilityTargetingLocationInfo& TargetLocation); // [0x653f230] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(FHitResult& HitResult);                                  // [0x653f000] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(TArray<AActor*>& ActorArray, bool OneTargetPerHandle);  // [0x653eee0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(class AActor* Actor);                                        // [0x653ee20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/GameplayAbilities.AttributeDefaults
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAttributeDefaults
{ 
	class UClass*                                      Attributes;                                                 // 0x0000   (0x0008)  
	class UDataTable*                                  DefaultStartingTable;                                       // 0x0008   (0x0008)  
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FActiveGameplayEffectHandle
{ 
	int32_t                                            Handle;                                                     // 0x0000   (0x0004)  
	bool                                               bPassedFiltersAndWasExecuted;                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpec
/// Size: 0x00F0 (240 bytes) (0x00000C - 0x0000F0) align 8 MaxSize: 0x00F0
struct FGameplayAbilitySpec : FFastArraySerializerItem
{ 
	FGameplayAbilitySpecHandle                         Handle;                                                     // 0x000C   (0x0004)  
	class UGameplayAbility*                            Ability;                                                    // 0x0010   (0x0008)  
	int32_t                                            Level;                                                      // 0x0018   (0x0004)  
	int32_t                                            InputID;                                                    // 0x001C   (0x0004)  
	TWeakObjectPtr<class UObject*>                     SourceObject;                                               // 0x0020   (0x0008)  
	char                                               ActiveCount;                                                // 0x0028   (0x0001)  
	bool                                               InputPressed : 1;                                           // 0x0029:0 (0x0001)  
	bool                                               RemoveAfterActivation : 1;                                  // 0x0029:1 (0x0001)  
	bool                                               PendingRemove : 1;                                          // 0x0029:2 (0x0001)  
	bool                                               bActivateOnce : 1;                                          // 0x0029:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x16];                                      // 0x002A   (0x0016)  MISSED
	FGameplayAbilityActivationInfo                     ActivationInfo;                                             // 0x0040   (0x0018)  
	FGameplayTagContainer                              DynamicAbilityTags;                                         // 0x0058   (0x0020)  
	TArray<class UGameplayAbility*>                    NonReplicatedInstances;                                     // 0x0078   (0x0010)  
	TArray<class UGameplayAbility*>                    ReplicatedInstances;                                        // 0x0088   (0x0010)  
	FActiveGameplayEffectHandle                        GameplayEffectHandle;                                       // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x00A0   (0x0050)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecContainer
/// Size: 0x0120 (288 bytes) (0x000108 - 0x000120) align 8 MaxSize: 0x0120
struct FGameplayAbilitySpecContainer : FFastArraySerializer
{ 
	TArray<FGameplayAbilitySpec>                       Items;                                                      // 0x0108   (0x0010)  
	class UAbilitySystemComponent*                     Owner;                                                      // 0x0118   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityRepAnimMontage
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FGameplayAbilityRepAnimMontage
{ 
	class UAnimSequenceBase*                           Animation;                                                  // 0x0000   (0x0008)  
	FName                                              SlotName;                                                   // 0x0008   (0x0008)  
	float                                              PlayRate;                                                   // 0x0010   (0x0004)  
	float                                              Position;                                                   // 0x0014   (0x0004)  
	float                                              BlendTime;                                                  // 0x0018   (0x0004)  
	float                                              BlendOutTime;                                               // 0x001C   (0x0004)  
	char                                               NextSectionID;                                              // 0x0020   (0x0001)  
	char                                               PlayInstanceId;                                             // 0x0021   (0x0001)  
	bool                                               bRepPosition : 1;                                           // 0x0022:0 (0x0001)  
	bool                                               IsStopped : 1;                                              // 0x0022:1 (0x0001)  
	bool                                               SkipPositionCorrection : 1;                                 // 0x0022:2 (0x0001)  
	bool                                               bSkipPlayRate : 1;                                          // 0x0022:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0023   (0x0005)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0028   (0x0010)  
	char                                               SectionIdToPlay;                                            // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityLocalAnimMontage
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGameplayAbilityLocalAnimMontage
{ 
	class UAnimMontage*                                AnimMontage;                                                // 0x0000   (0x0008)  
	char                                               PlayInstanceId;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0010   (0x0010)  
	TWeakObjectPtr<class UGameplayAbility*>            AnimatingAbility;                                           // 0x0020   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifiedAttribute
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FGameplayEffectModifiedAttribute
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	float                                              TotalMagnitude;                                             // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpec
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGameplayEffectAttributeCaptureSpec
{ 
	FGameplayEffectAttributeCaptureDefinition          BackingDefinition;                                          // 0x0000   (0x0040)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGameplayEffectAttributeCaptureSpecContainer
{ 
	TArray<FGameplayEffectAttributeCaptureSpec>        SourceAttributes;                                           // 0x0000   (0x0010)  
	TArray<FGameplayEffectAttributeCaptureSpec>        TargetAttributes;                                           // 0x0010   (0x0010)  
	bool                                               bHasNonSnapshottedAttributes;                               // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.TagContainerAggregator
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FTagContainerAggregator
{ 
	FGameplayTagContainer                              CapturedActorTags;                                          // 0x0000   (0x0020)  
	FGameplayTagContainer                              CapturedSpecTags;                                           // 0x0020   (0x0020)  
	FGameplayTagContainer                              ScopedTags;                                                 // 0x0040   (0x0020)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0060   (0x0028)  MISSED
};

/// Struct /Script/GameplayAbilities.ModifierSpec
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FModifierSpec
{ 
	float                                              EvaluatedMagnitude;                                         // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpec
/// Size: 0x0298 (664 bytes) (0x000000 - 0x000298) align 8 MaxSize: 0x0298
struct FGameplayEffectSpec
{ 
	class UGameplayEffect*                             Def;                                                        // 0x0000   (0x0008)  
	TArray<FGameplayEffectModifiedAttribute>           ModifiedAttributes;                                         // 0x0008   (0x0010)  
	FGameplayEffectAttributeCaptureSpecContainer       CapturedRelevantAttributes;                                 // 0x0018   (0x0028)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
	float                                              Duration;                                                   // 0x0050   (0x0004)  
	float                                              Period;                                                     // 0x0054   (0x0004)  
	float                                              ChanceToApplyToTarget;                                      // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FTagContainerAggregator                            CapturedSourceTags;                                         // 0x0060   (0x0088)  
	FTagContainerAggregator                            CapturedTargetTags;                                         // 0x00E8   (0x0088)  
	FGameplayTagContainer                              DynamicGrantedTags;                                         // 0x0170   (0x0020)  
	FGameplayTagContainer                              DynamicAssetTags;                                           // 0x0190   (0x0020)  
	TArray<FModifierSpec>                              Modifiers;                                                  // 0x01B0   (0x0010)  
	int32_t                                            StackCount;                                                 // 0x01C0   (0x0004)  
	bool                                               bCompletedSourceAttributeCapture : 1;                       // 0x01C4:0 (0x0001)  
	bool                                               bCompletedTargetAttributeCapture : 1;                       // 0x01C4:1 (0x0001)  
	bool                                               bDurationLocked : 1;                                        // 0x01C4:2 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x01C5   (0x0003)  MISSED
	TArray<FGameplayAbilitySpecDef>                    GrantedAbilitySpecs;                                        // 0x01C8   (0x0010)  
	unsigned char                                      UnknownData03_6[0xA0];                                      // 0x01D8   (0x00A0)  MISSED
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0278   (0x0018)  
	float                                              Level;                                                      // 0x0290   (0x0004)  
	unsigned char                                      UnknownData04_7[0x4];                                       // 0x0294   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffect
/// Size: 0x0360 (864 bytes) (0x00000C - 0x000360) align 8 MaxSize: 0x0360
struct FActiveGameplayEffect : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_8[0xC];                                       // 0x000C   (0x000C)  MISSED
	FGameplayEffectSpec                                Spec;                                                       // 0x0018   (0x0298)  
	FPredictionKey                                     PredictionKey;                                              // 0x02B0   (0x0010)  
	TArray<FGameplayAbilitySpecHandle>                 GrantedAbilityHandles;                                      // 0x02C0   (0x0010)  
	float                                              StartServerWorldTime;                                       // 0x02D0   (0x0004)  
	float                                              CachedStartServerWorldTime;                                 // 0x02D4   (0x0004)  
	float                                              StartWorldTime;                                             // 0x02D8   (0x0004)  
	bool                                               bIsInhibited;                                               // 0x02DC   (0x0001)  
	unsigned char                                      UnknownData01_7[0x83];                                      // 0x02DD   (0x0083)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectsContainer
/// Size: 0x0300 (768 bytes) (0x000108 - 0x000300) align 8 MaxSize: 0x0300
struct FActiveGameplayEffectsContainer : FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0108   (0x0028)  MISSED
	TArray<FActiveGameplayEffect>                      GameplayEffects_Internal;                                   // 0x0130   (0x0010)  
	unsigned char                                      UnknownData01_7[0x1C0];                                     // 0x0140   (0x01C0)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueParameters
/// Size: 0x00D8 (216 bytes) (0x000000 - 0x0000D8) align 8 MaxSize: 0x00D8
struct FGameplayCueParameters
{ 
	float                                              NormalizedMagnitude;                                        // 0x0000   (0x0004)  
	float                                              RawMagnitude;                                               // 0x0004   (0x0004)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0008   (0x0018)  
	FGameplayTag                                       MatchedTagName;                                             // 0x0020   (0x0008)  
	FGameplayTag                                       OriginalTag;                                                // 0x0028   (0x0008)  
	FGameplayTagContainer                              AggregatedSourceTags;                                       // 0x0030   (0x0020)  
	FGameplayTagContainer                              AggregatedTargetTags;                                       // 0x0050   (0x0020)  
	FVector_NetQuantize10                              Location;                                                   // 0x0070   (0x0018)  
	FVector_NetQuantizeNormal                          Normal;                                                     // 0x0088   (0x0018)  
	TWeakObjectPtr<class AActor*>                      Instigator;                                                 // 0x00A0   (0x0008)  
	TWeakObjectPtr<class AActor*>                      EffectCauser;                                               // 0x00A8   (0x0008)  
	TWeakObjectPtr<class UObject*>                     SourceObject;                                               // 0x00B0   (0x0008)  
	TWeakObjectPtr<class UPhysicalMaterial*>           PhysicalMaterial;                                           // 0x00B8   (0x0008)  
	int32_t                                            GameplayEffectLevel;                                        // 0x00C0   (0x0004)  
	int32_t                                            AbilityLevel;                                               // 0x00C4   (0x0004)  
	TWeakObjectPtr<class USceneComponent*>             TargetAttachComponent;                                      // 0x00C8   (0x0008)  
	bool                                               bReplicateLocationWhenUsingMinimalRepProxy;                 // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00D1   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCue
/// Size: 0x0108 (264 bytes) (0x00000C - 0x000108) align 8 MaxSize: 0x0108
struct FActiveGameplayCue : FFastArraySerializerItem
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x000C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0018   (0x0010)  
	FGameplayCueParameters                             Parameters;                                                 // 0x0028   (0x00D8)  
	bool                                               bPredictivelyRemoved;                                       // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0101   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCueContainer
/// Size: 0x0128 (296 bytes) (0x000108 - 0x000128) align 8 MaxSize: 0x0128
struct FActiveGameplayCueContainer : FFastArraySerializer
{ 
	TArray<FActiveGameplayCue>                         GameplayCues;                                               // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0118   (0x0008)  MISSED
	class UAbilitySystemComponent*                     Owner;                                                      // 0x0120   (0x0008)  
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMap
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FMinimalReplicationTagCountMap
{ 
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0000   (0x0050)  MISSED
	class UAbilitySystemComponent*                     Owner;                                                      // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyItem
/// Size: 0x0020 (32 bytes) (0x00000C - 0x000020) align 8 MaxSize: 0x0020
struct FReplicatedPredictionKeyItem : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x000C   (0x0004)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyMap
/// Size: 0x0118 (280 bytes) (0x000108 - 0x000118) align 8 MaxSize: 0x0118
struct FReplicatedPredictionKeyMap : FFastArraySerializer
{ 
	TArray<FReplicatedPredictionKeyItem>               PredictionKeys;                                             // 0x0108   (0x0010)  
};

/// Class /Script/GameplayAbilities.AbilitySystemComponent
/// Size: 0x1248 (4680 bytes) (0x000118 - 0x001248) align 8 MaxSize: 0x1248
class UAbilitySystemComponent : public UGameplayTasksComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0118   (0x0010)  MISSED
	TArray<FAttributeDefaults>                         DefaultStartingData;                                        // 0x0128   (0x0010)  
	FName                                              AffectedAnimInstanceTag;                                    // 0x0138   (0x0008)  
	unsigned char                                      UnknownData01_6[0x1A8];                                     // 0x0140   (0x01A8)  MISSED
	float                                              OutgoingDuration;                                           // 0x02E8   (0x0004)  
	float                                              IncomingDuration;                                           // 0x02EC   (0x0004)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x02F0   (0x0020)  MISSED
	TArray<FString>                                    ClientDebugStrings;                                         // 0x0310   (0x0010)  
	TArray<FString>                                    ServerDebugStrings;                                         // 0x0320   (0x0010)  
	unsigned char                                      UnknownData03_6[0x58];                                      // 0x0330   (0x0058)  MISSED
	bool                                               UserAbilityActivationInhibited;                             // 0x0388   (0x0001)  
	bool                                               ReplicationProxyEnabled;                                    // 0x0389   (0x0001)  
	bool                                               bSuppressGrantAbility;                                      // 0x038A   (0x0001)  
	bool                                               bSuppressGameplayCues;                                      // 0x038B   (0x0001)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x038C   (0x0004)  MISSED
	TArray<class AGameplayAbilityTargetActor*>         SpawnedTargetActors;                                        // 0x0390   (0x0010)  
	unsigned char                                      UnknownData05_6[0x28];                                      // 0x03A0   (0x0028)  MISSED
	class AActor*                                      OwnerActor;                                                 // 0x03C8   (0x0008)  
	class AActor*                                      AvatarActor;                                                // 0x03D0   (0x0008)  
	unsigned char                                      UnknownData06_6[0x10];                                      // 0x03D8   (0x0010)  MISSED
	FGameplayAbilitySpecContainer                      ActivatableAbilities;                                       // 0x03E8   (0x0120)  
	unsigned char                                      UnknownData07_6[0x30];                                      // 0x0508   (0x0030)  MISSED
	TArray<class UGameplayAbility*>                    AllReplicatedInstancedAbilities;                            // 0x0538   (0x0010)  
	unsigned char                                      UnknownData08_6[0x220];                                     // 0x0548   (0x0220)  MISSED
	FGameplayAbilityRepAnimMontage                     RepAnimMontageInfo;                                         // 0x0768   (0x0040)  
	bool                                               bCachedIsNetSimulated;                                      // 0x07A8   (0x0001)  
	bool                                               bPendingMontageRep;                                         // 0x07A9   (0x0001)  
	unsigned char                                      UnknownData09_6[0x6];                                       // 0x07AA   (0x0006)  MISSED
	FGameplayAbilityLocalAnimMontage                   LocalAnimMontageInfo;                                       // 0x07B0   (0x0028)  
	unsigned char                                      UnknownData10_6[0xA0];                                      // 0x07D8   (0x00A0)  MISSED
	FActiveGameplayEffectsContainer                    ActiveGameplayEffects;                                      // 0x0878   (0x0300)  
	FActiveGameplayCueContainer                        ActiveGameplayCues;                                         // 0x0B78   (0x0128)  
	FActiveGameplayCueContainer                        MinimalReplicationGameplayCues;                             // 0x0CA0   (0x0128)  
	unsigned char                                      UnknownData11_6[0x128];                                     // 0x0DC8   (0x0128)  MISSED
	TArray<char>                                       BlockedAbilityBindings;                                     // 0x0EF0   (0x0010)  
	unsigned char                                      UnknownData12_6[0x128];                                     // 0x0F00   (0x0128)  MISSED
	FMinimalReplicationTagCountMap                     MinimalReplicationTags;                                     // 0x1028   (0x0068)  
	TArray<class UAttributeSet*>                       SpawnedAttributes;                                          // 0x1090   (0x0010)  
	unsigned char                                      UnknownData13_6[0x10];                                      // 0x10A0   (0x0010)  MISSED
	FMinimalReplicationTagCountMap                     ReplicatedLooseTags;                                        // 0x10B0   (0x0068)  
	unsigned char                                      UnknownData14_6[0x8];                                       // 0x1118   (0x0008)  MISSED
	FReplicatedPredictionKeyMap                        ReplicatedPredictionKeyMap;                                 // 0x1120   (0x0118)  
	unsigned char                                      UnknownData15_7[0x10];                                      // 0x1238   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitudes
	// void UpdateActiveGameplayEffectSetByCallerMagnitudes(FActiveGameplayEffectHandle ActiveHandle, TMap<FGameplayTag, float>& NewSetByCallerValues); // [0x65578c0] BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitude
	// void UpdateActiveGameplayEffectSetByCallerMagnitude(FActiveGameplayEffectHandle ActiveHandle, FGameplayTag SetByCallerTag, float NewValue); // [0x65577b0] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
	// bool TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation);                          // [0x6557650] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbility
	// bool TryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool bAllowRemoteActivation);                      // [0x6557580] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
	// bool TryActivateAbilitiesByTag(FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);                // [0x6557460] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TargetConfirm
	// void TargetConfirm();                                                                                                    // [0x58818c0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TargetCancel
	// void TargetCancel();                                                                                                     // [0x5cd05f0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
	// void SetUserAbilityActivationInhibited(bool NewInhibit);                                                                 // [0x6556810] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
	// void SetActiveGameplayEffectLevelUsingQuery(FGameplayEffectQuery Query, int32_t NewLevel);                               // [0x6556290] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
	// void SetActiveGameplayEffectLevel(FActiveGameplayEffectHandle ActiveHandle, int32_t NewLevel);                           // [0x65561b0] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
	// void ServerTryActivateAbilityWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // [0x6555e80] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
	// void ServerTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey); // [0x6555d10] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
	// void ServerSetReplicatedTargetDataCancelled(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // [0x6555b90] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
	// void ServerSetReplicatedTargetData(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey); // [0x6555950] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
	// void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload); // [0x6555720] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
	// void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // [0x6555550] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
	// void ServerSetInputReleased(FGameplayAbilitySpecHandle AbilityHandle);                                                   // [0x65554a0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
	// void ServerSetInputPressed(FGameplayAbilitySpecHandle AbilityHandle);                                                    // [0x65553f0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
	// void ServerPrintDebug_RequestWithStrings(TArray<FString> Strings);                                                       // [0x6555300] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
	// void ServerPrintDebug_Request();                                                                                         // [0x65552b0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerEndAbility
	// void ServerEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey); // [0x6555110] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
	// void ServerCurrentMontageSetPlayRate(class UAnimSequenceBase* ClientAnimation, float InPlayRate);                        // [0x6555000] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
	// void ServerCurrentMontageSetNextSectionName(class UAnimSequenceBase* ClientAnimation, float ClientPosition, FName SectionName, FName NextSectionName); // [0x6554e70] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
	// void ServerCurrentMontageJumpToSectionName(class UAnimSequenceBase* ClientAnimation, FName SectionName);                 // [0x6554d60] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
	// void ServerCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);     // [0x6554c30] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
	// void ServerAbilityRPCBatch(FServerAbilityRPCBatch BatchInfo);                                                            // [0x65549e0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
	// void RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove); // [0x6554160] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
	// bool RemoveActiveGameplayEffect(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);                             // [0x6554080] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
	// int32_t RemoveActiveEffectsWithTags(FGameplayTagContainer Tags);                                                         // [0x6553f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
	// int32_t RemoveActiveEffectsWithSourceTags(FGameplayTagContainer Tags);                                                   // [0x6553dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
	// int32_t RemoveActiveEffectsWithGrantedTags(FGameplayTagContainer Tags);                                                  // [0x6553c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
	// int32_t RemoveActiveEffectsWithAppliedTags(FGameplayTagContainer Tags);                                                  // [0x6553c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ReleaseInputID
	// void ReleaseInputID(int32_t InputID);                                                                                    // [0x6553bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.PressInputID
	// void PressInputID(int32_t InputID);                                                                                      // [0x6553b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnSpawnedAttributesEndPlayed
	// void OnSpawnedAttributesEndPlayed(class AActor* InActor, TEnumAsByte<EEndPlayReason> EndPlayReason);                     // [0x6553680] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_SpawnedAttributes
	// void OnRep_SpawnedAttributes(TArray<UAttributeSet*>& PreviousSpawnedAttributes);                                         // [0x6553560] Final|Native|Private|HasOutParms 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
	// void OnRep_ServerDebugString();                                                                                          // [0x6553540] Native|Public        
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
	// void OnRep_ReplicatedAnimMontage();                                                                                      // [0x6553520] Native|Protected     
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
	// void OnRep_OwningActor();                                                                                                // [0x6553480] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
	// void OnRep_ClientDebugString();                                                                                          // [0x5972690] Native|Public        
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
	// void OnRep_ActivateAbilities();                                                                                          // [0x6553460] Native|Protected     
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnOwnerActorDestroyed
	// void OnOwnerActorDestroyed(class AActor* InActor);                                                                       // [0x6553380] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnAvatarActorDestroyed
	// void OnAvatarActorDestroyed(class AActor* InActor);                                                                      // [0x65526c0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
	// void NetMulticast_InvokeGameplayCuesExecuted_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x6551de0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
	// void NetMulticast_InvokeGameplayCuesExecuted(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x6551bf0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
	// void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x6551960] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
	// void NetMulticast_InvokeGameplayCueExecuted_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x6551720] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
	// void NetMulticast_InvokeGameplayCueExecuted_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey);      // [0x6551500] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
	// void NetMulticast_InvokeGameplayCueExecuted(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x6551370] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
	// void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x6550ef0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
	// void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey); // [0x6550df0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
	// void NetMulticast_InvokeGameplayCueAdded_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters); // [0x6551130] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
	// void NetMulticast_InvokeGameplayCueAdded(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x6550c60] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
	// FGameplayEffectSpecHandle MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, FGameplayEffectContextHandle Context); // [0x6550330] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.MakeEffectContext
	// FGameplayEffectContextHandle MakeEffectContext();                                                                        // [0x654f680] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_InitStats
	// void K2_InitStats(class UClass* Attributes, class UDataTable* DataTable);                                                // [0x654f510] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_GiveAbilityAndActivateOnce
	// FGameplayAbilitySpecHandle K2_GiveAbilityAndActivateOnce(class UClass* AbilityClass, int32_t Level, int32_t InputID);    // [0x654f260] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_GiveAbility
	// FGameplayAbilitySpecHandle K2_GiveAbility(class UClass* AbilityClass, int32_t Level, int32_t InputID);                   // [0x654f0b0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
	// bool IsGameplayCueActive(FGameplayTag GameplayCueTag);                                                                   // [0x654eba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.InputConfirm
	// void InputConfirm();                                                                                                     // [0x5886f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.InputCancel
	// void InputCancel();                                                                                                      // [0x654eb80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
	// bool GetUserAbilityActivationInhibited();                                                                                // [0x654e9a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayTagCount
	// int32_t GetGameplayTagCount(FGameplayTag GameplayTag);                                                                   // [0x654d710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
	// float GetGameplayEffectMagnitude(FActiveGameplayEffectHandle Handle, FGameplayAttribute Attribute);                      // [0x654d390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount_IfLoaded
	// int32_t GetGameplayEffectCount_IfLoaded(TSoftObjectPtr<UClass*> SoftSourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // [0x654cfe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
	// int32_t GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // [0x654cda0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayAttributeValue
	// float GetGameplayAttributeValue(FGameplayAttribute Attribute, bool& bFound);                                             // [0x654c450] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetAttributeSet
	// class UAttributeSet* GetAttributeSet(class UClass* AttributeSetClass);                                                   // [0x654b5b0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetAllAttributes
	// void GetAllAttributes(TArray<FGameplayAttribute>& OutAttributes);                                                        // [0x654b200] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetAllAbilities
	// void GetAllAbilities(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles);                                             // [0x654aea0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags
	// TArray<FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(FGameplayTagContainer Tags);                             // [0x6549f30] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffects
	// TArray<FActiveGameplayEffectHandle> GetActiveEffects(FGameplayEffectQuery& Query);                                       // [0x6549e20] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithTags
	// void FindAllAbilitiesWithTags(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, FGameplayTagContainer Tags, bool bExactMatch); // [0x6549260] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithInputID
	// void FindAllAbilitiesWithInputID(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, int32_t InputID);                // [0x65490e0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesMatchingQuery
	// void FindAllAbilitiesMatchingQuery(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, FGameplayTagQuery Query);      // [0x6548eb0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
	// void ClientTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate);                                             // [0x6545ac0] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
	// void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey); // [0x6545990] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
	// void ClientPrintDebug_Response(TArray<FString> Strings, int32_t GameFlags);                                              // [0x6545880] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientEndAbility
	// void ClientEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo);           // [0x6545780] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
	// void ClientCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);     // [0x6545680] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
	// void ClientActivateAbilitySucceedWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // [0x6545430] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
	// void ClientActivateAbilitySucceed(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey);           // [0x6545340] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
	// void ClientActivateAbilityFailed(FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey);                   // [0x6545260] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClearAllAbilitiesWithInputID
	// void ClearAllAbilitiesWithInputID(int32_t InputID);                                                                      // [0x65451d0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClearAllAbilities
	// void ClearAllAbilities();                                                                                                // [0x65451b0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClearAbility
	// void ClearAbility(FGameplayAbilitySpecHandle& Handle);                                                                   // [0x6545110] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, FGameplayEffectContextHandle Context); // [0x6543f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, FGameplayEffectContextHandle EffectContext); // [0x6543be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle& SpecHandle, class UAbilitySystemComponent* Target); // [0x6543a60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(FGameplayEffectSpecHandle& SpecHandle);                     // [0x6543940] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
	// void AbilityConfirmOrCancel__DelegateSignature();                                                                        // [0x35d7f00] MulticastDelegate|Public|Delegate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
	// void AbilityAbilityKey__DelegateSignature(int32_t InputID);                                                              // [0x35d7f00] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAbilitySystemDebugHUDExtension : public UObject
{ 
public:
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension_Tags
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UAbilitySystemDebugHUDExtension_Tags : public UAbilitySystemDebugHUDExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension_Attributes
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UAbilitySystemDebugHUDExtension_Attributes : public UAbilitySystemDebugHUDExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension_BlockedAbilityTags
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UAbilitySystemDebugHUDExtension_BlockedAbilityTags : public UAbilitySystemDebugHUDExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Struct /Script/GameplayAbilities.NetSerializeScriptStructCache
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNetSerializeScriptStructCache
{ 
	TArray<class UScriptStruct*>                       ScriptStructs;                                              // 0x0000   (0x0010)  
};

/// Class /Script/GameplayAbilities.AbilitySystemGlobals
/// Size: 0x02F8 (760 bytes) (0x000028 - 0x0002F8) align 8 MaxSize: 0x02F8
class UAbilitySystemGlobals : public UObject
{ 
public:
	FSoftClassPath                                     AbilitySystemGlobalsClassName;                              // 0x0028   (0x0020)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0048   (0x0028)  MISSED
	bool                                               bUseDebugTargetFromHud;                                     // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	FGameplayTag                                       ActivateFailIsDeadTag;                                      // 0x0074   (0x0008)  
	FName                                              ActivateFailIsDeadName;                                     // 0x007C   (0x0008)  
	FGameplayTag                                       ActivateFailCooldownTag;                                    // 0x0084   (0x0008)  
	FName                                              ActivateFailCooldownName;                                   // 0x008C   (0x0008)  
	FGameplayTag                                       ActivateFailCostTag;                                        // 0x0094   (0x0008)  
	FName                                              ActivateFailCostName;                                       // 0x009C   (0x0008)  
	FGameplayTag                                       ActivateFailTagsBlockedTag;                                 // 0x00A4   (0x0008)  
	FName                                              ActivateFailTagsBlockedName;                                // 0x00AC   (0x0008)  
	FGameplayTag                                       ActivateFailTagsMissingTag;                                 // 0x00B4   (0x0008)  
	FName                                              ActivateFailTagsMissingName;                                // 0x00BC   (0x0008)  
	FGameplayTag                                       ActivateFailNetworkingTag;                                  // 0x00C4   (0x0008)  
	FName                                              ActivateFailNetworkingName;                                 // 0x00CC   (0x0008)  
	int32_t                                            MinimalReplicationTagCountBits;                             // 0x00D4   (0x0004)  
	FNetSerializeScriptStructCache                     TargetDataStructCache;                                      // 0x00D8   (0x0010)  
	FNetSerializeScriptStructCache                     EffectContextStructCache;                                   // 0x00E8   (0x0010)  
	bool                                               bAllowGameplayModEvaluationChannels;                        // 0x00F8   (0x0001)  
	EGameplayModEvaluationChannel                      DefaultGameplayModEvaluationChannel;                        // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x00FA   (0x0002)  MISSED
	FName                                              GameplayModEvaluationChannelAliases[10];                    // 0x00FC   (0x0050)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x014C   (0x0004)  MISSED
	FSoftObjectPath                                    GlobalCurveTableName;                                       // 0x0150   (0x0020)  
	class UCurveTable*                                 GlobalCurveTable;                                           // 0x0170   (0x0008)  
	FSoftObjectPath                                    GlobalAttributeMetaDataTableName;                           // 0x0178   (0x0020)  
	class UDataTable*                                  GlobalAttributeMetaDataTable;                               // 0x0198   (0x0008)  
	FSoftObjectPath                                    GlobalAttributeSetDefaultsTableName;                        // 0x01A0   (0x0020)  
	TArray<FSoftObjectPath>                            GlobalAttributeSetDefaultsTableNames;                       // 0x01C0   (0x0010)  
	TArray<class UCurveTable*>                         GlobalAttributeDefaultsTables;                              // 0x01D0   (0x0010)  
	FSoftObjectPath                                    GlobalGameplayCueManagerClass;                              // 0x01E0   (0x0020)  
	FSoftObjectPath                                    GlobalGameplayCueManagerName;                               // 0x0200   (0x0020)  
	TArray<FString>                                    GameplayCueNotifyPaths;                                     // 0x0220   (0x0010)  
	FSoftObjectPath                                    GameplayTagResponseTableName;                               // 0x0230   (0x0020)  
	class UGameplayTagReponseTable*                    GameplayTagResponseTable;                                   // 0x0250   (0x0008)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x0258   (0x0001)  MISSED
	bool                                               PredictTargetGameplayEffects;                               // 0x0259   (0x0001)  
	bool                                               ReplicateActivationOwnedTags;                               // 0x025A   (0x0001)  
	unsigned char                                      UnknownData05_6[0x5];                                       // 0x025B   (0x0005)  MISSED
	class UGameplayCueManager*                         GlobalGameplayCueManager;                                   // 0x0260   (0x0008)  
	unsigned char                                      UnknownData06_7[0x90];                                      // 0x0268   (0x0090)  MISSED
};

/// Class /Script/GameplayAbilities.AbilitySystemInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAbilitySystemInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayAbilities.AbilitySystemReplicationProxyInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAbilitySystemReplicationProxyInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayAbilities.AttributeSet
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UAttributeSet : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.AbilitySystemTestAttributeSet
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UAbilitySystemTestAttributeSet : public UAttributeSet
{ 
public:
	float                                              MaxHealth;                                                  // 0x0030   (0x0004)  
	float                                              Health;                                                     // 0x0034   (0x0004)  
	float                                              Mana;                                                       // 0x0038   (0x0004)  
	float                                              MaxMana;                                                    // 0x003C   (0x0004)  
	float                                              damage;                                                     // 0x0040   (0x0004)  
	float                                              SpellDamage;                                                // 0x0044   (0x0004)  
	float                                              PhysicalDamage;                                             // 0x0048   (0x0004)  
	float                                              critChance;                                                 // 0x004C   (0x0004)  
	float                                              CritMultiplier;                                             // 0x0050   (0x0004)  
	float                                              ArmorDamageReduction;                                       // 0x0054   (0x0004)  
	float                                              DodgeChance;                                                // 0x0058   (0x0004)  
	float                                              LifeSteal;                                                  // 0x005C   (0x0004)  
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              StackingAttribute1;                                         // 0x0064   (0x0004)  
	float                                              StackingAttribute2;                                         // 0x0068   (0x0004)  
	float                                              NoStackAttribute;                                           // 0x006C   (0x0004)  
};

/// Class /Script/GameplayAbilities.AbilitySystemTestPawn
/// Size: 0x0360 (864 bytes) (0x000340 - 0x000360) align 8 MaxSize: 0x0360
class AAbilitySystemTestPawn : public ADefaultPawn
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0340   (0x0018)  MISSED
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                     // 0x0358   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayCueTag
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGameplayCueTag
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x0000   (0x0008)  
};

/// Class /Script/GameplayAbilities.AnimNotify_GameplayCue
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UAnimNotify_GameplayCue : public UAnimNotify
{ 
public:
	FGameplayCueTag                                    GameplayCue;                                                // 0x0038   (0x0008)  
};

/// Class /Script/GameplayAbilities.AnimNotify_GameplayCueState
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UAnimNotify_GameplayCueState : public UAnimNotifyState
{ 
public:
	FGameplayCueTag                                    GameplayCue;                                                // 0x0030   (0x0008)  
};

/// Class /Script/GameplayAbilities.GameplayAbilityBlueprint
/// Size: 0x00A8 (168 bytes) (0x0000A8 - 0x0000A8) align 8 MaxSize: 0x00A8
class UGameplayAbilityBlueprint : public UBlueprint
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayCueFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayCueFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueFunctionLibrary.RemoveGameplayCueOnActor
	// void RemoveGameplayCueOnActor(class AActor* Target, FGameplayTag GameplayCueTag, FGameplayCueParameters& Parameters);    // [0x65a4a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayCueFunctionLibrary.MakeGameplayCueParametersFromHitResult
	// FGameplayCueParameters MakeGameplayCueParametersFromHitResult(FHitResult& HitResult);                                    // [0x65a3b10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.GameplayCueFunctionLibrary.ExecuteGameplayCueOnActor
	// void ExecuteGameplayCueOnActor(class AActor* Target, FGameplayTag GameplayCueTag, FGameplayCueParameters& Parameters);   // [0x65a38d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayCueFunctionLibrary.AddGameplayCueOnActor
	// void AddGameplayCueOnActor(class AActor* Target, FGameplayTag GameplayCueTag, FGameplayCueParameters& Parameters);       // [0x65a3450] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayCueInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayCueInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
	// void ForwardGameplayCueToParent();                                                                                       // [0x5ae6e70] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
	// void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters);               // [0x35d7f00] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/GameplayAbilities.GameplayCueObjectLibrary
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGameplayCueObjectLibrary
{ 
	TArray<FString>                                    Paths;                                                      // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0010   (0x0020)  MISSED
	class UObjectLibrary*                              ActorObjectLibrary;                                         // 0x0030   (0x0008)  
	class UObjectLibrary*                              StaticObjectLibrary;                                        // 0x0038   (0x0008)  
	class UGameplayCueSet*                             CueSet;                                                     // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0048   (0x0004)  MISSED
	bool                                               bShouldSyncScan;                                            // 0x004C   (0x0001)  
	bool                                               bShouldAsyncLoad;                                           // 0x004D   (0x0001)  
	bool                                               bShouldSyncLoad;                                            // 0x004E   (0x0001)  
	bool                                               bHasBeenInitialized;                                        // 0x004F   (0x0001)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecForRPC
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FGameplayEffectSpecForRPC
{ 
	class UGameplayEffect*                             Def;                                                        // 0x0000   (0x0008)  
	TArray<FGameplayEffectModifiedAttribute>           ModifiedAttributes;                                         // 0x0008   (0x0010)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0018   (0x0018)  
	FGameplayTagContainer                              AggregatedSourceTags;                                       // 0x0030   (0x0020)  
	FGameplayTagContainer                              AggregatedTargetTags;                                       // 0x0050   (0x0020)  
	float                                              Level;                                                      // 0x0070   (0x0004)  
	float                                              AbilityLevel;                                               // 0x0074   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayCuePendingExecute
/// Size: 0x0188 (392 bytes) (0x000000 - 0x000188) align 8 MaxSize: 0x0188
struct FGameplayCuePendingExecute
{ 
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0000   (0x0018)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0018   (0x0010)  
	EGameplayCuePayloadType                            PayloadType;                                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	class UAbilitySystemComponent*                     OwningComponent;                                            // 0x0030   (0x0008)  
	FGameplayEffectSpecForRPC                          FromSpec;                                                   // 0x0038   (0x0078)  
	FGameplayCueParameters                             CueParameters;                                              // 0x00B0   (0x00D8)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotifyActorArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayCueNotifyActorArray
{ 
	TArray<class AGameplayCueNotify_Actor*>            Actors;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/GameplayAbilities.PreallocationInfo
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FPreallocationInfo
{ 
	TMap<class UClass*, FGameplayCueNotifyActorArray>  PreallocatedInstances;                                      // 0x0000   (0x0050)  
	TArray<class UClass*>                              ClassesNeedingPreallocation;                                // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueManager
/// Size: 0x02C0 (704 bytes) (0x000030 - 0x0002C0) align 8 MaxSize: 0x02C0
class UGameplayCueManager : public UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0030   (0x0018)  MISSED
	FGameplayCueObjectLibrary                          RuntimeGameplayCueObjectLibrary;                            // 0x0048   (0x0050)  
	FGameplayCueObjectLibrary                          EditorGameplayCueObjectLibrary;                             // 0x0098   (0x0050)  
	unsigned char                                      UnknownData01_6[0x178];                                     // 0x00E8   (0x0178)  MISSED
	TArray<class UClass*>                              LoadedGameplayCueNotifyClasses;                             // 0x0260   (0x0010)  
	TArray<class UClass*>                              GameplayCueClassesForPreallocation;                         // 0x0270   (0x0010)  
	TArray<FGameplayCuePendingExecute>                 PendingExecuteCues;                                         // 0x0280   (0x0010)  
	int32_t                                            GameplayCueSendContextCount;                                // 0x0290   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0294   (0x0004)  MISSED
	TArray<FPreallocationInfo>                         PreallocationInfoList_Internal;                             // 0x0298   (0x0010)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x02A8   (0x0018)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Actor
/// Size: 0x0300 (768 bytes) (0x000290 - 0x000300) align 8 MaxSize: 0x0300
class AGameplayCueNotify_Actor : public AActor
{ 
public:
	bool                                               bAutoDestroyOnRemove;                                       // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0291   (0x0003)  MISSED
	float                                              AutoDestroyDelay;                                           // 0x0294   (0x0004)  
	bool                                               WarnIfTimelineIsStillRunning;                               // 0x0298   (0x0001)  
	bool                                               WarnIfLatentActionIsStillRunning;                           // 0x0299   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x029A   (0x0002)  MISSED
	FGameplayTag                                       GameplayCueTag;                                             // 0x029C   (0x0008)  
	FName                                              GameplayCueName;                                            // 0x02A4   (0x0008)  
	bool                                               bAutoAttachToOwner;                                         // 0x02AC   (0x0001)  
	bool                                               isOverride;                                                 // 0x02AD   (0x0001)  
	bool                                               bUniqueInstancePerInstigator;                               // 0x02AE   (0x0001)  
	bool                                               bUniqueInstancePerSourceObject;                             // 0x02AF   (0x0001)  
	bool                                               bAllowMultipleOnActiveEvents;                               // 0x02B0   (0x0001)  
	bool                                               bAllowMultipleWhileActiveEvents;                            // 0x02B1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x02B2   (0x0002)  MISSED
	int32_t                                            NumPreallocatedInstances;                                   // 0x02B4   (0x0004)  
	unsigned char                                      UnknownData03_7[0x48];                                      // 0x02B8   (0x0048)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.WhileActive
	// bool WhileActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                            // [0x65a4d00] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnRemove
	// bool OnRemove(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0x65a4650] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
	// void OnOwnerDestroyed(class AActor* DestroyedActor);                                                                     // [0x65a45c0] Native|Public        
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnExecute
	// bool OnExecute(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                              // [0x65a4200] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnActive
	// bool OnActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0x65a3e40] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x35d7f00] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
	// void K2_EndGameplayCue();                                                                                                // [0x5b0aee0] Native|Public|BlueprintCallable 
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SpawnCondition
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FGameplayCueNotify_SpawnCondition
{ 
	EGameplayCueNotify_LocallyControlledSource         LocallyControlledSource;                                    // 0x0000   (0x0001)  
	EGameplayCueNotify_LocallyControlledPolicy         LocallyControlledPolicy;                                    // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              ChanceToPlay;                                               // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,489) /* TArray<TEnumAsByte<EPhysicalSurface>> */ __um(AllowedSurfaceTypes);                   // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	SDK_UNDEFINED(16,490) /* TArray<TEnumAsByte<EPhysicalSurface>> */ __um(RejectedSurfaceTypes);                  // 0x0020   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_PlacementInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FGameplayCueNotify_PlacementInfo
{ 
	FName                                              SocketName;                                                 // 0x0000   (0x0008)  
	EGameplayCueNotify_AttachPolicy                    AttachPolicy;                                               // 0x0008   (0x0001)  
	EAttachmentRule                                    AttachmentRule;                                             // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
	bool                                               bOverrideRotation : 1;                                      // 0x000C:0 (0x0001)  
	bool                                               bOverrideScale : 1;                                         // 0x000C:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FRotator                                           RotationOverride;                                           // 0x0010   (0x0018)  
	FVector                                            ScaleOverride;                                              // 0x0028   (0x0018)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_ParticleInfo
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FGameplayCueNotify_ParticleInfo
{ 
	FGameplayCueNotify_SpawnCondition                  SpawnConditionOverride;                                     // 0x0000   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   PlacementInfoOverride;                                      // 0x0038   (0x0040)  
	class UNiagaraSystem*                              NiagaraSystem;                                              // 0x0078   (0x0008)  
	bool                                               bOverrideSpawnCondition : 1;                                // 0x0080:0 (0x0001)  
	bool                                               bOverridePlacementInfo : 1;                                 // 0x0080:1 (0x0001)  
	bool                                               bCastShadow : 1;                                            // 0x0080:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SoundParameterInterfaceInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGameplayCueNotify_SoundParameterInterfaceInfo
{ 
	FName                                              StopTriggerName;                                            // 0x0000   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SoundInfo
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FGameplayCueNotify_SoundInfo
{ 
	FGameplayCueNotify_SpawnCondition                  SpawnConditionOverride;                                     // 0x0000   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   PlacementInfoOverride;                                      // 0x0038   (0x0040)  
	class USoundBase*                                  sound;                                                      // 0x0078   (0x0008)  
	class USoundBase*                                  SoundCue;                                                   // 0x0080   (0x0008)  
	float                                              LoopingFadeOutDuration;                                     // 0x0088   (0x0004)  
	float                                              LoopingFadeVolumeLevel;                                     // 0x008C   (0x0004)  
	FGameplayCueNotify_SoundParameterInterfaceInfo     SoundParameterInterfaceInfo;                                // 0x0090   (0x0008)  
	bool                                               bOverrideSpawnCondition : 1;                                // 0x0098:0 (0x0001)  
	bool                                               bOverridePlacementInfo : 1;                                 // 0x0098:1 (0x0001)  
	bool                                               bUseSoundParameterInterface : 1;                            // 0x0098:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_CameraShakeInfo
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FGameplayCueNotify_CameraShakeInfo
{ 
	FGameplayCueNotify_SpawnCondition                  SpawnConditionOverride;                                     // 0x0000   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   PlacementInfoOverride;                                      // 0x0038   (0x0040)  
	class UClass*                                      CameraShake;                                                // 0x0078   (0x0008)  
	float                                              ShakeScale;                                                 // 0x0080   (0x0004)  
	EGameplayCueNotify_EffectPlaySpace                 PlaySpace;                                                  // 0x0084   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0085   (0x0003)  MISSED
	bool                                               bOverrideSpawnCondition : 1;                                // 0x0088:0 (0x0001)  
	bool                                               bOverridePlacementInfo : 1;                                 // 0x0088:1 (0x0001)  
	bool                                               bPlayInWorld : 1;                                           // 0x0088:2 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              WorldInnerRadius;                                           // 0x008C   (0x0004)  
	float                                              WorldOuterRadius;                                           // 0x0090   (0x0004)  
	float                                              WorldFalloffExponent;                                       // 0x0094   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_CameraLensEffectInfo
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FGameplayCueNotify_CameraLensEffectInfo
{ 
	FGameplayCueNotify_SpawnCondition                  SpawnConditionOverride;                                     // 0x0000   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   PlacementInfoOverride;                                      // 0x0038   (0x0040)  
	class UClass*                                      CameraLensEffect;                                           // 0x0078   (0x0008)  
	bool                                               bOverrideSpawnCondition : 1;                                // 0x0080:0 (0x0001)  
	bool                                               bOverridePlacementInfo : 1;                                 // 0x0080:1 (0x0001)  
	bool                                               bPlayInWorld : 1;                                           // 0x0080:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              WorldInnerRadius;                                           // 0x0084   (0x0004)  
	float                                              WorldOuterRadius;                                           // 0x0088   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_ForceFeedbackInfo
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FGameplayCueNotify_ForceFeedbackInfo
{ 
	FGameplayCueNotify_SpawnCondition                  SpawnConditionOverride;                                     // 0x0000   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   PlacementInfoOverride;                                      // 0x0038   (0x0040)  
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                        // 0x0078   (0x0008)  
	FName                                              ForceFeedbackTag;                                           // 0x0080   (0x0008)  
	bool                                               bIsLooping : 1;                                             // 0x0088:0 (0x0001)  
	bool                                               bOverrideSpawnCondition : 1;                                // 0x0088:1 (0x0001)  
	bool                                               bOverridePlacementInfo : 1;                                 // 0x0088:2 (0x0001)  
	bool                                               bPlayInWorld : 1;                                           // 0x0088:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              WorldIntensity;                                             // 0x008C   (0x0004)  
	class UForceFeedbackAttenuation*                   WorldAttenuation;                                           // 0x0090   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_InputDevicePropertyInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayCueNotify_InputDevicePropertyInfo
{ 
	TArray<class UClass*>                              DeviceProperties;                                           // 0x0000   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_DecalInfo
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FGameplayCueNotify_DecalInfo
{ 
	FGameplayCueNotify_SpawnCondition                  SpawnConditionOverride;                                     // 0x0000   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   PlacementInfoOverride;                                      // 0x0038   (0x0040)  
	class UMaterialInterface*                          DecalMaterial;                                              // 0x0078   (0x0008)  
	FVector                                            DecalSize;                                                  // 0x0080   (0x0018)  
	bool                                               bOverrideSpawnCondition : 1;                                // 0x0098:0 (0x0001)  
	bool                                               bOverridePlacementInfo : 1;                                 // 0x0098:1 (0x0001)  
	bool                                               bOverrideFadeOut : 1;                                       // 0x0098:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0099   (0x0003)  MISSED
	float                                              FadeOutStartDelay;                                          // 0x009C   (0x0004)  
	float                                              FadeOutDuration;                                            // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_BurstEffects
/// Size: 0x0298 (664 bytes) (0x000000 - 0x000298) align 8 MaxSize: 0x0298
struct FGameplayCueNotify_BurstEffects
{ 
	TArray<FGameplayCueNotify_ParticleInfo>            BurstParticles;                                             // 0x0000   (0x0010)  
	TArray<FGameplayCueNotify_SoundInfo>               BurstSounds;                                                // 0x0010   (0x0010)  
	FGameplayCueNotify_CameraShakeInfo                 BurstCameraShake;                                           // 0x0020   (0x0098)  
	FGameplayCueNotify_CameraLensEffectInfo            BurstCameraLensEffect;                                      // 0x00B8   (0x0090)  
	FGameplayCueNotify_ForceFeedbackInfo               BurstForceFeedback;                                         // 0x0148   (0x0098)  
	FGameplayCueNotify_InputDevicePropertyInfo         BurstDevicePropertyEffect;                                  // 0x01E0   (0x0010)  
	FGameplayCueNotify_DecalInfo                       BurstDecal;                                                 // 0x01F0   (0x00A8)  
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Burst
/// Size: 0x0350 (848 bytes) (0x000040 - 0x000350) align 8 MaxSize: 0x0350
class UGameplayCueNotify_Burst : public UGameplayCueNotify_Static
{ 
public:
	FGameplayCueNotify_SpawnCondition                  DefaultSpawnCondition;                                      // 0x0040   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   DefaultPlacementInfo;                                       // 0x0078   (0x0040)  
	FGameplayCueNotify_BurstEffects                    BurstEffects;                                               // 0x00B8   (0x0298)  


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Burst.OnBurst
	// void OnBurst(class AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);    // [0x35d7f00] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SpawnResult
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FGameplayCueNotify_SpawnResult
{ 
	TArray<class UFXSystemComponent*>                  FxSystemComponents;                                         // 0x0000   (0x0010)  
	TArray<class UAudioComponent*>                     AudioComponents;                                            // 0x0010   (0x0010)  
	TArray<class UCameraShakeBase*>                    CameraShakes;                                               // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,491) /* TArray<TScriptInterface<Class>> */ __um(CameraLensEffects);                           // 0x0030   (0x0010)  
	class UForceFeedbackComponent*                     ForceFeedbackComponent;                                     // 0x0040   (0x0008)  
	class APlayerController*                           ForceFeedbackTargetPC;                                      // 0x0048   (0x0008)  
	class UDecalComponent*                             DecalComponent;                                             // 0x0050   (0x0008)  
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_BurstLatent
/// Size: 0x0668 (1640 bytes) (0x000300 - 0x000668) align 8 MaxSize: 0x0668
class AGameplayCueNotify_BurstLatent : public AGameplayCueNotify_Actor
{ 
public:
	FGameplayCueNotify_SpawnCondition                  DefaultSpawnCondition;                                      // 0x0300   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   DefaultPlacementInfo;                                       // 0x0338   (0x0040)  
	FGameplayCueNotify_BurstEffects                    BurstEffects;                                               // 0x0378   (0x0298)  
	FGameplayCueNotify_SpawnResult                     BurstSpawnResults;                                          // 0x0610   (0x0058)  


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_BurstLatent.OnBurst
	// void OnBurst(class AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);    // [0x35d7f00] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_HitImpact
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{ 
public:
	class USoundBase*                                  sound;                                                      // 0x0040   (0x0008)  
	class UParticleSystem*                             ParticleSystem;                                             // 0x0048   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_LoopingEffects
/// Size: 0x01F0 (496 bytes) (0x000000 - 0x0001F0) align 8 MaxSize: 0x01F0
struct FGameplayCueNotify_LoopingEffects
{ 
	TArray<FGameplayCueNotify_ParticleInfo>            LoopingParticles;                                           // 0x0000   (0x0010)  
	TArray<FGameplayCueNotify_SoundInfo>               LoopingSounds;                                              // 0x0010   (0x0010)  
	FGameplayCueNotify_CameraShakeInfo                 LoopingCameraShake;                                         // 0x0020   (0x0098)  
	FGameplayCueNotify_CameraLensEffectInfo            LoopingCameraLensEffect;                                    // 0x00B8   (0x0090)  
	FGameplayCueNotify_ForceFeedbackInfo               LoopingForceFeedback;                                       // 0x0148   (0x0098)  
	FGameplayCueNotify_InputDevicePropertyInfo         LoopingInputDevicePropertyEffect;                           // 0x01E0   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Looping
/// Size: 0x0E98 (3736 bytes) (0x000300 - 0x000E98) align 8 MaxSize: 0x0E98
class AGameplayCueNotify_Looping : public AGameplayCueNotify_Actor
{ 
public:
	FGameplayCueNotify_SpawnCondition                  DefaultSpawnCondition;                                      // 0x0300   (0x0038)  
	FGameplayCueNotify_PlacementInfo                   DefaultPlacementInfo;                                       // 0x0338   (0x0040)  
	FGameplayCueNotify_BurstEffects                    ApplicationEffects;                                         // 0x0378   (0x0298)  
	FGameplayCueNotify_SpawnResult                     ApplicationSpawnResults;                                    // 0x0610   (0x0058)  
	FGameplayCueNotify_LoopingEffects                  LoopingEffects;                                             // 0x0668   (0x01F0)  
	FGameplayCueNotify_SpawnResult                     LoopingSpawnResults;                                        // 0x0858   (0x0058)  
	FGameplayCueNotify_BurstEffects                    RecurringEffects;                                           // 0x08B0   (0x0298)  
	FGameplayCueNotify_SpawnResult                     RecurringSpawnResults;                                      // 0x0B48   (0x0058)  
	FGameplayCueNotify_BurstEffects                    RemovalEffects;                                             // 0x0BA0   (0x0298)  
	FGameplayCueNotify_SpawnResult                     RemovalSpawnResults;                                        // 0x0E38   (0x0058)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0E90   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnRemoval
	// void OnRemoval(class AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);  // [0x35d7f00] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnRecurring
	// void OnRecurring(class AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // [0x35d7f00] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnLoopingStart
	// void OnLoopingStart(class AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // [0x35d7f00] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnApplication
	// void OnApplication(class AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // [0x35d7f00] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Struct /Script/GameplayAbilities.GameplayCueNotifyData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FGameplayCueNotifyData
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x0000   (0x0008)  
	FSoftObjectPath                                    GameplayCueNotifyObj;                                       // 0x0008   (0x0020)  
	class UClass*                                      LoadedGameplayCueClass;                                     // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueSet
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UGameplayCueSet : public UDataAsset
{ 
public:
	TArray<FGameplayCueNotifyData>                     GameplayCueData;                                            // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0040   (0x0050)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueTranslator
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayCueTranslator : public UObject
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayCueTranslator_Test
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayEffectCalculation
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UGameplayEffectCalculation : public UObject
{ 
public:
	TArray<FGameplayEffectAttributeCaptureDefinition>  RelevantAttributesToCapture;                                // 0x0028   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayEffectCustomApplicationRequirement
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayEffectCustomApplicationRequirement : public UObject
{ 
public:


	/// Functions
	// Function /Script/GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
	// bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC); // [0x65c6b60] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayEffectExecutionCalculation
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{ 
public:
	bool                                               bRequiresPassedInTags;                                      // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayEffectExecutionCalculation.Execute
	// void Execute(FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput); // [0x65c6cc0] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayModMagnitudeCalculation
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{ 
public:
	bool                                               bAllowNonNetAuthorityDependencyRegistration;                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.K2_GetCapturedAttributeMagnitude
	// float K2_GetCapturedAttributeMagnitude(FGameplayEffectSpec& EffectSpec, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags); // [0x65c7660] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetSpecTags
	// FGameplayTagContainer GetTargetSpecTags(FGameplayEffectSpec& EffectSpec);                                                // [0x65c7580] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetAggregatedTags
	// FGameplayTagContainer GetTargetAggregatedTags(FGameplayEffectSpec& EffectSpec);                                          // [0x65c7450] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetActorTags
	// FGameplayTagContainer GetTargetActorTags(FGameplayEffectSpec& EffectSpec);                                               // [0x65c7370] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceSpecTags
	// FGameplayTagContainer GetSourceSpecTags(FGameplayEffectSpec& EffectSpec);                                                // [0x65c7290] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceAggregatedTags
	// FGameplayTagContainer GetSourceAggregatedTags(FGameplayEffectSpec& EffectSpec);                                          // [0x65c7170] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceActorTags
	// FGameplayTagContainer GetSourceActorTags(FGameplayEffectSpec& EffectSpec);                                               // [0x65c70a0] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByTag
	// float GetSetByCallerMagnitudeByTag(FGameplayEffectSpec& EffectSpec, FGameplayTag& Tag);                                  // [0x65c6f70] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByName
	// float GetSetByCallerMagnitudeByName(FGameplayEffectSpec& EffectSpec, FName& MagnitudeName);                              // [0x65c6e40] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
	// float CalculateBaseMagnitude(FGameplayEffectSpec& Spec);                                                                 // [0x65c6a80] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Struct /Script/GameplayAbilities.GameplayTagReponsePair
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGameplayTagReponsePair
{ 
	FGameplayTag                                       Tag;                                                        // 0x0000   (0x0008)  
	class UClass*                                      ResponseGameplayEffect;                                     // 0x0008   (0x0008)  
	TArray<class UClass*>                              ResponseGameplayEffects;                                    // 0x0010   (0x0010)  
	int32_t                                            SoftCountCap;                                               // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagResponseTableEntry
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGameplayTagResponseTableEntry
{ 
	FGameplayTagReponsePair                            Positive;                                                   // 0x0000   (0x0028)  
	FGameplayTagReponsePair                            Negative;                                                   // 0x0028   (0x0028)  
};

/// Class /Script/GameplayAbilities.GameplayTagReponseTable
/// Size: 0x0230 (560 bytes) (0x000030 - 0x000230) align 8 MaxSize: 0x0230
class UGameplayTagReponseTable : public UDataAsset
{ 
public:
	TArray<FGameplayTagResponseTableEntry>             Entries;                                                    // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x1F0];                                     // 0x0040   (0x01F0)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
	// void TagResponseEvent(FGameplayTag Tag, int32_t NewCount, class UAbilitySystemComponent* ASC, int32_t idx);              // [0x65c7a60] Final|Native|Protected 
};

/// Struct /Script/GameplayAbilities.MovieSceneGameplayCueKey
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FMovieSceneGameplayCueKey
{ 
	FGameplayCueTag                                    Cue;                                                        // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
	FVector                                            Normal;                                                     // 0x0020   (0x0018)  
	FName                                              AttachSocketName;                                           // 0x0038   (0x0008)  
	float                                              NormalizedMagnitude;                                        // 0x0040   (0x0004)  
	FMovieSceneObjectBindingID                         Instigator;                                                 // 0x0044   (0x0018)  
	FMovieSceneObjectBindingID                         EffectCauser;                                               // 0x005C   (0x0018)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	class UPhysicalMaterial*                           PhysicalMaterial;                                           // 0x0078   (0x0008)  
	int32_t                                            GameplayEffectLevel;                                        // 0x0080   (0x0004)  
	int32_t                                            AbilityLevel;                                               // 0x0084   (0x0004)  
	bool                                               bAttachToBinding;                                           // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.MovieSceneGameplayCueChannel
/// Size: 0x00F8 (248 bytes) (0x000050 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FMovieSceneGameplayCueChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               KeyTimes;                                                   // 0x0050   (0x0010)  
	TArray<FMovieSceneGameplayCueKey>                  KeyValues;                                                  // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_7[0x88];                                      // 0x0070   (0x0088)  MISSED
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueTriggerSection
/// Size: 0x0200 (512 bytes) (0x000108 - 0x000200) align 8 MaxSize: 0x0200
class UMovieSceneGameplayCueTriggerSection : public UMovieSceneHookSection
{ 
public:
	FMovieSceneGameplayCueChannel                      Channel;                                                    // 0x0108   (0x00F8)  
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueSection
/// Size: 0x0198 (408 bytes) (0x000108 - 0x000198) align 8 MaxSize: 0x0198
class UMovieSceneGameplayCueSection : public UMovieSceneHookSection
{ 
public:
	FMovieSceneGameplayCueKey                          Cue;                                                        // 0x0108   (0x0090)  
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueTrack
/// Size: 0x00A8 (168 bytes) (0x000098 - 0x0000A8) align 8 MaxSize: 0x00A8
class UMovieSceneGameplayCueTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0098   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.MovieSceneGameplayCueTrack.SetSequencerTrackHandler
	// void SetSequencerTrackHandler(FDelegateProperty InGameplayCueTrackHandler);                                              // [0x65c79e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.TickableAttributeSetInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTickableAttributeSetInterface : public UInterface
{ 
public:
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecHandle
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayEffectSpecHandle
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectRemovalInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGameplayEffectRemovalInfo
{ 
	bool                                               bPrematureRemoval;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            StackCount;                                                 // 0x0004   (0x0004)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0008   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.ServerAbilityRPCBatch
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FServerAbilityRPCBatch
{ 
	FGameplayAbilitySpecHandle                         AbilitySpecHandle;                                          // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0008   (0x0010)  
	FGameplayAbilityTargetDataHandle                   TargetData;                                                 // 0x0018   (0x0028)  
	bool                                               InputPressed;                                               // 0x0040   (0x0001)  
	bool                                               Ended;                                                      // 0x0041   (0x0001)  
	bool                                               Started;                                                    // 0x0042   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x0043   (0x0005)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetingLocationInfoNetSerializerConfig
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayAbilityTargetingLocationInfoNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxyForNetSerializer
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMinimalGameplayCueReplicationProxyForNetSerializer
{ 
	TArray<FGameplayTag>                               Tags;                                                       // 0x0000   (0x0010)  
	TArray<FVector_NetQuantize>                        Locations;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMapForNetSerializer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMinimalReplicationTagCountMapForNetSerializer
{ 
	TArray<FGameplayTag>                               Tags;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilter
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayTargetDataFilter
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class AActor*                                      SelfActor;                                                  // 0x0008   (0x0008)  
	class UClass*                                      RequiredActorClass;                                         // 0x0010   (0x0008)  
	TEnumAsByte<ETargetDataFilterSelf>                 SelfFilter;                                                 // 0x0018   (0x0001)  
	bool                                               bReverseFilter;                                             // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x001A   (0x0006)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAttributeData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayAttributeData
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	float                                              BaseValue;                                                  // 0x0008   (0x0004)  
	float                                              CurrentValue;                                               // 0x000C   (0x0004)  
};

/// Struct /Script/GameplayAbilities.AttributeMetaData
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FAttributeMetaData : FTableRowBase
{ 
	float                                              BaseValue;                                                  // 0x0008   (0x0004)  
	float                                              MinValue;                                                   // 0x000C   (0x0004)  
	float                                              MaxValue;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            DerivedAttributeInfo;                                       // 0x0018   (0x0010)  
	bool                                               bCanStack;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_LocationInfo
/// Size: 0x0150 (336 bytes) (0x000008 - 0x000150) align 16 MaxSize: 0x0150
struct FGameplayAbilityTargetData_LocationInfo : FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FGameplayAbilityTargetingLocationInfo              SourceLocation;                                             // 0x0010   (0x00A0)  
	FGameplayAbilityTargetingLocationInfo              TargetLocation;                                             // 0x00B0   (0x00A0)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_ActorArray
/// Size: 0x00C0 (192 bytes) (0x000008 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FGameplayAbilityTargetData_ActorArray : FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FGameplayAbilityTargetingLocationInfo              SourceLocation;                                             // 0x0010   (0x00A0)  
	SDK_UNDEFINED(16,492) /* TArray<TWeakObjectPtr<AActor*>> */ __um(TargetActorArray);                            // 0x00B0   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
/// Size: 0x0108 (264 bytes) (0x000008 - 0x000108) align 8 MaxSize: 0x0108
struct FGameplayAbilityTargetData_SingleTargetHit : FGameplayAbilityTargetData
{ 
	FHitResult                                         HitResult;                                                  // 0x0008   (0x00F8)  
	bool                                               bHitReplaced;                                               // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0101   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActorInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FGameplayAbilityActorInfo
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TWeakObjectPtr<class AActor*>                      OwnerActor;                                                 // 0x0008   (0x0008)  
	TWeakObjectPtr<class AActor*>                      AvatarActor;                                                // 0x0010   (0x0008)  
	TWeakObjectPtr<class APlayerController*>           PlayerController;                                           // 0x0018   (0x0008)  
	TWeakObjectPtr<class UAbilitySystemComponent*>     AbilitySystemComponent;                                     // 0x0020   (0x0008)  
	TWeakObjectPtr<class USkeletalMeshComponent*>      SkeletalMeshComponent;                                      // 0x0028   (0x0008)  
	TWeakObjectPtr<class UAnimInstance*>               AnimInstance;                                               // 0x0030   (0x0008)  
	TWeakObjectPtr<class UMovementComponent*>          MovementComponent;                                          // 0x0038   (0x0008)  
	FName                                              AffectedAnimInstanceTag;                                    // 0x0040   (0x0008)  
};

/// Struct /Script/GameplayAbilities.AbilityEndedData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAbilityEndedData
{ 
	class UGameplayAbility*                            AbilityThatEnded;                                           // 0x0000   (0x0008)  
	FGameplayAbilitySpecHandle                         AbilitySpecHandle;                                          // 0x0008   (0x0004)  
	bool                                               bReplicateEndAbility;                                       // 0x000C   (0x0001)  
	bool                                               bWasCancelled;                                              // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/GameplayAbilities.AbilityTaskDebugMessage
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAbilityTaskDebugMessage
{ 
	class UGameplayTask*                               FromTask;                                                   // 0x0000   (0x0008)  
	FString                                            Message;                                                    // 0x0008   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGameplayAbilitySpecHandleAndPredictionKey
{ 
	FGameplayAbilitySpecHandle                         AbilityHandle;                                              // 0x0000   (0x0004)  
	int32_t                                            PredictionKeyAtCreation;                                    // 0x0004   (0x0004)  
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxy
/// Size: 0x0350 (848 bytes) (0x000000 - 0x000350) align 16 MaxSize: 0x0350
struct FMinimalGameplayCueReplicationProxy
{ 
	unsigned char                                      UnknownData00_7[0x340];                                     // 0x0000   (0x0340)  MISSED
	class UAbilitySystemComponent*                     Owner;                                                      // 0x0340   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0348   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNodeIndex
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FGameplayCueTranslatorNodeIndex
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationLink
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameplayCueTranslationLink
{ 
	class UGameplayCueTranslator*                      RulesCDO;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNode
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FGameplayCueTranslatorNode
{ 
	TArray<FGameplayCueTranslationLink>                Links;                                                      // 0x0000   (0x0010)  
	FGameplayCueTranslatorNodeIndex                    CachedIndex;                                                // 0x0010   (0x0004)  
	FGameplayTag                                       CachedGameplayTag;                                          // 0x0014   (0x0008)  
	FName                                              CachedGameplayTagName;                                      // 0x001C   (0x0008)  
	unsigned char                                      UnknownData00_7[0x54];                                      // 0x0024   (0x0054)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationManager
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FGameplayCueTranslationManager
{ 
	TArray<FGameplayCueTranslatorNode>                 TranslationLUT;                                             // 0x0000   (0x0010)  
	TMap<FName, FGameplayCueTranslatorNodeIndex>       TranslationNameToIndexMap;                                  // 0x0010   (0x0050)  
	class UGameplayTagsManager*                        TagManager;                                                 // 0x0060   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0068   (0x0018)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectQuery
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FActiveGameplayEffectQuery
{ 
	unsigned char                                      UnknownData00_2[0x88];                                      // 0x0000   (0x0088)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectVersion
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGameplayEffectVersion
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionParameters
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FGameplayEffectCustomExecutionParameters
{ 
	unsigned char                                      UnknownData00_2[0xF0];                                      // 0x0000   (0x00F0)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayModifierEvaluatedData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGameplayModifierEvaluatedData
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              Magnitude;                                                  // 0x003C   (0x0004)  
	FActiveGameplayEffectHandle                        Handle;                                                     // 0x0040   (0x0008)  
	bool                                               IsValid;                                                    // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionOutput
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameplayEffectCustomExecutionOutput
{ 
	TArray<FGameplayModifierEvaluatedData>             OutputModifiers;                                            // 0x0000   (0x0010)  
	bool                                               bTriggerConditionalGameplayEffects : 1;                     // 0x0010:0 (0x0001)  
	bool                                               bHandledStackCountManually : 1;                             // 0x0010:1 (0x0001)  
	bool                                               bHandledGameplayCuesManually : 1;                           // 0x0010:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectContext
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FGameplayEffectContext
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TWeakObjectPtr<class AActor*>                      Instigator;                                                 // 0x0008   (0x0008)  
	TWeakObjectPtr<class AActor*>                      EffectCauser;                                               // 0x0010   (0x0008)  
	TWeakObjectPtr<class UGameplayAbility*>            AbilityCDO;                                                 // 0x0018   (0x0008)  
	TWeakObjectPtr<class UGameplayAbility*>            AbilityInstanceNotReplicated;                               // 0x0020   (0x0008)  
	int32_t                                            AbilityLevel;                                               // 0x0028   (0x0004)  
	TWeakObjectPtr<class UObject*>                     SourceObject;                                               // 0x002C   (0x0008)  
	TWeakObjectPtr<class UAbilitySystemComponent*>     InstigatorAbilitySystemComponent;                           // 0x0034   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	SDK_UNDEFINED(16,493) /* TArray<TWeakObjectPtr<AActor*>> */ __um(Actors);                                      // 0x0040   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0050   (0x0010)  MISSED
	FVector                                            WorldOrigin;                                                // 0x0060   (0x0018)  
	bool                                               bHasWorldOrigin : 1;                                        // 0x0078:0 (0x0001)  
	bool                                               bReplicateSourceObject : 1;                                 // 0x0078:1 (0x0001)  
	bool                                               bReplicateInstigator : 1;                                   // 0x0078:2 (0x0001)  
	bool                                               bReplicateEffectCauser : 1;                                 // 0x0078:3 (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMapping
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FGameplayTagBlueprintPropertyMapping
{ 
	FGameplayTag                                       TagToMap;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
	FName                                              PropertyName;                                               // 0x0028   (0x0008)  
	FGuid                                              PropertyGuid;                                               // 0x0030   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMap
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayTagBlueprintPropertyMap
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	TArray<FGameplayTagBlueprintPropertyMapping>       PropertyMappings;                                           // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityRepAnimMontageNetSerializerConfig
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayAbilityRepAnimMontageNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextHandleNetSerializerConfig
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
struct FGameplayEffectContextHandleNetSerializerConfig : FPolymorphicStructNetSerializerConfig
{ 
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextNetSerializerConfig
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayEffectContextNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxyNetSerializerConfig
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FMinimalGameplayCueReplicationProxyNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMapNetSerializerConfig
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FMinimalReplicationTagCountMapNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/GameplayAbilities.PredictionKeyNetSerializerConfig
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FPredictionKeyNetSerializerConfig : FNetSerializerConfig
{ 
};

#pragma pack(pop)


