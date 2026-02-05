
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

/// Enum /Script/AudioWidgets.EAudioPanelLayoutType
/// Size: 0x01 (1 bytes)
enum class EAudioPanelLayoutType : uint8_t
{
	EAudioPanelLayoutType__Basic                                                     = 0,
	EAudioPanelLayoutType__Advanced                                                  = 1
};

/// Enum /Script/AudioWidgets.EYAxisLabelsUnit
/// Size: 0x01 (1 bytes)
enum class EYAxisLabelsUnit : uint8_t
{
	EYAxisLabelsUnit__Linear                                                         = 0,
	EYAxisLabelsUnit__Db                                                             = 1
};

/// Enum /Script/AudioWidgets.EXAxisLabelsUnit
/// Size: 0x01 (1 bytes)
enum class EXAxisLabelsUnit : uint8_t
{
	EXAxisLabelsUnit__Samples                                                        = 0,
	EXAxisLabelsUnit__Seconds                                                        = 1
};

/// Enum /Script/AudioWidgets.EAudioColorGradient
/// Size: 0x01 (1 bytes)
enum class EAudioColorGradient : uint8_t
{
	EAudioColorGradient__BlackToWhite                                                = 0,
	EAudioColorGradient__WhiteToBlack                                                = 1
};

/// Enum /Script/AudioWidgets.EAudioOscilloscopeTriggerMode
/// Size: 0x01 (1 bytes)
enum class EAudioOscilloscopeTriggerMode : uint8_t
{
	EAudioOscilloscopeTriggerMode__None                                              = 0,
	EAudioOscilloscopeTriggerMode__Rising                                            = 1,
	EAudioOscilloscopeTriggerMode__Falling                                           = 2
};

/// Enum /Script/AudioWidgets.EAudioSpectrogramFrequencyAxisScale
/// Size: 0x01 (1 bytes)
enum class EAudioSpectrogramFrequencyAxisScale : uint8_t
{
	EAudioSpectrogramFrequencyAxisScale__Linear                                      = 0,
	EAudioSpectrogramFrequencyAxisScale__Logarithmic                                 = 1
};

/// Enum /Script/AudioWidgets.EAudioSpectrogramFrequencyAxisPixelBucketMode
/// Size: 0x01 (1 bytes)
enum class EAudioSpectrogramFrequencyAxisPixelBucketMode : uint8_t
{
	EAudioSpectrogramFrequencyAxisPixelBucketMode__Sample                            = 0,
	EAudioSpectrogramFrequencyAxisPixelBucketMode__Peak                              = 1,
	EAudioSpectrogramFrequencyAxisPixelBucketMode__Average                           = 2
};

/// Enum /Script/AudioWidgets.EAudioRadialSliderLayout
/// Size: 0x01 (1 bytes)
enum class EAudioRadialSliderLayout : uint8_t
{
	Layout_LabelTop                                                                  = 0,
	Layout_LabelCenter                                                               = 1,
	Layout_LabelBottom                                                               = 2
};

/// Enum /Script/AudioWidgets.EAudioSpectrumPlotFrequencyAxisScale
/// Size: 0x01 (1 bytes)
enum class EAudioSpectrumPlotFrequencyAxisScale : uint8_t
{
	EAudioSpectrumPlotFrequencyAxisScale__Linear                                     = 0,
	EAudioSpectrumPlotFrequencyAxisScale__Logarithmic                                = 1
};

/// Enum /Script/AudioWidgets.EAudioSpectrumPlotFrequencyAxisPixelBucketMode
/// Size: 0x01 (1 bytes)
enum class EAudioSpectrumPlotFrequencyAxisPixelBucketMode : uint8_t
{
	EAudioSpectrumPlotFrequencyAxisPixelBucketMode__Sample                           = 0,
	EAudioSpectrumPlotFrequencyAxisPixelBucketMode__Peak                             = 1,
	EAudioSpectrumPlotFrequencyAxisPixelBucketMode__Average                          = 2
};

/// Struct /Script/AudioWidgets.MeterChannelInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FMeterChannelInfo
{ 
	float                                              MeterValue;                                                 // 0x0000   (0x0004)  
	float                                              PeakValue;                                                  // 0x0004   (0x0004)  
	float                                              ClippingValue;                                              // 0x0008   (0x0004)  
};

/// Struct /Script/AudioWidgets.AudioMeterStyle
/// Size: 0x04D0 (1232 bytes) (0x000008 - 0x0004D0) align 16 MaxSize: 0x04D0
struct FAudioMeterStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        MeterValueImage;                                            // 0x0010   (0x00D0)  
	FSlateBrush                                        BackgroundImage;                                            // 0x00E0   (0x00D0)  
	FSlateBrush                                        MeterBackgroundImage;                                       // 0x01B0   (0x00D0)  
	FSlateBrush                                        MeterValueBackgroundImage;                                  // 0x0280   (0x00D0)  
	FSlateBrush                                        MeterPeakImage;                                             // 0x0350   (0x00D0)  
	FVector2D                                          MeterSize;                                                  // 0x0420   (0x0010)  
	FVector2D                                          MeterPadding;                                               // 0x0430   (0x0010)  
	float                                              MeterValuePadding;                                          // 0x0440   (0x0004)  
	float                                              PeakValueWidth;                                             // 0x0444   (0x0004)  
	FVector2D                                          ValueRangeDb;                                               // 0x0448   (0x0010)  
	bool                                               bShowScale;                                                 // 0x0458   (0x0001)  
	bool                                               bScaleSide;                                                 // 0x0459   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x045A   (0x0002)  MISSED
	float                                              ScaleHashOffset;                                            // 0x045C   (0x0004)  
	float                                              ScaleHashWidth;                                             // 0x0460   (0x0004)  
	float                                              ScaleHashHeight;                                            // 0x0464   (0x0004)  
	int32_t                                            DecibelsPerHash;                                            // 0x0468   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x046C   (0x0004)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x0470   (0x0060)  
};

/// Class /Script/AudioWidgets.AudioMeter
/// Size: 0x0700 (1792 bytes) (0x000178 - 0x000700) align 16 MaxSize: 0x0700
class UAudioMeter : public UWidget
{ 
public:
	TArray<FMeterChannelInfo>                          MeterChannelInfo;                                           // 0x0178   (0x0010)  
	SDK_UNDEFINED(16,372) /* FDelegateProperty */      __um(MeterChannelInfoDelegate);                             // 0x0188   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0198   (0x0008)  MISSED
	FAudioMeterStyle                                   WidgetStyle;                                                // 0x01A0   (0x04D0)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x0670   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0671   (0x0003)  MISSED
	FLinearColor                                       BackgroundColor;                                            // 0x0674   (0x0010)  
	FLinearColor                                       MeterBackgroundColor;                                       // 0x0684   (0x0010)  
	FLinearColor                                       MeterValueColor;                                            // 0x0694   (0x0010)  
	FLinearColor                                       MeterPeakColor;                                             // 0x06A4   (0x0010)  
	FLinearColor                                       MeterClippingColor;                                         // 0x06B4   (0x0010)  
	FLinearColor                                       MeterScaleColor;                                            // 0x06C4   (0x0010)  
	FLinearColor                                       MeterScaleLabelColor;                                       // 0x06D4   (0x0010)  
	unsigned char                                      UnknownData02_7[0x1C];                                      // 0x06E4   (0x001C)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioMeter.SetMeterValueColor
	// void SetMeterValueColor(FLinearColor InValue);                                                                           // [0x9044560] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleLabelColor
	// void SetMeterScaleLabelColor(FLinearColor InValue);                                                                      // [0x9044450] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleColor
	// void SetMeterScaleColor(FLinearColor InValue);                                                                           // [0x9044340] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterPeakColor
	// void SetMeterPeakColor(FLinearColor InValue);                                                                            // [0x9044230] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterClippingColor
	// void SetMeterClippingColor(FLinearColor InValue);                                                                        // [0x9044120] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterChannelInfo
	// void SetMeterChannelInfo(TArray<FMeterChannelInfo>& InMeterChannelInfo);                                                 // [0x9044070] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterBackgroundColor
	// void SetMeterBackgroundColor(FLinearColor InValue);                                                                      // [0x9043f60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor InValue);                                                                           // [0x9043d10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature
	// TArray<FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();                                                      // [0x35d7f00] Public|Delegate      
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo
	// TArray<FMeterChannelInfo> GetMeterChannelInfo();                                                                         // [0x9043a30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AudioWidgets.FixedSampleSequenceRulerStyle
/// Size: 0x0270 (624 bytes) (0x000008 - 0x000270) align 16 MaxSize: 0x0270
struct FFixedSampleSequenceRulerStyle : FSlateWidgetStyle
{ 
	float                                              HandleWidth;                                                // 0x0008   (0x0004)  
	FSlateColor                                        HandleColor;                                                // 0x000C   (0x0014)  
	FSlateBrush                                        HandleBrush;                                                // 0x0020   (0x00D0)  
	FSlateColor                                        TicksColor;                                                 // 0x00F0   (0x0014)  
	FSlateColor                                        TicksTextColor;                                             // 0x0104   (0x0014)  
	FSlateFontInfo                                     TicksTextFont;                                              // 0x0118   (0x0060)  
	float                                              TicksTextOffset;                                            // 0x0178   (0x0004)  
	FSlateColor                                        BackgroundColor;                                            // 0x017C   (0x0014)  
	FSlateBrush                                        BackgroundBrush;                                            // 0x0190   (0x00D0)  
	float                                              DesiredWidth;                                               // 0x0260   (0x0004)  
	float                                              DesiredHeight;                                              // 0x0264   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0268   (0x0008)  MISSED
};

/// Struct /Script/AudioWidgets.SampledSequenceValueGridOverlayStyle
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FSampledSequenceValueGridOverlayStyle : FSlateWidgetStyle
{ 
	FSlateColor                                        GridColor;                                                  // 0x0008   (0x0014)  
	float                                              GridThickness;                                              // 0x001C   (0x0004)  
	FSlateColor                                        LabelTextColor;                                             // 0x0020   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FSlateFontInfo                                     LabelTextFont;                                              // 0x0038   (0x0060)  
	float                                              DesiredWidth;                                               // 0x0098   (0x0004)  
	float                                              DesiredHeight;                                              // 0x009C   (0x0004)  
};

/// Struct /Script/AudioWidgets.SampledSequenceViewerStyle
/// Size: 0x0160 (352 bytes) (0x000008 - 0x000160) align 16 MaxSize: 0x0160
struct FSampledSequenceViewerStyle : FSlateWidgetStyle
{ 
	FSlateColor                                        SequenceColor;                                              // 0x0008   (0x0014)  
	float                                              SequenceLineThickness;                                      // 0x001C   (0x0004)  
	FSlateColor                                        MajorGridLineColor;                                         // 0x0020   (0x0014)  
	FSlateColor                                        MinorGridLineColor;                                         // 0x0034   (0x0014)  
	FSlateColor                                        ZeroCrossingLineColor;                                      // 0x0048   (0x0014)  
	float                                              ZeroCrossingLineThickness;                                  // 0x005C   (0x0004)  
	float                                              SampleMarkersSize;                                          // 0x0060   (0x0004)  
	FSlateColor                                        SequenceBackgroundColor;                                    // 0x0064   (0x0014)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x0080   (0x00D0)  
	float                                              DesiredWidth;                                               // 0x0150   (0x0004)  
	float                                              DesiredHeight;                                              // 0x0154   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0158   (0x0008)  MISSED
};

/// Struct /Script/AudioWidgets.TriggerThresholdLineStyle
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FTriggerThresholdLineStyle : FSlateWidgetStyle
{ 
	FLinearColor                                       LineColor;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/AudioWidgets.AudioOscilloscopePanelStyle
/// Size: 0x04A0 (1184 bytes) (0x000008 - 0x0004A0) align 16 MaxSize: 0x04A0
struct FAudioOscilloscopePanelStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FFixedSampleSequenceRulerStyle                     TimeRulerStyle;                                             // 0x0010   (0x0270)  
	FSampledSequenceValueGridOverlayStyle              ValueGridStyle;                                             // 0x0280   (0x00A0)  
	FSampledSequenceViewerStyle                        WaveViewerStyle;                                            // 0x0320   (0x0160)  
	FTriggerThresholdLineStyle                         TriggerThresholdLineStyle;                                  // 0x0480   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0498   (0x0008)  MISSED
};

/// Class /Script/AudioWidgets.AudioOscilloscope
/// Size: 0x0690 (1680 bytes) (0x000178 - 0x000690) align 16 MaxSize: 0x0690
class UAudioOscilloscope : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0178   (0x0008)  MISSED
	FAudioOscilloscopePanelStyle                       OscilloscopeStyle;                                          // 0x0180   (0x04A0)  
	class UAudioBus*                                   AudioBus;                                                   // 0x0620   (0x0008)  
	float                                              TimeWindowMs;                                               // 0x0628   (0x0004)  
	float                                              AnalysisPeriodMs;                                           // 0x062C   (0x0004)  
	bool                                               bShowTimeGrid;                                              // 0x0630   (0x0001)  
	EXAxisLabelsUnit                                   TimeGridLabelsUnit;                                         // 0x0631   (0x0001)  
	bool                                               bShowAmplitudeGrid;                                         // 0x0632   (0x0001)  
	bool                                               bShowAmplitudeLabels;                                       // 0x0633   (0x0001)  
	EYAxisLabelsUnit                                   AmplitudeGridLabelsUnit;                                    // 0x0634   (0x0001)  
	bool                                               bShowTriggerThresholdLine;                                  // 0x0635   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0636   (0x0002)  MISSED
	float                                              TriggerThreshold;                                           // 0x0638   (0x0004)  
	EAudioPanelLayoutType                              PanelLayoutType;                                            // 0x063C   (0x0001)  
	unsigned char                                      UnknownData02_7[0x53];                                      // 0x063D   (0x0053)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioOscilloscope.StopProcessing
	// void StopProcessing();                                                                                                   // [0x90454f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioOscilloscope.StartProcessing
	// void StartProcessing();                                                                                                  // [0x9045490] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioOscilloscope.GetOscilloscopeAudioSamples__DelegateSignature
	// TArray<float> GetOscilloscopeAudioSamples__DelegateSignature();                                                          // [0x35d7f00] Public|Delegate      
};

/// Class /Script/AudioWidgets.AudioRadialSlider
/// Size: 0x0390 (912 bytes) (0x000178 - 0x000390) align 16 MaxSize: 0x0390
class UAudioRadialSlider : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0178   (0x0004)  
	SDK_UNDEFINED(16,373) /* FDelegateProperty */      __um(ValueDelegate);                                        // 0x017C   (0x0010)  
	TEnumAsByte<EAudioRadialSliderLayout>              WidgetLayout;                                               // 0x018C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x018D   (0x0003)  MISSED
	FLinearColor                                       CenterBackgroundColor;                                      // 0x0190   (0x0010)  
	FLinearColor                                       SliderProgressColor;                                        // 0x01A0   (0x0010)  
	FLinearColor                                       SliderBarColor;                                             // 0x01B0   (0x0010)  
	FVector2D                                          HandStartEndRatio;                                          // 0x01C0   (0x0010)  
	FText                                              UnitsText;                                                  // 0x01D0   (0x0018)  
	FLinearColor                                       TextLabelBackgroundColor;                                   // 0x01E0   (0x0010)  
	bool                                               ShowLabelOnlyOnHover;                                       // 0x01F0   (0x0001)  
	bool                                               ShowUnitsText;                                              // 0x01F1   (0x0001)  
	bool                                               IsUnitsTextReadOnly;                                        // 0x01F2   (0x0001)  
	bool                                               IsValueTextReadOnly;                                        // 0x01F3   (0x0001)  
	float                                              SliderThickness;                                            // 0x01F4   (0x0004)  
	FVector2D                                          OutputRange;                                                // 0x01F8   (0x0010)  
	SDK_UNDEFINED(16,374) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                     // 0x0208   (0x0010)  
	unsigned char                                      UnknownData01_7[0x178];                                     // 0x0218   (0x0178)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioRadialSlider.SetWidgetLayout
	// void SetWidgetLayout(TEnumAsByte<EAudioRadialSliderLayout> InLayout);                                                    // [0x9045400] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetValueTextReadOnly
	// void SetValueTextReadOnly(bool bIsReadOnly);                                                                             // [0x90451c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly
	// void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                             // [0x9045080] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsText
	// void SetUnitsText(FText Units);                                                                                          // [0x9044f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor
	// void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                   // [0x9044d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderThickness
	// void SetSliderThickness(float InThickness);                                                                              // [0x9044c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderProgressColor
	// void SetSliderProgressColor(FLinearColor InValue);                                                                       // [0x9044b70] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x9044a30] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowUnitsText
	// void SetShowUnitsText(bool bShowUnitsText);                                                                              // [0x9044850] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover
	// void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                                // [0x9044710] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetOutputRange
	// void SetOutputRange(FVector2D InOutputRange);                                                                            // [0x9044670] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetHandStartEndRatio
	// void SetHandStartEndRatio(FVector2D InHandStartEndRatio);                                                                // [0x9043ec0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor
	// void SetCenterBackgroundColor(FLinearColor InValue);                                                                     // [0x9043e20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetSliderValue
	// float GetSliderValue(float OutputValue);                                                                                 // [0x9043c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetOutputValue
	// float GetOutputValue(float InSliderValue);                                                                               // [0x9043b30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioWidgets.AudioVolumeRadialSlider
/// Size: 0x0390 (912 bytes) (0x000390 - 0x000390) align 16 MaxSize: 0x0390
class UAudioVolumeRadialSlider : public UAudioRadialSlider
{ 
public:
};

/// Class /Script/AudioWidgets.AudioFrequencyRadialSlider
/// Size: 0x0390 (912 bytes) (0x000390 - 0x000390) align 16 MaxSize: 0x0390
class UAudioFrequencyRadialSlider : public UAudioRadialSlider
{ 
public:
};

/// Class /Script/AudioWidgets.AudioSliderBase
/// Size: 0x09C0 (2496 bytes) (0x000178 - 0x0009C0) align 16 MaxSize: 0x09C0
class UAudioSliderBase : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0178   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x017C   (0x0004)  MISSED
	FText                                              UnitsText;                                                  // 0x0180   (0x0018)  
	FLinearColor                                       TextLabelBackgroundColor;                                   // 0x0190   (0x0010)  
	SDK_UNDEFINED(16,375) /* FDelegateProperty */      __um(TextLabelBackgroundColorDelegate);                     // 0x01A0   (0x0010)  
	bool                                               ShowLabelOnlyOnHover;                                       // 0x01B0   (0x0001)  
	bool                                               ShowUnitsText;                                              // 0x01B1   (0x0001)  
	bool                                               IsUnitsTextReadOnly;                                        // 0x01B2   (0x0001)  
	bool                                               IsValueTextReadOnly;                                        // 0x01B3   (0x0001)  
	SDK_UNDEFINED(16,376) /* FDelegateProperty */      __um(ValueDelegate);                                        // 0x01B4   (0x0010)  
	FLinearColor                                       SliderBackgroundColor;                                      // 0x01C4   (0x0010)  
	SDK_UNDEFINED(16,377) /* FDelegateProperty */      __um(SliderBackgroundColorDelegate);                        // 0x01D4   (0x0010)  
	FLinearColor                                       SliderBarColor;                                             // 0x01E4   (0x0010)  
	SDK_UNDEFINED(16,378) /* FDelegateProperty */      __um(SliderBarColorDelegate);                               // 0x01F4   (0x0010)  
	FLinearColor                                       SliderThumbColor;                                           // 0x0204   (0x0010)  
	SDK_UNDEFINED(16,379) /* FDelegateProperty */      __um(SliderThumbColorDelegate);                             // 0x0214   (0x0010)  
	FLinearColor                                       WidgetBackgroundColor;                                      // 0x0224   (0x0010)  
	SDK_UNDEFINED(16,380) /* FDelegateProperty */      __um(WidgetBackgroundColorDelegate);                        // 0x0234   (0x0010)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x0244   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0245   (0x0003)  MISSED
	SDK_UNDEFINED(16,381) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                     // 0x0248   (0x0010)  
	unsigned char                                      UnknownData02_7[0x768];                                     // 0x0258   (0x0768)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor
	// void SetWidgetBackgroundColor(FLinearColor InValue);                                                                     // [0x9045360] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetValueTextReadOnly
	// void SetValueTextReadOnly(bool bIsReadOnly);                                                                             // [0x9045290] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly
	// void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                             // [0x9045120] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsText
	// void SetUnitsText(FText Units);                                                                                          // [0x9044fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor
	// void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                   // [0x9044e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderThumbColor
	// void SetSliderThumbColor(FLinearColor InValue);                                                                          // [0x9044cc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x9044ad0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBackgroundColor
	// void SetSliderBackgroundColor(FLinearColor InValue);                                                                     // [0x9044990] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowUnitsText
	// void SetShowUnitsText(bool bShowUnitsText);                                                                              // [0x90448f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover
	// void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                                // [0x90447b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetSliderValue
	// float GetSliderValue(float OutputValue);                                                                                 // [0x9043990] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetOutputValue
	// float GetOutputValue(float InSliderValue);                                                                               // [0x9043bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetLinValue
	// float GetLinValue(float OutputValue);                                                                                    // [0x9043990] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioWidgets.AudioSlider
/// Size: 0x09D0 (2512 bytes) (0x0009C0 - 0x0009D0) align 16 MaxSize: 0x09D0
class UAudioSlider : public UAudioSliderBase
{ 
public:
	TWeakObjectPtr<class UCurveFloat*>                 LinToOutputCurve;                                           // 0x09C0   (0x0008)  
	TWeakObjectPtr<class UCurveFloat*>                 OutputToLinCurve;                                           // 0x09C8   (0x0008)  
};

/// Class /Script/AudioWidgets.AudioVolumeSlider
/// Size: 0x09D0 (2512 bytes) (0x0009D0 - 0x0009D0) align 16 MaxSize: 0x09D0
class UAudioVolumeSlider : public UAudioSlider
{ 
public:
};

/// Class /Script/AudioWidgets.AudioFrequencySlider
/// Size: 0x09D0 (2512 bytes) (0x0009C0 - 0x0009D0) align 16 MaxSize: 0x09D0
class UAudioFrequencySlider : public UAudioSliderBase
{ 
public:
	FVector2D                                          OutputRange;                                                // 0x09C0   (0x0010)  
};

/// Struct /Script/AudioWidgets.SampledSequenceVectorViewerStyle
/// Size: 0x0110 (272 bytes) (0x000008 - 0x000110) align 16 MaxSize: 0x0110
struct FSampledSequenceVectorViewerStyle : FSlateWidgetStyle
{ 
	FSlateColor                                        BackgroundColor;                                            // 0x0008   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x0020   (0x00D0)  
	FLinearColor                                       LineColor;                                                  // 0x00F0   (0x0010)  
	float                                              LineThickness;                                              // 0x0100   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0104   (0x000C)  MISSED
};

/// Struct /Script/AudioWidgets.AudioVectorscopePanelStyle
/// Size: 0x01C0 (448 bytes) (0x000008 - 0x0001C0) align 16 MaxSize: 0x01C0
struct FAudioVectorscopePanelStyle : FSlateWidgetStyle
{ 
	FSampledSequenceValueGridOverlayStyle              ValueGridStyle;                                             // 0x0008   (0x00A0)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
	FSampledSequenceVectorViewerStyle                  VectorViewerStyle;                                          // 0x00B0   (0x0110)  
};

/// Class /Script/AudioWidgets.AudioVectorscope
/// Size: 0x03B0 (944 bytes) (0x000178 - 0x0003B0) align 16 MaxSize: 0x03B0
class UAudioVectorscope : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0178   (0x0008)  MISSED
	FAudioVectorscopePanelStyle                        VectorscopeStyle;                                           // 0x0180   (0x01C0)  
	class UAudioBus*                                   AudioBus;                                                   // 0x0340   (0x0008)  
	bool                                               bShowGrid;                                                  // 0x0348   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0349   (0x0003)  MISSED
	int32_t                                            GridDivisions;                                              // 0x034C   (0x0004)  
	float                                              DisplayPersistenceMs;                                       // 0x0350   (0x0004)  
	float                                              Scale;                                                      // 0x0354   (0x0004)  
	EAudioPanelLayoutType                              PanelLayoutType;                                            // 0x0358   (0x0001)  
	unsigned char                                      UnknownData02_7[0x57];                                      // 0x0359   (0x0057)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioVectorscope.StopProcessing
	// void StopProcessing();                                                                                                   // [0x9045520] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioVectorscope.StartProcessing
	// void StartProcessing();                                                                                                  // [0x90454c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioVectorscope.GetVectorscopeAudioSamples__DelegateSignature
	// TArray<float> GetVectorscopeAudioSamples__DelegateSignature();                                                           // [0x35d7f00] Public|Delegate      
};

/// Struct /Script/AudioWidgets.AudioSpectrumPlotStyle
/// Size: 0x00C0 (192 bytes) (0x000008 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FAudioSpectrumPlotStyle : FSlateWidgetStyle
{ 
	FSlateColor                                        BackgroundColor;                                            // 0x0008   (0x0014)  
	FSlateColor                                        GridColor;                                                  // 0x001C   (0x0014)  
	FSlateColor                                        AxisLabelColor;                                             // 0x0030   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FSlateFontInfo                                     AxisLabelFont;                                              // 0x0048   (0x0060)  
	FSlateColor                                        SpectrumColor;                                              // 0x00A8   (0x0014)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Struct /Script/AudioWidgets.AudioTextBoxStyle
/// Size: 0x0100 (256 bytes) (0x000008 - 0x000100) align 16 MaxSize: 0x0100
struct FAudioTextBoxStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundImage;                                            // 0x0010   (0x00D0)  
	FSlateColor                                        BackgroundColor;                                            // 0x00E0   (0x0014)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x00F4   (0x000C)  MISSED
};

/// Struct /Script/AudioWidgets.AudioSliderStyle
/// Size: 0x0750 (1872 bytes) (0x000008 - 0x000750) align 16 MaxSize: 0x0750
struct FAudioSliderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSliderStyle                                       SliderStyle;                                                // 0x0010   (0x0500)  
	FAudioTextBoxStyle                                 TextBoxStyle;                                               // 0x0510   (0x0100)  
	FSlateBrush                                        WidgetBackgroundImage;                                      // 0x0610   (0x00D0)  
	FSlateColor                                        SliderBackgroundColor;                                      // 0x06E0   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x06F4   (0x0004)  MISSED
	FVector2D                                          SliderBackgroundSize;                                       // 0x06F8   (0x0010)  
	float                                              LabelPadding;                                               // 0x0708   (0x0004)  
	FSlateColor                                        SliderBarColor;                                             // 0x070C   (0x0014)  
	FSlateColor                                        SliderThumbColor;                                           // 0x0720   (0x0014)  
	FSlateColor                                        WidgetBackgroundColor;                                      // 0x0734   (0x0014)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0748   (0x0008)  MISSED
};

/// Struct /Script/AudioWidgets.AudioRadialSliderStyle
/// Size: 0x0160 (352 bytes) (0x000008 - 0x000160) align 16 MaxSize: 0x0160
struct FAudioRadialSliderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FAudioTextBoxStyle                                 TextBoxStyle;                                               // 0x0010   (0x0100)  
	FSlateColor                                        CenterBackgroundColor;                                      // 0x0110   (0x0014)  
	FSlateColor                                        SliderBarColor;                                             // 0x0124   (0x0014)  
	FSlateColor                                        SliderProgressColor;                                        // 0x0138   (0x0014)  
	float                                              LabelPadding;                                               // 0x014C   (0x0004)  
	float                                              DefaultSliderRadius;                                        // 0x0150   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0154   (0x000C)  MISSED
};

/// Struct /Script/AudioWidgets.PlayheadOverlayStyle
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FPlayheadOverlayStyle : FSlateWidgetStyle
{ 
	FSlateColor                                        PlayheadColor;                                              // 0x0008   (0x0014)  
	float                                              PlayheadWidth;                                              // 0x001C   (0x0004)  
	float                                              DesiredWidth;                                               // 0x0020   (0x0004)  
	float                                              DesiredHeight;                                              // 0x0024   (0x0004)  
};

#pragma pack(pop)


