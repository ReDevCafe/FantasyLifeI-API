
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/AdvancedWidgets.RadialSlider
/// Size: 0x0800 (2048 bytes) (0x000178 - 0x000800) align 16 MaxSize: 0x0800
class URadialSlider : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0178   (0x0004)  
	SDK_UNDEFINED(16,329) /* FDelegateProperty */      __um(ValueDelegate);                                        // 0x017C   (0x0010)  
	bool                                               bUseCustomDefaultValue;                                     // 0x018C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x018D   (0x0003)  MISSED
	float                                              CustomDefaultValue;                                         // 0x0190   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0194   (0x0004)  MISSED
	FRuntimeFloatCurve                                 SliderRange;                                                // 0x0198   (0x0088)  
	TArray<float>                                      ValueTags;                                                  // 0x0220   (0x0010)  
	float                                              SliderHandleStartAngle;                                     // 0x0230   (0x0004)  
	float                                              SliderHandleEndAngle;                                       // 0x0234   (0x0004)  
	float                                              AngularOffset;                                              // 0x0238   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x023C   (0x0004)  MISSED
	FVector2D                                          HandStartEndRatio;                                          // 0x0240   (0x0010)  
	FSliderStyle                                       WidgetStyle;                                                // 0x0250   (0x0500)  
	FLinearColor                                       SliderBarColor;                                             // 0x0750   (0x0010)  
	FLinearColor                                       SliderProgressColor;                                        // 0x0760   (0x0010)  
	FLinearColor                                       SliderHandleColor;                                          // 0x0770   (0x0010)  
	FLinearColor                                       CenterBackgroundColor;                                      // 0x0780   (0x0010)  
	bool                                               Locked;                                                     // 0x0790   (0x0001)  
	bool                                               MouseUsesStep;                                              // 0x0791   (0x0001)  
	bool                                               RequiresControllerLock;                                     // 0x0792   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1];                                       // 0x0793   (0x0001)  MISSED
	float                                              StepSize;                                                   // 0x0794   (0x0004)  
	bool                                               IsFocusable;                                                // 0x0798   (0x0001)  
	bool                                               UseVerticalDrag;                                            // 0x0799   (0x0001)  
	bool                                               ShowSliderHandle;                                           // 0x079A   (0x0001)  
	bool                                               ShowSliderHand;                                             // 0x079B   (0x0001)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x079C   (0x0004)  MISSED
	SDK_UNDEFINED(16,330) /* FMulticastInlineDelegate */ __um(OnMouseCaptureBegin);                                // 0x07A0   (0x0010)  
	SDK_UNDEFINED(16,331) /* FMulticastInlineDelegate */ __um(OnMouseCaptureEnd);                                  // 0x07B0   (0x0010)  
	SDK_UNDEFINED(16,332) /* FMulticastInlineDelegate */ __um(OnControllerCaptureBegin);                           // 0x07C0   (0x0010)  
	SDK_UNDEFINED(16,333) /* FMulticastInlineDelegate */ __um(OnControllerCaptureEnd);                             // 0x07D0   (0x0010)  
	SDK_UNDEFINED(16,334) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                     // 0x07E0   (0x0010)  
	unsigned char                                      UnknownData05_7[0x10];                                      // 0x07F0   (0x0010)  MISSED


	/// Functions
	// Function /Script/AdvancedWidgets.RadialSlider.SetValueTags
	// void SetValueTags(TArray<float>& InValueTags);                                                                           // [0x900bb70] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetValue
	// void SetValue(float InValue);                                                                                            // [0x900ba60] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetUseVerticalDrag
	// void SetUseVerticalDrag(bool InUseVerticalDrag);                                                                         // [0x900b9c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0x900b8a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderRange
	// void SetSliderRange(FRuntimeFloatCurve& InSliderRange);                                                                  // [0x900b760] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderProgressColor
	// void SetSliderProgressColor(FLinearColor InValue);                                                                       // [0x900b650] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle
	// void SetSliderHandleStartAngle(float InValue);                                                                           // [0x900b5a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle
	// void SetSliderHandleEndAngle(float InValue);                                                                             // [0x900b4f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x900b3e0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x900b2d0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetShowSliderHandle
	// void SetShowSliderHandle(bool InShowSliderHandle);                                                                       // [0x900b230] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetShowSliderHand
	// void SetShowSliderHand(bool InShowSliderHand);                                                                           // [0x900b190] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0x900b090] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetHandStartEndRatio
	// void SetHandStartEndRatio(FVector2D InValue);                                                                            // [0x900afb0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetCustomDefaultValue
	// void SetCustomDefaultValue(float InValue);                                                                               // [0x900aea0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetCenterBackgroundColor
	// void SetCenterBackgroundColor(FLinearColor InValue);                                                                     // [0x900ad90] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetAngularOffset
	// void SetAngularOffset(float InValue);                                                                                    // [0x900acf0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.GetValue
	// float GetValue();                                                                                                        // [0x900ac40] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition
	// float GetNormalizedSliderHandlePosition();                                                                               // [0x900abf0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedWidgets.RadialSlider.GetCustomDefaultValue
	// float GetCustomDefaultValue();                                                                                           // [0x900ab40] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


