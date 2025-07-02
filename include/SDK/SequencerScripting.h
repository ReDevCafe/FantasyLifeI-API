
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
	// void SetValue(FMovieSceneObjectBindingID& InNewValue);                                                                   // [0x7213030] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);                                // [0x7212dd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue
	// FMovieSceneObjectBindingID GetValue();                                                                                   // [0x7211610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime
	// FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);                                                                        // [0x7211570] Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void SetDefault(FMovieSceneObjectBindingID InDefaultValue);                                                              // [0x72122d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x7212050] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x7211d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x7211a80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeysByIndex
	// TArray<UMovieSceneScriptingKey*> GetKeysByIndex(TArray<int32_t>& Indices);                                               // [0x7211170] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x4e3beb0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault
	// FMovieSceneObjectBindingID GetDefault();                                                                                 // [0x7210e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey
	// class UMovieSceneScriptingActorReferenceKey* AddKey(FFrameNumber InTime, FMovieSceneObjectBindingID NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // [0x720ffc0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingBoolKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.SetValue
	// void SetValue(bool InNewValue);                                                                                          // [0x72131a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);                                // [0x7212dd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.GetValue
	// bool GetValue();                                                                                                         // [0x7211710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.GetTime
	// FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);                                                                        // [0x7211570] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingBoolChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault
	// void SetDefault(bool InDefaultValue);                                                                                    // [0x7212440] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x7212050] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x7211de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x7211b60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys
	// int32_t GetNumKeys();                                                                                                    // [0x7211330] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetKeysByIndex
	// TArray<UMovieSceneScriptingKey*> GetKeysByIndex(TArray<int32_t>& Indices);                                               // [0x7211170] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x4e3beb0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault
	// bool GetDefault();                                                                                                       // [0x7210f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys
	// TArray<bool> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);                                         // [0x7210aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange
	// FSequencerScriptingRange ComputeEffectiveRange();                                                                        // [0x7210820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.AddKey
	// class UMovieSceneScriptingBoolKey* AddKey(FFrameNumber& InTime, bool NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // [0x7210130] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingByteKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingByteKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.SetValue
	// void SetValue(char InNewValue);                                                                                          // [0x72132b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);                                // [0x7212dd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.GetValue
	// char GetValue();                                                                                                         // [0x72117c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteKey.GetTime
	// FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);                                                                        // [0x7211570] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingByteChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.SetDefault
	// void SetDefault(char InDefaultValue);                                                                                    // [0x7212570] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x7212050] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x7211eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x7211c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.GetKeysByIndex
	// TArray<UMovieSceneScriptingKey*> GetKeysByIndex(TArray<int32_t>& Indices);                                               // [0x7211170] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x4e3beb0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.GetDefault
	// char GetDefault();                                                                                                       // [0x7210fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.AddKey
	// class UMovieSceneScriptingByteKey* AddKey(FFrameNumber& InTime, char NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // [0x72102c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingDoubleKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingDoubleKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetValue
	// void SetValue(double InNewValue);                                                                                        // [0x72133d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);                                // [0x7212dd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode
	// void SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue);                                          // [0x7212cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode
	// void SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue);                                                      // [0x7212c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight
	// void SetLeaveTangentWeight(float InNewValue);                                                                            // [0x72129b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent
	// void SetLeaveTangent(float InNewValue);                                                                                  // [0x72128b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode
	// void SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue);                                                 // [0x72127d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight
	// void SetArriveTangentWeight(float InNewValue);                                                                           // [0x72121e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent
	// void SetArriveTangent(float InNewValue);                                                                                 // [0x72120e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetValue
	// double GetValue();                                                                                                       // [0x7211880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetTime
	// FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);                                                                        // [0x7211570] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode
	// TEnumAsByte<ERichCurveTangentWeightMode> GetTangentWeightMode();                                                         // [0x7211510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode
	// TEnumAsByte<ERichCurveTangentMode> GetTangentMode();                                                                     // [0x72114b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight
	// float GetLeaveTangentWeight();                                                                                           // [0x72112d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent
	// float GetLeaveTangent();                                                                                                 // [0x7211270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode
	// TEnumAsByte<ERichCurveInterpMode> GetInterpolationMode();                                                                // [0x7211110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight
	// float GetArriveTangentWeight();                                                                                          // [0x7210e00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent
	// float GetArriveTangent();                                                                                                // [0x7210da0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingDoubleChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingDoubleChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.SetPreInfinityExtrapolation
	// void SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                  // [0x7212b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation
	// void SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                 // [0x7212ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault
	// void SetDefault(double InDefaultValue);                                                                                  // [0x7212690] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x7212050] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x7211f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x7211ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPreInfinityExtrapolation();                                                      // [0x7211450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPostInfinityExtrapolation();                                                     // [0x72113f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys
	// int32_t GetNumKeys();                                                                                                    // [0x7211390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeysByIndex
	// TArray<UMovieSceneScriptingKey*> GetKeysByIndex(TArray<int32_t>& Indices);                                               // [0x7211170] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x4e3beb0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault
	// double GetDefault();                                                                                                     // [0x7211080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys
	// TArray<double> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);                                       // [0x7210c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange
	// FSequencerScriptingRange ComputeEffectiveRange();                                                                        // [0x7210960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey
	// class UMovieSceneScriptingDoubleKey* AddKey(FFrameNumber& InTime, double NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // [0x7210490] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingEventKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.SetValue
	// void SetValue(FMovieSceneEvent& InNewValue);                                                                             // [0x72134c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);                                // [0x7212dd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.GetValue
	// FMovieSceneEvent GetValue();                                                                                             // [0x72118e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventKey.GetTime
	// FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);                                                                        // [0x7211570] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingEventChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x7212050] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.GetKeysByIndex
	// TArray<UMovieSceneScriptingKey*> GetKeysByIndex(TArray<int32_t>& Indices);                                               // [0x7211170] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x4e3beb0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.AddKey
	// class UMovieSceneScriptingEventKey* AddKey(FFrameNumber& InTime, FMovieSceneEvent NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // [0x7210660] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingFloatKey
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetValue
	// void SetValue(float InNewValue);                                                                                         // [0x721e0c0] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);                                // [0x721dfa0] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode
	// void SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue);                                          // [0x721df20] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode
	// void SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue);                                                      // [0x721dea0] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight
	// void SetLeaveTangentWeight(float InNewValue);                                                                            // [0x721d720] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent
	// void SetLeaveTangent(float InNewValue);                                                                                  // [0x721d690] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode
	// void SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue);                                                 // [0x721d610] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight
	// void SetArriveTangentWeight(float InNewValue);                                                                           // [0x721d070] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent
	// void SetArriveTangent(float InNewValue);                                                                                 // [0x516ebe0] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetValue
	// float GetValue();                                                                                                        // [0x4f97100] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTime
	// FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);                                                                        // [0x7211570] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode
	// TEnumAsByte<ERichCurveTangentWeightMode> GetTangentWeightMode();                                                         // [0x5377a70] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode
	// TEnumAsByte<ERichCurveTangentMode> GetTangentMode();                                                                     // [0x50feca0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight
	// float GetLeaveTangentWeight();                                                                                           // [0x721bd70] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent
	// float GetLeaveTangent();                                                                                                 // [0x721bd30] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode
	// TEnumAsByte<ERichCurveInterpMode> GetInterpolationMode();                                                                // [0x4e5a7e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight
	// float GetArriveTangentWeight();                                                                                          // [0x53cf700] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent
	// float GetArriveTangent();                                                                                                // [0x721b710] Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                  // [0x721dba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation
	// void SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);                                 // [0x721dae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault
	// void SetDefault(float InDefaultValue);                                                                                   // [0x721d100] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x7212050] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x721ce60] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x721c8d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPreInfinityExtrapolation();                                                      // [0x721c310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation
	// TEnumAsByte<ERichCurveExtrapolation> GetPostInfinityExtrapolation();                                                     // [0x721c290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys
	// int32_t GetNumKeys();                                                                                                    // [0x721bf60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetKeysByIndex
	// TArray<UMovieSceneScriptingKey*> GetKeysByIndex(TArray<int32_t>& Indices);                                               // [0x7211170] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x4e3beb0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault
	// float GetDefault();                                                                                                      // [0x721b830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys
	// TArray<float> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);                                        // [0x721af50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange
	// FSequencerScriptingRange ComputeEffectiveRange();                                                                        // [0x721af10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.AddKey
	// class UMovieSceneScriptingFloatKey* AddKey(FFrameNumber& InTime, float NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation); // [0x721a620] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingIntegerKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.SetValue
	// void SetValue(int32_t InNewValue);                                                                                       // [0x721e150] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);                                // [0x7212dd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.GetValue
	// int32_t GetValue();                                                                                                      // [0x721c590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerKey.GetTime
	// FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);                                                                        // [0x7211570] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingIntegerChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault
	// void SetDefault(int32_t InDefaultValue);                                                                                 // [0x721d180] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x7212050] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x721ce80] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x721c9b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetNumKeys
	// int32_t GetNumKeys();                                                                                                    // [0x7211390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeysByIndex
	// TArray<UMovieSceneScriptingKey*> GetKeysByIndex(TArray<int32_t>& Indices);                                               // [0x7211170] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x4e3beb0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault
	// int32_t GetDefault();                                                                                                    // [0x721b930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.EvaluateKeys
	// TArray<int32_t> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);                                      // [0x721b1d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey
	// class UMovieSceneScriptingIntegerKey* AddKey(FFrameNumber& InTime, int32_t NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // [0x721a7e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingObjectPathKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue
	// void SetValue(class UObject* InNewValue);                                                                                // [0x721e270] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);                                // [0x7212dd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue
	// class UObject* GetValue();                                                                                               // [0x721c650] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime
	// FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);                                                                        // [0x7211570] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault
	// void SetDefault(class UObject* InDefaultValue);                                                                          // [0x721d2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x7212050] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x7211d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x721ca30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeysByIndex
	// TArray<UMovieSceneScriptingKey*> GetKeysByIndex(TArray<int32_t>& Indices);                                               // [0x7211170] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x4e3beb0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault
	// class UObject* GetDefault();                                                                                             // [0x721b9c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey
	// class UMovieSceneScriptingObjectPathKey* AddKey(FFrameNumber InTime, class UObject* NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // [0x721a960] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingStringKey
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingStringKey : public UMovieSceneScriptingKey
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.SetValue
	// void SetValue(FString InNewValue);                                                                                       // [0x721e3e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.SetTime
	// void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);                                // [0x7212dd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.GetValue
	// FString GetValue();                                                                                                      // [0x721c7a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringKey.GetTime
	// FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);                                                                        // [0x7211570] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SequencerScripting.MovieSceneScriptingStringChannel
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.SetDefault
	// void SetDefault(FString InDefaultValue);                                                                                 // [0x721d360] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey
	// void RemoveKey(class UMovieSceneScriptingKey* Key);                                                                      // [0x7212050] Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault
	// void RemoveDefault();                                                                                                    // [0x7211f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.HasDefault
	// bool HasDefault();                                                                                                       // [0x721ca70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.GetKeysByIndex
	// TArray<UMovieSceneScriptingKey*> GetKeysByIndex(TArray<int32_t>& Indices);                                               // [0x7211170] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.GetKeys
	// TArray<UMovieSceneScriptingKey*> GetKeys();                                                                              // [0x4e3beb0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.GetDefault
	// FString GetDefault();                                                                                                    // [0x721b9f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.AddKey
	// class UMovieSceneScriptingStringKey* AddKey(FFrameNumber& InTime, FString NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit); // [0x721ab20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneBindingExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetSpawnableBindingID
	// void SetSpawnableBindingID(FMovieSceneBindingProxy& InBinding, FMovieSceneObjectBindingID& SpawnableBindingID);          // [0x721dd30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetSortingOrder
	// void SetSortingOrder(FMovieSceneBindingProxy& InBinding, int32_t SortingOrder);                                          // [0x721dc60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetParent
	// void SetParent(FMovieSceneBindingProxy& InBinding, FMovieSceneBindingProxy& InParentBinding);                            // [0x721d9b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetName
	// void SetName(FMovieSceneBindingProxy& InBinding, FString InName);                                                        // [0x721d7b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetDisplayName
	// void SetDisplayName(FMovieSceneBindingProxy& InBinding, FText& InDisplayName);                                           // [0x721d510] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.RemoveTrack
	// void RemoveTrack(FMovieSceneBindingProxy& InBinding, class UMovieSceneTrack* TrackToRemove);                             // [0x721cf50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.Remove
	// void Remove(FMovieSceneBindingProxy& InBinding);                                                                         // [0x721cda0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents
	// void MoveBindingContents(FMovieSceneBindingProxy& SourceBindingId, FMovieSceneBindingProxy& DestinationBindingId);       // [0x721cc00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.IsValid
	// bool IsValid(FMovieSceneBindingProxy& InBinding);                                                                        // [0x721cb20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetTracks
	// TArray<UMovieSceneTrack*> GetTracks(FMovieSceneBindingProxy& InBinding);                                                 // [0x721c430] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetSortingOrder
	// int32_t GetSortingOrder(FMovieSceneBindingProxy& InBinding);                                                             // [0x721c390] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass
	// class UClass* GetPossessedObjectClass(FMovieSceneBindingProxy& InBinding);                                               // [0x721c1d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetParent
	// FMovieSceneBindingProxy GetParent(FMovieSceneBindingProxy& InBinding);                                                   // [0x721c0c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate
	// class UObject* GetObjectTemplate(FMovieSceneBindingProxy& InBinding);                                                    // [0x721bff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetName
	// FString GetName(FMovieSceneBindingProxy& InBinding);                                                                     // [0x721bdb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetId
	// FGuid GetId(FMovieSceneBindingProxy& InBinding);                                                                         // [0x721bc90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetDisplayName
	// FText GetDisplayName(FMovieSceneBindingProxy& InBinding);                                                                // [0x721bb90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables
	// TArray<FMovieSceneBindingProxy> GetChildPossessables(FMovieSceneBindingProxy& InBinding);                                // [0x721b750] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.FindTracksByType
	// TArray<UMovieSceneTrack*> FindTracksByType(FMovieSceneBindingProxy& InBinding, class UClass* TrackType);                 // [0x721b530] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType
	// TArray<UMovieSceneTrack*> FindTracksByExactType(FMovieSceneBindingProxy& InBinding, class UClass* TrackType);            // [0x721b350] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneBindingExtensions.AddTrack
	// class UMovieSceneTrack* AddTrack(FMovieSceneBindingProxy& InBinding, class UClass* TrackType);                           // [0x721acf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneEventTrackExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass
	// class UClass* GetBoundObjectPropertyClass(FMovieSceneEvent& EventKey);                                                   // [0x7224d30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection
	// class UMovieSceneEventTriggerSection* AddEventTriggerSection(class UMovieSceneEventTrack* InTrack);                      // [0x7221870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection
	// class UMovieSceneEventRepeaterSection* AddEventRepeaterSection(class UMovieSceneEventTrack* InTrack);                    // [0x7221700] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneFolderExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.SetFolderName
	// bool SetFolderName(class UMovieSceneFolder* Folder, FName InFolderName);                                                 // [0x722bb50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.SetFolderColor
	// bool SetFolderColor(class UMovieSceneFolder* Folder, FColor InFolderColor);                                              // [0x722ba60] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildTrack
	// bool RemoveChildTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);                                 // [0x722a430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding
	// bool RemoveChildObjectBinding(class UMovieSceneFolder* Folder, FMovieSceneBindingProxy InObjectBinding);                 // [0x722a540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack
	// bool RemoveChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);                           // [0x722a430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder
	// bool RemoveChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToRemove);                  // [0x722a320] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetFolderName
	// FName GetFolderName(class UMovieSceneFolder* Folder);                                                                    // [0x7226260] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetFolderColor
	// FColor GetFolderColor(class UMovieSceneFolder* Folder);                                                                  // [0x72261c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildTracks
	// TArray<UMovieSceneTrack*> GetChildTracks(class UMovieSceneFolder* Folder);                                               // [0x7225610] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings
	// TArray<FMovieSceneBindingProxy> GetChildObjectBindings(class UMovieSceneFolder* Folder);                                 // [0x7225760] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks
	// TArray<UMovieSceneTrack*> GetChildMasterTracks(class UMovieSceneFolder* Folder);                                         // [0x7225610] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.GetChildFolders
	// TArray<UMovieSceneFolder*> GetChildFolders(class UMovieSceneFolder* Folder);                                             // [0x72254b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildTrack
	// bool AddChildTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);                                    // [0x72214b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding
	// bool AddChildObjectBinding(class UMovieSceneFolder* Folder, FMovieSceneBindingProxy InObjectBinding);                    // [0x72215c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack
	// bool AddChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);                              // [0x72214b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFolderExtensions.AddChildFolder
	// bool AddChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToAdd);                        // [0x72213a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneMaterialTrackExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneMaterialTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneMaterialTrackExtensions.SetMaterialInfo
	// void SetMaterialInfo(class UMovieSceneComponentMaterialTrack* Track, FComponentMaterialInfo& MaterialInfo);              // [0x722c220] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneMaterialTrackExtensions.SetMaterialIndex
	// void SetMaterialIndex(class UMovieSceneComponentMaterialTrack* Track, int32_t MaterialIndex);                            // [0x722c030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneMaterialTrackExtensions.GetMaterialInfo
	// FComponentMaterialInfo GetMaterialInfo(class UMovieSceneComponentMaterialTrack* Track);                                  // [0x7226b40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneMaterialTrackExtensions.GetMaterialIndex
	// int32_t GetMaterialIndex(class UMovieSceneComponentMaterialTrack* Track);                                                // [0x72269e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieScenePrimitiveMaterialTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.SetMaterialInfo
	// void SetMaterialInfo(class UMovieScenePrimitiveMaterialTrack* Track, FComponentMaterialInfo& MaterialInfo);              // [0x722c320] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.SetMaterialIndex
	// void SetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* Track, int32_t MaterialIndex);                            // [0x722c130] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.GetMaterialInfo
	// FComponentMaterialInfo GetMaterialInfo(class UMovieScenePrimitiveMaterialTrack* Track);                                  // [0x7226c10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.GetMaterialIndex
	// int32_t GetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* Track);                                                // [0x7226a90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieScenePropertyTrackExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath
	// void SetPropertyNameAndPath(class UMovieScenePropertyTrack* Track, FName& InPropertyName, FString InPropertyPath);       // [0x722cda0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass
	// void SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track, class UClass* PropertyClass);                   // [0x722c500] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetByteTrackEnum
	// void SetByteTrackEnum(class UMovieSceneByteTrack* Track, class UEnum* InEnum);                                           // [0x722ae00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName
	// FName GetUniqueTrackName(class UMovieScenePropertyTrack* Track);                                                         // [0x7229140] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath
	// FString GetPropertyPath(class UMovieScenePropertyTrack* Track);                                                          // [0x72282a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName
	// FName GetPropertyName(class UMovieScenePropertyTrack* Track);                                                            // [0x72281e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass
	// class UClass* GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track);                                       // [0x7226e50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetByteTrackEnum
	// class UEnum* GetByteTrackEnum(class UMovieSceneByteTrack* Track);                                                        // [0x7224df0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SequencerScripting.MovieSceneSectionExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneSectionExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds
	// void SetStartFrameSeconds(class UMovieSceneSection* Section, float StartTime);                                           // [0x722d9c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded
	// void SetStartFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);                                           // [0x722d880] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrame
	// void SetStartFrame(class UMovieSceneSection* Section, int32_t StartFrame);                                               // [0x722d660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds
	// void SetRangeSeconds(class UMovieSceneSection* Section, float StartTime, float EndTime);                                 // [0x722d0f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetRange
	// void SetRange(class UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame);                                  // [0x722cef0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds
	// void SetEndFrameSeconds(class UMovieSceneSection* Section, float EndTime);                                               // [0x722b630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded
	// void SetEndFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);                                             // [0x722b4f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrame
	// void SetEndFrame(class UMovieSceneSection* Section, int32_t EndFrame);                                                   // [0x722b2d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.HasStartFrame
	// bool HasStartFrame(class UMovieSceneSection* Section);                                                                   // [0x72296f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.HasEndFrame
	// bool HasEndFrame(class UMovieSceneSection* Section);                                                                     // [0x72295a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds
	// float GetStartFrameSeconds(class UMovieSceneSection* Section);                                                           // [0x7228b00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetStartFrame
	// int32_t GetStartFrame(class UMovieSceneSection* Section);                                                                // [0x7228920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame
	// int32_t GetParentSequenceFrame(class UMovieSceneSubSection* Section, int32_t InFrame, class UMovieSceneSequence* ParentSequence); // [0x7226f10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds
	// float GetEndFrameSeconds(class UMovieSceneSection* Section);                                                             // [0x7225e70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetEndFrame
	// int32_t GetEndFrame(class UMovieSceneSection* Section);                                                                  // [0x7225c90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType
	// TArray<UMovieSceneScriptingChannel*> GetChannelsByType(class UMovieSceneSection* Section, class UClass* ChannelType);    // [0x7224f80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetChannel
	// class UMovieSceneScriptingChannel* GetChannel(class UMovieSceneSection* Section, FName& ChannelName);                    // [0x7224eb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrameSeconds
	// float GetAutoSizeStartFrameSeconds(class UMovieSceneSection* Section);                                                   // [0x72248d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrame
	// int32_t GetAutoSizeStartFrame(class UMovieSceneSection* Section);                                                        // [0x7224780] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasStartFrame
	// bool GetAutoSizeHasStartFrame(class UMovieSceneSection* Section);                                                        // [0x72246a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasEndFrame
	// bool GetAutoSizeHasEndFrame(class UMovieSceneSection* Section);                                                          // [0x72245c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrameSeconds
	// float GetAutoSizeEndFrameSeconds(class UMovieSceneSection* Section);                                                     // [0x7224410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrame
	// int32_t GetAutoSizeEndFrame(class UMovieSceneSection* Section);                                                          // [0x72242c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetAllChannels
	// TArray<UMovieSceneScriptingChannel*> GetAllChannels(class UMovieSceneSection* Section);                                  // [0x72240b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneSequenceExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames
	// void SortMarkedFrames(class UMovieSceneSequence* Sequence);                                                              // [0x722e360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart
	// void SetWorkRangeStart(class UMovieSceneSequence* InSequence, double StartTimeInSeconds);                                // [0x722e280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd
	// void SetWorkRangeEnd(class UMovieSceneSequence* InSequence, double EndTimeInSeconds);                                    // [0x722e1a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart
	// void SetViewRangeStart(class UMovieSceneSequence* InSequence, double StartTimeInSeconds);                                // [0x722e0c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd
	// void SetViewRangeEnd(class UMovieSceneSequence* InSequence, double EndTimeInSeconds);                                    // [0x722dfe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly
	// void SetTickResolutionDirectly(class UMovieSceneSequence* Sequence, FFrameRate TickResolution);                          // [0x722ddb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution
	// void SetTickResolution(class UMovieSceneSequence* Sequence, FFrameRate TickResolution);                                  // [0x722dcb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly
	// void SetReadOnly(class UMovieSceneSequence* Sequence, bool bInReadOnly);                                                 // [0x722d3d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds
	// void SetPlaybackStartSeconds(class UMovieSceneSequence* Sequence, float StartTime);                                      // [0x722cbd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart
	// void SetPlaybackStart(class UMovieSceneSequence* Sequence, int32_t StartFrame);                                          // [0x722ca40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackRangeLocked
	// void SetPlaybackRangeLocked(class UMovieSceneSequence* Sequence, bool bInLocked);                                        // [0x722c970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds
	// void SetPlaybackEndSeconds(class UMovieSceneSequence* Sequence, float EndTime);                                          // [0x722c7a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd
	// void SetPlaybackEnd(class UMovieSceneSequence* Sequence, int32_t EndFrame);                                              // [0x722c610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFramesLocked
	// void SetMarkedFramesLocked(class UMovieSceneSequence* Sequence, bool bInLocked);                                         // [0x722bf60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrameInSequence
	// void SetMarkedFrameInSequence(class UMovieSceneSequence* Sequence, int32_t InMarkIndex, FFrameNumber InFrameNumber, EMovieSceneTimeUnit TimeUnit); // [0x722bd90] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame
	// void SetMarkedFrame(class UMovieSceneSequence* Sequence, int32_t InMarkIndex, FFrameNumber InFrameNumber);               // [0x722bc40] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType
	// void SetEvaluationType(class UMovieSceneSequence* InSequence, EMovieSceneEvaluationType InEvaluationType);               // [0x722b960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate
	// void SetDisplayRate(class UMovieSceneSequence* Sequence, FFrameRate DisplayRate);                                        // [0x722b1d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.SetClockSource
	// void SetClockSource(class UMovieSceneSequence* InSequence, EUpdateClockSource InClockSource);                            // [0x722aef0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID
	// FMovieSceneBindingProxy ResolveBindingID(class UMovieSceneSequence* RootSequence, FMovieSceneObjectBindingID InObjectBindingID); // [0x722abd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.RemoveTrack
	// bool RemoveTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* Track);                                    // [0x722a720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.RemoveRootFolderFromSequence
	// void RemoveRootFolderFromSequence(class UMovieSceneSequence* Sequence, class UMovieSceneFolder* Folder);                 // [0x722a860] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack
	// bool RemoveMasterTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* Track);                              // [0x722a720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds
	// FSequencerScriptingRange MakeRangeSeconds(class UMovieSceneSequence* Sequence, float StartTime, float Duration);         // [0x722a050] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.MakeRange
	// FSequencerScriptingRange MakeRange(class UMovieSceneSequence* Sequence, int32_t StartFrame, int32_t Duration);           // [0x7229e90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects
	// TArray<UObject*> LocateBoundObjects(class UMovieSceneSequence* Sequence, FMovieSceneBindingProxy& InBinding, class UObject* Context); // [0x72298e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly
	// bool IsReadOnly(class UMovieSceneSequence* Sequence);                                                                    // [0x7229840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.IsPlaybackRangeLocked
	// bool IsPlaybackRangeLocked(class UMovieSceneSequence* Sequence);                                                         // [0x72297a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart
	// double GetWorkRangeStart(class UMovieSceneSequence* InSequence);                                                         // [0x7229430] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd
	// double GetWorkRangeEnd(class UMovieSceneSequence* InSequence);                                                           // [0x7229370] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart
	// double GetViewRangeStart(class UMovieSceneSequence* InSequence);                                                         // [0x72292b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd
	// double GetViewRangeEnd(class UMovieSceneSequence* InSequence);                                                           // [0x72291f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetTracks
	// TArray<UMovieSceneTrack*> GetTracks(class UMovieSceneSequence* Sequence);                                                // [0x7228f80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution
	// FFrameRate GetTickResolution(class UMovieSceneSequence* Sequence);                                                       // [0x7228d90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables
	// TArray<FMovieSceneBindingProxy> GetSpawnables(class UMovieSceneSequence* Sequence);                                      // [0x7228730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence
	// TArray<UMovieSceneFolder*> GetRootFoldersInSequence(class UMovieSceneSequence* Sequence);                                // [0x72283b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPossessables
	// TArray<FMovieSceneBindingProxy> GetPossessables(class UMovieSceneSequence* Sequence);                                    // [0x7227ff0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID
	// FMovieSceneObjectBindingID GetPortableBindingID(class UMovieSceneSequence* RootSequence, class UMovieSceneSequence* DestinationSequence, FMovieSceneBindingProxy& InBinding); // [0x72279d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds
	// float GetPlaybackStartSeconds(class UMovieSceneSequence* Sequence);                                                      // [0x72277c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart
	// int32_t GetPlaybackStart(class UMovieSceneSequence* Sequence);                                                           // [0x7227630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange
	// FSequencerScriptingRange GetPlaybackRange(class UMovieSceneSequence* Sequence);                                          // [0x72274d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds
	// float GetPlaybackEndSeconds(class UMovieSceneSequence* Sequence);                                                        // [0x72272c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd
	// int32_t GetPlaybackEnd(class UMovieSceneSequence* Sequence);                                                             // [0x7227130] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene
	// class UMovieScene* GetMovieScene(class UMovieSceneSequence* Sequence);                                                   // [0x7226ce0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks
	// TArray<UMovieSceneTrack*> GetMasterTracks(class UMovieSceneSequence* Sequence);                                          // [0x7226840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFramesFromSequence
	// TArray<FMovieSceneMarkedFrame> GetMarkedFramesFromSequence(class UMovieSceneSequence* Sequence, EMovieSceneTimeUnit TimeUnit); // [0x7226550] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames
	// TArray<FMovieSceneMarkedFrame> GetMarkedFrames(class UMovieSceneSequence* Sequence);                                     // [0x7226320] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType
	// EMovieSceneEvaluationType GetEvaluationType(class UMovieSceneSequence* InSequence);                                      // [0x7226100] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate
	// FFrameRate GetDisplayRate(class UMovieSceneSequence* Sequence);                                                          // [0x7225bc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetClockSource
	// EUpdateClockSource GetClockSource(class UMovieSceneSequence* InSequence);                                                // [0x7225980] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetBindings
	// TArray<FMovieSceneBindingProxy> GetBindings(class UMovieSceneSequence* Sequence);                                        // [0x7224b80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.GetBindingID
	// FMovieSceneObjectBindingID GetBindingID(class UMovieSceneSequence* Sequence, FMovieSceneBindingProxy& InBinding);        // [0x7224a80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindTracksByType
	// TArray<UMovieSceneTrack*> FindTracksByType(class UMovieSceneSequence* Sequence, class UClass* TrackType);                // [0x7223d80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindTracksByExactType
	// TArray<UMovieSceneTrack*> FindTracksByExactType(class UMovieSceneSequence* Sequence, class UClass* TrackType);           // [0x7223a80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrameInSequence
	// int32_t FindNextMarkedFrameInSequence(class UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, bool bForward, EMovieSceneTimeUnit TimeUnit); // [0x72238a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame
	// int32_t FindNextMarkedFrame(class UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, bool bForward);             // [0x7223750] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType
	// TArray<UMovieSceneTrack*> FindMasterTracksByType(class UMovieSceneSequence* Sequence, class UClass* TrackType);          // [0x7223400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType
	// TArray<UMovieSceneTrack*> FindMasterTracksByExactType(class UMovieSceneSequence* Sequence, class UClass* TrackType);     // [0x7223100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel
	// int32_t FindMarkedFrameByLabel(class UMovieSceneSequence* Sequence, FString InLabel);                                    // [0x7222fe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumberInSequence
	// int32_t FindMarkedFrameByFrameNumberInSequence(class UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, EMovieSceneTimeUnit TimeUnit); // [0x7222e50] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber
	// int32_t FindMarkedFrameByFrameNumber(class UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber);                   // [0x7222d50] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName
	// FMovieSceneBindingProxy FindBindingByName(class UMovieSceneSequence* Sequence, FString Name);                            // [0x7222b50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.FindBindingById
	// FMovieSceneBindingProxy FindBindingById(class UMovieSceneSequence* Sequence, FGuid BindingID);                           // [0x72229e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames
	// void DeleteMarkedFrames(class UMovieSceneSequence* Sequence);                                                            // [0x7222930] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame
	// void DeleteMarkedFrame(class UMovieSceneSequence* Sequence, int32_t DeleteIndex);                                        // [0x7222830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AreMarkedFramesLocked
	// bool AreMarkedFramesLocked(class UMovieSceneSequence* Sequence);                                                         // [0x7222790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddTrack
	// class UMovieSceneTrack* AddTrack(class UMovieSceneSequence* Sequence, class UClass* TrackType);                          // [0x72225c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance
	// FMovieSceneBindingProxy AddSpawnableFromInstance(class UMovieSceneSequence* Sequence, class UObject* ObjectToSpawn);     // [0x7222450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass
	// FMovieSceneBindingProxy AddSpawnableFromClass(class UMovieSceneSequence* Sequence, class UClass* ClassToSpawn);          // [0x72222e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence
	// class UMovieSceneFolder* AddRootFolderToSequence(class UMovieSceneSequence* Sequence, FString NewFolderName);            // [0x72220b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddPossessable
	// FMovieSceneBindingProxy AddPossessable(class UMovieSceneSequence* Sequence, class UObject* ObjectToPossess);             // [0x7221f40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack
	// class UMovieSceneTrack* AddMasterTrack(class UMovieSceneSequence* Sequence, class UClass* TrackType);                    // [0x7221d50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrameToSequence
	// int32_t AddMarkedFrameToSequence(class UMovieSceneSequence* Sequence, FMovieSceneMarkedFrame& InMarkedFrame, EMovieSceneTimeUnit TimeUnit); // [0x7221b60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame
	// int32_t AddMarkedFrame(class UMovieSceneSequence* Sequence, FMovieSceneMarkedFrame& InMarkedFrame);                      // [0x72219e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneTrackExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName
	// void SetTrackRowDisplayName(class UMovieSceneTrack* Track, FText& InName, int32_t RowIndex);                             // [0x722deb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder
	// void SetSortingOrder(class UMovieSceneTrack* Track, int32_t SortingOrder);                                               // [0x722d590] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey
	// void SetSectionToKey(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);                                  // [0x722d4a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetDisplayName
	// void SetDisplayName(class UMovieSceneTrack* Track, FText& InName);                                                       // [0x722b0e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.SetColorTint
	// void SetColorTint(class UMovieSceneTrack* Track, FColor& ColorTint);                                                     // [0x722b010] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.RemoveSection
	// void RemoveSection(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);                                    // [0x722aa40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName
	// FText GetTrackRowDisplayName(class UMovieSceneTrack* Track, int32_t RowIndex);                                           // [0x7228e60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder
	// int32_t GetSortingOrder(class UMovieSceneTrack* Track);                                                                  // [0x7228680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey
	// class UMovieSceneSection* GetSectionToKey(class UMovieSceneTrack* Track);                                                // [0x7228470] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetSections
	// TArray<UMovieSceneSection*> GetSections(class UMovieSceneTrack* Track);                                                  // [0x7228530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetDisplayName
	// FText GetDisplayName(class UMovieSceneTrack* Track);                                                                     // [0x7225ae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.GetColorTint
	// FColor GetColorTint(class UMovieSceneTrack* Track);                                                                      // [0x7225a40] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneTrackExtensions.AddSection
	// class UMovieSceneSection* AddSection(class UMovieSceneTrack* Track);                                                     // [0x7222200] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneFloatVectorTrackExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneFloatVectorTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneFloatVectorTrackExtensions.SetNumChannelsUsed
	// void SetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track, int32_t InNumChannelsUsed);                            // [0x722c420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed
	// int32_t GetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track);                                                    // [0x7226da0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.MovieSceneDoubleVectorTrackExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneDoubleVectorTrackExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.MovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed
	// void SetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track, int32_t InNumChannelsUsed);                           // [0x722c420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed
	// int32_t GetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track);                                                   // [0x7226da0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SequencerScripting.SequencerScriptingRangeExtensions
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USequencerScriptingRangeExtensions : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds
	// void SetStartSeconds(FSequencerScriptingRange& Range, float Start);                                                      // [0x722db80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame
	// void SetStartFrame(FSequencerScriptingRange& Range, int32_t Start);                                                      // [0x722d7a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds
	// void SetEndSeconds(FSequencerScriptingRange& Range, float End);                                                          // [0x722b7f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame
	// void SetEndFrame(FSequencerScriptingRange& Range, int32_t End);                                                          // [0x722b410] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart
	// void RemoveStart(FSequencerScriptingRange& Range);                                                                       // [0x722ab30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd
	// void RemoveEnd(FSequencerScriptingRange& Range);                                                                         // [0x722a680] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.HasStart
	// bool HasStart(FSequencerScriptingRange& Range);                                                                          // [0x7229650] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.HasEnd
	// bool HasEnd(FSequencerScriptingRange& Range);                                                                            // [0x72294f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds
	// float GetStartSeconds(FSequencerScriptingRange& Range);                                                                  // [0x7228c90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame
	// int32_t GetStartFrame(FSequencerScriptingRange& Range);                                                                  // [0x7228a60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds
	// float GetEndSeconds(FSequencerScriptingRange& Range);                                                                    // [0x7226000] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame
	// int32_t GetEndFrame(FSequencerScriptingRange& Range);                                                                    // [0x7225dd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
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


