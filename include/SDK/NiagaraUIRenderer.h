
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
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/NiagaraUIRenderer.NiagaraSystemWidget
/// Size: 0x0228 (552 bytes) (0x000178 - 0x000228) align 8 MaxSize: 0x0228
class UNiagaraSystemWidget : public UWidget
{ 
public:
	class UNiagaraSystem*                              NiagaraSystemReference;                                     // 0x0178   (0x0008)  
	TMap<class UMaterialInterface*, class UMaterialInterface*> MaterialRemapList;                                  // 0x0180   (0x0050)  
	bool                                               AutoActivate;                                               // 0x01D0   (0x0001)  
	bool                                               TickWhenPaused;                                             // 0x01D1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x01D2   (0x0006)  MISSED
	FVector2D                                          DesiredWidgetSize;                                          // 0x01D8   (0x0010)  
	FLinearColor                                       ColorAndOpacity;                                            // 0x01E8   (0x0010)  
	bool                                               FakeDepthScale;                                             // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x01F9   (0x0003)  MISSED
	float                                              FakeDepthScaleDistance;                                     // 0x01FC   (0x0004)  
	bool                                               ShowDebugSystemInWorld;                                     // 0x0200   (0x0001)  
	bool                                               PassDynamicParametersFromRibbon;                            // 0x0201   (0x0001)  
	bool                                               DisableWarnings;                                            // 0x0202   (0x0001)  
	bool                                               RestartSimulationOnPropertyChange;                          // 0x0203   (0x0001)  
	unsigned char                                      UnknownData02_6[0x14];                                      // 0x0204   (0x0014)  MISSED
	class ANiagaraUIActor*                             NiagaraActor;                                               // 0x0218   (0x0008)  
	class UNiagaraUIComponent*                         NiagaraComponent;                                           // 0x0220   (0x0008)  


	/// Functions
	// Function /Script/NiagaraUIRenderer.NiagaraSystemWidget.UpdateTickWhenPaused
	// void UpdateTickWhenPaused(bool NewTickWhenPaused);                                                                       // [0x7f40350] Final|Native|Public|BlueprintCallable 
	// Function /Script/NiagaraUIRenderer.NiagaraSystemWidget.UpdateNiagaraSystemReference
	// void UpdateNiagaraSystemReference(class UNiagaraSystem* NewNiagaraSystem);                                               // [0x7f402c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NiagaraUIRenderer.NiagaraSystemWidget.SetRemapMaterial
	// void SetRemapMaterial(class UMaterialInterface* OriginalMaterial, class UMaterialInterface* RemapMaterial);              // [0x7f401f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NiagaraUIRenderer.NiagaraSystemWidget.SetDesiredWidgetSize
	// void SetDesiredWidgetSize(FVector2D NewDesiredSize);                                                                     // [0x7f40160] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/NiagaraUIRenderer.NiagaraSystemWidget.SetColorAndOpacity
	// void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                                 // [0x7f400d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/NiagaraUIRenderer.NiagaraSystemWidget.GetRemapMaterial
	// class UMaterialInterface* GetRemapMaterial(class UMaterialInterface* OriginalMaterial);                                  // [0x7f40030] Final|Native|Public|BlueprintCallable 
	// Function /Script/NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
	// class UNiagaraUIComponent* GetNiagaraComponent();                                                                        // [0x7f40000] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem
	// void DeactivateSystem();                                                                                                 // [0x7f3ffe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
	// void ActivateSystem(bool Reset);                                                                                         // [0x7f3ff50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NiagaraUIRenderer.NiagaraUIActor
/// Size: 0x0290 (656 bytes) (0x000290 - 0x000290) align 8 MaxSize: 0x0290
class ANiagaraUIActor : public AActor
{ 
public:
};

/// Class /Script/NiagaraUIRenderer.NiagaraUIComponent
/// Size: 0x0780 (1920 bytes) (0x000778 - 0x000780) align 16 MaxSize: 0x0780
class UNiagaraUIComponent : public UNiagaraComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0778   (0x0008)  MISSED
};

#pragma pack(pop)


