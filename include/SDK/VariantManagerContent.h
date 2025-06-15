
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

/// Enum /Script/VariantManagerContent.EPropertyValueCategory
/// Size: 0x01 (1 bytes)
enum class EPropertyValueCategory : uint8_t
{
	EPropertyValueCategory__Undefined                                                = 0,
	EPropertyValueCategory__Generic                                                  = 1,
	EPropertyValueCategory__RelativeLocation                                         = 2,
	EPropertyValueCategory__RelativeRotation                                         = 4,
	EPropertyValueCategory__RelativeScale3D                                          = 8,
	EPropertyValueCategory__Visibility                                               = 16,
	EPropertyValueCategory__Material                                                 = 32,
	EPropertyValueCategory__Color                                                    = 64,
	EPropertyValueCategory__Option                                                   = 128
};

/// Class /Script/VariantManagerContent.LevelVariantSets
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class ULevelVariantSets : public UObject
{ 
public:
	class UBlueprintGeneratedClass*                    DirectorClass;                                              // 0x0028   (0x0008)  
	TArray<class UVariantSet*>                         VariantSets;                                                // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0040   (0x0050)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSetByName
	// class UVariantSet* GetVariantSetByName(FString VariantSetName);                                                          // [0x7f24360] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSet
	// class UVariantSet* GetVariantSet(int32_t VariantSetIndex);                                                               // [0x7f242a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetNumVariantSets
	// int32_t GetNumVariantSets();                                                                                             // [0x537fba0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsActor
/// Size: 0x0300 (768 bytes) (0x000290 - 0x000300) align 8 MaxSize: 0x0300
class ALevelVariantSetsActor : public AActor
{ 
public:
	FSoftObjectPath                                    LevelVariantSets;                                           // 0x0290   (0x0020)  
	TMap<class UBlueprintGeneratedClass*, class ULevelVariantSetsFunctionDirector*> DirectorInstances;             // 0x02B0   (0x0050)  


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	// bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);                                                 // [0x7f25400] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	// bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);                                              // [0x7f252e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	// void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);                                                        // [0x7f24910] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	// class ULevelVariantSets* GetLevelVariantSets(bool bLoad);                                                                // [0x7f23da0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsFunctionDirector
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class ULevelVariantSetsFunctionDirector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Struct /Script/VariantManagerContent.CapturedPropSegment
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FCapturedPropSegment
{ 
	FString                                            PropertyName;                                               // 0x0000   (0x0010)  
	int32_t                                            PropertyIndex;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            ComponentName;                                              // 0x0018   (0x0010)  
};

/// Class /Script/VariantManagerContent.PropertyValue
/// Size: 0x01B0 (432 bytes) (0x000028 - 0x0001B0) align 8 MaxSize: 0x01B0
class UPropertyValue : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x60];                                      // 0x0028   (0x0060)  MISSED
	SDK_UNDEFINED(16,1242) /* TArray<Properties> */    __um(Properties);                                           // 0x0088   (0x0010)  
	TArray<int32_t>                                    PropertyIndices;                                            // 0x0098   (0x0010)  
	TArray<FCapturedPropSegment>                       CapturedPropSegments;                                       // 0x00A8   (0x0010)  
	FString                                            FullDisplayString;                                          // 0x00B8   (0x0010)  
	FName                                              PropertySetterName;                                         // 0x00C8   (0x0008)  
	TMap<FString, FString>                             PropertySetterParameterDefaults;                            // 0x00D0   (0x0050)  
	bool                                               bHasRecordedData;                                           // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0121   (0x0007)  MISSED
	class UClass*                                      LeafPropertyClass;                                          // 0x0128   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0130   (0x0008)  MISSED
	TArray<char>                                       ValueBytes;                                                 // 0x0138   (0x0010)  
	EPropertyValueCategory                             PropCategory;                                               // 0x0148   (0x0001)  
	unsigned char                                      UnknownData03_7[0x67];                                      // 0x0149   (0x0067)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.PropertyValue.HasRecordedData
	// bool HasRecordedData();                                                                                                  // [0x7f244c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetPropertyTooltip
	// FText GetPropertyTooltip();                                                                                              // [0x7f23fd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetFullDisplayString
	// FString GetFullDisplayString();                                                                                          // [0x7f23d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VariantManagerContent.PropertyValueTransform
/// Size: 0x01B0 (432 bytes) (0x0001B0 - 0x0001B0) align 8 MaxSize: 0x01B0
class UPropertyValueTransform : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueVisibility
/// Size: 0x01B0 (432 bytes) (0x0001B0 - 0x0001B0) align 8 MaxSize: 0x01B0
class UPropertyValueVisibility : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueColor
/// Size: 0x01B0 (432 bytes) (0x0001B0 - 0x0001B0) align 8 MaxSize: 0x01B0
class UPropertyValueColor : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueMaterial
/// Size: 0x01B0 (432 bytes) (0x0001B0 - 0x0001B0) align 8 MaxSize: 0x01B0
class UPropertyValueMaterial : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueOption
/// Size: 0x01B0 (432 bytes) (0x0001B0 - 0x0001B0) align 8 MaxSize: 0x01B0
class UPropertyValueOption : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueSoftObject
/// Size: 0x01B0 (432 bytes) (0x0001B0 - 0x0001B0) align 8 MaxSize: 0x01B0
class UPropertyValueSoftObject : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.SwitchActor
/// Size: 0x02B8 (696 bytes) (0x000290 - 0x0002B8) align 8 MaxSize: 0x02B8
class ASwitchActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0290   (0x0018)  MISSED
	class USceneComponent*                             SceneComponent;                                             // 0x02A8   (0x0008)  
	int32_t                                            LastSelectedOption;                                         // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x02B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.SwitchActor.SelectOption
	// void SelectOption(int32_t OptionIndex);                                                                                  // [0x7f245a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.SwitchActor.GetSelectedOption
	// int32_t GetSelectedOption();                                                                                             // [0x7f24020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.SwitchActor.GetOptions
	// TArray<AActor*> GetOptions();                                                                                            // [0x7f23e40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/VariantManagerContent.VariantDependency
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FVariantDependency
{ 
	TWeakObjectPtr<class UVariantSet*>                 VariantSet;                                                 // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
	TWeakObjectPtr<class UVariant*>                    Variant;                                                    // 0x0028   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0030   (0x0020)  MISSED
	bool                                               bEnabled;                                                   // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/VariantManagerContent.Variant
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UVariant : public UObject
{ 
public:
	TArray<FVariantDependency>                         Dependencies;                                               // 0x0028   (0x0010)  
	FText                                              DisplayText;                                                // 0x0038   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0050   (0x0008)  MISSED
	TArray<class UVariantObjectBinding*>               ObjectBindings;                                             // 0x0058   (0x0010)  
	class UTexture2D*                                  Thumbnail;                                                  // 0x0068   (0x0008)  


	/// Functions
	// Function /Script/VariantManagerContent.Variant.SwitchOn
	// void SwitchOn();                                                                                                         // [0x7f252c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromTexture
	// void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);                                                            // [0x7f25140] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromFile
	// void SetThumbnailFromFile(FString FilePath);                                                                             // [0x7f24ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromEditorViewport
	// void SetThumbnailFromEditorViewport();                                                                                   // [0x4ce3db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromCamera
	// void SetThumbnailFromCamera(class UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0x7f24a60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                              // [0x7f247b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDependency
	// void SetDependency(int32_t Index, FVariantDependency& Dependency);                                                       // [0x7f24630] Final|Native|Public|HasOutParms 
	// Function /Script/VariantManagerContent.Variant.IsActive
	// bool IsActive();                                                                                                         // [0x7f244e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetThumbnail
	// class UTexture2D* GetThumbnail();                                                                                        // [0x7f24040] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetParent
	// class UVariantSet* GetParent();                                                                                          // [0x7f23ef0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumDependencies
	// int32_t GetNumDependencies();                                                                                            // [0x4ded0c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumActors
	// int32_t GetNumActors();                                                                                                  // [0x5e3c4d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0x7f23c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.Variant.GetDependents
	// TArray<UVariant*> GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);               // [0x7f23a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetDependency
	// FVariantDependency GetDependency(int32_t Index);                                                                         // [0x7f239a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetActor
	// class AActor* GetActor(int32_t ActorIndex);                                                                              // [0x7f238b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.DeleteDependency
	// void DeleteDependency(int32_t Index);                                                                                    // [0x7f237c0] Final|Native|Public  
	// Function /Script/VariantManagerContent.Variant.AddDependency
	// int32_t AddDependency(FVariantDependency& Dependency);                                                                   // [0x7f235e0] Final|Native|Public|HasOutParms 
};

/// Struct /Script/VariantManagerContent.FunctionCaller
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FFunctionCaller
{ 
	FName                                              FunctionName;                                               // 0x0000   (0x0008)  
};

/// Class /Script/VariantManagerContent.VariantObjectBinding
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UVariantObjectBinding : public UObject
{ 
public:
	FString                                            CachedActorLabel;                                           // 0x0028   (0x0010)  
	FSoftObjectPath                                    ObjectPtr;                                                  // 0x0038   (0x0020)  
	TLazyObjectPtr<class UObject*>                     LazyObjectPtr;                                              // 0x0058   (0x0018)  
	TArray<class UPropertyValue*>                      CapturedProperties;                                         // 0x0070   (0x0010)  
	TArray<FFunctionCaller>                            FunctionCallers;                                            // 0x0080   (0x0010)  
};

/// Class /Script/VariantManagerContent.VariantSet
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UVariantSet : public UObject
{ 
public:
	FText                                              DisplayText;                                                // 0x0028   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0040   (0x0008)  MISSED
	bool                                               bExpanded;                                                  // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	TArray<class UVariant*>                            Variants;                                                   // 0x0050   (0x0010)  
	class UTexture2D*                                  Thumbnail;                                                  // 0x0060   (0x0008)  


	/// Functions
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromTexture
	// void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);                                                            // [0x7f25220] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromFile
	// void SetThumbnailFromFile(FString FilePath);                                                                             // [0x7f25030] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
	// void SetThumbnailFromEditorViewport();                                                                                   // [0x4ce3db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromCamera
	// void SetThumbnailFromCamera(class UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0x7f24cc0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                              // [0x7f24860] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetVariantByName
	// class UVariant* GetVariantByName(FString VariantName);                                                                   // [0x7f24140] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetVariant
	// class UVariant* GetVariant(int32_t VariantIndex);                                                                        // [0x7f24080] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetThumbnail
	// class UTexture2D* GetThumbnail();                                                                                        // [0x7f24060] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetParent
	// class ULevelVariantSets* GetParent();                                                                                    // [0x7f23f60] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetNumVariants
	// int32_t GetNumVariants();                                                                                                // [0x5380160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.VariantSet.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0x7f23d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)