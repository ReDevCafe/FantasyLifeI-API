#ifndef MENU_HPP_
    #define MENU_HPP_

    #include <cstdint>
    #include "Engine/DataTable.hpp"
    #include "Engine/FName.hpp"
    #include "Engine/UObject.hpp"
    #include "Engine/Utils.hpp"
    #include "Engine/Input.hpp"

enum class ESpawnOwnership : uint8_t {
	InnerSequence = 0,
	RootSequence = 1,
	External = 2
};

enum class EAnimLinkMethod : uint8_t
{
	Absolute                                                        = 0,
	Relative                                                        = 1,
	Proportional                                                    = 2
};

enum class EMovieSceneBlendType : uint8_t
{
	Invalid                                                    = 0,
	Absolute                                                   = 1,
	Additive                                                   = 2,
	Relative                                                   = 4,
	AdditiveFromBase                                           = 8
};

enum class EAlphaBlendOption : uint8_t
{
	Linear                                                        = 0,
	Cubic                                                         = 1,
	HermiteCubic                                                  = 2,
	Sinusoidal                                                    = 3,
	QuadraticInOut                                                = 4,
	CubicInOut                                                    = 5,
	QuarticInOut                                                  = 6,
	QuinticInOut                                                  = 7,
	CircularIn                                                    = 8,
	CircularOut                                                   = 9,
	CircularInOut                                                 = 10,
	ExpIn                                                         = 11,
	ExpOut                                                        = 12,
	ExpInOut                                                      = 13,
	Custom                                                        = 14
};

enum class EComponentCreationMethod : uint8_t
{
	Native                                                 = 0,
	SimpleConstructionScript                               = 1,
	UserConstructionScript                                 = 2,
	Instance                                               = 3
};

enum class EBoneTranslationRetargetingMode : uint8_t
{
	Animation                                       = 0,
	Skeleton                                        = 1,
	AnimationScaled                                 = 2,
	AnimationRelative                               = 3,
	OrientAndScale                                  = 4
};

enum class ETimelineLengthMode : uint8_t
{
	TimelineLength                                                                = 0,
	LastKeyFrame                                                                  = 1
};

enum class ETickingGroup : uint8_t
{
	PrePhysics                                                                    = 0,
	StartPhysics                                                                  = 1,
	DuringPhysics                                                                 = 2,
	EndPhysics                                                                    = 3,
	PostPhysics                                                                   = 4,
	PostUpdateWork                                                                = 5,
	LastDemotable                                                                 = 6,
	NewlySpawned                                                                  = 7
};

enum class EWidgetAttachType : uint8_t
{
	LOCATOR                                                       = 0,
	ATTACH_TO_LOCATOR                                             = 1,
	ATTACH_TO_POS                                                 = 2
};

enum class EMenuHiddenType : uint8_t
{
	Hidden                                                          = 0,
	Collapsed                                                       = 1
};

enum class EMenuVisibleType : uint8_t
{
	Visible                                                        = 0,
	HitTestInvisible                                               = 1,
	SelfHitTestInvisible                                           = 2
};

enum class EEasingFunc : uint8_t
{
	Linear                                                              = 0,
	Step                                                                = 1,
	SinusoidalIn                                                        = 2,
	SinusoidalOut                                                       = 3,
	SinusoidalInOut                                                     = 4,
	EaseIn                                                              = 5,
	EaseOut                                                             = 6,
	EaseInOut                                                           = 7,
	ExpoIn                                                              = 8,
	ExpoOut                                                             = 9,
	ExpoInOut                                                           = 10,
	CircularIn                                                          = 11,
	CircularOut                                                         = 12,
	CircularInOut                                                       = 13
};

enum class ETransitionLogicType : uint8_t
{
	StandardBlend                                          = 0,
	Inertialization                                        = 1,
	Custom                                                 = 2
};

enum class EWidgetMoveType : uint8_t
{
	IMMEDIATE                                                       = 0,
	EASING                                                          = 1,
	MOVE_TYPE_NUM                                                   = 2
};

enum class EWidgetAttachSubType : uint8_t
{
	FINGER_CURSOR                                              = 0,
	WINDOW_CURSOR                                              = 1,
	NO_SUBTYPE                                                 = 2
};

enum class EWidgetTickFrequency : uint8_t
{
	Never                                                      = 0,
	Auto                                                       = 1
};

enum class EWidgetAnimationEvent : uint8_t
{
	Started                                                   = 0,
	Finished                                                  = 1
};

enum class EUINavigationRule : uint8_t
{
	Escape                                                        = 0,
	Explicit                                                      = 1,
	Wrap                                                          = 2,
	Stop                                                          = 3,
	Custom                                                        = 4,
	CustomBoundary                                                = 5,
	Invalid                                                       = 6
};

enum class EWidgetPixelSnapping : uint8_t
{
	Inherit                                                    = 0,
	Disabled                                                   = 1,
	SnapToPixel                                                = 2
};

enum class ESlateVisibility : uint8_t
{
	Visible                                                        = 0,
	Collapsed                                                      = 1,
	Hidden                                                         = 2,
	HitTestInvisible                                               = 3,
	SelfHitTestInvisible                                           = 4
};

enum class EEvaluationMethod : uint8_t
{
	Static                                                        = 0,
	Swept                                                         = 1
};

enum class EMouseCursor : uint8_t
{
	None                                                               = 0,
	Default                                                            = 1,
	TextEditBeam                                                       = 2,
	ResizeLeftRight                                                    = 3,
	ResizeUpDown                                                       = 4,
	ResizeSouthEast                                                    = 5,
	ResizeSouthWest                                                    = 6,
	CardinalCross                                                      = 7,
	Crosshairs                                                         = 8,
	Hand                                                               = 9,
	GrabHand                                                           = 10,
	GrabHandClosed                                                     = 11,
	SlashedCircle                                                      = 12,
	EyeDropper                                                         = 13
};

enum class EMovieSceneServerClientMask : uint8_t
{
	None                                                = 0,
	Server                                              = 1,
	Client                                              = 2,
	All                                                 = 3
};

enum class EFlowDirectionPreference : uint8_t
{
	Inherit                                                = 0,
	Culture                                                = 1,
	LeftToRight                                            = 2,
	RightToLeft                                            = 3
};


enum class ESectionEvaluationFlags : uint8_t
{
	None = 0,
	PreRoll = 1,
	PostRoll = 2,
	ForceKeepState = 4,
	ForceRestoreState = 8
};

enum class EMovieSceneSubSectionFlags : uint8_t
{
	None                                                 = 0,
	OverrideKeepState                                    = 1,
	OverrideRestoreState                                 = 2,
	IgnoreHierarchicalBias                               = 4,
	BlendHierarchicalBias                                = 8,
	AnyRestoreStateOverride                              = 3
};

enum class EMovieSceneCompletionMode : uint8_t
{
	KeepState                                             = 0,
	RestoreState                                          = 1,
	ProjectDefault                                        = 2
};

enum class EMovieSceneEvaluationType : uint8_t
{
	FrameLocked = 0,
	WithSubFrames = 1
};

enum class EWidgetClipping : uint8_t
{
	Inherit                                                         = 0,
	ClipToBounds                                                    = 1,
	ClipToBoundsWithoutIntersecting                                 = 2,
	ClipToBoundsAlways                                              = 3,
	OnDemand                                                        = 4
};

enum class EUpdateClockSource : uint8_t
{
	Tick = 0,
	Platform = 1,
	Audio = 2,
	RelativeTimecode = 3,
	Timecode = 4,
	PlayEveryFrame = 5,
	Custom = 6
};

enum class EMovieSceneSequenceFlags : uint8_t
{
	None                                                   = 0,
	Volatile                                               = 1,
	BlockingEvaluation                                     = 2,
	DynamicWeighting                                       = 4,
	InheritedFlags                                         = 1
};

struct FMovieSceneDynamicBinding { 
	UFunction* Function;
	unsigned char UnknownData00_7[0x20];
};

struct FMovieSceneSpawnable {
	FTransform                             SpawnTransform;
	TArray<FName>                           Tags;
	bool                                          bContinuouslyRespawn;
	bool                                          bNetAddressableName;
	uint8_t                                         Pad_72[0x6];
	FMovieSceneDynamicBinding              DynamicBinding;
	FGuid                                  Guid;
	FString                                 Name;
	UObject*                                ObjectTemplate;
	TArray<FGuid> ChildPossessables;
	ESpawnOwnership Ownership;
	uint8_t Pad_D9[0x3];
	FName LevelName;
	uint8_t Pad_E4[0xC];
};

struct FMovieSceneBinding
{ 
	FGuid                                              ObjectGuid;                                                 // 0x0000   (0x0010)  
	FString                                            BindingName;                                                // 0x0010   (0x0010)  
	TArray<UMovieSceneTrack*>                    Tracks;                                                     // 0x0020   (0x0010)  
};

class UMovieSceneSignedObject : public UObject { 
public:
	unsigned char UnknownData00_8[0x4];
	FGuid Signature;
	unsigned char UnknownData01_7[0x1C];
};

struct FMovieSceneTrackEvalOptions
{ 
	bool                                               bCanEvaluateNearestSection : 1;                             // 0x0000:0 (0x0001)  
	bool                                               bEvalNearestSection : 1;                                    // 0x0000:1 (0x0001)  
	bool                                               bEvaluateInPreroll : 1;                                     // 0x0000:2 (0x0001)  
	bool                                               bEvaluateInPostroll : 1;                                    // 0x0000:3 (0x0001)  
	bool                                               bEvaluateNearestSection : 1;                                // 0x0000:4 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0001   (0x0003)  MISSED
};

struct FMovieSceneSectionEvalOptions
{ 
	bool                                               bCanEditCompletionMode;                                     // 0x0000   (0x0001)  
	EMovieSceneCompletionMode                          CompletionMode;                                             // 0x0001   (0x0001)  
};

struct FMovieSceneEasingSettings
{ 
	int32_t                                            AutoEaseInDuration;                                         // 0x0000   (0x0004)  
	int32_t                                            AutoEaseOutDuration;                                        // 0x0004   (0x0004)  
	uint8_t Pad_28[0x10];                                              // 0x0008   (0x0010)  
	bool                                               bManualEaseIn;                                              // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	int32_t                                            ManualEaseInDuration;                                       // 0x001C   (0x0004)  
	uint8_t Pad_20[0x10];                                           // 0x0020   (0x0010)  
	bool                                               bManualEaseOut;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            ManualEaseOutDuration;                                      // 0x0034   (0x0004)  
};

struct FOptionalMovieSceneBlendType
{ 
	EMovieSceneBlendType                               BlendType;                                                  // 0x0000   (0x0001)  
	bool                                               bIsValid;                                                   // 0x0001   (0x0001)  
};

class UMovieSceneSection : public UMovieSceneSignedObject
{ 
public:
	FMovieSceneSectionEvalOptions                      EvalOptions;                                                // 0x0058   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x005A   (0x0006)  MISSED
	FMovieSceneEasingSettings                          Easing;                                                     // 0x0060   (0x0038)  
	FMovieSceneFrameRange                              SectionRange;                                               // 0x0098   (0x0010)  
	FFrameNumber                                       PreRollFrames;                                              // 0x00A8   (0x0004)  
	FFrameNumber                                       PostRollFrames;                                             // 0x00AC   (0x0004)  
	int32_t                                            RowIndex;                                                   // 0x00B0   (0x0004)  
	int32_t                                            OverlapPriority;                                            // 0x00B4   (0x0004)  
	bool                                               bIsActive : 1;                                              // 0x00B8:0 (0x0001)  
	bool                                               bIsLocked : 1;                                              // 0x00B8:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	float                                              StartTime;                                                  // 0x00BC   (0x0004)  
	float                                              EndTime;                                                    // 0x00C0   (0x0004)  
	float                                              PrerollTime;                                                // 0x00C4   (0x0004)  
	float                                              PostrollTime;                                               // 0x00C8   (0x0004)  
	bool                                               bIsInfinite : 1;                                            // 0x00CC:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00CD   (0x0003)  MISSED
	bool                                               bSupportsInfiniteRange;                                     // 0x00D0   (0x0001)  
	FOptionalMovieSceneBlendType                       BlendType;                                                  // 0x00D1   (0x0002)  
	unsigned char                                      UnknownData03_7[0x1D];
};

struct FMovieSceneTrackEvaluationFieldEntry
{ 
	UMovieSceneSection*                          Section;                                                    // 0x0000   (0x0008)  
	FFrameNumberRange                                  Range;                                                      // 0x0008   (0x0010)  
	FFrameNumber                                       ForcedTime;                                                 // 0x0018   (0x0004)  
	ESectionEvaluationFlags                            Flags;                                                      // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x001D   (0x0001)  MISSED
	int16_t                                            LegacySortOrder;                                            // 0x001E   (0x0002)  
};

struct FMovieSceneTrackEvaluationField
{ 
	TArray<FMovieSceneTrackEvaluationFieldEntry>       Entries;                                                    // 0x0000   (0x0010)  
};

class UMovieSceneTrack : public UMovieSceneSignedObject
{ 
public:
	FMovieSceneTrackEvalOptions                        EvalOptions;                                                // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x005C   (0x0001)  MISSED
	bool                                               bIsEvalDisabled;                                            // 0x005D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x005E   (0x0002)  MISSED
	TArray<int32_t>                                    RowsDisabled;                                               // 0x0060   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0070   (0x0004)  MISSED
	FGuid                                              EvaluationFieldGuid;                                        // 0x0074   (0x0010)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	FMovieSceneTrackEvaluationField                    EvaluationField;                                            // 0x0088   (0x0010)  
};

struct FMovieSceneObjectBindingID {
	FGuid Guid;  
	int32_t SequenceID; 
	int32_t ResolveParentIndex;
};

struct FMovieScenePossessable { 
	TArray<FName>                                      Tags;
	FMovieSceneDynamicBinding                          DynamicBinding;
	FGuid                                              Guid;
	FString                                            Name;
	FGuid                                              ParentGuid;
	FMovieSceneObjectBindingID                         SpawnableObjectBindingID;
};

struct FMovieSceneFrameRange {
    uint8_t Pad_0[0x10];
};

struct FFrameRate {
    public:
        int32_t  Numerator;
        int32_t  Denominator;
};

struct FMovieSceneObjectBindingIDs
{ 
	TArray<FMovieSceneObjectBindingID>                 IDs;                                                        // 0x0000   (0x0010)  
};

struct FMovieSceneMarkedFrame
{ 
	FFrameNumber                                       FrameNumber;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Label;                                                      // 0x0008   (0x0010)  
	bool                                               bIsDeterminismFence;                                        // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};


class UMovieScene : public UMovieSceneSignedObject
{
public:
	uint8_t                                         Pad_58[0x8];                                       // 0x0058(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<FMovieSceneSpawnable>           Spawnables;                                        // 0x0060(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<FMovieScenePossessable>         Possessables;                                      // 0x0070(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<FMovieSceneBinding>             ObjectBindings;                                    // 0x0080(0x0010)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<FName, FMovieSceneObjectBindingIDs> BindingGroups;                             // 0x0090(0x0050)(NativeAccessSpecifierPrivate)
	TArray<UMovieSceneTrack*>               Tracks;                                            // 0x00E0(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	UMovieSceneTrack*                       CameraCutTrack;                                    // 0x00F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMovieSceneFrameRange                  SelectionRange;                                    // 0x00F8(0x0010)(NoDestructor, NativeAccessSpecifierPrivate)
	FMovieSceneFrameRange                  PlaybackRange;                                     // 0x0108(0x0010)(NoDestructor, NativeAccessSpecifierPrivate)
	FFrameRate                             TickResolution;                                    // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FFrameRate                             DisplayRate;                                       // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EMovieSceneEvaluationType                     EvaluationType;                                    // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EUpdateClockSource                            ClockSource;                                       // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8_t                                         Pad_12A[0x6];                                      // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FSoftObjectPath                        CustomClockSourcePath;                             // 0x0130(0x0020)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<FMovieSceneMarkedFrame>         MarkedFrames;                                      // 0x0150(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

struct FMovieSceneEvalTemplatePtr
{ 
	unsigned char                                      UnknownData00_2[0x88];                                      // 0x0000   (0x0088)  MISSED
};

struct FMovieSceneTrackImplementationPtr
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

struct FMovieSceneEvaluationTrack
{ 
	FGuid                                              ObjectBindingID;                                            // 0x0000   (0x0010)  
	uint16_t                                           EvaluationPriority;                                         // 0x0010   (0x0002)  
	EEvaluationMethod                                  EvaluationMethod;                                           // 0x0012   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0013   (0x0001)  MISSED
	TWeakObjectPtr<UMovieSceneTrack*>            SourceTrack;                                                // 0x0014   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<FMovieSceneEvalTemplatePtr>                 ChildTemplates;                                             // 0x0020   (0x0010)  
	FMovieSceneTrackImplementationPtr                  TrackTemplate;                                              // 0x0030   (0x0038)  
	FName                                              EvaluationGroup;                                            // 0x0068   (0x0008)  
	bool                                               bEvaluateInPreroll : 1;                                     // 0x0070:0 (0x0001)  
	bool                                               bEvaluateInPostroll : 1;                                    // 0x0070:1 (0x0001)  
	bool                                               bTearDownPriority : 1;                                      // 0x0070:2 (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

struct FMovieSceneTrackIdentifier
{ 
	uint32_t                                           Value;                                                      // 0x0000   (0x0004)  
};

struct FMovieSceneEvaluationTemplateSerialNumber
{ 
	uint32_t                                           Value;                                                      // 0x0000   (0x0004)  
};

struct FMovieSceneTemplateGenerationLedger
{ 
	FMovieSceneTrackIdentifier                         LastTrackIdentifier;                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TMap<FGuid, FMovieSceneTrackIdentifier>            TrackSignatureToTrackIdentifier;                            // 0x0008   (0x0050)  
	TMap<FGuid, FMovieSceneFrameRange>                 SubSectionRanges;                                           // 0x0058   (0x0050)  
};

struct FMovieSceneSequenceID
{ 
	uint32_t                                           Value;                                                      // 0x0000   (0x0004)  
};

struct FMovieSceneSequenceHierarchyNode
{ 
	FMovieSceneSequenceID                              ParentID;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FMovieSceneSequenceID>                      Children;                                                   // 0x0008   (0x0010)  
};

struct FMovieSceneEvaluationTemplate
{ 
	TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks;                                           // 0x0000   (0x0050)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0050   (0x0050)  MISSED
	FGuid                                              SequenceSignature;                                          // 0x00A0   (0x0010)  
	FMovieSceneEvaluationTemplateSerialNumber          TemplateSerialNumber;                                       // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FMovieSceneTemplateGenerationLedger                TemplateLedger;                                             // 0x00B8   (0x00A8)  
};

struct FMovieSceneSubSequenceTree
{ 
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0000   (0x0060)  MISSED
};

struct FMovieSceneTimeTransform
{ 
	float                                              TimeScale;                                                  // 0x0000   (0x0004)  
	FFrameTime                                         Offset;                                                     // 0x0004   (0x0008)  
};

struct FMovieSceneTimeWarping
{ 
	FFrameNumber                                       Start;                                                      // 0x0000   (0x0004)  
	FFrameNumber                                       End;                                                        // 0x0004   (0x0004)  
};


struct FMovieSceneNestedSequenceTransform
{ 
	FMovieSceneTimeTransform                           LinearTransform;                                            // 0x0000   (0x000C)  
	FMovieSceneTimeWarping                             Warping;                                                    // 0x000C   (0x0008)  
};

struct FMovieSceneSequenceTransform
{ 
	FMovieSceneTimeTransform                           LinearTransform;                                            // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FMovieSceneNestedSequenceTransform>         NestedTransforms;                                           // 0x0010   (0x0010)  
};

struct FMovieSceneSequenceInstanceDataPtr
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

struct FMovieSceneSubSequenceData
{ 
	FSoftObjectPath                                    Sequence;                                                   // 0x0000   (0x0020)  
	FMovieSceneSequenceTransform                       OuterToInnerTransform;                                      // 0x0020   (0x0020)  
	FMovieSceneSequenceTransform                       RootToSequenceTransform;                                    // 0x0040   (0x0020)  
	FFrameRate                                         TickResolution;                                             // 0x0060   (0x0008)  
	FMovieSceneSequenceID                              DeterministicSequenceID;                                    // 0x0068   (0x0004)  
	FMovieSceneFrameRange                              ParentPlayRange;                                            // 0x006C   (0x0010)  
	FFrameNumber                                       ParentStartFrameOffset;                                     // 0x007C   (0x0004)  
	FFrameNumber                                       ParentEndFrameOffset;                                       // 0x0080   (0x0004)  
	FFrameNumber                                       ParentFirstLoopStartFrameOffset;                            // 0x0084   (0x0004)  
	bool                                               bCanLoop;                                                   // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	FMovieSceneFrameRange                              PlayRange;                                                  // 0x008C   (0x0010)  
	FMovieSceneFrameRange                              FullPlayRange;                                              // 0x009C   (0x0010)  
	FMovieSceneFrameRange                              UnwarpedPlayRange;                                          // 0x00AC   (0x0010)  
	FMovieSceneFrameRange                              PreRollRange;                                               // 0x00BC   (0x0010)  
	FMovieSceneFrameRange                              PostRollRange;                                              // 0x00CC   (0x0010)  
	int16_t                                            HierarchicalBias;                                           // 0x00DC   (0x0002)  
	EMovieSceneSubSectionFlags                         AccumulatedFlags;                                           // 0x00DE   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x00DF   (0x0001)  MISSED
	FMovieSceneSequenceInstanceDataPtr                 InstanceData;                                               // 0x00E0   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00F8   (0x0008)  MISSED
	FGuid                                              SubSectionSignature;                                        // 0x0100   (0x0010)  
};

struct FMovieSceneSequenceHierarchy
{ 
	FMovieSceneSequenceHierarchyNode                   RootNode;                                                   // 0x0000   (0x0018)  
	FMovieSceneSubSequenceTree                         Tree;                                                       // 0x0018   (0x0060)  
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences;                                          // 0x0078   (0x0050)  
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy;                                       // 0x00C8   (0x0050)  
	EMovieSceneServerClientMask                        AccumulatedNetworkMask;                                     // 0x0118   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0119   (0x0007)  MISSED
};

struct FMovieSceneEvaluationFieldEntityKey
{ 
	TWeakObjectPtr<UObject*>                     EntityOwner;                                                // 0x0000   (0x0008)  
	uint32_t                                           EntityID;                                                   // 0x0008   (0x0004)  
};

struct FMovieSceneEvaluationFieldEntity
{ 
	FMovieSceneEvaluationFieldEntityKey                Key;                                                        // 0x0000   (0x000C)  
	int32_t                                            SharedMetaDataIndex;                                        // 0x000C   (0x0004)  
};

struct FMovieSceneEvaluationFieldEntityMetaData
{ 
	FString                                            OverrideBoundPropertyPath;                                  // 0x0000   (0x0010)  
	FFrameNumber                                       ForcedTime;                                                 // 0x0010   (0x0004)  
	ESectionEvaluationFlags                            Flags;                                                      // 0x0014   (0x0001)  
	bool                                               bEvaluateInSequencePreRoll : 1;                             // 0x0015:0 (0x0001)  
	bool                                               bEvaluateInSequencePostRoll : 1;                            // 0x0015:1 (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0016   (0x0002)  MISSED
};

struct FMovieSceneEvaluationFieldSharedEntityMetaData
{ 
	FGuid                                              ObjectBindingID;                                            // 0x0000   (0x0010)  
};

struct FMovieSceneEvaluationFieldEntityTree
{ 
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0000   (0x0060)  MISSED
};

struct FMovieSceneEntityComponentField
{ 
	FMovieSceneEvaluationFieldEntityTree               PersistentEntityTree;                                       // 0x0000   (0x0060)  
	FMovieSceneEvaluationFieldEntityTree               OneShotEntityTree;                                          // 0x0060   (0x0060)  
	TArray<FMovieSceneEvaluationFieldEntity>           Entities;                                                   // 0x00C0   (0x0010)  
	TArray<FMovieSceneEvaluationFieldEntityMetaData>   EntityMetaData;                                             // 0x00D0   (0x0010)  
	TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;                                         // 0x00E0   (0x0010)  
};

struct FMovieSceneEvaluationFieldTrackPtr
{ 
	FMovieSceneSequenceID                              SequenceID;                                                 // 0x0000   (0x0004)  
	FMovieSceneTrackIdentifier                         TrackIdentifier;                                            // 0x0004   (0x0004)  
};

struct FMovieSceneFieldEntry_EvaluationTrack
{ 
	FMovieSceneEvaluationFieldTrackPtr                 TrackPtr;                                                   // 0x0000   (0x0008)  
	uint16_t                                           NumChildren;                                                // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000A   (0x0002)  MISSED
};

struct FMovieSceneEvaluationGroupLUTIndex
{ 
	int32_t                                            NumInitPtrs;                                                // 0x0000   (0x0004)  
	int32_t                                            NumEvalPtrs;                                                // 0x0004   (0x0004)  
};

struct FMovieSceneFieldEntry_ChildTemplate
{ 
	uint16_t                                           ChildIndex;                                                 // 0x0000   (0x0002)  
	ESectionEvaluationFlags                            Flags;                                                      // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	FFrameNumber                                       ForcedTime;                                                 // 0x0004   (0x0004)  
};


struct FMovieSceneEvaluationGroup
{ 
	TArray<FMovieSceneEvaluationGroupLUTIndex>         LUTIndices;                                                 // 0x0000   (0x0010)  
	TArray<FMovieSceneFieldEntry_EvaluationTrack>      TrackLUT;                                                   // 0x0010   (0x0010)  
	TArray<FMovieSceneFieldEntry_ChildTemplate>        SectionLUT;                                                 // 0x0020   (0x0010)  
};

struct FMovieSceneEvaluationKey
{ 
	FMovieSceneSequenceID                              SequenceID;                                                 // 0x0000   (0x0004)  
	FMovieSceneTrackIdentifier                         TrackIdentifier;                                            // 0x0004   (0x0004)  
	uint32_t                                           SectionIndex;                                               // 0x0008   (0x0004)  
};

struct FMovieSceneOrderedEvaluationKey
{ 
	FMovieSceneEvaluationKey                           Key;                                                        // 0x0000   (0x000C)  
	uint16_t                                           SetupIndex;                                                 // 0x000C   (0x0002)  
	uint16_t                                           TearDownIndex;                                              // 0x000E   (0x0002)  
};

struct FMovieSceneEvaluationMetaData
{ 
	TArray<FMovieSceneSequenceID>                      ActiveSequences;                                            // 0x0000   (0x0010)  
	TArray<FMovieSceneOrderedEvaluationKey>            ActiveEntities;                                             // 0x0010   (0x0010)  
};

struct FMovieSceneEvaluationField
{ 
	TArray<FMovieSceneFrameRange>                      Ranges;                                                     // 0x0000   (0x0010)  
	TArray<FMovieSceneEvaluationGroup>                 Groups;                                                     // 0x0010   (0x0010)  
	TArray<FMovieSceneEvaluationMetaData>              MetaData;                                                   // 0x0020   (0x0010)  
};

struct FMovieSceneSequenceCompilerMaskStruct
{ 
	bool                                               bHierarchy : 1;                                             // 0x0000:0 (0x0001)  
	bool                                               bEvaluationTemplate : 1;                                    // 0x0000:1 (0x0001)  
	bool                                               bEvaluationTemplateField : 1;                               // 0x0000:2 (0x0001)  
	bool                                               bEntityComponentField : 1;                                  // 0x0000:3 (0x0001)  
};

class UMovieSceneCompiledData : public UObject
{ 
public:
	FMovieSceneEvaluationTemplate                      EvaluationTemplate;                                         // 0x0028   (0x0160)  
	FMovieSceneSequenceHierarchy                       Hierarchy;                                                  // 0x0188   (0x0120)  
	FMovieSceneEntityComponentField                    EntityComponentField;                                       // 0x02A8   (0x00F0)  
	FMovieSceneEvaluationField                         TrackTemplateField;                                         // 0x0398   (0x0030)  
	TArray<FFrameTime>                                 DeterminismFences;                                          // 0x03C8   (0x0010)  
	FGuid                                              CompiledSignature;                                          // 0x03D8   (0x0010)  
	FGuid                                              CompilerVersion;                                            // 0x03E8   (0x0010)  
	FMovieSceneSequenceCompilerMaskStruct              AccumulatedMask;                                            // 0x03F8   (0x0001)  
	FMovieSceneSequenceCompilerMaskStruct              AllocatedMask;                                              // 0x03F9   (0x0001)  
	EMovieSceneSequenceFlags                           AccumulatedFlags;                                           // 0x03FA   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x03FB   (0x0005)  MISSED
};

class UMovieSceneSequence : public UMovieSceneSignedObject
{ 
    public:
        UMovieSceneCompiledData*                     CompiledData;                                               // 0x0058   (0x0008)  
        EMovieSceneCompletionMode                          DefaultCompletionMode;                                      // 0x0060   (0x0001)  
        bool                                               bParentContextsAreSignificant;                              // 0x0061   (0x0001)  
        bool                                               bPlayableDirectly;                                          // 0x0062   (0x0001)  
        EMovieSceneSequenceFlags                           SequenceFlags;                                              // 0x0063   (0x0001)  
        unsigned char UnknownData00_7[0x4];
};

class UWidgetAnimation : public UMovieSceneSequence
{
public:
	UMovieScene*                            MovieScene;                                        // 0x0068(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWidgetAnimationBinding>        AnimationBindings;                                 // 0x0070(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bLegacyFinishOnStop;                               // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8_t                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FString                                 DisplayLabel;                                      // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

struct FQueuedWidgetAnimationTransition
{ 
	UWidgetAnimation*                            WidgetAnimation;                                            // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0008   (0x0030)  MISSED
};

struct FWidgetTransform
{ 
	FVector2D                                          Translation;                                                // 0x0000   (0x0010)  
	FVector2D                                          Scale;                                                      // 0x0010   (0x0010)  
	FVector2D                                          Shear;                                                      // 0x0020   (0x0010)  
	float                                              Angle;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

class UVisual : public UObject
{ 
public:
};

class UWidget;

class UPanelWidget : public UWidget
{ 
public:
	TArray<UPanelSlot*>                          Slots;                                                      // 0x0178   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0188   (0x0008)  MISSED
};

class UPanelSlot : public UVisual
{ 
public:
	UPanelWidget*                                Parent;                                                     // 0x0028   (0x0008)  
	UWidget*                                     Content;                                                    // 0x0030   (0x0008)  
};

enum class ESlateAccessibleBehavior : uint8_t
{
	NotAccessible                                          = 0,
	Auto                                                   = 1,
	Summary                                                = 2,
	Custom                                                 = 3,
	ToolTip                                                = 4
};

class USlateAccessibleWidgetData : public UObject
{ 
public:
	bool                                               bCanChildrenBeAccessible;                                   // 0x0028   (0x0001)  
	ESlateAccessibleBehavior                           AccessibleBehavior;                                         // 0x0029   (0x0001)  
	ESlateAccessibleBehavior                           AccessibleSummaryBehavior;                                  // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x002B   (0x0005)  MISSED
	FText                                              AccessibleText;                                             // 0x0030   (0x0018)  
	uint8_t Pad_40[0x10];                               // 0x0040   (0x0010)  
	FText                                              AccessibleSummaryText;                                      // 0x0050   (0x0018)  
	uint8_t Pad_60[0x10];                          // 0x0060   (0x0010)  
};

struct FWidgetNavigationData
{ 
	EUINavigationRule                                  Rule;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              WidgetToFocus;                                              // 0x0004   (0x0008)  
	TWeakObjectPtr<UWidget*>                     Widget;                                                     // 0x000C   (0x0008)  
	uint8_t Pad_14[0x10];                                 // 0x0014   (0x0010)  
};

class UWidgetNavigation : public UObject
{ 
public:
	FWidgetNavigationData                              Up;                                                         // 0x0028   (0x0024)  
	FWidgetNavigationData                              Down;                                                       // 0x004C   (0x0024)  
	FWidgetNavigationData                              Left;                                                       // 0x0070   (0x0024)  
	FWidgetNavigationData                              Right;                                                      // 0x0094   (0x0024)  
	FWidgetNavigationData                              Next;                                                       // 0x00B8   (0x0024)  
	FWidgetNavigationData                              Previous;                                                   // 0x00DC   (0x0024)  
};

struct FPropertyPathSegment
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	int32_t                                            ArrayIndex;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	UStruct*                                     Struct;                                                     // 0x0010   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0018   (0x0008)  MISSED
};

struct FCachedPropertyPath
{ 
	TArray<FPropertyPathSegment>                       Segments;                                                   // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
	UFunction*                                   CachedFunction;                                             // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0020   (0x0018)  MISSED
};

struct FDynamicPropertyPath : FCachedPropertyPath
{ 
};

class UPropertyBinding : public UObject
{ 
public:
	TWeakObjectPtr<UObject*>                     SourceObject;                                               // 0x0028   (0x0008)  
	FDynamicPropertyPath                               SourcePath;                                                 // 0x0030   (0x0038)  
	FName                                              DestinationProperty;                                        // 0x0068   (0x0008)  
};

class UWidget : public UVisual
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	UPanelSlot*                                  Slot;                                                       // 0x0030   (0x0008)  
	uint8_t Pad_38[0x10];                        // 0x0038   (0x0010)  
	FText                                              ToolTipText;                                                // 0x0048   (0x0018)  
	uint8_t Pad_58[0x10]; /* FDelegateProperty */                                    // 0x0058   (0x0010)  
	UWidget*                                     ToolTipWidget;                                              // 0x0068   (0x0008)  
	uint8_t Pad_70[0x10]; /* FDelegateProperty */                                    // 0x0070   (0x0010)  
	uint8_t Pad_80[0x10]; /* FDelegateProperty */                                  // 0x0080   (0x0010)  
	FWidgetTransform                                   RenderTransform;                                            // 0x0090   (0x0038)  
	FVector2D                                          RenderTransformPivot;                                       // 0x00C8   (0x0010)  
	EFlowDirectionPreference                           FlowDirectionPreference;                                    // 0x00D8   (0x0001)  
	bool                                               bIsVariable;                                            // 0x00D9:0 (0x0001)  
	bool                                               bCreatedByConstructionScript;                           // 0x00D9:1 (0x0001)  
	bool                                               bIsEnabled;                                             // 0x00D9:2 (0x0001)  
	bool                                               bOverride_Cursor;                                       // 0x00D9:3 (0x0001)  
	bool                                               bIsVolatile;                                            // 0x00D9:4 (0x0001)  
	TEnumAsByte<EMouseCursor>                          Cursor;                                                     // 0x00DA   (0x0001)  
	EWidgetClipping                                    Clipping;                                                   // 0x00DB   (0x0001)  
	ESlateVisibility                                   Visibility;                                                 // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00DD   (0x0003)  MISSED
	float                                              RenderOpacity;                                              // 0x00E0   (0x0004)  
	EWidgetPixelSnapping                               PixelSnapping;                                              // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00E5   (0x0003)  MISSED
	USlateAccessibleWidgetData*                  AccessibleWidgetData;                                       // 0x00E8   (0x0008)  
	UWidgetNavigation*                           Navigation;                                                 // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x50];                                      // 0x00F8   (0x0050)  MISSED
	TArray<UPropertyBinding*>                    NativeBindings;                                           // 0x0148   (0x0010)  
	unsigned char UnknownData04_7[0x20];
};

struct FNamedSlotBinding
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	UWidget*                                     Content;                                                    // 0x0008   (0x0008)  
};

struct FMovieSceneEntitySystemGraphNodes
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

struct FMovieSceneEntitySystemGraph
{ 
	unsigned char                                      UnknownData00_7[0xB8];                                      // 0x0000   (0x00B8)  MISSED
	FMovieSceneEntitySystemGraphNodes                  Nodes;                                                      // 0x00B8   (0x0038)  
	unsigned char                                      UnknownData01_7[0xA0];                                      // 0x00F0   (0x00A0)  MISSED
};

class UMovieSceneEntitySystemLinker : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x278];                                     // 0x0028   (0x0278)  MISSED
	FMovieSceneEntitySystemGraph                       SystemGraph;                                                // 0x02A0   (0x0190)  
	unsigned char                                      UnknownData01_7[0x320];                                     // 0x0430   (0x0320)  MISSED
};

class UCameraAnimationEntitySystemLinker : public UMovieSceneEntitySystemLinker
{ 
public:
};


struct FMovieSceneRootEvaluationTemplateInstance
{ 
	UMovieSceneEntitySystemLinker*               EntitySystemLinker;                                         // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0008   (0x0018)  MISSED
};

class UUMGSequencePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x1E8];                                     // 0x0028   (0x01E8)  MISSED
	UWidgetAnimation*                            Animation;                                                  // 0x0210   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0218   (0x0008)  MISSED
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x0220   (0x0020)  
	unsigned char                                      UnknownData02_7[0x80];
};

class UUMGSequenceTickManager : public UObject
{ 
public:
	uint8_t  Pad_28[0x10]; // 0x0028   (0x0050)  
    UMovieSceneEntitySystemLinker*               Linker;                                                     // 0x0078   (0x0008)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0080   (0x0040)  MISSED
};

class UUserWidgetExtension : public UObject
{ 
public:
};

class UWidgetTree : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	UWidget*                                     RootWidget;                                                 // 0x0030   (0x0008)  
	TMap<FName, UWidget*>                        NamedSlotBindings;                                          // 0x0038   (0x0050)  
};

struct FWidgetChild
{ 
	FName                                              WidgetName;                                                 // 0x0000   (0x0008)  
	TWeakObjectPtr<UWidget*>                     WidgetPtr;                                                  // 0x0008   (0x0008)  
};

struct FAnimationEventBinding
{ 
	UWidgetAnimation*                            Animation;                                                  // 0x0000   (0x0008)  
	uint8_t  Pad_8[0x10];                                            // 0x0008   (0x0010)  
	EWidgetAnimationEvent                              AnimationEvent;                                             // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              UserTag;                                                    // 0x001C   (0x0008)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

struct FTickFunction
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                  // 0x0008   (0x0001)  
	TEnumAsByte<ETickingGroup>                         EndTickGroup;                                               // 0x0009   (0x0001)  
	bool                                               bTickEvenWhenPaused : 1;                                    // 0x000A:0 (0x0001)  
	bool                                               bCanEverTick : 1;                                           // 0x000A:1 (0x0001)  
	bool                                               bStartWithTickEnabled : 1;                                  // 0x000A:2 (0x0001)  
	bool                                               bAllowTickOnDedicatedServer : 1;                            // 0x000A:3 (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x000B   (0x0001)  MISSED
	float                                              TickInterval;                                               // 0x000C   (0x0004)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0010   (0x0018)  MISSED
};

struct FActorComponentTickFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

class UAssetUserData : public UObject
{ 
public:
};

class UActorComponent : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FActorComponentTickFunction                        PrimaryComponentTick;                                       // 0x0030   (0x0030)  
	TArray<FName>                                      ComponentTags;                                              // 0x0060   (0x0010)  
	TArray<UAssetUserData*>                      AssetUserData;                                              // 0x0070   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0080   (0x0004)  MISSED
	int32_t                                            UCSSerializationIndex;                                      // 0x0084   (0x0004)  
	unsigned char                                      UnknownBit02 : 1;                                           // 0x0088:0 (0x0001)  MISSED
	unsigned char                                      UnknownBit03 : 1;                                           // 0x0088:1 (0x0001)  MISSED
	unsigned char                                      UnknownBit04 : 1;                                           // 0x0088:2 (0x0001)  MISSED
	unsigned char                                      UnknownBit05 : 1;                                           // 0x0088:3 (0x0001)  MISSED
	bool                                               bNetAddressable : 1;                                        // 0x0088:4 (0x0001)  
	bool                                               bReplicateUsingRegisteredSubObjectList : 1;                 // 0x0088:5 (0x0001)  
	bool                                               bReplicates : 1;                                            // 0x0088:6 (0x0001)  
	unsigned char                                      UnknownData06_3[0x1];                                       // 0x0089   (0x0001)  MISSED
	unsigned char                                      UnknownBit07 : 1;                                           // 0x008A:0 (0x0001)  MISSED
	unsigned char                                      UnknownBit08 : 1;                                           // 0x008A:1 (0x0001)  MISSED
	bool                                               bAutoActivate : 1;                                          // 0x008A:2 (0x0001)  
	bool                                               bIsActive : 1;                                              // 0x008A:3 (0x0001)  
	bool                                               bEditableWhenInherited : 1;                                 // 0x008A:4 (0x0001)  
	unsigned char                                      UnknownBit09 : 1;                                           // 0x008A:5 (0x0001)  MISSED
	bool                                               bCanEverAffectNavigation : 1;                               // 0x008A:6 (0x0001)  
	unsigned char                                      UnknownBit10 : 1;                                           // 0x008A:7 (0x0001)  MISSED
	bool                                               bIsEditorOnly : 1;                                          // 0x008B:0 (0x0001)  
	unsigned char                                      UnknownData11_5[0x1];                                       // 0x008C   (0x0001)  MISSED
	EComponentCreationMethod                           CreationMethod;                                             // 0x008D   (0x0001)  
	uint8_t  Pad_8E[0x1];                                  // 0x008E   (0x0001)  
	uint8_t  Pad_8F[0x1];                               // 0x008F   (0x0001)  
	unsigned char                                      UnknownData12_7[0x10];                                      // 0x0090   (0x0010)  MISSED
};

struct FKeyBind
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	FString                                            Command;                                                    // 0x0018   (0x0010)  
	bool                                               Control : 1;                                                // 0x0028:0 (0x0001)  
	bool                                               Shift : 1;                                                  // 0x0028:1 (0x0001)  
	bool                                               Alt : 1;                                                    // 0x0028:2 (0x0001)  
	bool                                               Cmd : 1;                                                    // 0x0028:3 (0x0001)  
	bool                                               bIgnoreCtrl : 1;                                            // 0x0028:4 (0x0001)  
	bool                                               bIgnoreShift : 1;                                           // 0x0028:5 (0x0001)  
	bool                                               bIgnoreAlt : 1;                                             // 0x0028:6 (0x0001)  
	bool                                               bIgnoreCmd : 1;                                             // 0x0028:7 (0x0001)  
	bool                                               bDisabled : 1;                                              // 0x0029:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x002A   (0x0006)  MISSED
};

class UPlayerInput : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x178];                                     // 0x0028   (0x0178)  MISSED
	TArray<FKeyBind>                                   DebugExecBindings;                                          // 0x01A0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x01B0   (0x0030)  MISSED
	TArray<FName>                                      InvertedAxis;                                               // 0x01E0   (0x0010)  
	unsigned char                                      UnknownData02_7[0x2A8];   
};

struct FCachedKeyToActionInfo
{ 
	TWeakObjectPtr<UPlayerInput*>                PlayerInput;                                                // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x68];                                      // 0x0008   (0x0068)  MISSED
};


class UInputComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x70];                                      // 0x00A0   (0x0070)  MISSED
	TArray<FCachedKeyToActionInfo>                     CachedKeyToActionInfo;                                      // 0x0110   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8]; 
};

class UUserWidget : public UWidget { 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0178   (0x0008)  MISSED
	FLinearColor                                       ColorAndOpacity;                                            // 0x0180   (0x0010)  
	uint8_t  Pad_190[0x10];                                                                                         // 0x0190   (0x0010)  
	FSlateColor                                        ForegroundColor;                                            // 0x01A0   (0x0014)  
	uint8_t  Pad_1B4[0x10];                             // 0x01B4   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01C4   (0x0004)  MISSED
	uint8_t  Pad_1C8[0x10];                              // 0x01C8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x01D8   (0x0030)  MISSED
	FMargin                                            Padding;                                                    // 0x0208   (0x0010)  
	int32_t                                            Priority;                                                   // 0x0218   (0x0004)  
	bool                                               bIsFocusable : 1;                                           // 0x021C:0 (0x0001)  
	bool                                               bStopAction : 1;                                            // 0x021C:1 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x021D   (0x0003)  MISSED
	TArray<FQueuedWidgetAnimationTransition>           QueuedWidgetAnimationTransitions;                           // 0x0220   (0x0010)  
	TArray<UUMGSequencePlayer*>                  ActiveSequencePlayers;                                      // 0x0230   (0x0010)  
	UUMGSequenceTickManager*                     AnimationTickManager;                                       // 0x0240   (0x0008)  
	TArray< UUMGSequencePlayer*>                  StoppedSequencePlayers;                                     // 0x0248   (0x0010)  
	TArray<FNamedSlotBinding>                          NamedSlotBindings;                                          // 0x0258   (0x0010)  
	TArray<UUserWidgetExtension*>                Extensions;                                                 // 0x0268   (0x0010)  
	UWidgetTree*                                 WidgetTree;                                                 // 0x0278   (0x0008)  
	bool                                               bHasScriptImplementedTick : 1;                              // 0x0280:0 (0x0001)  
	bool                                               bHasScriptImplementedPaint : 1;                             // 0x0280:1 (0x0001)  
	unsigned char                                      UnknownData04_5[0x17];                                      // 0x0281   (0x0017)  MISSED
	EWidgetTickFrequency                               TickFrequency;                                              // 0x0298   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0299   (0x0003)  MISSED
	FWidgetChild                                       DesiredFocusWidget;                                         // 0x029C   (0x0010)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x02AC   (0x0004)  MISSED
	UInputComponent*                             InputComponent;                                             // 0x02B0   (0x0008)  
	TArray<FAnimationEventBinding>                     AnimationCallbacks;                                         // 0x02B8   (0x0010)  
	unsigned char UnknownData07_7[0x18]; 
};

class UAttachWidget : public UWidget
{ 
public:
	EWidgetAttachType                                  m_attachType;                                               // 0x0178   (0x0001)  
	EWidgetAttachSubType                               m_attachSubType;                                            // 0x0179   (0x0001)  
	EWidgetMoveType                                    m_moveType;                                                 // 0x017A   (0x0001)  
	TEnumAsByte<EEasingFunc>                           m_easingType;                                               // 0x017B   (0x0001)  
	float                                              m_moveTime;                                                 // 0x017C   (0x0004)  
	float                                              m_exp;                                                      // 0x0180   (0x0004)  
	int32_t                                            m_step;                                                     // 0x0184   (0x0004)  
};

struct FMenuTargetFollowInfo
{ 
	FTransform                                         trans;                                                      // 0x0000   (0x0060)  
	FVector                                            worldOffset;                                                // 0x0060   (0x0018)  
	FVector2D                                          ScreenOffset;                                               // 0x0078   (0x0010)  
	bool                                               isClampScreenDisplayableArea;                               // 0x0088   (0x0001)  
	bool                                               isHightBias;                                                // 0x0089   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x008A   (0x0002)  MISSED
	float                                              refLength;                                                  // 0x008C   (0x0004)  
	float                                              minScale;                                                   // 0x0090   (0x0004)  
	float                                              maxScale;                                                   // 0x0094   (0x0004)  
	float                                              minHightBias;                                               // 0x0098   (0x0004)  
	float                                              maxHightBias;                                               // 0x009C   (0x0004)  
	float                                              ellipseAreaScale;                                           // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x00A4   (0x000C)  MISSED
};

class UDynamicBlueprintBinding : public UObject
{ 
public:
};

struct FTTTrackBase
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FName                                              TrackName;                                                  // 0x0008   (0x0008)  
	bool                                               bIsExternalCurve;                                           // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

struct FTTEventTrack : FTTTrackBase
{ 
	FName                                              FunctionName;                                               // 0x0018   (0x0008)  
	class UCurveFloat*                                 CurveKeys;                                                  // 0x0020   (0x0008)  
};

struct FTTPropertyTrack : FTTTrackBase
{ 
	FName                                              PropertyName;                                               // 0x0018   (0x0008)  
};

struct FTTFloatTrack : FTTPropertyTrack
{ 
	class UCurveFloat*                                 CurveFloat;                                                 // 0x0020   (0x0008)  
};

struct FTTVectorTrack : FTTPropertyTrack
{ 
	class UCurveVector*                                CurveVector;                                                // 0x0020   (0x0008)  
};

struct FTTLinearColorTrack : FTTPropertyTrack
{ 
	class UCurveLinearColor*                           CurveLinearColor;                                           // 0x0020   (0x0008)  
};

struct FBPVariableMetaDataEntry
{ 
	FName                                              DataKey;                                                    // 0x0000   (0x0008)  
	FString                                            DataValue;                                                  // 0x0008   (0x0010)  
};

class UTimelineTemplate : public UObject
{ 
public:
	float                                              TimelineLength;                                             // 0x0028   (0x0004)  
	TEnumAsByte<ETimelineLengthMode>                   LengthMode;                                                 // 0x002C   (0x0001)  
	bool                                               bAutoPlay : 1;                                              // 0x002D:0 (0x0001)  
	bool                                               bLoop : 1;                                                  // 0x002D:1 (0x0001)  
	bool                                               bReplicated : 1;                                            // 0x002D:2 (0x0001)  
	bool                                               bIgnoreTimeDilation : 1;                                    // 0x002D:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x002E   (0x0002)  MISSED
	TArray<FTTEventTrack>                              EventTracks;                                                // 0x0030   (0x0010)  
	TArray<FTTFloatTrack>                              FloatTracks;                                                // 0x0040   (0x0010)  
	TArray<FTTVectorTrack>                             VectorTracks;                                               // 0x0050   (0x0010)  
	TArray<FTTLinearColorTrack>                        LinearColorTracks;                                          // 0x0060   (0x0010)  
	TArray<FBPVariableMetaDataEntry>                   MetaDataArray;                                              // 0x0070   (0x0010)  
	FGuid                                              TimelineGuid;                                               // 0x0080   (0x0010)  
	TEnumAsByte<ETickingGroup>                         TimelineTickGroup;                                          // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0091   (0x0003)  MISSED
	FName                                              VariableName;                                               // 0x0094   (0x0008)  
	FName                                              DirectionPropertyName;                                      // 0x009C   (0x0008)  
	FName                                              UpdateFunctionName;                                         // 0x00A4   (0x0008)  
	FName                                              FinishedFunctionName;                                       // 0x00AC   (0x0008)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

struct FBPComponentClassOverride
{ 
	FName                                              ComponentName;                                              // 0x0000   (0x0008)  
	class UClass*                                      ComponentClass;                                             // 0x0008   (0x0008)  
};

struct FFieldNotificationId
{ 
	FName                                              FieldName;                                                  // 0x0000   (0x0008)  
};

struct FBlueprintComponentChangedPropertyInfo
{ 
	FName                                              PropertyName;                                               // 0x0000   (0x0008)  
	int32_t                                            ArrayIndex;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UStruct*                                     PropertyScope;                                              // 0x0010   (0x0008)  
};

struct FBlueprintCookedComponentInstancingData
{ 
	TArray<FBlueprintComponentChangedPropertyInfo>     ChangedPropertyList;                                        // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x11];                                      // 0x0010   (0x0011)  MISSED
	bool                                               bHasValidCookedData;                                        // 0x0021   (0x0001)  
	unsigned char                                      UnknownData01_7[0x26];                                      // 0x0022   (0x0026)  MISSED
};


class USCS_Node : public UObject
{ 
public:
	class UClass*                                      ComponentClass;                                             // 0x0028   (0x0008)  
	class UActorComponent*                             ComponentTemplate;                                          // 0x0030   (0x0008)  
	FBlueprintCookedComponentInstancingData            CookedComponentInstancingData;                              // 0x0038   (0x0048)  
	FName                                              AttachToName;                                               // 0x0080   (0x0008)  
	FName                                              ParentComponentOrVariableName;                              // 0x0088   (0x0008)  
	FName                                              ParentComponentOwnerClassName;                              // 0x0090   (0x0008)  
	bool                                               bIsParentComponentNative;                                   // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0099   (0x0007)  MISSED
	TArray<class USCS_Node*>                           ChildNodes;                                                 // 0x00A0   (0x0010)  
	TArray<FBPVariableMetaDataEntry>                   MetaDataArray;                                              // 0x00B0   (0x0010)  
	FGuid                                              VariableGuid;                                               // 0x00C0   (0x0010)  
	FName                                              InternalVariableName;                                       // 0x00D0   (0x0008)  
};

class USimpleConstructionScript : public UObject
{ 
public:
	TArray<USCS_Node*>                           RootNodes;                                                  // 0x0028   (0x0010)  
	TArray<USCS_Node*>                           AllNodes;                                                   // 0x0038   (0x0010)  
	USCS_Node*                                   DefaultSceneRootNode;                                       // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_7[0x60];                                      // 0x0050   (0x0060)  MISSED
};

struct FComponentKey
{ 
	class UClass*                                      OwnerClass;                                                 // 0x0000   (0x0008)  
	FName                                              SCSVariableName;                                            // 0x0008   (0x0008)  
	FGuid                                              AssociatedGuid;                                             // 0x0010   (0x0010)  
};

struct FComponentOverrideRecord
{ 
	class UClass*                                      ComponentClass;                                             // 0x0000   (0x0008)  
	class UActorComponent*                             ComponentTemplate;                                          // 0x0008   (0x0008)  
	FComponentKey                                      ComponentKey;                                               // 0x0010   (0x0020)  
	FBlueprintCookedComponentInstancingData            CookedComponentInstancingData;                              // 0x0030   (0x0048)  
};

class UInheritableComponentHandler : public UObject
{ 
public:
	TArray<FComponentOverrideRecord>                   Records;                                                    // 0x0028   (0x0010)  
	TArray<UActorComponent*>                     UnnecessaryComponents;                                      // 0x0038   (0x0010)  
};

class UBlueprintGeneratedClass : public UClass
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0200   (0x0008)  MISSED
	int32_t                                            NumReplicatedProperties;                                    // 0x0208   (0x0004)  
	bool                                               bHasCookedComponentInstancingData : 1;                      // 0x020C:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x020D   (0x0003)  MISSED
	TArray<UDynamicBlueprintBinding*>            DynamicBindingObjects;                                      // 0x0210   (0x0010)  
	TArray<UActorComponent*>                     ComponentTemplates;                                         // 0x0220   (0x0010)  
	TArray<UTimelineTemplate*>                   Timelines;                                                  // 0x0230   (0x0010)  
	TArray<FBPComponentClassOverride>                  ComponentClassOverrides;                                    // 0x0240   (0x0010)  
	TArray<FFieldNotificationId>                       FieldNotifies;                                              // 0x0250   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0260   (0x0008)  MISSED
	USimpleConstructionScript*                   SimpleConstructionScript;                                   // 0x0268   (0x0008)  
	UInheritableComponentHandler*                InheritableComponentHandler;                                // 0x0270   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0278   (0x0008)  MISSED
	UFunction*                                   UberGraphFunction;                                          // 0x0280   (0x0008)  
	TMap<FName, FGuid>                                 CookedPropertyGuids;                                        // 0x0288   (0x0050)  
	TMap<FName, FBlueprintCookedComponentInstancingData> CookedComponentInstancingData;                            // 0x02D8   (0x0050)  
	unsigned char                                      UnknownData04_7[0x38];                                      // 0x0328   (0x0038)  MISSED
};

struct FBakedStateExitTransition
{ 
	int32_t                                            CanTakeDelegateIndex;                                       // 0x0000   (0x0004)  
	int32_t                                            CustomResultNodeIndex;                                      // 0x0004   (0x0004)  
	int32_t                                            TransitionIndex;                                            // 0x0008   (0x0004)  
	bool                                               bDesiredTransitionReturnValue;                              // 0x000C   (0x0001)  
	bool                                               bAutomaticRemainingTimeRule;                                // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	float                                              AutomaticRuleTriggerTime;                                   // 0x0010   (0x0004)  
	FName                                              SyncGroupNameToRequireValidMarkersRule;                     // 0x0014   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<int32_t>                                    PoseEvaluatorLinks;                                         // 0x0020   (0x0010)  
};

struct FBakedAnimationState
{ 
	FName                                              StateName;                                                  // 0x0000   (0x0008)  
	TArray<FBakedStateExitTransition>                  Transitions;                                                // 0x0008   (0x0010)  
	int32_t                                            StateRootNodeIndex;                                         // 0x0018   (0x0004)  
	int32_t                                            StartNotify;                                                // 0x001C   (0x0004)  
	int32_t                                            EndNotify;                                                  // 0x0020   (0x0004)  
	int32_t                                            FullyBlendedNotify;                                         // 0x0024   (0x0004)  
	bool                                               bIsAConduit;                                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            EntryRuleNodeIndex;                                         // 0x002C   (0x0004)  
	TArray<int32_t>                                    PlayerNodeIndices;                                          // 0x0030   (0x0010)  
	TArray<int32_t>                                    LayerNodeIndices;                                           // 0x0040   (0x0010)  
	bool                                               bAlwaysResetOnEntry;                                        // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

struct FAnimationStateBase
{ 
	FName                                              StateName;                                                  // 0x0000   (0x0008)  
};

struct FAnimationTransitionBetweenStates : FAnimationStateBase
{ 
	int32_t                                            PreviousState;                                              // 0x0008   (0x0004)  
	int32_t                                            NextState;                                                  // 0x000C   (0x0004)  
	float                                              CrossfadeDuration;                                          // 0x0010   (0x0004)  
	int32_t                                            StartNotify;                                                // 0x0014   (0x0004)  
	int32_t                                            EndNotify;                                                  // 0x0018   (0x0004)  
	int32_t                                            InterruptNotify;                                            // 0x001C   (0x0004)  
	EAlphaBlendOption                                  BlendMode;                                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
	class UCurveFloat*                                 CustomCurve;                                                // 0x0028   (0x0008)  
	class UBlendProfile*                               BlendProfile;                                               // 0x0030   (0x0008)  
	TEnumAsByte<ETransitionLogicType>                  LogicType;                                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

struct FBakedAnimationStateMachine
{ 
	FName                                              MachineName;                                                // 0x0000   (0x0008)  
	int32_t                                            InitialState;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FBakedAnimationState>                       States;                                                     // 0x0010   (0x0010)  
	TArray<FAnimationTransitionBetweenStates>          Transitions;                                                // 0x0020   (0x0010)  
};

struct FBoneNode
{ 
	TEnumAsByte<EBoneTranslationRetargetingMode>       TranslationRetargetingMode;                                 // 0x0000   (0x0001)  
};


struct FVirtualBone
{ 
	FName                                              SourceBoneName;                                             // 0x0000   (0x0008)  
	FName                                              TargetBoneName;                                             // 0x0008   (0x0008)  
	FName                                              VirtualBoneName;                                            // 0x0010   (0x0008)  
};

struct FSmartNameContainer
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

struct FAnimSlotGroup
{ 
	FName                                              GroupName;                                                  // 0x0000   (0x0008)  
	TArray<FName>                                      SlotNames;                                                  // 0x0008   (0x0010)  
};


class USkeleton : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	TArray<FBoneNode>                                  BoneTree;                                                   // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x118];                                     // 0x0048   (0x0118)  MISSED
	FGuid                                              VirtualBoneGuid;                                            // 0x0160   (0x0010)  
	TArray<FVirtualBone>                               VirtualBones;                                               // 0x0170   (0x0010)  
	uint8_t                                         Pad_180[0x10];                    // 0x0180   (0x0010)  
	TArray<class USkeletalMeshSocket*>                 Sockets;                                                    // 0x0190   (0x0010)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x01A0   (0x0050)  MISSED
	FSmartNameContainer                                SmartNames;                                                 // 0x01F0   (0x0050)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0240   (0x0010)  MISSED
	TArray<class UBlendProfile*>                       BlendProfiles;                                              // 0x0250   (0x0010)  
	TArray<FAnimSlotGroup>                             SlotGroups;                                                 // 0x0260   (0x0010)  
	unsigned char                                      UnknownData04_6[0x1D8];                                     // 0x0270   (0x01D8)  MISSED
	TArray<class UAssetUserData*>                      AssetUserData;
};

struct FAnimLinkableElement
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class UAnimMontage*                                LinkedMontage;                                              // 0x0008   (0x0008)  
	int32_t                                            SlotIndex;                                                  // 0x0010   (0x0004)  
	int32_t                                            SegmentIndex;                                               // 0x0014   (0x0004)  
	TEnumAsByte<EAnimLinkMethod>                       LinkMethod;                                                 // 0x0018   (0x0001)  
	TEnumAsByte<EAnimLinkMethod>                       CachedLinkMethod;                                           // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              SegmentBeginTime;                                           // 0x001C   (0x0004)  
	float                                              SegmentLength;                                              // 0x0020   (0x0004)  
	float                                              LinkValue;                                                  // 0x0024   (0x0004)  
	class UAnimSequenceBase*                           LinkedSequence;                                             // 0x0028   (0x0008)  
};

struct FAnimNotifyEvent : FAnimLinkableElement
{ 
	float                                              TriggerTimeOffset;                                          // 0x0030   (0x0004)  
	float                                              EndTriggerTimeOffset;                                       // 0x0034   (0x0004)  
	float                                              TriggerWeightThreshold;                                     // 0x0038   (0x0004)  
	FName                                              NotifyName;                                                 // 0x003C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	class UAnimNotify*                                 Notify;                                                     // 0x0048   (0x0008)  
	class UAnimNotifyState*                            NotifyStateClass;                                           // 0x0050   (0x0008)  
	float                                              Duration;                                                   // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FAnimLinkableElement                               EndLink;                                                    // 0x0060   (0x0030)  
	bool                                               bConvertedFromBranchingPoint;                               // 0x0090   (0x0001)  
	TEnumAsByte<EMontageNotifyTickType>                MontageTickType;                                            // 0x0091   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0092   (0x0002)  MISSED
	float                                              NotifyTriggerChance;                                        // 0x0094   (0x0004)  
	TEnumAsByte<ENotifyFilterType>                     NotifyFilterType;                                           // 0x0098   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0099   (0x0003)  MISSED
	int32_t                                            NotifyFilterLOD;                                            // 0x009C   (0x0004)  
	bool                                               bCanBeFilteredViaRequest;                                   // 0x00A0   (0x0001)  
	bool                                               bTriggerOnDedicatedServer;                                  // 0x00A1   (0x0001)  
	bool                                               bTriggerOnFollower;                                         // 0x00A2   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x00A3   (0x0001)  MISSED
	int32_t                                            TrackIndex;                                                 // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData05_7[0x10];                                      // 0x00A8   (0x0010)  MISSED
};

struct FCachedPoseIndices
{ 
	TArray<int32_t>                                    OrderedSavedPoseNodeIndices;                                // 0x0000   (0x0010)  
};

struct FGraphAssetPlayerInformation
{ 
	TArray<int32_t>                                    PlayerNodeIndices;                                          // 0x0000   (0x0010)  
};

struct FAnimNodeData
{ 
	uint8_t Pad_0[0x10];                                  // 0x0000   (0x0010)  
	TArray<uint32_t>                                   Entries;                                                    // 0x0010   (0x0010)  
	int32_t                                            NodeIndex;                                                  // 0x0020   (0x0004)  
	uint32_t                                           Flags;                                                      // 0x0024   (0x0004)  
};


struct FAnimGraphBlendOptions
{ 
	float                                              BlendInTime;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UBlendProfile*                               BlendInProfile;                                             // 0x0008   (0x0008)  
	float                                              BlendOutTime;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UBlendProfile*                               BlendOutProfile;                                            // 0x0018   (0x0008)  
};

struct FAnimNodeStructData
{ 
	TMap<FName, int32_t>                               NameToIndexMap;                                             // 0x0000   (0x0050)  
	int32_t                                            NumProperties;                                              // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

class UAnimBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0360   (0x0008)  MISSED
	TArray<FBakedAnimationStateMachine>                BakedStateMachines;                                         // 0x0368   (0x0010)  
	USkeleton*                                   TargetSkeleton;                                             // 0x0378   (0x0008)  
	TArray<FAnimNotifyEvent>                           AnimNotifies;                                               // 0x0380   (0x0010)  
	TMap<FName, FCachedPoseIndices>                    OrderedSavedPoseIndicesMap;                                 // 0x0390   (0x0050)  
	unsigned char                                      UnknownData01_6[0x80];                                      // 0x03E0   (0x0080)  MISSED
	TArray<FName>                                      SyncGroupNames;                                             // 0x0460   (0x0010)  
	TMap<FName, FGraphAssetPlayerInformation>          GraphAssetPlayerInformation;                                // 0x0470   (0x0050)  
	TMap<FName, FAnimGraphBlendOptions>                GraphBlendOptions;                                          // 0x04C0   (0x0050)  
	TArray<FAnimNodeData>                              AnimNodeData;                                               // 0x0510   (0x0010)  
	TMap<UScriptStruct*, FAnimNodeStructData>    NodeTypeMap;                                                // 0x0520   (0x0050)  
	unsigned char                                      UnknownData02_7[0x58];                                      // 0x0570   (0x0058)  MISSED
};

class UMeshComponent : public UPrimitiveComponent
{ 
public:
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0518   (0x0010)  
	class UMaterialInterface*                          OverlayMaterial;                                            // 0x0528   (0x0008)  
	float                                              OverlayMaterialMaxDrawDistance;                             // 0x0530   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x0534   (0x0014)  MISSED
	bool                                               bEnableMaterialParameterCaching : 1;                        // 0x0548:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];
};

class USkinnedMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0550   (0x0008)  MISSED
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x0558   (0x0008)  
	class USkinnedAsset*                               SkinnedAsset;                                               // 0x0560   (0x0008)  
	TWeakObjectPtr<class USkinnedMeshComponent*>       LeaderPoseComponent;                                        // 0x0568   (0x0008)  
	TArray<ESkinCacheUsage>                            SkinCacheUsage;                                             // 0x0570   (0x0010)  
	bool                                               bSetMeshDeformer;                                           // 0x0580   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0581   (0x0007)  MISSED
	class UMeshDeformer*                               MeshDeformer;                                               // 0x0588   (0x0008)  
	class UMeshDeformerInstanceSettings*               MeshDeformerInstanceSettings;                               // 0x0590   (0x0008)  
	FMeshDeformerInstanceSet                           MeshDeformerInstances;                                      // 0x0598   (0x0020)  
	unsigned char                                      UnknownData02_6[0x180];                                     // 0x05B8   (0x0180)  MISSED
	class UPhysicsAsset*                               PhysicsAssetOverride;                                       // 0x0738   (0x0008)  
	int32_t                                            ForcedLodModel;                                             // 0x0740   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0744   (0x0004)  MISSED
	int32_t                                            MinLodModel;                                                // 0x0748   (0x0004)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x074C   (0x0008)  MISSED
	float                                              StreamingDistanceMultiplier;                                // 0x0754   (0x0004)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x0758   (0x0008)  MISSED
	TArray<FSkelMeshComponentLODInfo>                  LODInfo;                                                    // 0x0760   (0x0010)  
	unsigned char                                      UnknownData06_6[0x24];                                      // 0x0770   (0x0024)  MISSED
	EVisibilityBasedAnimTickOption                     VisibilityBasedAnimTickOption;                              // 0x0794   (0x0001)  
	unsigned char                                      UnknownData07_6[0x1];                                       // 0x0795   (0x0001)  MISSED
	unsigned char                                      UnknownBit08 : 1;                                           // 0x0796:0 (0x0001)  MISSED
	unsigned char                                      UnknownBit09 : 1;                                           // 0x0796:1 (0x0001)  MISSED
	unsigned char                                      UnknownBit10 : 1;                                           // 0x0796:2 (0x0001)  MISSED
	bool                                               bOverrideMinLOD : 1;                                        // 0x0796:3 (0x0001)  
	bool                                               bUseBoundsFromLeaderPoseComponent : 1;                      // 0x0796:4 (0x0001)  
	bool                                               bForceWireframe : 1;                                        // 0x0796:5 (0x0001)  
	bool                                               bDisableMorphTarget : 1;                                    // 0x0796:6 (0x0001)  
	bool                                               bHideSkin : 1;                                              // 0x0796:7 (0x0001)  
	bool                                               bPerBoneMotionBlur : 1;                                     // 0x0797:0 (0x0001)  
	bool                                               bComponentUseFixedSkelBounds : 1;                           // 0x0797:1 (0x0001)  
	bool                                               bConsiderAllBodiesForBounds : 1;                            // 0x0797:2 (0x0001)  
	bool                                               bSyncAttachParentLOD : 1;                                   // 0x0797:3 (0x0001)  
	bool                                               bCanHighlightSelectedSections : 1;                          // 0x0797:4 (0x0001)  
	bool                                               bRecentlyRendered : 1;                                      // 0x0797:5 (0x0001)  
	bool                                               bCastCapsuleDirectShadow : 1;                               // 0x0797:6 (0x0001)  
	bool                                               bCastCapsuleIndirectShadow : 1;                             // 0x0797:7 (0x0001)  
	bool                                               bCPUSkinning : 1;                                           // 0x0798:0 (0x0001)  
	bool                                               bEnableUpdateRateOptimizations : 1;                         // 0x0798:1 (0x0001)  
	bool                                               bDisplayDebugUpdateRateOptimizations : 1;                   // 0x0798:2 (0x0001)  
	bool                                               bRenderStatic : 1;                                          // 0x0798:3 (0x0001)  
	bool                                               bIgnoreLeaderPoseComponentLOD : 1;                          // 0x0798:4 (0x0001)  
	unsigned char                                      UnknownBit11 : 1;                                           // 0x0798:5 (0x0001)  MISSED
	unsigned char                                      UnknownBit12 : 1;                                           // 0x0798:6 (0x0001)  MISSED
	bool                                               bCachedLocalBoundsUpToDate : 1;                             // 0x0798:7 (0x0001)  
	bool                                               bCachedWorldSpaceBoundsUpToDate : 1;                        // 0x0799:0 (0x0001)  
	unsigned char                                      UnknownBit13 : 1;                                           // 0x0799:1 (0x0001)  MISSED
	bool                                               bForceMeshObjectUpdate : 1;                                 // 0x0799:2 (0x0001)  
	bool                                               bForceUpdateDynamicDataImmediately : 1;                     // 0x0799:3 (0x0001)  
	unsigned char                                      UnknownBit14 : 1;                                           // 0x0799:4 (0x0001)  MISSED
	unsigned char                                      UnknownBit15 : 1;                                           // 0x0799:5 (0x0001)  MISSED
	unsigned char                                      UnknownBit16 : 1;                                           // 0x0799:6 (0x0001)  MISSED
	unsigned char                                      UnknownBit17 : 1;                                           // 0x0799:7 (0x0001)  MISSED
	unsigned char                                      UnknownBit18 : 1;                                           // 0x079A:0 (0x0001)  MISSED
	bool                                               bFollowerShouldTickPose : 1;                                // 0x079A:1 (0x0001)  
	unsigned char                                      UnknownData19_5[0x1];                                       // 0x079B   (0x0001)  MISSED
	float                                              CapsuleIndirectShadowMinVisibility;                         // 0x079C   (0x0004)  
	unsigned char                                      UnknownData20_6[0x40];                                      // 0x07A0   (0x0040)  MISSED
	FBoxSphereBounds                                   CachedWorldOrLocalSpaceBounds;                              // 0x07E0   (0x0038)  
	unsigned char                                      UnknownData21_6[0x8];                                       // 0x0818   (0x0008)  MISSED
	FMatrix                                            CachedWorldToLocalTransform;                                // 0x0820   (0x0080)  
	unsigned char                                      UnknownData22_7[0x20];                                      // 0x08A0   (0x0020)  MISSED
};

class USkeletalMeshComponent : public USkinnedMeshComponent
{ 
public:
	UAnimBlueprintGeneratedClass*                AnimBlueprintGeneratedClass;                                // 0x08C0   (0x0008)  
	UClass*                                      AnimClass;                                                  // 0x08C8   (0x0008)  
	UAnimInstance*                               AnimScriptInstance;                                         // 0x08D0   (0x0008)  
	UAnimInstance*                               PostProcessAnimInstance;                                    // 0x08D8   (0x0008)  
	FSingleAnimationPlayData                           AnimationData;                                              // 0x08E0   (0x0018)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x08F8   (0x0010)  MISSED
	FVector                                            RootBoneTranslation;                                        // 0x0908   (0x0018)  
	FVector                                            LineCheckBoundsScale;                                       // 0x0920   (0x0018)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0938   (0x0020)  MISSED
	TArray<class UAnimInstance*>                       LinkedInstances;                                            // 0x0958   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0968   (0x0010)  MISSED
	TArray<FTransform>                                 CachedBoneSpaceTransforms;                                  // 0x0978   (0x0010)  
	TArray<FTransform>                                 CachedComponentSpaceTransforms;                             // 0x0988   (0x0010)  
	unsigned char                                      UnknownData03_6[0xA0];                                      // 0x0998   (0x00A0)  MISSED
	float                                              GlobalAnimRateScale;                                        // 0x0A38   (0x0004)  
	TEnumAsByte<EKinematicBonesUpdateToPhysics>        KinematicBonesUpdateType;                                   // 0x0A3C   (0x0001)  
	TEnumAsByte<EPhysicsTransformUpdateMode>           PhysicsTransformUpdateMode;                                 // 0x0A3D   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x0A3E   (0x0001)  MISSED
	TEnumAsByte<EAnimationMode>                        AnimationMode;                                              // 0x0A3F   (0x0001)  
	unsigned char                                      UnknownData05_6[0x1];                                       // 0x0A40   (0x0001)  MISSED
	bool                                               bDisablePostProcessBlueprint : 1;                           // 0x0A41:0 (0x0001)  
	unsigned char                                      UnknownBit06 : 1;                                           // 0x0A41:1 (0x0001)  MISSED
	bool                                               bUpdateOverlapsOnAnimationFinalize : 1;                     // 0x0A41:2 (0x0001)  
	unsigned char                                      UnknownBit07 : 1;                                           // 0x0A41:3 (0x0001)  MISSED
	bool                                               bHasValidBodies : 1;                                        // 0x0A41:4 (0x0001)  
	bool                                               bBlendPhysics : 1;                                          // 0x0A41:5 (0x0001)  
	bool                                               bEnablePhysicsOnDedicatedServer : 1;                        // 0x0A41:6 (0x0001)  
	bool                                               bUpdateMeshWhenKinematic : 1;                               // 0x0A41:7 (0x0001)  
	bool                                               bUpdateJointsFromAnimation : 1;                             // 0x0A42:0 (0x0001)  
	bool                                               bAllowClothActors : 1;                                      // 0x0A42:1 (0x0001)  
	bool                                               bDisableClothSimulation : 1;                                // 0x0A42:2 (0x0001)  
	unsigned char                                      UnknownData08_3[0x5];                                       // 0x0A43   (0x0005)  MISSED
	bool                                               bDisableRigidBodyAnimNode : 1;                              // 0x0A48:0 (0x0001)  
	bool                                               bAllowAnimCurveEvaluation : 1;                              // 0x0A48:1 (0x0001)  
	unsigned char                                      UnknownBit09 : 1;                                           // 0x0A48:2 (0x0001)  MISSED
	unsigned char                                      UnknownBit10 : 1;                                           // 0x0A48:3 (0x0001)  MISSED
	unsigned char                                      UnknownBit11 : 1;                                           // 0x0A48:4 (0x0001)  MISSED
	bool                                               bCollideWithEnvironment : 1;                                // 0x0A48:5 (0x0001)  
	bool                                               bCollideWithAttachedChildren : 1;                           // 0x0A48:6 (0x0001)  
	bool                                               bForceCollisionUpdate : 1;                                  // 0x0A48:7 (0x0001)  
	unsigned char                                      UnknownData12_5[0x3];                                       // 0x0A49   (0x0003)  MISSED
	float                                              ClothVelocityScale;                                         // 0x0A4C   (0x0004)  
	bool                                               bResetAfterTeleport : 1;                                    // 0x0A50:0 (0x0001)  
	unsigned char                                      UnknownBit13 : 1;                                           // 0x0A50:1 (0x0001)  MISSED
	bool                                               bDeferKinematicBoneUpdate : 1;                              // 0x0A50:2 (0x0001)  
	bool                                               bNoSkeletonUpdate : 1;                                      // 0x0A50:3 (0x0001)  
	bool                                               bPauseAnims : 1;                                            // 0x0A50:4 (0x0001)  
	bool                                               bUseRefPoseOnInitAnim : 1;                                  // 0x0A50:5 (0x0001)  
	bool                                               bEnablePerPolyCollision : 1;                                // 0x0A50:6 (0x0001)  
	bool                                               bForceRefpose : 1;                                          // 0x0A50:7 (0x0001)  
	bool                                               bOnlyAllowAutonomousTickPose : 1;                           // 0x0A51:0 (0x0001)  
	bool                                               bIsAutonomousTickPose : 1;                                  // 0x0A51:1 (0x0001)  
	bool                                               bOldForceRefPose : 1;                                       // 0x0A51:2 (0x0001)  
	bool                                               bShowPrePhysBones : 1;                                      // 0x0A51:3 (0x0001)  
	bool                                               bRequiredBonesUpToDate : 1;                                 // 0x0A51:4 (0x0001)  
	bool                                               bAnimTreeInitialised : 1;                                   // 0x0A51:5 (0x0001)  
	bool                                               bIncludeComponentLocationIntoBounds : 1;                    // 0x0A51:6 (0x0001)  
	bool                                               bEnableLineCheckWithBounds : 1;                             // 0x0A51:7 (0x0001)  
	bool                                               bPropagateCurvesToFollowers : 1;                            // 0x0A52:0 (0x0001)  
	bool                                               bSkipKinematicUpdateWhenInterpolating : 1;                  // 0x0A52:1 (0x0001)  
	bool                                               bSkipBoundsUpdateWhenInterpolating : 1;                     // 0x0A52:2 (0x0001)  
	unsigned char                                      UnknownBit14 : 1;                                           // 0x0A52:3 (0x0001)  MISSED
	unsigned char                                      UnknownBit15 : 1;                                           // 0x0A52:4 (0x0001)  MISSED
	bool                                               bNeedsQueuedAnimEventsDispatched : 1;                       // 0x0A52:5 (0x0001)  
	unsigned char                                      UnknownData16_5[0x1];                                       // 0x0A53   (0x0001)  MISSED
	uint16_t                                           CachedAnimCurveUidVersion;                                  // 0x0A54   (0x0002)  
	unsigned char                                      UnknownData17_6[0x2];                                       // 0x0A56   (0x0002)  MISSED
	float                                              ClothBlendWeight;                                           // 0x0A58   (0x0004)  
	bool                                               bWaitForParallelClothTask;                                  // 0x0A5C   (0x0001)  
	bool                                               bFilteredAnimCurvesIsAllowList;                             // 0x0A5D   (0x0001)  
	uint16_t                                           CachedMeshCurveMetaDataVersion;                             // 0x0A5E   (0x0002)  
	TArray<FName>                                      FilteredAnimCurves;                                         // 0x0A60   (0x0010)  
	UBodySetup*                                  BodySetup;                                                  // 0x0A70   (0x0008)  
	unsigned char                                      UnknownData18_6[0x4];                                       // 0x0A78   (0x0004)  MISSED
	float                                              ClothMaxDistanceScale;                                      // 0x0A7C   (0x0004)  
	uint8_t                                         Pad_A80[0x10];                                 // 0x0A80   (0x0010)  
	uint8_t                                         Pad_A90[0x10];                                // 0x0A90   (0x0010)  
	class UClass*                                      ClothingSimulationFactory;                                  // 0x0AA0   (0x0008)  
	unsigned char                                      UnknownData19_6[0xF8];                                      // 0x0AA8   (0x00F8)  MISSED
	float                                              TeleportDistanceThreshold;                                  // 0x0BA0   (0x0004)  
	float                                              TeleportRotationThreshold;                                  // 0x0BA4   (0x0004)  
	unsigned char                                      UnknownData20_6[0x98];                                      // 0x0BA8   (0x0098)  MISSED
	UClothingSimulationInteractor*               ClothingInteractor;                                         // 0x0C40   (0x0008)  
	unsigned char                                      UnknownData21_6[0xB8];                                      // 0x0C48   (0x00B8)  MISSED
	uint8_t                                         Pad_D00[0x10];                                  // 0x0D00   (0x0010)  
	unsigned char                                      UnknownData22_6[0x250];                                     // 0x0D10   (0x0250)  MISSED
	uint32_t                                           LastPoseTickFrame;                                          // 0x0F60   (0x0004)  
	unsigned char                                      UnknownData23_7[0xC];                                       // 0x0F64   (0x000C)  MISSED
};

class UMenuBase;

class UMenuTargetFollow : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FMenuTargetFollowInfo                              m_info;                                                     // 0x0030   (0x00B0)  
	FVector2D                                          m_screenPos;                                                // 0x00E0   (0x0010)  
	FVector2D                                          m_targetDir;                                                // 0x00F0   (0x0010)  
	bool                                               m_isInDisplayableArea;                                      // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0101   (0x0007)  MISSED
	UMenuBase*                                   m_owner;                                                    // 0x0108   (0x0008)  
	float                                              m_distanceScale;                                            // 0x0110   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0114   (0x0004)  MISSED
	UAttachWidget*                               m_3dAttachWidget;                                           // 0x0118   (0x0008)  
	USkeletalMeshComponent*                      m_skeletalMesh;                                             // 0x0120   (0x0008)  
	unsigned char                                      UnknownData03_6[0x5];                                       // 0x0128   (0x0005)  MISSED
	bool                                               m_isInDisplayableAreaBeforeConvert;                         // 0x012D   (0x0001)  
	unsigned char                                      UnknownData04_7[0x2];
};

class UMenuBase : public UUserWidget
{
public:
	uint8_t                                         Pad_2E0[0x20];                                     // 0x02E0(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<UWidgetAnimation*>               m_tmpInAnimWidgetList;                             // 0x0300(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	FName                                   m_editorLabelName;                                 // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8_t                                         Pad_318[0x8];                                      // 0x0318(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<FName, UWidgetAnimation*>    m_animMap;                                         // 0x0320(0x0050)(Protected, NativeAccessSpecifierProtected)
	uint8_t                                         Pad_370[0x58];                                     // 0x0370(0x0058)(Fixing Size After Last Property [ Dumper-7 ])
	UAttachWidget*                          m_attachWidget;                                    // 0x03C8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EMenuVisibleType                              m_visibleType;                                     // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMenuHiddenType                               m_hiddenType;                                      // 0x03D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8_t                                         Pad_3D2[0x6];                                      // 0x03D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	UMenuTargetFollow*                      m_targetFollow;                                    // 0x03D8(0x0008)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8_t                                         Pad_3E0[0x10];                                     // 0x03E0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

class UMenuLayer : public UMenuBase
{
public:
	uint8_t                                         Pad_3F0[0x8];                                     
	bool                                          m_initialVisible;                             
	bool                                          m_isAutoOpen;
	uint8_t                                         Pad_3FA[0x6];
	uint8_t                                         Pad_400[0x10];
	uint8_t                                         Pad_410[0x10];
    uint8_t                                         Pad_420[0x10];
    uint8_t                                         Pad_430[0x10];
    uint8_t                                         Pad_450[0x10];
    uint8_t                                         Pad_460[0x10];
	unsigned char                                      UnknownData02_7[0x8];
};

struct FSingleGestureData
{ 
	int32_t                                            PointerIndex;                                               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector2D                                          currentPos;                                                 // 0x0008   (0x0010)  
	FVector2D                                          prevPos;                                                    // 0x0018   (0x0010)  
	FVector2D                                          startPos;                                                   // 0x0028   (0x0010)  
	FVector2D                                          inputVec;                                                   // 0x0038   (0x0010)  
	float                                              inputRate;                                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

struct FMultiGestureData
{ 
	float                                              pinchScale;                                                 // 0x0000   (0x0004)  
};

struct FGestureData
{ 
	FName                                              colId;                                                      // 0x0000   (0x0008)  
	FSingleGestureData                                 SingleGestureData;                                          // 0x0008   (0x0050)  
	FMultiGestureData                                  MultiGestureData;                                           // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

#endif /* !MENU_HPP_ */
