
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioExtensions
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/Synthesis.ESynth1OscType
/// Size: 0x01 (1 bytes)
enum class ESynth1OscType : uint8_t
{
	ESynth1OscType__Sine                                                             = 0,
	ESynth1OscType__Saw                                                              = 1,
	ESynth1OscType__Triangle                                                         = 2,
	ESynth1OscType__Square                                                           = 3,
	ESynth1OscType__Noise                                                            = 4,
	ESynth1OscType__Count                                                            = 5
};

/// Enum /Script/Synthesis.ESynthLFOType
/// Size: 0x01 (1 bytes)
enum class ESynthLFOType : uint8_t
{
	ESynthLFOType__Sine                                                              = 0,
	ESynthLFOType__UpSaw                                                             = 1,
	ESynthLFOType__DownSaw                                                           = 2,
	ESynthLFOType__Square                                                            = 3,
	ESynthLFOType__Triangle                                                          = 4,
	ESynthLFOType__Exponential                                                       = 5,
	ESynthLFOType__RandomSampleHold                                                  = 6,
	ESynthLFOType__Count                                                             = 7
};

/// Enum /Script/Synthesis.ESynthLFOMode
/// Size: 0x01 (1 bytes)
enum class ESynthLFOMode : uint8_t
{
	ESynthLFOMode__Sync                                                              = 0,
	ESynthLFOMode__OneShot                                                           = 1,
	ESynthLFOMode__Free                                                              = 2,
	ESynthLFOMode__Count                                                             = 3
};

/// Enum /Script/Synthesis.ESynthLFOPatchType
/// Size: 0x01 (1 bytes)
enum class ESynthLFOPatchType : uint8_t
{
	ESynthLFOPatchType__PatchToNone                                                  = 0,
	ESynthLFOPatchType__PatchToGain                                                  = 1,
	ESynthLFOPatchType__PatchToOscFreq                                               = 2,
	ESynthLFOPatchType__PatchToFilterFreq                                            = 3,
	ESynthLFOPatchType__PatchToFilterQ                                               = 4,
	ESynthLFOPatchType__PatchToOscPulseWidth                                         = 5,
	ESynthLFOPatchType__PatchToOscPan                                                = 6,
	ESynthLFOPatchType__PatchLFO1ToLFO2Frequency                                     = 7,
	ESynthLFOPatchType__PatchLFO1ToLFO2Gain                                          = 8,
	ESynthLFOPatchType__Count                                                        = 9
};

/// Enum /Script/Synthesis.ESynthModEnvPatch
/// Size: 0x01 (1 bytes)
enum class ESynthModEnvPatch : uint8_t
{
	ESynthModEnvPatch__PatchToNone                                                   = 0,
	ESynthModEnvPatch__PatchToOscFreq                                                = 1,
	ESynthModEnvPatch__PatchToFilterFreq                                             = 2,
	ESynthModEnvPatch__PatchToFilterQ                                                = 3,
	ESynthModEnvPatch__PatchToLFO1Gain                                               = 4,
	ESynthModEnvPatch__PatchToLFO2Gain                                               = 5,
	ESynthModEnvPatch__PatchToLFO1Freq                                               = 6,
	ESynthModEnvPatch__PatchToLFO2Freq                                               = 7,
	ESynthModEnvPatch__Count                                                         = 8
};

/// Enum /Script/Synthesis.ESynthModEnvBiasPatch
/// Size: 0x01 (1 bytes)
enum class ESynthModEnvBiasPatch : uint8_t
{
	ESynthModEnvBiasPatch__PatchToNone                                               = 0,
	ESynthModEnvBiasPatch__PatchToOscFreq                                            = 1,
	ESynthModEnvBiasPatch__PatchToFilterFreq                                         = 2,
	ESynthModEnvBiasPatch__PatchToFilterQ                                            = 3,
	ESynthModEnvBiasPatch__PatchToLFO1Gain                                           = 4,
	ESynthModEnvBiasPatch__PatchToLFO2Gain                                           = 5,
	ESynthModEnvBiasPatch__PatchToLFO1Freq                                           = 6,
	ESynthModEnvBiasPatch__PatchToLFO2Freq                                           = 7,
	ESynthModEnvBiasPatch__Count                                                     = 8
};

/// Enum /Script/Synthesis.ESynthFilterType
/// Size: 0x01 (1 bytes)
enum class ESynthFilterType : uint8_t
{
	ESynthFilterType__LowPass                                                        = 0,
	ESynthFilterType__HighPass                                                       = 1,
	ESynthFilterType__BandPass                                                       = 2,
	ESynthFilterType__BandStop                                                       = 3,
	ESynthFilterType__Count                                                          = 4
};

/// Enum /Script/Synthesis.ESynthFilterAlgorithm
/// Size: 0x01 (1 bytes)
enum class ESynthFilterAlgorithm : uint8_t
{
	ESynthFilterAlgorithm__OnePole                                                   = 0,
	ESynthFilterAlgorithm__StateVariable                                             = 1,
	ESynthFilterAlgorithm__Ladder                                                    = 2,
	ESynthFilterAlgorithm__Count                                                     = 3
};

/// Enum /Script/Synthesis.ESynthStereoDelayMode
/// Size: 0x01 (1 bytes)
enum class ESynthStereoDelayMode : uint8_t
{
	ESynthStereoDelayMode__Normal                                                    = 0,
	ESynthStereoDelayMode__Cross                                                     = 1,
	ESynthStereoDelayMode__PingPong                                                  = 2,
	ESynthStereoDelayMode__Count                                                     = 3
};

/// Enum /Script/Synthesis.ESynth1PatchSource
/// Size: 0x01 (1 bytes)
enum class ESynth1PatchSource : uint8_t
{
	ESynth1PatchSource__LFO1                                                         = 0,
	ESynth1PatchSource__LFO2                                                         = 1,
	ESynth1PatchSource__Envelope                                                     = 2,
	ESynth1PatchSource__BiasEnvelope                                                 = 3,
	ESynth1PatchSource__Count                                                        = 4
};

/// Enum /Script/Synthesis.ESynth1PatchDestination
/// Size: 0x01 (1 bytes)
enum class ESynth1PatchDestination : uint8_t
{
	ESynth1PatchDestination__Osc1Gain                                                = 0,
	ESynth1PatchDestination__Osc1Frequency                                           = 1,
	ESynth1PatchDestination__Osc1Pulsewidth                                          = 2,
	ESynth1PatchDestination__Osc2Gain                                                = 3,
	ESynth1PatchDestination__Osc2Frequency                                           = 4,
	ESynth1PatchDestination__Osc2Pulsewidth                                          = 5,
	ESynth1PatchDestination__FilterFrequency                                         = 6,
	ESynth1PatchDestination__FilterQ                                                 = 7,
	ESynth1PatchDestination__Gain                                                    = 8,
	ESynth1PatchDestination__Pan                                                     = 9,
	ESynth1PatchDestination__LFO1Frequency                                           = 10,
	ESynth1PatchDestination__LFO1Gain                                                = 11,
	ESynth1PatchDestination__LFO2Frequency                                           = 12,
	ESynth1PatchDestination__LFO2Gain                                                = 13,
	ESynth1PatchDestination__Count                                                   = 14
};

/// Enum /Script/Synthesis.ESubmixEffectConvolutionReverbBlockSize
/// Size: 0x01 (1 bytes)
enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
	ESubmixEffectConvolutionReverbBlockSize__BlockSize256                            = 0,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize512                            = 1,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize1024                           = 2
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsProcessorType
/// Size: 0x01 (1 bytes)
enum class ESourceEffectDynamicsProcessorType : uint8_t
{
	ESourceEffectDynamicsProcessorType__Compressor                                   = 0,
	ESourceEffectDynamicsProcessorType__Limiter                                      = 1,
	ESourceEffectDynamicsProcessorType__Expander                                     = 2,
	ESourceEffectDynamicsProcessorType__Gate                                         = 3,
	ESourceEffectDynamicsProcessorType__UpwardsCompressor                            = 4,
	ESourceEffectDynamicsProcessorType__Count                                        = 5
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsPeakMode
/// Size: 0x01 (1 bytes)
enum class ESourceEffectDynamicsPeakMode : uint8_t
{
	ESourceEffectDynamicsPeakMode__MeanSquared                                       = 0,
	ESourceEffectDynamicsPeakMode__RootMeanSquared                                   = 1,
	ESourceEffectDynamicsPeakMode__Peak                                              = 2,
	ESourceEffectDynamicsPeakMode__Count                                             = 3
};

/// Enum /Script/Synthesis.EEnvelopeFollowerPeakMode
/// Size: 0x01 (1 bytes)
enum class EEnvelopeFollowerPeakMode : uint8_t
{
	EEnvelopeFollowerPeakMode__MeanSquared                                           = 0,
	EEnvelopeFollowerPeakMode__RootMeanSquared                                       = 1,
	EEnvelopeFollowerPeakMode__Peak                                                  = 2,
	EEnvelopeFollowerPeakMode__Count                                                 = 3
};

/// Enum /Script/Synthesis.ESourceEffectFilterCircuit
/// Size: 0x01 (1 bytes)
enum class ESourceEffectFilterCircuit : uint8_t
{
	ESourceEffectFilterCircuit__OnePole                                              = 0,
	ESourceEffectFilterCircuit__StateVariable                                        = 1,
	ESourceEffectFilterCircuit__Ladder                                               = 2,
	ESourceEffectFilterCircuit__Count                                                = 3
};

/// Enum /Script/Synthesis.ESourceEffectFilterType
/// Size: 0x01 (1 bytes)
enum class ESourceEffectFilterType : uint8_t
{
	ESourceEffectFilterType__LowPass                                                 = 0,
	ESourceEffectFilterType__HighPass                                                = 1,
	ESourceEffectFilterType__BandPass                                                = 2,
	ESourceEffectFilterType__BandStop                                                = 3,
	ESourceEffectFilterType__Count                                                   = 4
};

/// Enum /Script/Synthesis.ESourceEffectFilterParam
/// Size: 0x01 (1 bytes)
enum class ESourceEffectFilterParam : uint8_t
{
	ESourceEffectFilterParam__FilterFrequency                                        = 0,
	ESourceEffectFilterParam__FilterResonance                                        = 1,
	ESourceEffectFilterParam__Count                                                  = 2
};

/// Enum /Script/Synthesis.EStereoChannelMode
/// Size: 0x01 (1 bytes)
enum class EStereoChannelMode : uint8_t
{
	EStereoChannelMode__MidSide                                                      = 0,
	EStereoChannelMode__LeftRight                                                    = 1,
	EStereoChannelMode__count                                                        = 2
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterModSource
/// Size: 0x01 (1 bytes)
enum class ESourceEffectMotionFilterModSource : uint8_t
{
	ESourceEffectMotionFilterModSource__DistanceFromListener                         = 0,
	ESourceEffectMotionFilterModSource__SpeedRelativeToListener                      = 1,
	ESourceEffectMotionFilterModSource__SpeedOfSourceEmitter                         = 2,
	ESourceEffectMotionFilterModSource__SpeedOfListener                              = 3,
	ESourceEffectMotionFilterModSource__SpeedOfAngleDelta                            = 4,
	ESourceEffectMotionFilterModSource__Count                                        = 5
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterModDestination
/// Size: 0x01 (1 bytes)
enum class ESourceEffectMotionFilterModDestination : uint8_t
{
	ESourceEffectMotionFilterModDestination__FilterACutoffFrequency                  = 0,
	ESourceEffectMotionFilterModDestination__FilterAResonance                        = 1,
	ESourceEffectMotionFilterModDestination__FilterAOutputVolumeDB                   = 2,
	ESourceEffectMotionFilterModDestination__FilterBCutoffFrequency                  = 3,
	ESourceEffectMotionFilterModDestination__FilterBResonance                        = 4,
	ESourceEffectMotionFilterModDestination__FilterBOutputVolumeDB                   = 5,
	ESourceEffectMotionFilterModDestination__FilterMix                               = 6,
	ESourceEffectMotionFilterModDestination__Count                                   = 7
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterTopology
/// Size: 0x01 (1 bytes)
enum class ESourceEffectMotionFilterTopology : uint8_t
{
	ESourceEffectMotionFilterTopology__SerialMode                                    = 0,
	ESourceEffectMotionFilterTopology__ParallelMode                                  = 1,
	ESourceEffectMotionFilterTopology__Count                                         = 2
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterCircuit
/// Size: 0x01 (1 bytes)
enum class ESourceEffectMotionFilterCircuit : uint8_t
{
	ESourceEffectMotionFilterCircuit__OnePole                                        = 0,
	ESourceEffectMotionFilterCircuit__StateVariable                                  = 1,
	ESourceEffectMotionFilterCircuit__Ladder                                         = 2,
	ESourceEffectMotionFilterCircuit__Count                                          = 3
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterType
/// Size: 0x01 (1 bytes)
enum class ESourceEffectMotionFilterType : uint8_t
{
	ESourceEffectMotionFilterType__LowPass                                           = 0,
	ESourceEffectMotionFilterType__HighPass                                          = 1,
	ESourceEffectMotionFilterType__BandPass                                          = 2,
	ESourceEffectMotionFilterType__BandStop                                          = 3,
	ESourceEffectMotionFilterType__Count                                             = 4
};

/// Enum /Script/Synthesis.EPhaserLFOType
/// Size: 0x01 (1 bytes)
enum class EPhaserLFOType : uint8_t
{
	EPhaserLFOType__Sine                                                             = 0,
	EPhaserLFOType__UpSaw                                                            = 1,
	EPhaserLFOType__DownSaw                                                          = 2,
	EPhaserLFOType__Square                                                           = 3,
	EPhaserLFOType__Triangle                                                         = 4,
	EPhaserLFOType__Exponential                                                      = 5,
	EPhaserLFOType__RandomSampleHold                                                 = 6,
	EPhaserLFOType__Count                                                            = 7
};

/// Enum /Script/Synthesis.ERingModulatorTypeSourceEffect
/// Size: 0x01 (1 bytes)
enum class ERingModulatorTypeSourceEffect : uint8_t
{
	ERingModulatorTypeSourceEffect__Sine                                             = 0,
	ERingModulatorTypeSourceEffect__Saw                                              = 1,
	ERingModulatorTypeSourceEffect__Triangle                                         = 2,
	ERingModulatorTypeSourceEffect__Square                                           = 3,
	ERingModulatorTypeSourceEffect__Count                                            = 4
};

/// Enum /Script/Synthesis.EStereoDelaySourceEffect
/// Size: 0x01 (1 bytes)
enum class EStereoDelaySourceEffect : uint8_t
{
	EStereoDelaySourceEffect__Normal                                                 = 0,
	EStereoDelaySourceEffect__Cross                                                  = 1,
	EStereoDelaySourceEffect__PingPong                                               = 2,
	EStereoDelaySourceEffect__Count                                                  = 3
};

/// Enum /Script/Synthesis.EStereoDelayFiltertype
/// Size: 0x01 (1 bytes)
enum class EStereoDelayFiltertype : uint8_t
{
	EStereoDelayFiltertype__Lowpass                                                  = 0,
	EStereoDelayFiltertype__Highpass                                                 = 1,
	EStereoDelayFiltertype__Bandpass                                                 = 2,
	EStereoDelayFiltertype__Notch                                                    = 3,
	EStereoDelayFiltertype__Count                                                    = 4
};

/// Enum /Script/Synthesis.ESubmixFilterType
/// Size: 0x01 (1 bytes)
enum class ESubmixFilterType : uint8_t
{
	ESubmixFilterType__LowPass                                                       = 0,
	ESubmixFilterType__HighPass                                                      = 1,
	ESubmixFilterType__BandPass                                                      = 2,
	ESubmixFilterType__BandStop                                                      = 3,
	ESubmixFilterType__Count                                                         = 4
};

/// Enum /Script/Synthesis.ESubmixFilterAlgorithm
/// Size: 0x01 (1 bytes)
enum class ESubmixFilterAlgorithm : uint8_t
{
	ESubmixFilterAlgorithm__OnePole                                                  = 0,
	ESubmixFilterAlgorithm__StateVariable                                            = 1,
	ESubmixFilterAlgorithm__Ladder                                                   = 2,
	ESubmixFilterAlgorithm__Count                                                    = 3
};

/// Enum /Script/Synthesis.ETapLineMode
/// Size: 0x01 (1 bytes)
enum class ETapLineMode : uint8_t
{
	ETapLineMode__SendToChannel                                                      = 0,
	ETapLineMode__Panning                                                            = 1,
	ETapLineMode__Disabled                                                           = 2
};

/// Enum /Script/Synthesis.EGranularSynthEnvelopeType
/// Size: 0x01 (1 bytes)
enum class EGranularSynthEnvelopeType : uint8_t
{
	EGranularSynthEnvelopeType__Rectangular                                          = 0,
	EGranularSynthEnvelopeType__Triangle                                             = 1,
	EGranularSynthEnvelopeType__DownwardTriangle                                     = 2,
	EGranularSynthEnvelopeType__UpwardTriangle                                       = 3,
	EGranularSynthEnvelopeType__ExponentialDecay                                     = 4,
	EGranularSynthEnvelopeType__ExponentialIncrease                                  = 5,
	EGranularSynthEnvelopeType__Gaussian                                             = 6,
	EGranularSynthEnvelopeType__Hanning                                              = 7,
	EGranularSynthEnvelopeType__Lanczos                                              = 8,
	EGranularSynthEnvelopeType__Cosine                                               = 9,
	EGranularSynthEnvelopeType__CosineSquared                                        = 10,
	EGranularSynthEnvelopeType__Welch                                                = 11,
	EGranularSynthEnvelopeType__Blackman                                             = 12,
	EGranularSynthEnvelopeType__BlackmanHarris                                       = 13,
	EGranularSynthEnvelopeType__Count                                                = 14
};

/// Enum /Script/Synthesis.EGranularSynthSeekType
/// Size: 0x01 (1 bytes)
enum class EGranularSynthSeekType : uint8_t
{
	EGranularSynthSeekType__FromBeginning                                            = 0,
	EGranularSynthSeekType__FromCurrentPosition                                      = 1,
	EGranularSynthSeekType__Count                                                    = 2
};

/// Enum /Script/Synthesis.CurveInterpolationType
/// Size: 0x01 (1 bytes)
enum class CurveInterpolationType : uint8_t
{
	CurveInterpolationType__AUTOINTERP                                               = 0,
	CurveInterpolationType__LINEAR                                                   = 1,
	CurveInterpolationType__CONSTANT                                                 = 2
};

/// Enum /Script/Synthesis.ESamplePlayerSeekType
/// Size: 0x01 (1 bytes)
enum class ESamplePlayerSeekType : uint8_t
{
	ESamplePlayerSeekType__FromBeginning                                             = 0,
	ESamplePlayerSeekType__FromCurrentPosition                                       = 1,
	ESamplePlayerSeekType__FromEnd                                                   = 2,
	ESamplePlayerSeekType__Count                                                     = 3
};

/// Enum /Script/Synthesis.ESynthKnobSize
/// Size: 0x01 (1 bytes)
enum class ESynthKnobSize : uint8_t
{
	ESynthKnobSize__Medium                                                           = 0,
	ESynthKnobSize__Large                                                            = 1,
	ESynthKnobSize__Count                                                            = 2
};

/// Enum /Script/Synthesis.ESynthSlateSizeType
/// Size: 0x01 (1 bytes)
enum class ESynthSlateSizeType : uint8_t
{
	ESynthSlateSizeType__Small                                                       = 0,
	ESynthSlateSizeType__Medium                                                      = 1,
	ESynthSlateSizeType__Large                                                       = 2,
	ESynthSlateSizeType__Count                                                       = 3
};

/// Enum /Script/Synthesis.ESynthSlateColorStyle
/// Size: 0x01 (1 bytes)
enum class ESynthSlateColorStyle : uint8_t
{
	ESynthSlateColorStyle__Light                                                     = 0,
	ESynthSlateColorStyle__Dark                                                      = 1,
	ESynthSlateColorStyle__Count                                                     = 2
};

/// Class /Script/Synthesis.AudioImpulseResponse
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UAudioImpulseResponse : public UObject
{ 
public:
	TArray<float>                                      ImpulseResponse;                                            // 0x0028   (0x0010)  
	int32_t                                            NumChannels;                                                // 0x0038   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x003C   (0x0004)  
	float                                              NormalizationVolumeDb;                                      // 0x0040   (0x0004)  
	bool                                               bTrueStereo;                                                // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	TArray<float>                                      IRData;                                                     // 0x0048   (0x0010)  
};

/// Struct /Script/Synthesis.Synth1PatchCable
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSynth1PatchCable
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	ESynth1PatchDestination                            destination;                                                // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.EpicSynth1Patch
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FEpicSynth1Patch
{ 
	ESynth1PatchSource                                 PatchSource;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FSynth1PatchCable>                          PatchCables;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/Synthesis.ModularSynthPreset
/// Size: 0x00E0 (224 bytes) (0x000008 - 0x0000E0) align 8 MaxSize: 0x00E0
struct FModularSynthPreset : FTableRowBase
{ 
	bool                                               bEnablePolyphony : 1;                                       // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	ESynth1OscType                                     Osc1Type;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              Osc1Gain;                                                   // 0x0010   (0x0004)  
	float                                              Osc1Octave;                                                 // 0x0014   (0x0004)  
	float                                              Osc1Semitones;                                              // 0x0018   (0x0004)  
	float                                              Osc1Cents;                                                  // 0x001C   (0x0004)  
	float                                              Osc1PulseWidth;                                             // 0x0020   (0x0004)  
	ESynth1OscType                                     Osc2Type;                                                   // 0x0024   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              Osc2Gain;                                                   // 0x0028   (0x0004)  
	float                                              Osc2Octave;                                                 // 0x002C   (0x0004)  
	float                                              Osc2Semitones;                                              // 0x0030   (0x0004)  
	float                                              Osc2Cents;                                                  // 0x0034   (0x0004)  
	float                                              Osc2PulseWidth;                                             // 0x0038   (0x0004)  
	float                                              Portamento;                                                 // 0x003C   (0x0004)  
	bool                                               bEnableUnison : 1;                                          // 0x0040:0 (0x0001)  
	bool                                               bEnableOscillatorSync : 1;                                  // 0x0040:1 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              Spread;                                                     // 0x0044   (0x0004)  
	float                                              Pan;                                                        // 0x0048   (0x0004)  
	float                                              LFO1Frequency;                                              // 0x004C   (0x0004)  
	float                                              LFO1Gain;                                                   // 0x0050   (0x0004)  
	ESynthLFOType                                      LFO1Type;                                                   // 0x0054   (0x0001)  
	ESynthLFOMode                                      LFO1Mode;                                                   // 0x0055   (0x0001)  
	ESynthLFOPatchType                                 LFO1PatchType;                                              // 0x0056   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x0057   (0x0001)  MISSED
	float                                              LFO2Frequency;                                              // 0x0058   (0x0004)  
	float                                              LFO2Gain;                                                   // 0x005C   (0x0004)  
	ESynthLFOType                                      LFO2Type;                                                   // 0x0060   (0x0001)  
	ESynthLFOMode                                      LFO2Mode;                                                   // 0x0061   (0x0001)  
	ESynthLFOPatchType                                 LFO2PatchType;                                              // 0x0062   (0x0001)  
	unsigned char                                      UnknownData05_6[0x1];                                       // 0x0063   (0x0001)  MISSED
	float                                              GainDb;                                                     // 0x0064   (0x0004)  
	float                                              AttackTime;                                                 // 0x0068   (0x0004)  
	float                                              DecayTime;                                                  // 0x006C   (0x0004)  
	float                                              SustainGain;                                                // 0x0070   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0074   (0x0004)  
	ESynthModEnvPatch                                  ModEnvPatchType;                                            // 0x0078   (0x0001)  
	ESynthModEnvBiasPatch                              ModEnvBiasPatchType;                                        // 0x0079   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2];                                       // 0x007A   (0x0002)  MISSED
	bool                                               bInvertModulationEnvelope : 1;                              // 0x007C:0 (0x0001)  
	bool                                               bInvertModulationEnvelopeBias : 1;                          // 0x007C:1 (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              ModulationEnvelopeDepth;                                    // 0x0080   (0x0004)  
	float                                              ModulationEnvelopeAttackTime;                               // 0x0084   (0x0004)  
	float                                              ModulationEnvelopeDecayTime;                                // 0x0088   (0x0004)  
	float                                              ModulationEnvelopeSustainGain;                              // 0x008C   (0x0004)  
	float                                              ModulationEnvelopeReleaseTime;                              // 0x0090   (0x0004)  
	bool                                               bLegato : 1;                                                // 0x0094:0 (0x0001)  
	bool                                               bRetrigger : 1;                                             // 0x0094:1 (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x0095   (0x0003)  MISSED
	float                                              FilterFrequency;                                            // 0x0098   (0x0004)  
	float                                              FilterQ;                                                    // 0x009C   (0x0004)  
	ESynthFilterType                                   filterType;                                                 // 0x00A0   (0x0001)  
	ESynthFilterAlgorithm                              FilterAlgorithm;                                            // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData09_6[0x2];                                       // 0x00A2   (0x0002)  MISSED
	bool                                               bStereoDelayEnabled : 1;                                    // 0x00A4:0 (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x00A5   (0x0003)  MISSED
	ESynthStereoDelayMode                              StereoDelayMode;                                            // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData11_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              StereoDelayTime;                                            // 0x00AC   (0x0004)  
	float                                              StereoDelayFeedback;                                        // 0x00B0   (0x0004)  
	float                                              StereoDelayWetlevel;                                        // 0x00B4   (0x0004)  
	float                                              StereoDelayRatio;                                           // 0x00B8   (0x0004)  
	bool                                               bChorusEnabled : 1;                                         // 0x00BC:0 (0x0001)  
	unsigned char                                      UnknownData12_5[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              ChorusDepth;                                                // 0x00C0   (0x0004)  
	float                                              ChorusFeedback;                                             // 0x00C4   (0x0004)  
	float                                              ChorusFrequency;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData13_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FEpicSynth1Patch>                           Patches;                                                    // 0x00D0   (0x0010)  
};

/// Struct /Script/Synthesis.ModularSynthPresetBankEntry
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FModularSynthPresetBankEntry
{ 
	FString                                            PresetName;                                                 // 0x0000   (0x0010)  
	FModularSynthPreset                                Preset;                                                     // 0x0010   (0x00E0)  
};

/// Class /Script/Synthesis.ModularSynthPresetBank
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UModularSynthPresetBank : public UObject
{ 
public:
	TArray<FModularSynthPresetBankEntry>               Presets;                                                    // 0x0028   (0x0010)  
};

/// Class /Script/Synthesis.ModularSynthLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
	// void AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, FModularSynthPreset& Preset, FString PresetName); // [0x90b3290] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.ModularSynthComponent
/// Size: 0x0F80 (3968 bytes) (0x000890 - 0x000F80) align 16 MaxSize: 0x0F80
class UModularSynthComponent : public USynthComponent
{ 
public:
	int32_t                                            VoiceCount;                                                 // 0x0890   (0x0004)  
	unsigned char                                      UnknownData00_7[0x6EC];                                     // 0x0894   (0x06EC)  MISSED


	/// Functions
	// Function /Script/Synthesis.ModularSynthComponent.SetSynthPreset
	// void SetSynthPreset(FModularSynthPreset& SynthPreset);                                                                   // [0x90bf1a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetSustainGain
	// void SetSustainGain(float SustainGain);                                                                                  // [0x90bf000] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
	// void SetStereoDelayWetlevel(float DelayWetlevel);                                                                        // [0x90bee60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayTime
	// void SetStereoDelayTime(float DelayTimeMsec);                                                                            // [0x90bed90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayRatio
	// void SetStereoDelayRatio(float DelayRatio);                                                                              // [0x90becc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayMode
	// void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode);                                                          // [0x90bebf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
	// void SetStereoDelayIsEnabled(bool StereoDelayEnabled);                                                                   // [0x90beb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayFeedback
	// void SetStereoDelayFeedback(float DelayFeedback);                                                                        // [0x90bea50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetSpread
	// void SetSpread(float Spread);                                                                                            // [0x90be510] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetReleaseTime
	// void SetReleaseTime(float ReleaseTimeMsec);                                                                              // [0x90bc5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPortamento
	// void SetPortamento(float Portamento);                                                                                    // [0x90bbc30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPitchBend
	// void SetPitchBend(float PitchBend);                                                                                      // [0x90bb930] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPan
	// void SetPan(float Pan);                                                                                                  // [0x90bb750] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscType
	// void SetOscType(int32_t OscIndex, ESynth1OscType OscType);                                                               // [0x90bb630] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSync
	// void SetOscSync(bool bIsSynced);                                                                                         // [0x90bb560] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSemitones
	// void SetOscSemitones(int32_t OscIndex, float Semitones);                                                                 // [0x90bb460] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscPulsewidth
	// void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth);                                                               // [0x90bb360] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscOctave
	// void SetOscOctave(int32_t OscIndex, float Octave);                                                                       // [0x90bb260] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGainMod
	// void SetOscGainMod(int32_t OscIndex, float OscGainMod);                                                                  // [0x90bb160] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGain
	// void SetOscGain(int32_t OscIndex, float OscGain);                                                                        // [0x90bb060] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscFrequencyMod
	// void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod);                                                             // [0x90baf60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscCents
	// void SetOscCents(int32_t OscIndex, float Cents);                                                                         // [0x90bae60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvSustainGain
	// void SetModEnvSustainGain(float SustainGain);                                                                            // [0x90baa10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvReleaseTime
	// void SetModEnvReleaseTime(float Release);                                                                                // [0x90ba940] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvPatch
	// void SetModEnvPatch(ESynthModEnvPatch InPatchType);                                                                      // [0x90ba870] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvInvert
	// void SetModEnvInvert(bool bInvert);                                                                                      // [0x90ba7a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDepth
	// void SetModEnvDepth(float Depth);                                                                                        // [0x90ba6d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDecayTime
	// void SetModEnvDecayTime(float DecayTimeMsec);                                                                            // [0x90ba600] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasPatch
	// void SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType);                                                              // [0x90ba530] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasInvert
	// void SetModEnvBiasInvert(bool bInvert);                                                                                  // [0x90ba460] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvAttackTime
	// void SetModEnvAttackTime(float AttackTimeMsec);                                                                          // [0x90ba390] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOType
	// void SetLFOType(int32_t LFOIndex, ESynthLFOType LFOType);                                                                // [0x90b9e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOPatch
	// void SetLFOPatch(int32_t LFOIndex, ESynthLFOPatchType LFOPatchType);                                                     // [0x90b9d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOMode
	// void SetLFOMode(int32_t LFOIndex, ESynthLFOMode LFOMode);                                                                // [0x90b9c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGainMod
	// void SetLFOGainMod(int32_t LFOIndex, float GainMod);                                                                     // [0x90b9b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGain
	// void SetLFOGain(int32_t LFOIndex, float Gain);                                                                           // [0x90b9a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequencyMod
	// void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz);                                                         // [0x90b9920] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequency
	// void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz);                                                               // [0x90b9820] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetGainDb
	// void SetGainDb(float GainDb);                                                                                            // [0x90b8ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterType
	// void SetFilterType(ESynthFilterType filterType);                                                                         // [0x90b8310] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQMod
	// void SetFilterQMod(float FilterQ);                                                                                       // [0x90b8190] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQ
	// void SetFilterQ(float FilterQ);                                                                                          // [0x90b8010] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequencyMod
	// void SetFilterFrequencyMod(float FilterFrequencyHz);                                                                     // [0x90b7f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequency
	// void SetFilterFrequency(float FilterFrequencyHz);                                                                        // [0x90b7e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterAlgorithm
	// void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm);                                                          // [0x90b7510] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableUnison
	// void SetEnableUnison(bool EnableUnison);                                                                                 // [0x90b7070] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableRetrigger
	// void SetEnableRetrigger(bool RetriggerEnabled);                                                                          // [0x90b6fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePolyphony
	// void SetEnablePolyphony(bool bEnablePolyphony);                                                                          // [0x90b6ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePatch
	// bool SetEnablePatch(FPatchId PatchId, bool bIsEnabled);                                                                  // [0x90b6d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableLegato
	// void SetEnableLegato(bool LegatoEnabled);                                                                                // [0x90b6c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetDecayTime
	// void SetDecayTime(float DecayTimeMsec);                                                                                  // [0x90b6330] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFrequency
	// void SetChorusFrequency(float Frequency);                                                                                // [0x90b5d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFeedback
	// void SetChorusFeedback(float Feedback);                                                                                  // [0x90b5cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusEnabled
	// void SetChorusEnabled(bool EnableChorus);                                                                                // [0x90b5bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusDepth
	// void SetChorusDepth(float Depth);                                                                                        // [0x90b5b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetAttackTime
	// void SetAttackTime(float AttackTimeMsec);                                                                                // [0x90b5680] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.NoteOn
	// void NoteOn(float Note, int32_t Velocity, float Duration);                                                               // [0x90b4800] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.NoteOff
	// void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);                                                         // [0x90b4420] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.CreatePatch
	// FPatchId CreatePatch(ESynth1PatchSource PatchSource, TArray<FSynth1PatchCable>& PatchCables, bool bEnableByDefault);     // [0x90b3540] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherSettings
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FSourceEffectBitCrusherSettings
{ 
	float                                              CrushedSampleRate;                                          // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FSoundModulationDestinationSettings                SampleRateModulation;                                       // 0x0008   (0x0058)  
	float                                              CrushedBits;                                                // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	FSoundModulationDestinationSettings                BitModulation;                                              // 0x0068   (0x0058)  
};

/// Class /Script/Synthesis.SourceEffectBitCrusherPreset
/// Size: 0x0210 (528 bytes) (0x000068 - 0x000210) align 8 MaxSize: 0x0210
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0xE8];                                      // 0x0068   (0x00E8)  MISSED
	FSourceEffectBitCrusherSettings                    Settings;                                                   // 0x0150   (0x00C0)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSettings
	// void SetSettings(FSourceEffectBitCrusherBaseSettings& Settings);                                                         // [0x90bccc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulators
	// void SetSampleRateModulators(TSet<USoundModulatorBase*>& InModulators);                                                  // [0x90bc8f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
	// void SetSampleRateModulator(class USoundModulatorBase* Modulator);                                                       // [0x90bc840] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
	// void SetSampleRate(float SampleRate);                                                                                    // [0x90bc790] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings
	// void SetModulationSettings(FSourceEffectBitCrusherSettings& ModulationSettings);                                         // [0x90baae0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBits
	// void SetBits(float Bits);                                                                                                // [0x90b5a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBitModulators
	// void SetBitModulators(TSet<USoundModulatorBase*>& InModulators);                                                         // [0x90b5910] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
	// void SetBitModulator(class USoundModulatorBase* Modulator);                                                              // [0x90b5860] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectChorusSettings
/// Size: 0x0228 (552 bytes) (0x000000 - 0x000228) align 8 MaxSize: 0x0228
struct FSourceEffectChorusSettings
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              WetLevel;                                                   // 0x000C   (0x0004)  
	float                                              DryLevel;                                                   // 0x0010   (0x0004)  
	float                                              Spread;                                                     // 0x0014   (0x0004)  
	FSoundModulationDestinationSettings                DepthModulation;                                            // 0x0018   (0x0058)  
	FSoundModulationDestinationSettings                FrequencyModulation;                                        // 0x0070   (0x0058)  
	FSoundModulationDestinationSettings                FeedbackModulation;                                         // 0x00C8   (0x0058)  
	FSoundModulationDestinationSettings                WetModulation;                                              // 0x0120   (0x0058)  
	FSoundModulationDestinationSettings                DryModulation;                                              // 0x0178   (0x0058)  
	FSoundModulationDestinationSettings                SpreadModulation;                                           // 0x01D0   (0x0058)  
};

/// Class /Script/Synthesis.SourceEffectChorusPreset
/// Size: 0x04E0 (1248 bytes) (0x000068 - 0x0004E0) align 8 MaxSize: 0x04E0
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x250];                                     // 0x0068   (0x0250)  MISSED
	FSourceEffectChorusSettings                        Settings;                                                   // 0x02B8   (0x0228)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWetModulators
	// void SetWetModulators(TSet<USoundModulatorBase*>& Modulators);                                                           // [0x90bfac0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWetModulator
	// void SetWetModulator(class USoundModulatorBase* Modulator);                                                              // [0x90bfa10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWet
	// void SetWet(float WetAmount);                                                                                            // [0x90bf960] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpreadModulators
	// void SetSpreadModulators(TSet<USoundModulatorBase*>& Modulators);                                                        // [0x90be740] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpreadModulator
	// void SetSpreadModulator(class USoundModulatorBase* Modulator);                                                           // [0x90be690] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpread
	// void SetSpread(float Spread);                                                                                            // [0x90be5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSettings
	// void SetSettings(FSourceEffectChorusBaseSettings& Settings);                                                             // [0x90bcda0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetModulationSettings
	// void SetModulationSettings(FSourceEffectChorusSettings& ModulationSettings);                                             // [0x90bad60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequencyModulators
	// void SetFrequencyModulators(TSet<USoundModulatorBase*>& Modulators);                                                     // [0x90b87a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
	// void SetFrequencyModulator(class USoundModulatorBase* Modulator);                                                        // [0x90b86f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequency
	// void SetFrequency(float Frequency);                                                                                      // [0x90b8490] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedbackModulators
	// void SetFeedbackModulators(TSet<USoundModulatorBase*>& Modulators);                                                      // [0x90b73b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
	// void SetFeedbackModulator(class USoundModulatorBase* Modulator);                                                         // [0x90b7300] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedback
	// void SetFeedback(float Feedback);                                                                                        // [0x90b7250] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDryModulators
	// void SetDryModulators(TSet<USoundModulatorBase*>& Modulators);                                                           // [0x90b6b10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDryModulator
	// void SetDryModulator(class USoundModulatorBase* Modulator);                                                              // [0x90b6a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDry
	// void SetDry(float DryAmount);                                                                                            // [0x90b69b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepthModulators
	// void SetDepthModulators(TSet<USoundModulatorBase*>& Modulators);                                                         // [0x90b6850] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepthModulator
	// void SetDepthModulator(class USoundModulatorBase* Modulator);                                                            // [0x90b67a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepth
	// void SetDepth(float Depth);                                                                                              // [0x90b66f0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectConvolutionReverbSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSourceEffectConvolutionReverbSettings
{ 
	float                                              NormalizationVolumeDb;                                      // 0x0000   (0x0004)  
	float                                              WetVolumeDb;                                                // 0x0004   (0x0004)  
	float                                              DryVolumeDb;                                                // 0x0008   (0x0004)  
	bool                                               bBypass;                                                    // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Class /Script/Synthesis.SourceEffectConvolutionReverbPreset
/// Size: 0x00C0 (192 bytes) (0x000068 - 0x0000C0) align 8 MaxSize: 0x00C0
class USourceEffectConvolutionReverbPreset : public USoundEffectSourcePreset
{ 
public:
	class UAudioImpulseResponse*                       ImpulseResponse;                                            // 0x0068   (0x0008)  
	FSourceEffectConvolutionReverbSettings             Settings;                                                   // 0x0070   (0x0010)  
	ESubmixEffectConvolutionReverbBlockSize            BlockSize;                                                  // 0x0080   (0x0001)  
	bool                                               bEnableHardwareAcceleration;                                // 0x0081   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3E];                                      // 0x0082   (0x003E)  MISSED


	/// Functions
	// Function /Script/Synthesis.SourceEffectConvolutionReverbPreset.SetSettings
	// void SetSettings(FSourceEffectConvolutionReverbSettings& InSettings);                                                    // [0x90bce90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectConvolutionReverbPreset.SetImpulseResponse
	// void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);                                                 // [0x90b9310] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectDynamicsProcessorSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FSourceEffectDynamicsProcessorSettings
{ 
	ESourceEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESourceEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              LookAheadMsec;                                              // 0x0004   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0008   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x000C   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0010   (0x0004)  
	float                                              Ratio;                                                      // 0x0014   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0018   (0x0004)  
	float                                              InputGainDb;                                                // 0x001C   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0020   (0x0004)  
	bool                                               bStereoLinked : 1;                                          // 0x0024:0 (0x0001)  
	bool                                               bAnalogMode : 1;                                            // 0x0024:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Class /Script/Synthesis.SourceEffectDynamicsProcessorPreset
/// Size: 0x00E0 (224 bytes) (0x000068 - 0x0000E0) align 8 MaxSize: 0x00E0
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x50];                                      // 0x0068   (0x0050)  MISSED
	FSourceEffectDynamicsProcessorSettings             Settings;                                                   // 0x00B8   (0x0028)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
	// void SetSettings(FSourceEffectDynamicsProcessorSettings& InSettings);                                                    // [0x90bcf80] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.EnvelopeFollowerListener
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UEnvelopeFollowerListener : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,1248) /* FMulticastInlineDelegate */ __um(OnEnvelopeFollowerUpdate);                          // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00B0   (0x0010)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEnvelopeFollowerSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FSourceEffectEnvelopeFollowerSettings
{ 
	float                                              AttackTime;                                                 // 0x0000   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0004   (0x0004)  
	EEnvelopeFollowerPeakMode                          PeakMode;                                                   // 0x0008   (0x0001)  
	bool                                               bIsAnalogMode;                                              // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Class /Script/Synthesis.SourceEffectEnvelopeFollowerPreset
/// Size: 0x00A8 (168 bytes) (0x000068 - 0x0000A8) align 8 MaxSize: 0x00A8
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSourceEffectEnvelopeFollowerSettings              Settings;                                                   // 0x009C   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
	// void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);                      // [0x90bfc20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
	// void SetSettings(FSourceEffectEnvelopeFollowerSettings& InSettings);                                                     // [0x90bd080] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
	// void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);                        // [0x90b4b70] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectEQBand
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSourceEffectEQBand
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	float                                              Bandwidth;                                                  // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
	bool                                               bEnabled : 1;                                               // 0x000C:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEQSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSourceEffectEQSettings
{ 
	TArray<FSourceEffectEQBand>                        EQBands;                                                    // 0x0000   (0x0010)  
};

/// Class /Script/Synthesis.SourceEffectEQPreset
/// Size: 0x00B0 (176 bytes) (0x000068 - 0x0000B0) align 8 MaxSize: 0x00B0
class USourceEffectEQPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x38];                                      // 0x0068   (0x0038)  MISSED
	FSourceEffectEQSettings                            Settings;                                                   // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectEQPreset.SetSettings
	// void SetSettings(FSourceEffectEQSettings& InSettings);                                                                   // [0x53df110] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectFilterAudioBusModulationSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FSourceEffectFilterAudioBusModulationSettings
{ 
	class UAudioBus*                                   AudioBus;                                                   // 0x0000   (0x0008)  
	int32_t                                            EnvelopeFollowerAttackTimeMsec;                             // 0x0008   (0x0004)  
	int32_t                                            EnvelopeFollowerReleaseTimeMsec;                            // 0x000C   (0x0004)  
	float                                              EnvelopeGainMultiplier;                                     // 0x0010   (0x0004)  
	ESourceEffectFilterParam                           FilterParam;                                                // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              MinFrequencyModulation;                                     // 0x0018   (0x0004)  
	float                                              MaxFrequencyModulation;                                     // 0x001C   (0x0004)  
	float                                              MinResonanceModulation;                                     // 0x0020   (0x0004)  
	float                                              MaxResonanceModulation;                                     // 0x0024   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectFilterSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSourceEffectFilterSettings
{ 
	ESourceEffectFilterCircuit                         FilterCircuit;                                              // 0x0000   (0x0001)  
	ESourceEffectFilterType                            filterType;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              CutoffFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;                                      // 0x0010   (0x0010)  
};

/// Class /Script/Synthesis.SourceEffectFilterPreset
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align 8 MaxSize: 0x00D0
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x0068   (0x0048)  MISSED
	FSourceEffectFilterSettings                        Settings;                                                   // 0x00B0   (0x0020)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectFilterPreset.SetSettings
	// void SetSettings(FSourceEffectFilterSettings& InSettings);                                                               // [0x90bd160] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectFoldbackDistortionSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FSourceEffectFoldbackDistortionSettings
{ 
	float                                              InputGainDb;                                                // 0x0000   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0004   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0008   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectFoldbackDistortionPreset
/// Size: 0x00A8 (168 bytes) (0x000068 - 0x0000A8) align 8 MaxSize: 0x00A8
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSourceEffectFoldbackDistortionSettings            Settings;                                                   // 0x009C   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
	// void SetSettings(FSourceEffectFoldbackDistortionSettings& InSettings);                                                   // [0x90bd290] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectMidSideSpreaderSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSourceEffectMidSideSpreaderSettings
{ 
	float                                              SpreadAmount;                                               // 0x0000   (0x0004)  
	EStereoChannelMode                                 InputMode;                                                  // 0x0004   (0x0001)  
	EStereoChannelMode                                 OutputMode;                                                 // 0x0005   (0x0001)  
	bool                                               bEqualPower;                                                // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x0007   (0x0001)  MISSED
};

/// Class /Script/Synthesis.SourceEffectMidSideSpreaderPreset
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 8 MaxSize: 0x00A0
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0068   (0x0030)  MISSED
	FSourceEffectMidSideSpreaderSettings               Settings;                                                   // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
	// void SetSettings(FSourceEffectMidSideSpreaderSettings& InSettings);                                                      // [0x90bd370] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectIndividualFilterSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FSourceEffectIndividualFilterSettings
{ 
	ESourceEffectMotionFilterCircuit                   FilterCircuit;                                              // 0x0000   (0x0001)  
	ESourceEffectMotionFilterType                      filterType;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              CutoffFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectMotionFilterModulationSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FSourceEffectMotionFilterModulationSettings
{ 
	ESourceEffectMotionFilterModSource                 ModulationSource;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector2D                                          ModulationInputRange;                                       // 0x0008   (0x0010)  
	FVector2D                                          ModulationOutputMinimumRange;                               // 0x0018   (0x0010)  
	FVector2D                                          ModulationOutputMaximumRange;                               // 0x0028   (0x0010)  
	float                                              UpdateEaseMS;                                               // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectMotionFilterSettings
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FSourceEffectMotionFilterSettings
{ 
	ESourceEffectMotionFilterTopology                  MotionFilterTopology;                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MotionFilterMix;                                            // 0x0004   (0x0004)  
	FSourceEffectIndividualFilterSettings              FilterASettings;                                            // 0x0008   (0x000C)  
	FSourceEffectIndividualFilterSettings              FilterBSettings;                                            // 0x0014   (0x000C)  
	TMap<ESourceEffectMotionFilterModDestination, FSourceEffectMotionFilterModulationSettings> ModulationMappings; // 0x0020   (0x0050)  
	float                                              DryVolumeDb;                                                // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/Synthesis.SourceEffectMotionFilterPreset
/// Size: 0x0180 (384 bytes) (0x000068 - 0x000180) align 8 MaxSize: 0x0180
class USourceEffectMotionFilterPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0xA0];                                      // 0x0068   (0x00A0)  MISSED
	FSourceEffectMotionFilterSettings                  Settings;                                                   // 0x0108   (0x0078)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectMotionFilterPreset.SetSettings
	// void SetSettings(FSourceEffectMotionFilterSettings& InSettings);                                                         // [0x90bd440] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectPannerSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSourceEffectPannerSettings
{ 
	float                                              Spread;                                                     // 0x0000   (0x0004)  
	float                                              Pan;                                                        // 0x0004   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectPannerPreset
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 8 MaxSize: 0x00A0
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0068   (0x0030)  MISSED
	FSourceEffectPannerSettings                        Settings;                                                   // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectPannerPreset.SetSettings
	// void SetSettings(FSourceEffectPannerSettings& InSettings);                                                               // [0x90bd5b0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectPhaserSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSourceEffectPhaserSettings
{ 
	float                                              WetLevel;                                                   // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	EPhaserLFOType                                     LFOType;                                                    // 0x000C   (0x0001)  
	bool                                               UseQuadraturePhase;                                         // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Class /Script/Synthesis.SourceEffectPhaserPreset
/// Size: 0x00B0 (176 bytes) (0x000068 - 0x0000B0) align 8 MaxSize: 0x00B0
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x38];                                      // 0x0068   (0x0038)  MISSED
	FSourceEffectPhaserSettings                        Settings;                                                   // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectPhaserPreset.SetSettings
	// void SetSettings(FSourceEffectPhaserSettings& InSettings);                                                               // [0x90bd680] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectRingModulationSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSourceEffectRingModulationSettings
{ 
	ERingModulatorTypeSourceEffect                     ModulatorType;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Depth;                                                      // 0x0008   (0x0004)  
	float                                              DryLevel;                                                   // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UAudioBus*                                   AudioBusModulator;                                          // 0x0018   (0x0008)  
};

/// Class /Script/Synthesis.SourceEffectRingModulationPreset
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align 8 MaxSize: 0x00D0
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x0068   (0x0048)  MISSED
	FSourceEffectRingModulationSettings                Settings;                                                   // 0x00B0   (0x0020)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectRingModulationPreset.SetSettings
	// void SetSettings(FSourceEffectRingModulationSettings& InSettings);                                                       // [0x90bd760] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectSimpleDelaySettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FSourceEffectSimpleDelaySettings
{ 
	float                                              SpeedOfSound;                                               // 0x0000   (0x0004)  
	float                                              DelayAmount;                                                // 0x0004   (0x0004)  
	float                                              DryAmount;                                                  // 0x0008   (0x0004)  
	float                                              WetAmount;                                                  // 0x000C   (0x0004)  
	float                                              Feedback;                                                   // 0x0010   (0x0004)  
	bool                                               bDelayBasedOnDistance : 1;                                  // 0x0014:0 (0x0001)  
	bool                                               bUseDistanceOverride : 1;                                   // 0x0014:1 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Class /Script/Synthesis.SourceEffectSimpleDelayPreset
/// Size: 0x00C0 (192 bytes) (0x000068 - 0x0000C0) align 8 MaxSize: 0x00C0
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x40];                                      // 0x0068   (0x0040)  MISSED
	FSourceEffectSimpleDelaySettings                   Settings;                                                   // 0x00A8   (0x0018)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectSimpleDelayPreset.SetSettings
	// void SetSettings(FSourceEffectSimpleDelaySettings& InSettings);                                                          // [0x90bd880] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectStereoDelaySettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FSourceEffectStereoDelaySettings
{ 
	EStereoDelaySourceEffect                           DelayMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayTimeMsec;                                              // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              DelayRatio;                                                 // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	float                                              DryLevel;                                                   // 0x0014   (0x0004)  
	bool                                               bFilterEnabled;                                             // 0x0018   (0x0001)  
	EStereoDelayFiltertype                             filterType;                                                 // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x001C   (0x0004)  
	float                                              FilterQ;                                                    // 0x0020   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectStereoDelayPreset
/// Size: 0x00D8 (216 bytes) (0x000068 - 0x0000D8) align 8 MaxSize: 0x00D8
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x4C];                                      // 0x0068   (0x004C)  MISSED
	FSourceEffectStereoDelaySettings                   Settings;                                                   // 0x00B4   (0x0024)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectStereoDelayPreset.SetSettings
	// void SetSettings(FSourceEffectStereoDelaySettings& InSettings);                                                          // [0x90bd960] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectWaveShaperSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSourceEffectWaveShaperSettings
{ 
	float                                              Amount;                                                     // 0x0000   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0004   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectWaveShaperPreset
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 8 MaxSize: 0x00A0
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0068   (0x0030)  MISSED
	FSourceEffectWaveShaperSettings                    Settings;                                                   // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectWaveShaperPreset.SetSettings
	// void SetSettings(FSourceEffectWaveShaperSettings& InSettings);                                                           // [0x90bd5b0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectConvolutionReverbSettings
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FSubmixEffectConvolutionReverbSettings
{ 
	float                                              NormalizationVolumeDb;                                      // 0x0000   (0x0004)  
	float                                              WetVolumeDb;                                                // 0x0004   (0x0004)  
	float                                              DryVolumeDb;                                                // 0x0008   (0x0004)  
	bool                                               bBypass;                                                    // 0x000C   (0x0001)  
	bool                                               bMixInputChannelFormatToImpulseResponseFormat;              // 0x000D   (0x0001)  
	bool                                               bMixReverbOutputToOutputChannelFormat;                      // 0x000E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x000F   (0x0001)  MISSED
	float                                              SurroundRearChannelBleedDb;                                 // 0x0010   (0x0004)  
	bool                                               bInvertRearChannelBleedPhase;                               // 0x0014   (0x0001)  
	bool                                               bSurroundRearChannelFlip;                                   // 0x0015   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	float                                              SurroundRearChannelBleedAmount;                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	class UAudioImpulseResponse*                       ImpulseResponse;                                            // 0x0020   (0x0008)  
	bool                                               AllowHardwareAcceleration;                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/Synthesis.SubmixEffectConvolutionReverbPreset
/// Size: 0x0100 (256 bytes) (0x000068 - 0x000100) align 8 MaxSize: 0x0100
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{ 
public:
	class UAudioImpulseResponse*                       ImpulseResponse;                                            // 0x0068   (0x0008)  
	FSubmixEffectConvolutionReverbSettings             Settings;                                                   // 0x0070   (0x0030)  
	ESubmixEffectConvolutionReverbBlockSize            BlockSize;                                                  // 0x00A0   (0x0001)  
	bool                                               bEnableHardwareAcceleration;                                // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5E];                                      // 0x00A2   (0x005E)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
	// void SetSettings(FSubmixEffectConvolutionReverbSettings& InSettings);                                                    // [0x90bda60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
	// void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);                                                 // [0x90b93c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectDelayStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USubmixEffectDelayStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Synthesis.SubmixEffectDelayStatics.SetMaximumDelayLength
	// FSubmixEffectDelaySettings SetMaximumDelayLength(FSubmixEffectDelaySettings& DelaySettings, float MaximumDelayLength);   // [0x90ba270] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayStatics.SetInterpolationTime
	// FSubmixEffectDelaySettings SetInterpolationTime(FSubmixEffectDelaySettings& DelaySettings, float InterpolationTime);     // [0x90b9640] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayStatics.SetDelayLength
	// FSubmixEffectDelaySettings SetDelayLength(FSubmixEffectDelaySettings& DelaySettings, float DelayLength);                 // [0x90b65d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectDelaySettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FSubmixEffectDelaySettings
{ 
	float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0004   (0x0004)  
	float                                              DelayLength;                                                // 0x0008   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectDelayPreset
/// Size: 0x00B8 (184 bytes) (0x000068 - 0x0000B8) align 8 MaxSize: 0x00B8
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSubmixEffectDelaySettings                         Settings;                                                   // 0x009C   (0x000C)  
	FSubmixEffectDelaySettings                         DynamicSettings;                                            // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetSettings
	// void SetSettings(FSubmixEffectDelaySettings& InSettings);                                                                // [0x90bdb70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
	// void SetInterpolationTime(float Time);                                                                                   // [0x90b9580] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetDelay
	// void SetDelay(float Length);                                                                                             // [0x90b6510] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetDefaultSettings
	// void SetDefaultSettings(FSubmixEffectDelaySettings& InSettings);                                                         // [0x90b6400] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
	// float GetMaxDelayInMilliseconds();                                                                                       // [0x4fa0110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/Synthesis.SubmixEffectFilterSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FSubmixEffectFilterSettings
{ 
	ESubmixFilterType                                  filterType;                                                 // 0x0000   (0x0001)  
	ESubmixFilterAlgorithm                             FilterAlgorithm;                                            // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectFilterPreset
/// Size: 0x00A8 (168 bytes) (0x000068 - 0x0000A8) align 8 MaxSize: 0x00A8
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x34];                                      // 0x0068   (0x0034)  MISSED
	FSubmixEffectFilterSettings                        Settings;                                                   // 0x009C   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetSettings
	// void SetSettings(FSubmixEffectFilterSettings& InSettings);                                                               // [0x90bdc70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterType
	// void SetFilterType(ESubmixFilterType InType);                                                                            // [0x90b83e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQMod
	// void SetFilterQMod(float InQ);                                                                                           // [0x90b8260] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQ
	// void SetFilterQ(float InQ);                                                                                              // [0x90b80e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
	// void SetFilterCutoffFrequencyMod(float InFrequency);                                                                     // [0x90b7740] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
	// void SetFilterCutoffFrequency(float InFrequency);                                                                        // [0x90b7690] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
	// void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);                                                             // [0x90b75e0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectFlexiverbSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSubmixEffectFlexiverbSettings
{ 
	float                                              PreDelay;                                                   // 0x0000   (0x0004)  
	float                                              DecayTime;                                                  // 0x0004   (0x0004)  
	float                                              RoomDampening;                                              // 0x0008   (0x0004)  
	int32_t                                            Complexity;                                                 // 0x000C   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectFlexiverbPreset
/// Size: 0x00B0 (176 bytes) (0x000068 - 0x0000B0) align 8 MaxSize: 0x00B0
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x38];                                      // 0x0068   (0x0038)  MISSED
	FSubmixEffectFlexiverbSettings                     Settings;                                                   // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectFlexiverbPreset.SetSettings
	// void SetSettings(FSubmixEffectFlexiverbSettings& InSettings);                                                            // [0x90bdd50] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.DynamicsBandSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FDynamicsBandSettings
{ 
	float                                              CrossoverTopFrequency;                                      // 0x0000   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0004   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x0008   (0x0004)  
	float                                              ThresholdDb;                                                // 0x000C   (0x0004)  
	float                                              Ratio;                                                      // 0x0010   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0014   (0x0004)  
	float                                              InputGainDb;                                                // 0x0018   (0x0004)  
	float                                              OutputGainDb;                                               // 0x001C   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectMultibandCompressorSettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FSubmixEffectMultibandCompressorSettings
{ 
	ESubmixEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESubmixEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	ESubmixEffectDynamicsChannelLinkMode               LinkMode;                                                   // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              LookAheadMsec;                                              // 0x0004   (0x0004)  
	bool                                               bAnalogMode;                                                // 0x0008   (0x0001)  
	bool                                               bFourPole;                                                  // 0x0009   (0x0001)  
	bool                                               bBypass;                                                    // 0x000A   (0x0001)  
	ESubmixEffectDynamicsKeySource                     KeySource;                                                  // 0x000B   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UAudioBus*                                   ExternalAudioBus;                                           // 0x0010   (0x0008)  
	class USoundSubmix*                                ExternalSubmix;                                             // 0x0018   (0x0008)  
	float                                              KeyGainDb;                                                  // 0x0020   (0x0004)  
	bool                                               bKeyAudition;                                               // 0x0024   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	TArray<FDynamicsBandSettings>                      Bands;                                                      // 0x0028   (0x0010)  
};

/// Class /Script/Synthesis.SubmixEffectMultibandCompressorPreset
/// Size: 0x0100 (256 bytes) (0x000068 - 0x000100) align 8 MaxSize: 0x0100
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x60];                                      // 0x0068   (0x0060)  MISSED
	FSubmixEffectMultibandCompressorSettings           Settings;                                                   // 0x00C8   (0x0038)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings
	// void SetSettings(FSubmixEffectMultibandCompressorSettings& InSettings);                                                  // [0x90bde30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetExternalSubmix
	// void SetExternalSubmix(class USoundSubmix* Submix);                                                                      // [0x90b7140] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetAudioBus
	// void SetAudioBus(class UAudioBus* AudioBus);                                                                             // [0x90b5750] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.ResetKey
	// void ResetKey();                                                                                                         // [0x90b4d70] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectStereoDelaySettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FSubmixEffectStereoDelaySettings
{ 
	EStereoDelaySourceEffect                           DelayMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayTimeMsec;                                              // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              DelayRatio;                                                 // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	float                                              DryLevel;                                                   // 0x0014   (0x0004)  
	bool                                               bFilterEnabled;                                             // 0x0018   (0x0001)  
	EStereoDelayFiltertype                             filterType;                                                 // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x001C   (0x0004)  
	float                                              FilterQ;                                                    // 0x0020   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectStereoDelayPreset
/// Size: 0x00D8 (216 bytes) (0x000068 - 0x0000D8) align 8 MaxSize: 0x00D8
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x4C];                                      // 0x0068   (0x004C)  MISSED
	FSubmixEffectStereoDelaySettings                   Settings;                                                   // 0x00B4   (0x0024)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectStereoDelayPreset.SetSettings
	// void SetSettings(FSubmixEffectStereoDelaySettings& InSettings);                                                          // [0x90bd960] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectStereoToQuadSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSubmixEffectStereoToQuadSettings
{ 
	bool                                               bFlipChannels;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              RearChannelGain;                                            // 0x0004   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectStereoToQuadPreset
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 8 MaxSize: 0x00A0
class USubmixEffectStereoToQuadPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0068   (0x0030)  MISSED
	FSubmixEffectStereoToQuadSettings                  Settings;                                                   // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectStereoToQuadPreset.SetSettings
	// void SetSettings(FSubmixEffectStereoToQuadSettings& InSettings);                                                         // [0x90bdf80] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.TapDelayInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FTapDelayInfo
{ 
	ETapLineMode                                       TapLineMode;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayLength;                                                // 0x0004   (0x0004)  
	float                                              Gain;                                                       // 0x0008   (0x0004)  
	int32_t                                            OutputChannel;                                              // 0x000C   (0x0004)  
	float                                              PanInDegrees;                                               // 0x0010   (0x0004)  
	int32_t                                            TapId;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectTapDelaySettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FSubmixEffectTapDelaySettings
{ 
	float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0004   (0x0004)  
	TArray<FTapDelayInfo>                              Taps;                                                       // 0x0008   (0x0010)  
};

/// Class /Script/Synthesis.SubmixEffectTapDelayPreset
/// Size: 0x00D8 (216 bytes) (0x000068 - 0x0000D8) align 8 MaxSize: 0x00D8
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x40];                                      // 0x0068   (0x0040)  MISSED
	FSubmixEffectTapDelaySettings                      Settings;                                                   // 0x00A8   (0x0018)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x00C0   (0x0018)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetTap
	// void SetTap(int32_t TapId, FTapDelayInfo& TapInfo);                                                                      // [0x90bf310] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetSettings
	// void SetSettings(FSubmixEffectTapDelaySettings& InSettings);                                                             // [0x90be050] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
	// void SetInterpolationTime(float Time);                                                                                   // [0x90b9760] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.RemoveTap
	// void RemoveTap(int32_t TapId);                                                                                           // [0x90b4c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTapIds
	// void GetTapIds(TArray<int32_t>& TapIds);                                                                                 // [0x90b4070] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTap
	// void GetTap(int32_t TapId, FTapDelayInfo& TapInfo);                                                                      // [0x90b3f30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
	// float GetMaxDelayInMilliseconds();                                                                                       // [0x53356d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.AddTap
	// void AddTap(int32_t& TapId);                                                                                             // [0x90b33f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.GranularSynth
/// Size: 0x0C80 (3200 bytes) (0x000890 - 0x000C80) align 16 MaxSize: 0x0C80
class UGranularSynth : public USynthComponent
{ 
public:
	class USoundWave*                                  GranulatedSoundWave;                                        // 0x0890   (0x0008)  
	unsigned char                                      UnknownData00_7[0x3E8];                                     // 0x0898   (0x03E8)  MISSED


	/// Functions
	// Function /Script/Synthesis.GranularSynth.SetSustainGain
	// void SetSustainGain(float SustainGain);                                                                                  // [0x90bef30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetSoundWave
	// void SetSoundWave(class USoundWave* InSoundWave);                                                                        // [0x90be2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetScrubMode
	// void SetScrubMode(bool bScrubMode);                                                                                      // [0x90bca50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetReleaseTimeMsec
	// void SetReleaseTimeMsec(float ReleaseTimeMsec);                                                                          // [0x90bc6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetPlayheadTime
	// void SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType);                           // [0x90bbad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetPlaybackSpeed
	// void SetPlaybackSpeed(float InPlayheadRate);                                                                             // [0x90bba00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainVolume
	// void SetGrainVolume(float BaseVolume, FVector2D VolumeRange);                                                            // [0x90b9100] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainsPerSecond
	// void SetGrainsPerSecond(float InGrainsPerSecond);                                                                        // [0x90b9240] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainProbability
	// void SetGrainProbability(float InGrainProbability);                                                                      // [0x90b9030] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainPitch
	// void SetGrainPitch(float BasePitch, FVector2D PitchRange);                                                               // [0x90b8ef0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainPan
	// void SetGrainPan(float BasePan, FVector2D PanRange);                                                                     // [0x90b8db0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainEnvelopeType
	// void SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType);                                                      // [0x90b8ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainDuration
	// void SetGrainDuration(float BaseDurationMsec, FVector2D DurationRange);                                                  // [0x90b8ba0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetDecayTime
	// void SetDecayTime(float DecayTimeMsec);                                                                                  // [0x90b55b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetAttackTime
	// void SetAttackTime(float AttackTimeMsec);                                                                                // [0x90b55b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.NoteOn
	// void NoteOn(float Note, int32_t Velocity, float Duration);                                                               // [0x90b46a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.NoteOff
	// void NoteOff(float Note, bool bKill);                                                                                    // [0x90b42f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.IsLoaded
	// bool IsLoaded();                                                                                                         // [0x90b42b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.GranularSynth.GetSampleDuration
	// float GetSampleDuration();                                                                                               // [0x90b3ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.GranularSynth.GetCurrentPlayheadTime
	// float GetCurrentPlayheadTime();                                                                                          // [0x90b3740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.MonoWaveTableSynthPreset
/// Size: 0x0170 (368 bytes) (0x000028 - 0x000170) align 8 MaxSize: 0x0170
class UMonoWaveTableSynthPreset : public UObject
{ 
public:
	FString                                            PresetName;                                                 // 0x0028   (0x0010)  
	bool                                               bLockKeyframesToGridBool : 1;                               // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            LockKeyframesToGrid;                                        // 0x003C   (0x0004)  
	int32_t                                            WaveTableResolution;                                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FRuntimeFloatCurve>                         WaveTable;                                                  // 0x0048   (0x0010)  
	bool                                               bNormalizeWaveTables : 1;                                   // 0x0058:0 (0x0001)  
	unsigned char                                      UnknownData02_7[0x117];                                     // 0x0059   (0x0117)  MISSED
};

/// Class /Script/Synthesis.SynthComponentMonoWaveTable
/// Size: 0x0FE0 (4064 bytes) (0x000890 - 0x000FE0) align 16 MaxSize: 0x0FE0
class USynthComponentMonoWaveTable : public USynthComponent
{ 
public:
	SDK_UNDEFINED(16,1249) /* FMulticastInlineDelegate */ __um(OnTableAltered);                                    // 0x0890   (0x0010)  
	SDK_UNDEFINED(16,1250) /* FMulticastInlineDelegate */ __um(OnNumTablesChanged);                                // 0x08A0   (0x0010)  
	class UMonoWaveTableSynthPreset*                   CurrentPreset;                                              // 0x08B0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x728];                                     // 0x08B8   (0x0728)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
	// void SetWaveTablePosition(float InPosition);                                                                             // [0x90bf890] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
	// void SetSustainPedalState(bool InSustainPedalState);                                                                     // [0x90bf0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
	// void SetPosLfoType(ESynthLFOType InLfoType);                                                                             // [0x90bbea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
	// void SetPosLfoFrequency(float InLfoFrequency);                                                                           // [0x90bbdd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
	// void SetPosLfoDepth(float InLfoDepth);                                                                                   // [0x90bbd00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
	// void SetPositionEnvelopeSustainGain(float InSustainGain);                                                                // [0x90bc520] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
	// void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);                                                            // [0x90bc450] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
	// void SetPositionEnvelopeInvert(bool bInInvert);                                                                          // [0x90bc380] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
	// void SetPositionEnvelopeDepth(float InDepth);                                                                            // [0x90bc2b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
	// void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);                                                                // [0x90bc1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
	// void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);                                                                  // [0x90bc110] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
	// void SetPositionEnvelopeBiasDepth(float InDepth);                                                                        // [0x90bc040] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
	// void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);                                                              // [0x90bbf70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
	// void SetLowPassFilterResonance(float InNewQ);                                                                            // [0x90ba1a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
	// void SetFrequencyWithMidiNote(float InMidiNote);                                                                         // [0x90b89d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
	// void SetFrequencyPitchBend(float FrequencyOffsetCents);                                                                  // [0x90b8900] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequency
	// void SetFrequency(float FrequencyHz);                                                                                    // [0x90b8540] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
	// void SetFilterEnvelopeSustainGain(float InSustainGain);                                                                  // [0x90b7cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
	// void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);                                                              // [0x90b7c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
	// void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);                                                                 // [0x90b7da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
	// void SetFilterEnvelopeInvert(bool bInInvert);                                                                            // [0x90b7b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
	// void SetFilterEnvelopeDepth(float InDepth);                                                                              // [0x90b7a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
	// void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);                                                                    // [0x90b7990] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
	// void SetFilterEnvelopeBiasDepth(float InDepth);                                                                          // [0x90b78c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
	// void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);                                                                // [0x90b77f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveValue
	// bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue);                                           // [0x90b61a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
	// bool SetCurveTangent(int32_t TableIndex, float InNewTangent);                                                            // [0x90b5fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
	// bool SetCurveInterpolationType(CurveInterpolationType InterpolationType, int32_t TableIndex);                            // [0x90b5e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
	// void SetAmpEnvelopeSustainGain(float InSustainGain);                                                                     // [0x90b54e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
	// void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);                                                                 // [0x90b5410] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
	// void SetAmpEnvelopeInvert(bool bInInvert);                                                                               // [0x90b5340] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
	// void SetAmpEnvelopeDepth(float InDepth);                                                                                 // [0x90b5270] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
	// void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);                                                                     // [0x90b51a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
	// void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);                                                                       // [0x90b50d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
	// void SetAmpEnvelopeBiasDepth(float InDepth);                                                                             // [0x90b5000] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
	// void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);                                                                   // [0x90b4f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
	// void RefreshWaveTable(int32_t Index);                                                                                    // [0x90b4ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
	// void RefreshAllWaveTables();                                                                                             // [0x90b4ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOn
	// void NoteOn(float InMidiNote, float InVelocity);                                                                         // [0x90b4960] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOff
	// void NoteOff(float InMidiNote);                                                                                          // [0x90b45a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
	// int32_t GetNumTableEntries();                                                                                            // [0x90b3ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
	// int32_t GetMaxTableIndex();                                                                                              // [0x90b3e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
	// TArray<float> GetKeyFrameValuesForTable(float TableIndex);                                                               // [0x90b3850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
	// float GetCurveTangent(int32_t TableIndex);                                                                               // [0x90b3780] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SynthComponentToneGenerator
/// Size: 0x0980 (2432 bytes) (0x000890 - 0x000980) align 16 MaxSize: 0x0980
class USynthComponentToneGenerator : public USynthComponent
{ 
public:
	float                                              Frequency;                                                  // 0x0890   (0x0004)  
	float                                              Volume;                                                     // 0x0894   (0x0004)  
	FRuntimeFloatCurve                                 DistanceAttenuationCurve;                                   // 0x0898   (0x0088)  
	FVector2D                                          DistanceRange;                                              // 0x0920   (0x0010)  
	float                                              AttenuationDbAtMaxRange;                                    // 0x0930   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4C];                                      // 0x0934   (0x004C)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthComponentToneGenerator.SetVolume
	// void SetVolume(float InVolume);                                                                                          // [0x90bf7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentToneGenerator.SetFrequency
	// void SetFrequency(float InFrequency);                                                                                    // [0x90b8610] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SynthSamplePlayer
/// Size: 0x09C0 (2496 bytes) (0x000890 - 0x0009C0) align 16 MaxSize: 0x09C0
class USynthSamplePlayer : public USynthComponent
{ 
public:
	class USoundWave*                                  SoundWave;                                                  // 0x0890   (0x0008)  
	SDK_UNDEFINED(16,1251) /* FMulticastInlineDelegate */ __um(OnSampleLoaded);                                    // 0x0898   (0x0010)  
	SDK_UNDEFINED(16,1252) /* FMulticastInlineDelegate */ __um(OnSamplePlaybackProgress);                          // 0x08A8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x108];                                     // 0x08B8   (0x0108)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthSamplePlayer.SetSoundWave
	// void SetSoundWave(class USoundWave* InSoundWave);                                                                        // [0x90be450] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubTimeWidth
	// void SetScrubTimeWidth(float InScrubTimeWidthSec);                                                                       // [0x90bcbf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubMode
	// void SetScrubMode(bool bScrubMode);                                                                                      // [0x90bcb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetPitch
	// void SetPitch(float InPitch, float TimeSec);                                                                             // [0x90bb820] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SeekToTime
	// void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);                                              // [0x90b4dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.IsLoaded
	// bool IsLoaded();                                                                                                         // [0x90b42d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetSampleDuration
	// float GetSampleDuration();                                                                                               // [0x90b3f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
	// float GetCurrentPlaybackProgressTime();                                                                                  // [0x90b3720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
	// float GetCurrentPlaybackProgressPercent();                                                                               // [0x90b36e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency
	// float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);    // [0x90b3bd0] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
	// float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // [0x90b3930] Final|Native|Static|Private|BlueprintCallable 
};

/// Struct /Script/Synthesis.Synth2DSliderStyle
/// Size: 0x0430 (1072 bytes) (0x000008 - 0x000430) align 16 MaxSize: 0x0430
struct FSynth2DSliderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        NormalThumbImage;                                           // 0x0010   (0x00D0)  
	FSlateBrush                                        DisabledThumbImage;                                         // 0x00E0   (0x00D0)  
	FSlateBrush                                        NormalBarImage;                                             // 0x01B0   (0x00D0)  
	FSlateBrush                                        DisabledBarImage;                                           // 0x0280   (0x00D0)  
	FSlateBrush                                        BackgroundImage;                                            // 0x0350   (0x00D0)  
	float                                              BarThickness;                                               // 0x0420   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0424   (0x000C)  MISSED
};

/// Class /Script/Synthesis.Synth2DSlider
/// Size: 0x0660 (1632 bytes) (0x000178 - 0x000660) align 16 MaxSize: 0x0660
class USynth2DSlider : public UWidget
{ 
public:
	float                                              ValueX;                                                     // 0x0178   (0x0004)  
	float                                              ValueY;                                                     // 0x017C   (0x0004)  
	SDK_UNDEFINED(16,1253) /* FDelegateProperty */     __um(ValueXDelegate);                                       // 0x0180   (0x0010)  
	SDK_UNDEFINED(16,1254) /* FDelegateProperty */     __um(ValueYDelegate);                                       // 0x0190   (0x0010)  
	FSynth2DSliderStyle                                WidgetStyle;                                                // 0x01A0   (0x0430)  
	FLinearColor                                       SliderHandleColor;                                          // 0x05D0   (0x0010)  
	bool                                               IndentHandle;                                               // 0x05E0   (0x0001)  
	bool                                               Locked;                                                     // 0x05E1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x05E2   (0x0002)  MISSED
	float                                              StepSize;                                                   // 0x05E4   (0x0004)  
	bool                                               IsFocusable;                                                // 0x05E8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x05E9   (0x0007)  MISSED
	SDK_UNDEFINED(16,1255) /* FMulticastInlineDelegate */ __um(OnMouseCaptureBegin);                               // 0x05F0   (0x0010)  
	SDK_UNDEFINED(16,1256) /* FMulticastInlineDelegate */ __um(OnMouseCaptureEnd);                                 // 0x0600   (0x0010)  
	SDK_UNDEFINED(16,1257) /* FMulticastInlineDelegate */ __um(OnControllerCaptureBegin);                          // 0x0610   (0x0010)  
	SDK_UNDEFINED(16,1258) /* FMulticastInlineDelegate */ __um(OnControllerCaptureEnd);                            // 0x0620   (0x0010)  
	SDK_UNDEFINED(16,1259) /* FMulticastInlineDelegate */ __um(OnValueChangedX);                                   // 0x0630   (0x0010)  
	SDK_UNDEFINED(16,1260) /* FMulticastInlineDelegate */ __um(OnValueChangedY);                                   // 0x0640   (0x0010)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0650   (0x0010)  MISSED


	/// Functions
	// Function /Script/Synthesis.Synth2DSlider.SetValue
	// void SetValue(FVector2D InValue);                                                                                        // [0x90bf4e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0x90be8a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x90be170] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0x90b9f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetIndentHandle
	// void SetIndentHandle(bool InValue);                                                                                      // [0x90b9470] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.GetValue
	// FVector2D GetValue();                                                                                                    // [0x90b4160] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/Synthesis.SynthKnobStyle
/// Size: 0x0360 (864 bytes) (0x000008 - 0x000360) align 16 MaxSize: 0x0360
struct FSynthKnobStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        LargeKnob;                                                  // 0x0010   (0x00D0)  
	FSlateBrush                                        LargeKnobOverlay;                                           // 0x00E0   (0x00D0)  
	FSlateBrush                                        MediumKnob;                                                 // 0x01B0   (0x00D0)  
	FSlateBrush                                        MediumKnobOverlay;                                          // 0x0280   (0x00D0)  
	float                                              MinValueAngle;                                              // 0x0350   (0x0004)  
	float                                              MaxValueAngle;                                              // 0x0354   (0x0004)  
	ESynthKnobSize                                     KnobSize;                                                   // 0x0358   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0359   (0x0007)  MISSED
};

/// Class /Script/Synthesis.SynthKnob
/// Size: 0x0590 (1424 bytes) (0x000178 - 0x000590) align 16 MaxSize: 0x0590
class USynthKnob : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0178   (0x0004)  
	float                                              StepSize;                                                   // 0x017C   (0x0004)  
	float                                              MouseSpeed;                                                 // 0x0180   (0x0004)  
	float                                              MouseFineTuneSpeed;                                         // 0x0184   (0x0004)  
	bool                                               ShowTooltipInfo : 1;                                        // 0x0188:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0189   (0x0007)  MISSED
	FText                                              ParameterName;                                              // 0x0190   (0x0018)  
	FText                                              ParameterUnits;                                             // 0x01A0   (0x0018)  
	SDK_UNDEFINED(16,1261) /* FDelegateProperty */     __um(ValueDelegate);                                        // 0x01B0   (0x0010)  
	FSynthKnobStyle                                    WidgetStyle;                                                // 0x01C0   (0x0360)  
	bool                                               Locked;                                                     // 0x0520   (0x0001)  
	bool                                               IsFocusable;                                                // 0x0521   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0522   (0x0006)  MISSED
	SDK_UNDEFINED(16,1262) /* FMulticastInlineDelegate */ __um(OnMouseCaptureBegin);                               // 0x0528   (0x0010)  
	SDK_UNDEFINED(16,1263) /* FMulticastInlineDelegate */ __um(OnMouseCaptureEnd);                                 // 0x0538   (0x0010)  
	SDK_UNDEFINED(16,1264) /* FMulticastInlineDelegate */ __um(OnControllerCaptureBegin);                          // 0x0548   (0x0010)  
	SDK_UNDEFINED(16,1265) /* FMulticastInlineDelegate */ __um(OnControllerCaptureEnd);                            // 0x0558   (0x0010)  
	SDK_UNDEFINED(16,1266) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                    // 0x0568   (0x0010)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0578   (0x0018)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthKnob.SetValue
	// void SetValue(float InValue);                                                                                            // [0x90bf690] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0x90be9c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0x90ba090] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.GetValue
	// float GetValue();                                                                                                        // [0x90b4260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/Synthesis.PatchId
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FPatchId
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherBaseSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FSourceEffectBitCrusherBaseSettings
{ 
	float                                              SampleRate;                                                 // 0x0000   (0x0004)  
	float                                              BitDepth;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectChorusBaseSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FSourceEffectChorusBaseSettings
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              WetLevel;                                                   // 0x000C   (0x0004)  
	float                                              DryLevel;                                                   // 0x0010   (0x0004)  
	float                                              Spread;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/Synthesis.SynthSlateStyle
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FSynthSlateStyle : FSlateWidgetStyle
{ 
	ESynthSlateSizeType                                SizeType;                                                   // 0x0008   (0x0001)  
	ESynthSlateColorStyle                              ColorStyle;                                                 // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

#pragma pack(pop)


