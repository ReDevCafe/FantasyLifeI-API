
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: TypedElementFramework

#pragma pack(push, 0x1)

/// Enum /Script/TypedElementRuntime.ETypedElementChildInclusionMethod
/// Size: 0x01 (1 bytes)
enum class ETypedElementChildInclusionMethod : uint8_t
{
	ETypedElementChildInclusionMethod__None                                          = 0,
	ETypedElementChildInclusionMethod__Immediate                                     = 1,
	ETypedElementChildInclusionMethod__Recursive                                     = 2
};

/// Enum /Script/TypedElementRuntime.ETypedElementSelectionMethod
/// Size: 0x01 (1 bytes)
enum class ETypedElementSelectionMethod : uint8_t
{
	ETypedElementSelectionMethod__Primary                                            = 0,
	ETypedElementSelectionMethod__Secondary                                          = 1
};

/// Class /Script/TypedElementRuntime.TypedElementSelectionSetLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTypedElementSelectionSetLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList
	// bool SetSelectionFromList(class UTypedElementSelectionSet* SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionOptions SelectionOptions); // [0x422cf70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList
	// bool SelectElementsFromList(class UTypedElementSelectionSet* SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionOptions SelectionOptions); // [0x422c8f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection
	// FScriptTypedElementListProxy GetNormalizedSelection(class UTypedElementSelectionSet* SelectionSet, FTypedElementSelectionNormalizationOptions NormalizationOptions); // [0x422b120] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList
	// FScriptTypedElementListProxy GetNormalizedElementList(class UTypedElementSelectionSet* SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionNormalizationOptions NormalizationOptions); // [0x422af50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList
	// bool DeselectElementsFromList(class UTypedElementSelectionSet* SelectionSet, FScriptTypedElementListProxy ElementList, FTypedElementSelectionOptions SelectionOptions); // [0x422a680] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/TypedElementRuntime.TypedElementSelectionSet
/// Size: 0x08A0 (2208 bytes) (0x000028 - 0x0008A0) align 8 MaxSize: 0x08A0
class UTypedElementSelectionSet : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x800];                                     // 0x0028   (0x0800)  MISSED
	SDK_UNDEFINED(16,5) /* FMulticastInlineDelegate */ __um(OnPreSelectionChange);                                 // 0x0828   (0x0010)  
	SDK_UNDEFINED(16,6) /* FMulticastInlineDelegate */ __um(OnSelectionChange);                                    // 0x0838   (0x0010)  
	unsigned char                                      UnknownData01_7[0x58];                                      // 0x0848   (0x0058)  MISSED


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.SetSelection
	// bool SetSelection(TArray<FScriptTypedElementHandle>& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // [0x422cd70] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.SelectElements
	// bool SelectElements(TArray<FScriptTypedElementHandle>& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // [0x422c720] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.SelectElement
	// bool SelectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions);        // [0x422c5a0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState
	// void RestoreSelectionState(FTypedElementSelectionSetState& InSelectionState);                                            // [0x422c2f0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature
	// void OnPreChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);                               // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature
	// void OnChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);                                  // [0x3617e10] MulticastDelegate|Public|Delegate 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles
	// TArray<FScriptTypedElementHandle> K2_GetSelectedElementHandles(class UClass* InBaseInterfaceType);                       // [0x422c100] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.IsElementSelected
	// bool IsElementSelected(FScriptTypedElementHandle& InElementHandle, FTypedElementIsSelectedOptions InSelectionOptions);   // [0x422bf60] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects
	// bool HasSelectedObjects(class UClass* InRequiredClass);                                                                  // [0x422bc00] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements
	// bool HasSelectedElements(class UClass* InBaseInterfaceType);                                                             // [0x422bb50] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject
	// class UObject* GetTopSelectedObject(class UClass* InRequiredClass);                                                      // [0x422ba40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement
	// FScriptTypedElementHandle GetSelectionElement(FScriptTypedElementHandle& InElementHandle, ETypedElementSelectionMethod InSelectionMethod); // [0x422b910] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects
	// TArray<UObject*> GetSelectedObjects(class UClass* InRequiredClass);                                                      // [0x422b560] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements
	// int32_t GetNumSelectedElements();                                                                                        // [0x422b260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState
	// FTypedElementSelectionSetState GetCurrentSelectionState();                                                               // [0x422ae50] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject
	// class UObject* GetBottomSelectedObject(class UClass* InRequiredClass);                                                   // [0x422ab90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.DeselectElements
	// bool DeselectElements(TArray<FScriptTypedElementHandle>& InElementHandles, FTypedElementSelectionOptions InSelectionOptions); // [0x422a4b0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.DeselectElement
	// bool DeselectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions);      // [0x422a330] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects
	// int32_t CountSelectedObjects(class UClass* InRequiredClass);                                                             // [0x4229fd0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements
	// int32_t CountSelectedElements(class UClass* InBaseInterfaceType);                                                        // [0x4229f20] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.ClearSelection
	// bool ClearSelection(FTypedElementSelectionOptions InSelectionOptions);                                                   // [0x4229e70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CanSelectElement
	// bool CanSelectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions);     // [0x4229c60] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement
	// bool CanDeselectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions InSelectionOptions);   // [0x4229920] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers
	// bool AllowSelectionModifiers(FScriptTypedElementHandle& InElementHandle);                                                // [0x42296d0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TypedElementRuntime.TypedElementAssetDataInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTypedElementAssetDataInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData
	// FAssetData GetAssetData(FScriptTypedElementHandle& InElementHandle);                                                     // [0x422a9a0] RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas
	// TArray<FAssetData> GetAllReferencedAssetDatas(FScriptTypedElementHandle& InElementHandle);                               // [0x422a800] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementRuntime.TypedElementHierarchyInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTypedElementHierarchyInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement
	// FScriptTypedElementHandle GetParentElement(FScriptTypedElementHandle& InElementHandle, bool bAllowCreate);               // [0x422b430] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements
	// void GetChildElements(FScriptTypedElementHandle& InElementHandle, TArray<FScriptTypedElementHandle>& OutElementHandles, bool bAllowCreate); // [0x422aca0] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementRuntime.TypedElementObjectInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTypedElementObjectInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementObjectInterface.GetObjectClass
	// class UClass* GetObjectClass(FScriptTypedElementHandle& InElementHandle);                                                // [0x422b360] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementObjectInterface.GetObject
	// class UObject* GetObject(FScriptTypedElementHandle& InElementHandle);                                                    // [0x422b290] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementRuntime.TypedElementPrimitiveCustomDataInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTypedElementPrimitiveCustomDataInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementPrimitiveCustomDataInterface.SetCustomDataValue
	// void SetCustomDataValue(FScriptTypedElementHandle& InElementHandle, int32_t CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty); // [0x422cbe0] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementPrimitiveCustomDataInterface.SetCustomData
	// void SetCustomData(FScriptTypedElementHandle& InElementHandle, TArray<float>& CustomDataFloats, bool bMarkRenderStateDirty); // [0x422ca70] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TypedElementRuntime.TypedElementSelectionInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTypedElementSelectionInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.SelectElement
	// bool SelectElement(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, FTypedElementSelectionOptions& InSelectionOptions); // [0x422c3d0] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected
	// bool IsElementSelected(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, FTypedElementIsSelectedOptions& InSelectionOptions); // [0x422bd90] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement
	// FScriptTypedElementHandle GetSelectionElement(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InCurrentSelection, ETypedElementSelectionMethod InSelectionMethod); // [0x422b720] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.DeselectElement
	// bool DeselectElement(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, FTypedElementSelectionOptions& InSelectionOptions); // [0x422a160] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement
	// bool CanSelectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions& InSelectionOptions);    // [0x4229b30] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement
	// bool CanDeselectElement(FScriptTypedElementHandle& InElementHandle, FTypedElementSelectionOptions& InSelectionOptions);  // [0x42297f0] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers
	// bool AllowSelectionModifiers(FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet);   // [0x4229560] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/TypedElementRuntime.TypedElementSelectionOptions
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FTypedElementSelectionOptions
{ 
	bool                                               bAllowHidden;                                               // 0x0000   (0x0001)  
	bool                                               bAllowGroups;                                               // 0x0001   (0x0001)  
	bool                                               bAllowLegacyNotifications;                                  // 0x0002   (0x0001)  
	bool                                               bWarnIfLocked;                                              // 0x0003   (0x0001)  
	bool                                               bAllowSubRootSelection;                                     // 0x0004   (0x0001)  
	ETypedElementChildInclusionMethod                  ChildElementInclusionMethod;                                // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_7[0xA];                                       // 0x0006   (0x000A)  MISSED
};

/// Struct /Script/TypedElementRuntime.TypedElementSelectionSetState
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FTypedElementSelectionSetState
{ 
	TWeakObjectPtr<class UTypedElementSelectionSet*>   CreatedFromSelectionSet;                                    // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/TypedElementRuntime.TypedElementIsSelectedOptions
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FTypedElementIsSelectedOptions
{ 
	bool                                               bAllowIndirect;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_7[0xB];                                       // 0x0001   (0x000B)  MISSED
};

/// Struct /Script/TypedElementRuntime.TypedElementSelectionNormalizationOptions
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FTypedElementSelectionNormalizationOptions
{ 
	bool                                               bExpandGroups;                                              // 0x0000   (0x0001)  
	bool                                               bFollowAttachment;                                          // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_7[0xA];                                       // 0x0002   (0x000A)  MISSED
};

#pragma pack(pop)


