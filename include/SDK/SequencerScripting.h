
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene
/// dependency: MovieSceneTracks

#pragma pack(push, 0x1)

/// Enum /Script/SequencerScripting.ESequenceTimeUnit
/// Size: 0x01 (1 bytes)
enum class ESequenceTimeUnit : uint8_t
{
	ESequenceTimeUnit__DisplayRate                                                   = 0,
	ESequenceTimeUnit__TickResolution                                                = 1
};

/// Class /Script/SequencerScripting.MovieSceneScriptingKey
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UMovieSceneScriptingKey : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingActorReferenceKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue
	// void SetValue(FMovieSceneObjectBindingID& InNewValue);                                                                   // [0x71a9510] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);                                // [0x71a92b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue
	// FMovieSceneObjectBindingID GetValue();                                                                                   // [0x71a7af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime
	// FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);                                                                        // [0x71a7a50] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingChannel
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UMovieSceneScriptingChannel : public UObject
{ 
public:
	FName                                              ChannelName;                                                // 0x0028   (0x0008)  
};

/// Class /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingActorReferenceChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault
	// void SetDefault(FMovieSceneObjectBindingID InDefaultValue);                                                              // [0x71a87b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x71a8530] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x71a8240] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x71a7f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeysByIndex
	// TArray<UMovieSceneScriptingKey*> GetKeysByIndex(TArray<int32_t>& Indices);                                               // [0x71a7650] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x4dec6e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault
	// FMovieSceneObjectBindingID GetDefault();                                                                                 // [0x71a7340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey
	// class UMovieSceneScriptingActorReferenceKey* AddKey(FFrameNumber InTime, FMovieSceneObjectBindingID NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // [0x71a64a0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingBoolKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.SetValue
	// void SetValue(bool InNewValue);                                                                                          // [0x71a9680] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);                                // [0x71a92b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.GetValue
	// bool GetValue();                                                                                                         // [0x71a7bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.GetTime
	// FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);                                                                        // [0x71a7a50] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingBoolChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault
	// void SetDefault(bool InDefaultValue);                                                                                    // [0x71a8920] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x71a8530] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x71a82c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x71a8040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys
	// int32_t GetNumKeys();                                                                                                    // [0x71a7810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetKeysByIndex
	// TArray<UMovieSceneScriptingKey*> GetKeysByIndex(TArray<int32_t>& Indices);                                               // [0x71a7650] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x4dec6e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault
	// bool GetDefault();                                                                                                       // [0x71a73e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys
	// TArray<bool> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);                                         // [0x71a6f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange
	// FSequencerScriptingRange ComputeEffectiveRange();                                                                        // [0x71a6d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.AddKey
	// class UMovieSceneScriptingBoolKey* AddKey(FFrameNumber& InTime, bool NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // [0x71a6610] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingByteKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingByteKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.SetValue
	// void SetValue(char InNewValue);                                                                                          // [0x71a9790] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);                                // [0x71a92b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.GetValue
	// char GetValue();                                                                                                         // [0x71a7ca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.GetTime
	// FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);                                                                        // [0x71a7a50] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingByteChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.SetDefault
	// void SetDefault(char InDefaultValue);                                                                                    // [0x71a8a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x71a8530] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x71a8390] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x71a8100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.GetKeysByIndex
	// TArray<UMovieSceneScriptingKey*> GetKeysByIndex(TArray<int32_t>& Indices);                                               // [0x71a7650] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x4dec6e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.GetDefault
	// char GetDefault();                                                                                                       // [0x71a74a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.AddKey
	// class UMovieSceneScriptingByteKey* AddKey(FFrameNumber& InTime, char NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // [0x71a67a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingDoubleKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingDoubleKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetValue
	// void SetValue(double InNewValue);                                                                                        // [0x71a98b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);                                // [0x71a92b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode
	// void SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue);                                          // [0x71a91d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode
	// void SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue);                                                      // [0x71a90f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight
	// void SetLeaveTangentWeight(float InNewValue);                                                                            // [0x71a8e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent
	// void SetLeaveTangent(float InNewValue);                                                                                  // [0x71a8d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode
	// void SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue);                                                 // [0x71a8cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight
	// void SetArriveTangentWeight(float InNewValue);                                                                           // [0x71a86c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent
	// void SetArriveTangent(float InNewValue);                                                                                 // [0x71a85c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetValue
	// double GetValue();                                                                                                       // [0x71a7d60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetTime
	// FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);                                                                        // [0x71a7a50] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode
	// TEnumAsByte<ERichCurveTangentWeightMode> GetTangentWeightMode();                                                         // [0x71a79f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode
	// TEnumAsByte<ERichCurveTangentMode> GetTangentMode();                                                                     // [0x71a7990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight
	// float GetLeaveTangentWeight();                                                                                           // [0x71a77b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent
	// float GetLeaveTangent();                                                                                                 // [0x71a7750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode
	// TEnumAsByte<ERichCurveInterpMode> GetInterpolationMode();                                                                // [0x71a75f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight
	// float GetArriveTangentWeight();                                                                                          // [0x71a72e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent
	// float GetArriveTangent();                                                                                                // [0x71a7280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingDoubleChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingDoubleChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.SetPreInfinityExtrapolation
	// void SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                  // [0x71a9040] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation
	// void SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                 // [0x71a8f90] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault
	// void SetDefault(double InDefaultValue);                                                                                  // [0x71a8b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x71a8530] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x71a8460] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x71a81c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPreInfinityExtrapolation();                                                      // [0x71a7930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPostInfinityExtrapolation();                                                     // [0x71a78d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys
	// int32_t GetNumKeys();                                                                                                    // [0x71a7870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeysByIndex
	// TArray<UMovieSceneScriptingKey*> GetKeysByIndex(TArray<int32_t>& Indices);                                               // [0x71a7650] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x4dec6e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault
	// double GetDefault();                                                                                                     // [0x71a7560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys
	// TArray<double> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);                                       // [0x71a7100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange
	// FSequencerScriptingRange ComputeEffectiveRange();                                                                        // [0x71a6e40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey
	// class UMovieSceneScriptingDoubleKey* AddKey(FFrameNumber& InTime, double NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // [0x71a6970] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingEventKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.SetValue
	// void SetValue(FMovieSceneEvent& InNewValue);                                                                             // [0x71a99a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);                                // [0x71a92b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.GetValue
	// FMovieSceneEvent GetValue();                                                                                             // [0x71a7dc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.GetTime
	// FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);                                                                        // [0x71a7a50] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingEventChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x71a8530] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.GetKeysByIndex
	// TArray<UMovieSceneScriptingKey*> GetKeysByIndex(TArray<int32_t>& Indices);                                               // [0x71a7650] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x4dec6e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.AddKey
	// class UMovieSceneScriptingEventKey* AddKey(FFrameNumber& InTime, FMovieSceneEvent NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // [0x71a6b40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingFloatKey
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetValue
	// void SetValue(float InNewValue);                                                                                         // [0x71b45a0] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);                                // [0x71b4480] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode
	// void SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue);                                          // [0x71b4400] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode
	// void SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue);                                                      // [0x71b4380] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight
	// void SetLeaveTangentWeight(float InNewValue);                                                                            // [0x71b3c00] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent
	// void SetLeaveTangent(float InNewValue);                                                                                  // [0x71b3b70] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode
	// void SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue);                                                 // [0x71b3af0] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight
	// void SetArriveTangentWeight(float InNewValue);                                                                           // [0x71b3550] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent
	// void SetArriveTangent(float InNewValue);                                                                                 // [0x511f280] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetValue
	// float GetValue();                                                                                                        // [0x4f47930] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTime
	// FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);                                                                        // [0x71a7a50] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode
	// TEnumAsByte<ERichCurveTangentWeightMode> GetTangentWeightMode();                                                         // [0x5328010] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode
	// TEnumAsByte<ERichCurveTangentMode> GetTangentMode();                                                                     // [0x50af3d0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight
	// float GetLeaveTangentWeight();                                                                                           // [0x71b2250] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent
	// float GetLeaveTangent();                                                                                                 // [0x71b2210] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode
	// TEnumAsByte<ERichCurveInterpMode> GetInterpolationMode();                                                                // [0x4e0b010] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight
	// float GetArriveTangentWeight();                                                                                          // [0x537fc10] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent
	// float GetArriveTangent();                                                                                                // [0x71b1bf0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingActualFloatKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingActualFloatKey : public UMovieSceneScriptingFloatKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingDoubleAsFloatKey : public UMovieSceneScriptingFloatKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Class /Script/SequencerScripting.MovieSceneScriptingFloatChannel
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation
	// void SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                  // [0x71b4080] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation
	// void SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                 // [0x71b3fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault
	// void SetDefault(float InDefaultValue);                                                                                   // [0x71b35e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x71a8530] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x71b3340] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x71b2db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPreInfinityExtrapolation();                                                      // [0x71b27f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPostInfinityExtrapolation();                                                     // [0x71b2770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys
	// int32_t GetNumKeys();                                                                                                    // [0x71b2440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetKeysByIndex
	// TArray<UMovieSceneScriptingKey*> GetKeysByIndex(TArray<int32_t>& Indices);                                               // [0x71a7650] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x4dec6e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault
	// float GetDefault();                                                                                                      // [0x71b1d10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys
	// TArray<float> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);                                        // [0x71b1430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange
	// FSequencerScriptingRange ComputeEffectiveRange();                                                                        // [0x71b13f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.AddKey
	// class UMovieSceneScriptingFloatKey* AddKey(FFrameNumber& InTime, float NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // [0x71b0b00] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingIntegerKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.SetValue
	// void SetValue(int32_t InNewValue);                                                                                       // [0x71b4630] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);                                // [0x71a92b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.GetValue
	// int32_t GetValue();                                                                                                      // [0x71b2a70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.GetTime
	// FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);                                                                        // [0x71a7a50] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingIntegerChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault
	// void SetDefault(int32_t InDefaultValue);                                                                                 // [0x71b3660] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x71a8530] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x71b3360] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x71b2e90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetNumKeys
	// int32_t GetNumKeys();                                                                                                    // [0x71a7870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeysByIndex
	// TArray<UMovieSceneScriptingKey*> GetKeysByIndex(TArray<int32_t>& Indices);                                               // [0x71a7650] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x4dec6e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault
	// int32_t GetDefault();                                                                                                    // [0x71b1e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.EvaluateKeys
	// TArray<int32_t> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);                                      // [0x71b16b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey
	// class UMovieSceneScriptingIntegerKey* AddKey(FFrameNumber& InTime, int32_t NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // [0x71b0cc0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingObjectPathKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue
	// void SetValue(class UObject* InNewValue);                                                                                // [0x71b4750] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);                                // [0x71a92b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue
	// class UObject* GetValue();                                                                                               // [0x71b2b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime
	// FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);                                                                        // [0x71a7a50] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault
	// void SetDefault(class UObject* InDefaultValue);                                                                          // [0x71b3780] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x71a8530] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x71a8240] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x71b2f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeysByIndex
	// TArray<UMovieSceneScriptingKey*> GetKeysByIndex(TArray<int32_t>& Indices);                                               // [0x71a7650] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x4dec6e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault
	// class UObject* GetDefault();                                                                                             // [0x71b1ea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey
	// class UMovieSceneScriptingObjectPathKey* AddKey(FFrameNumber InTime, class UObject* NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // [0x71b0e40] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingStringKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingStringKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.SetValue
	// void SetValue(FString InNewValue);                                                                                       // [0x71b48c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);                                // [0x71a92b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.GetValue
	// FString GetValue();                                                                                                      // [0x71b2c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.GetTime
	// FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);                                                                        // [0x71a7a50] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingStringChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.SetDefault
	// void SetDefault(FString InDefaultValue);                                                                                 // [0x71b3840] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x71a8530] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x71a8460] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x71b2f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.GetKeysByIndex
	// TArray<UMovieSceneScriptingKey*> GetKeysByIndex(TArray<int32_t>& Indices);                                               // [0x71a7650] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x4dec6e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.GetDefault
	// FString GetDefault();                                                                                                    // [0x71b1ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.AddKey
	// class UMovieSceneScriptingStringKey* AddKey(FFrameNumber& InTime, FString NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // [0x71b1000] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneBindingExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetSpawnableBindingID
	// void SetSpawnableBindingID(FMovieSceneBindingProxy& InBinding, FMovieSceneObjectBindingID& SpawnableBindingID);          // [0x71b4210] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetSortingOrder
	// void SetSortingOrder(FMovieSceneBindingProxy& InBinding, int32_t SortingOrder);                                          // [0x71b4140] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetParent
	// void SetParent(FMovieSceneBindingProxy& InBinding, FMovieSceneBindingProxy& InParentBinding);                            // [0x71b3e90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetName
	// void SetName(FMovieSceneBindingProxy& InBinding, FString InName);                                                        // [0x71b3c90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetDisplayName
	// void SetDisplayName(FMovieSceneBindingProxy& InBinding, FText& InDisplayName);                                           // [0x71b39f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.RemoveTrack
	// void RemoveTrack(FMovieSceneBindingProxy& InBinding, class UMovieSceneTrack* TrackToRemove);                             // [0x71b3430] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.Remove
	// void Remove(FMovieSceneBindingProxy& InBinding);                                                                         // [0x71b3280] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents
	// void MoveBindingContents(FMovieSceneBindingProxy& SourceBindingId, FMovieSceneBindingProxy& DestinationBindingId);       // [0x71b30e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.IsValid
	// bool IsValid(FMovieSceneBindingProxy& InBinding);                                                                        // [0x71b3000] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetTracks
	// TArray<UMovieSceneTrack*> GetTracks(FMovieSceneBindingProxy& InBinding);                                                 // [0x71b2910] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetSortingOrder
	// int32_t GetSortingOrder(FMovieSceneBindingProxy& InBinding);                                                             // [0x71b2870] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass
	// class UClass* GetPossessedObjectClass(FMovieSceneBindingProxy& InBinding);                                               // [0x71b26b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetParent
	// FMovieSceneBindingProxy GetParent(FMovieSceneBindingProxy& InBinding);                                                   // [0x71b25a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate
	// class UObject* GetObjectTemplate(FMovieSceneBindingProxy& InBinding);                                                    // [0x71b24d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetName
	// FString GetName(FMovieSceneBindingProxy& InBinding);                                                                     // [0x71b2290] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetId
	// FGuid GetId(FMovieSceneBindingProxy& InBinding);                                                                         // [0x71b2170] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetDisplayName
	// FText GetDisplayName(FMovieSceneBindingProxy& InBinding);                                                                // [0x71b2070] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables
	// TArray<FMovieSceneBindingProxy> GetChildPossessables(FMovieSceneBindingProxy& InBinding);                                // [0x71b1c30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.FindTracksByType
	// TArray<UMovieSceneTrack*> FindTracksByType(FMovieSceneBindingProxy& InBinding, class UClass* TrackType);                 // [0x71b1a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType
	// TArray<UMovieSceneTrack*> FindTracksByExactType(FMovieSceneBindingProxy& InBinding, class UClass* TrackType);            // [0x71b1830] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.AddTrack
	// class UMovieSceneTrack* AddTrack(FMovieSceneBindingProxy& InBinding, class UClass* TrackType);                           // [0x71b11d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneEventTrackExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass
	// class UClass* GetBoundObjectPropertyClass(FMovieSceneEvent& EventKey);                                                   // [0x71bb210] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection
	// class UMovieSceneEventTriggerSection* AddEventTriggerSection(class UMovieSceneEventTrack* InTrack);                      // [0x71b7d50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection
	// class UMovieSceneEventRepeaterSection* AddEventRepeaterSection(class UMovieSceneEventTrack* InTrack);                    // [0x71b7be0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneFolderExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.SetFolderName
	// bool SetFolderName(class UMovieSceneFolder* Folder, FName InFolderName);                                                 // [0x71c2030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.SetFolderColor
	// bool SetFolderColor(class UMovieSceneFolder* Folder, FColor InFolderColor);                                              // [0x71c1f40] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildTrack
	// bool RemoveChildTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);                                 // [0x71c0910] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding
	// bool RemoveChildObjectBinding(class UMovieSceneFolder* Folder, FMovieSceneBindingProxy InObjectBinding);                 // [0x71c0a20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack
	// bool RemoveChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);                           // [0x71c0910] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder
	// bool RemoveChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToRemove);                  // [0x71c0800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetFolderName
	// FName GetFolderName(class UMovieSceneFolder* Folder);                                                                    // [0x71bc740] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetFolderColor
	// FColor GetFolderColor(class UMovieSceneFolder* Folder);                                                                  // [0x71bc6a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildTracks
	// TArray<UMovieSceneTrack*> GetChildTracks(class UMovieSceneFolder* Folder);                                               // [0x71bbaf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings
	// TArray<FMovieSceneBindingProxy> GetChildObjectBindings(class UMovieSceneFolder* Folder);                                 // [0x71bbc40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks
	// TArray<UMovieSceneTrack*> GetChildMasterTracks(class UMovieSceneFolder* Folder);                                         // [0x71bbaf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildFolders
	// TArray<UMovieSceneFolder*> GetChildFolders(class UMovieSceneFolder* Folder);                                             // [0x71bb990] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildTrack
	// bool AddChildTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);                                    // [0x71b7990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding
	// bool AddChildObjectBinding(class UMovieSceneFolder* Folder, FMovieSceneBindingProxy InObjectBinding);                    // [0x71b7aa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack
	// bool AddChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);                              // [0x71b7990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildFolder
	// bool AddChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToAdd);                        // [0x71b7880] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneMaterialTrackExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneMaterialTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneMaterialTrackExtensions.SetMaterialInfo
	// void SetMaterialInfo(class UMovieSceneComponentMaterialTrack* Track, FComponentMaterialInfo& MaterialInfo);              // [0x71c2700] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneMaterialTrackExtensions.SetMaterialIndex
	// void SetMaterialIndex(class UMovieSceneComponentMaterialTrack* Track, int32_t MaterialIndex);                            // [0x71c2510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneMaterialTrackExtensions.GetMaterialInfo
	// FComponentMaterialInfo GetMaterialInfo(class UMovieSceneComponentMaterialTrack* Track);                                  // [0x71bd020] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneMaterialTrackExtensions.GetMaterialIndex
	// int32_t GetMaterialIndex(class UMovieSceneComponentMaterialTrack* Track);                                                // [0x71bcec0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieScenePrimitiveMaterialTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.SetMaterialInfo
	// void SetMaterialInfo(class UMovieScenePrimitiveMaterialTrack* Track, FComponentMaterialInfo& MaterialInfo);              // [0x71c2800] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.SetMaterialIndex
	// void SetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* Track, int32_t MaterialIndex);                            // [0x71c2610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.GetMaterialInfo
	// FComponentMaterialInfo GetMaterialInfo(class UMovieScenePrimitiveMaterialTrack* Track);                                  // [0x71bd0f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.GetMaterialIndex
	// int32_t GetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* Track);                                                // [0x71bcf70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieScenePropertyTrackExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath
	// void SetPropertyNameAndPath(class UMovieScenePropertyTrack* Track, FName& InPropertyName, FString InPropertyPath);       // [0x71c3280] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass
	// void SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track, class UClass* PropertyClass);                   // [0x71c29e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetByteTrackEnum
	// void SetByteTrackEnum(class UMovieSceneByteTrack* Track, class UEnum* InEnum);                                           // [0x71c12e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName
	// FName GetUniqueTrackName(class UMovieScenePropertyTrack* Track);                                                         // [0x71bf620] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath
	// FString GetPropertyPath(class UMovieScenePropertyTrack* Track);                                                          // [0x71be780] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName
	// FName GetPropertyName(class UMovieScenePropertyTrack* Track);                                                            // [0x71be6c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass
	// class UClass* GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track);                                       // [0x71bd330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetByteTrackEnum
	// class UEnum* GetByteTrackEnum(class UMovieSceneByteTrack* Track);                                                        // [0x71bb2d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SequencerScripting.MovieSceneSectionExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneSectionExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds
	// void SetStartFrameSeconds(class UMovieSceneSection* Section, float StartTime);                                           // [0x71c3ea0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded
	// void SetStartFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);                                           // [0x71c3d60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrame
	// void SetStartFrame(class UMovieSceneSection* Section, int32_t StartFrame);                                               // [0x71c3b40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds
	// void SetRangeSeconds(class UMovieSceneSection* Section, float StartTime, float EndTime);                                 // [0x71c35d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetRange
	// void SetRange(class UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame);                                  // [0x71c33d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds
	// void SetEndFrameSeconds(class UMovieSceneSection* Section, float EndTime);                                               // [0x71c1b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded
	// void SetEndFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);                                             // [0x71c19d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrame
	// void SetEndFrame(class UMovieSceneSection* Section, int32_t EndFrame);                                                   // [0x71c17b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.HasStartFrame
	// bool HasStartFrame(class UMovieSceneSection* Section);                                                                   // [0x71bfbd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.HasEndFrame
	// bool HasEndFrame(class UMovieSceneSection* Section);                                                                     // [0x71bfa80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds
	// float GetStartFrameSeconds(class UMovieSceneSection* Section);                                                           // [0x71befe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetStartFrame
	// int32_t GetStartFrame(class UMovieSceneSection* Section);                                                                // [0x71bee00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame
	// int32_t GetParentSequenceFrame(class UMovieSceneSubSection* Section, int32_t InFrame, class UMovieSceneSequence* ParentSequence); // [0x71bd3f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds
	// float GetEndFrameSeconds(class UMovieSceneSection* Section);                                                             // [0x71bc350] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetEndFrame
	// int32_t GetEndFrame(class UMovieSceneSection* Section);                                                                  // [0x71bc170] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType
	// TArray<UMovieSceneScriptingChannel*> GetChannelsByType(class UMovieSceneSection* Section, class UClass* ChannelType);    // [0x71bb460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetChannel
	// class UMovieSceneScriptingChannel* GetChannel(class UMovieSceneSection* Section, FName& ChannelName);                    // [0x71bb390] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrameSeconds
	// float GetAutoSizeStartFrameSeconds(class UMovieSceneSection* Section);                                                   // [0x71badb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrame
	// int32_t GetAutoSizeStartFrame(class UMovieSceneSection* Section);                                                        // [0x71bac60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasStartFrame
	// bool GetAutoSizeHasStartFrame(class UMovieSceneSection* Section);                                                        // [0x71bab80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasEndFrame
	// bool GetAutoSizeHasEndFrame(class UMovieSceneSection* Section);                                                          // [0x71baaa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrameSeconds
	// float GetAutoSizeEndFrameSeconds(class UMovieSceneSection* Section);                                                     // [0x71ba8f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrame
	// int32_t GetAutoSizeEndFrame(class UMovieSceneSection* Section);                                                          // [0x71ba7a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAllChannels
	// TArray<UMovieSceneScriptingChannel*> GetAllChannels(class UMovieSceneSection* Section);                                  // [0x71ba590] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneSequenceExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames
	// void SortMarkedFrames(class UMovieSceneSequence* Sequence);                                                              // [0x71c4840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart
	// void SetWorkRangeStart(class UMovieSceneSequence* InSequence, double StartTimeInSeconds);                                // [0x71c4760] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd
	// void SetWorkRangeEnd(class UMovieSceneSequence* InSequence, double EndTimeInSeconds);                                    // [0x71c4680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart
	// void SetViewRangeStart(class UMovieSceneSequence* InSequence, double StartTimeInSeconds);                                // [0x71c45a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd
	// void SetViewRangeEnd(class UMovieSceneSequence* InSequence, double EndTimeInSeconds);                                    // [0x71c44c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly
	// void SetTickResolutionDirectly(class UMovieSceneSequence* Sequence, FFrameRate TickResolution);                          // [0x71c4290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution
	// void SetTickResolution(class UMovieSceneSequence* Sequence, FFrameRate TickResolution);                                  // [0x71c4190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly
	// void SetReadOnly(class UMovieSceneSequence* Sequence, bool bInReadOnly);                                                 // [0x71c38b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds
	// void SetPlaybackStartSeconds(class UMovieSceneSequence* Sequence, float StartTime);                                      // [0x71c30b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart
	// void SetPlaybackStart(class UMovieSceneSequence* Sequence, int32_t StartFrame);                                          // [0x71c2f20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackRangeLocked
	// void SetPlaybackRangeLocked(class UMovieSceneSequence* Sequence, bool bInLocked);                                        // [0x71c2e50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds
	// void SetPlaybackEndSeconds(class UMovieSceneSequence* Sequence, float EndTime);                                          // [0x71c2c80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd
	// void SetPlaybackEnd(class UMovieSceneSequence* Sequence, int32_t EndFrame);                                              // [0x71c2af0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFramesLocked
	// void SetMarkedFramesLocked(class UMovieSceneSequence* Sequence, bool bInLocked);                                         // [0x71c2440] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrameInSequence
	// void SetMarkedFrameInSequence(class UMovieSceneSequence* Sequence, int32_t InMarkIndex, FFrameNumber InFrameNumber, EMovieSceneTimeUnit TimeUnit); // [0x71c2270] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame
	// void SetMarkedFrame(class UMovieSceneSequence* Sequence, int32_t InMarkIndex, FFrameNumber InFrameNumber);               // [0x71c2120] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType
	// void SetEvaluationType(class UMovieSceneSequence* InSequence, EMovieSceneEvaluationType InEvaluationType);               // [0x71c1e40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate
	// void SetDisplayRate(class UMovieSceneSequence* Sequence, FFrameRate DisplayRate);                                        // [0x71c16b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetClockSource
	// void SetClockSource(class UMovieSceneSequence* InSequence, EUpdateClockSource InClockSource);                            // [0x71c13d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID
	// FMovieSceneBindingProxy ResolveBindingID(class UMovieSceneSequence* RootSequence, FMovieSceneObjectBindingID InObjectBindingID); // [0x71c10b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.RemoveTrack
	// bool RemoveTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* Track);                                    // [0x71c0c00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.RemoveRootFolderFromSequence
	// void RemoveRootFolderFromSequence(class UMovieSceneSequence* Sequence, class UMovieSceneFolder* Folder);                 // [0x71c0d40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack
	// bool RemoveMasterTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* Track);                              // [0x71c0c00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds
	// FSequencerScriptingRange MakeRangeSeconds(class UMovieSceneSequence* Sequence, float StartTime, float Duration);         // [0x71c0530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeRange
	// FSequencerScriptingRange MakeRange(class UMovieSceneSequence* Sequence, int32_t StartFrame, int32_t Duration);           // [0x71c0370] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects
	// TArray<UObject*> LocateBoundObjects(class UMovieSceneSequence* Sequence, FMovieSceneBindingProxy& InBinding, class UObject* Context); // [0x71bfdc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly
	// bool IsReadOnly(class UMovieSceneSequence* Sequence);                                                                    // [0x71bfd20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.IsPlaybackRangeLocked
	// bool IsPlaybackRangeLocked(class UMovieSceneSequence* Sequence);                                                         // [0x71bfc80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart
	// double GetWorkRangeStart(class UMovieSceneSequence* InSequence);                                                         // [0x71bf910] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd
	// double GetWorkRangeEnd(class UMovieSceneSequence* InSequence);                                                           // [0x71bf850] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart
	// double GetViewRangeStart(class UMovieSceneSequence* InSequence);                                                         // [0x71bf790] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd
	// double GetViewRangeEnd(class UMovieSceneSequence* InSequence);                                                           // [0x71bf6d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetTracks
	// TArray<UMovieSceneTrack*> GetTracks(class UMovieSceneSequence* Sequence);                                                // [0x71bf460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution
	// FFrameRate GetTickResolution(class UMovieSceneSequence* Sequence);                                                       // [0x71bf270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables
	// TArray<FMovieSceneBindingProxy> GetSpawnables(class UMovieSceneSequence* Sequence);                                      // [0x71bec10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence
	// TArray<UMovieSceneFolder*> GetRootFoldersInSequence(class UMovieSceneSequence* Sequence);                                // [0x71be890] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPossessables
	// TArray<FMovieSceneBindingProxy> GetPossessables(class UMovieSceneSequence* Sequence);                                    // [0x71be4d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID
	// FMovieSceneObjectBindingID GetPortableBindingID(class UMovieSceneSequence* RootSequence, class UMovieSceneSequence* DestinationSequence, FMovieSceneBindingProxy& InBinding); // [0x71bdeb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds
	// float GetPlaybackStartSeconds(class UMovieSceneSequence* Sequence);                                                      // [0x71bdca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart
	// int32_t GetPlaybackStart(class UMovieSceneSequence* Sequence);                                                           // [0x71bdb10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange
	// FSequencerScriptingRange GetPlaybackRange(class UMovieSceneSequence* Sequence);                                          // [0x71bd9b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds
	// float GetPlaybackEndSeconds(class UMovieSceneSequence* Sequence);                                                        // [0x71bd7a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd
	// int32_t GetPlaybackEnd(class UMovieSceneSequence* Sequence);                                                             // [0x71bd610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene
	// class UMovieScene* GetMovieScene(class UMovieSceneSequence* Sequence);                                                   // [0x71bd1c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks
	// TArray<UMovieSceneTrack*> GetMasterTracks(class UMovieSceneSequence* Sequence);                                          // [0x71bcd20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFramesFromSequence
	// TArray<FMovieSceneMarkedFrame> GetMarkedFramesFromSequence(class UMovieSceneSequence* Sequence, EMovieSceneTimeUnit TimeUnit); // [0x71bca30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames
	// TArray<FMovieSceneMarkedFrame> GetMarkedFrames(class UMovieSceneSequence* Sequence);                                     // [0x71bc800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType
	// EMovieSceneEvaluationType GetEvaluationType(class UMovieSceneSequence* InSequence);                                      // [0x71bc5e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate
	// FFrameRate GetDisplayRate(class UMovieSceneSequence* Sequence);                                                          // [0x71bc0a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetClockSource
	// EUpdateClockSource GetClockSource(class UMovieSceneSequence* InSequence);                                                // [0x71bbe60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetBindings
	// TArray<FMovieSceneBindingProxy> GetBindings(class UMovieSceneSequence* Sequence);                                        // [0x71bb060] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetBindingID
	// FMovieSceneObjectBindingID GetBindingID(class UMovieSceneSequence* Sequence, FMovieSceneBindingProxy& InBinding);        // [0x71baf60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindTracksByType
	// TArray<UMovieSceneTrack*> FindTracksByType(class UMovieSceneSequence* Sequence, class UClass* TrackType);                // [0x71ba260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindTracksByExactType
	// TArray<UMovieSceneTrack*> FindTracksByExactType(class UMovieSceneSequence* Sequence, class UClass* TrackType);           // [0x71b9f60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrameInSequence
	// int32_t FindNextMarkedFrameInSequence(class UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, bool bForward, EMovieSceneTimeUnit TimeUnit); // [0x71b9d80] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame
	// int32_t FindNextMarkedFrame(class UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, bool bForward);             // [0x71b9c30] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType
	// TArray<UMovieSceneTrack*> FindMasterTracksByType(class UMovieSceneSequence* Sequence, class UClass* TrackType);          // [0x71b98e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType
	// TArray<UMovieSceneTrack*> FindMasterTracksByExactType(class UMovieSceneSequence* Sequence, class UClass* TrackType);     // [0x71b95e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel
	// int32_t FindMarkedFrameByLabel(class UMovieSceneSequence* Sequence, FString InLabel);                                    // [0x71b94c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumberInSequence
	// int32_t FindMarkedFrameByFrameNumberInSequence(class UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, EMovieSceneTimeUnit TimeUnit); // [0x71b9330] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber
	// int32_t FindMarkedFrameByFrameNumber(class UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber);                   // [0x71b9230] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName
	// FMovieSceneBindingProxy FindBindingByName(class UMovieSceneSequence* Sequence, FString Name);                            // [0x71b9030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindBindingById
	// FMovieSceneBindingProxy FindBindingById(class UMovieSceneSequence* Sequence, FGuid BindingID);                           // [0x71b8ec0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames
	// void DeleteMarkedFrames(class UMovieSceneSequence* Sequence);                                                            // [0x71b8e10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame
	// void DeleteMarkedFrame(class UMovieSceneSequence* Sequence, int32_t DeleteIndex);                                        // [0x71b8d10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AreMarkedFramesLocked
	// bool AreMarkedFramesLocked(class UMovieSceneSequence* Sequence);                                                         // [0x71b8c70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddTrack
	// class UMovieSceneTrack* AddTrack(class UMovieSceneSequence* Sequence, class UClass* TrackType);                          // [0x71b8aa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance
	// FMovieSceneBindingProxy AddSpawnableFromInstance(class UMovieSceneSequence* Sequence, class UObject* ObjectToSpawn);     // [0x71b8930] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass
	// FMovieSceneBindingProxy AddSpawnableFromClass(class UMovieSceneSequence* Sequence, class UClass* ClassToSpawn);          // [0x71b87c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence
	// class UMovieSceneFolder* AddRootFolderToSequence(class UMovieSceneSequence* Sequence, FString NewFolderName);            // [0x71b8590] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddPossessable
	// FMovieSceneBindingProxy AddPossessable(class UMovieSceneSequence* Sequence, class UObject* ObjectToPossess);             // [0x71b8420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack
	// class UMovieSceneTrack* AddMasterTrack(class UMovieSceneSequence* Sequence, class UClass* TrackType);                    // [0x71b8230] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrameToSequence
	// int32_t AddMarkedFrameToSequence(class UMovieSceneSequence* Sequence, FMovieSceneMarkedFrame& InMarkedFrame, EMovieSceneTimeUnit TimeUnit); // [0x71b8040] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame
	// int32_t AddMarkedFrame(class UMovieSceneSequence* Sequence, FMovieSceneMarkedFrame& InMarkedFrame);                      // [0x71b7ec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneTrackExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName
	// void SetTrackRowDisplayName(class UMovieSceneTrack* Track, FText& InName, int32_t RowIndex);                             // [0x71c4390] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder
	// void SetSortingOrder(class UMovieSceneTrack* Track, int32_t SortingOrder);                                               // [0x71c3a70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey
	// void SetSectionToKey(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);                                  // [0x71c3980] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetDisplayName
	// void SetDisplayName(class UMovieSceneTrack* Track, FText& InName);                                                       // [0x71c15c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetColorTint
	// void SetColorTint(class UMovieSceneTrack* Track, FColor& ColorTint);                                                     // [0x71c14f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.RemoveSection
	// void RemoveSection(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);                                    // [0x71c0f20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName
	// FText GetTrackRowDisplayName(class UMovieSceneTrack* Track, int32_t RowIndex);                                           // [0x71bf340] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder
	// int32_t GetSortingOrder(class UMovieSceneTrack* Track);                                                                  // [0x71beb60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey
	// class UMovieSceneSection* GetSectionToKey(class UMovieSceneTrack* Track);                                                // [0x71be950] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSections
	// TArray<UMovieSceneSection*> GetSections(class UMovieSceneTrack* Track);                                                  // [0x71bea10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetDisplayName
	// FText GetDisplayName(class UMovieSceneTrack* Track);                                                                     // [0x71bbfc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetColorTint
	// FColor GetColorTint(class UMovieSceneTrack* Track);                                                                      // [0x71bbf20] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.AddSection
	// class UMovieSceneSection* AddSection(class UMovieSceneTrack* Track);                                                     // [0x71b86e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneFloatVectorTrackExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneFloatVectorTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneFloatVectorTrackExtensions.SetNumChannelsUsed
	// void SetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track, int32_t InNumChannelsUsed);                            // [0x71c2900] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed
	// int32_t GetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track);                                                    // [0x71bd280] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneDoubleVectorTrackExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneDoubleVectorTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed
	// void SetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track, int32_t InNumChannelsUsed);                           // [0x71c2900] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed
	// int32_t GetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track);                                                   // [0x71bd280] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.SequencerScriptingRangeExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USequencerScriptingRangeExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds
	// void SetStartSeconds(FSequencerScriptingRange& Range, float Start);                                                      // [0x71c4060] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame
	// void SetStartFrame(FSequencerScriptingRange& Range, int32_t Start);                                                      // [0x71c3c80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds
	// void SetEndSeconds(FSequencerScriptingRange& Range, float End);                                                          // [0x71c1cd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame
	// void SetEndFrame(FSequencerScriptingRange& Range, int32_t End);                                                          // [0x71c18f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart
	// void RemoveStart(FSequencerScriptingRange& Range);                                                                       // [0x71c1010] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd
	// void RemoveEnd(FSequencerScriptingRange& Range);                                                                         // [0x71c0b60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.HasStart
	// bool HasStart(FSequencerScriptingRange& Range);                                                                          // [0x71bfb30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.HasEnd
	// bool HasEnd(FSequencerScriptingRange& Range);                                                                            // [0x71bf9d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds
	// float GetStartSeconds(FSequencerScriptingRange& Range);                                                                  // [0x71bf170] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame
	// int32_t GetStartFrame(FSequencerScriptingRange& Range);                                                                  // [0x71bef40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds
	// float GetEndSeconds(FSequencerScriptingRange& Range);                                                                    // [0x71bc4e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame
	// int32_t GetEndFrame(FSequencerScriptingRange& Range);                                                                    // [0x71bc2b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/SequencerScripting.SequencerScriptingRange
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FSequencerScriptingRange
{ 
	bool                                               bHasStart : 1;                                              // 0x0000:0 (0x0001)  
	bool                                               bHasEnd : 1;                                                // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            InclusiveStart;                                             // 0x0004   (0x0004)  
	int32_t                                            ExclusiveEnd;                                               // 0x0008   (0x0004)  
	FFrameRate                                         InternalRate;                                               // 0x000C   (0x0008)  
};

#pragma pack(pop)