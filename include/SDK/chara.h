
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DP1Project
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Game/chara/_bluePrints/_test/BP_CharaLight.BP_CharaLight_C
/// Size: 0x03D8 (984 bytes) (0x0003D0 - 0x0003D8) align 8 MaxSize: 0x03D8
class ABP_CharaLight_C : public AGameDirectionalLight
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03D0   (0x0008)  


	/// Functions
	// Function /Game/chara/_bluePrints/_test/BP_CharaLight.BP_CharaLight_C.SetCharaLightParamToMPC
	// void SetCharaLightParamToMPC(class UMaterialParameterCollection* MatParam);                                              // [0x35d7f00] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/chara/_bluePrints/_test/BP_CharaLight.BP_CharaLight_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/chara/_bluePrints/_test/BP_CharaLight.BP_CharaLight_C.�0�0�0�0�
	// void _0_0_0_0_();                                                                                                        // [0x35d7f00] BlueprintCallable|BlueprintEvent 
	// Function /Game/chara/_bluePrints/_test/BP_CharaLight.BP_CharaLight_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x35d7f00] Event|Protected|BlueprintEvent 
	// Function /Game/chara/_bluePrints/_test/BP_CharaLight.BP_CharaLight_C.TransformUpdated
	// void TransformUpdated();                                                                                                 // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/chara/_bluePrints/_test/BP_CharaLight.BP_CharaLight_C.UpdateColorAndBrightness
	// void UpdateColorAndBrightness();                                                                                         // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/chara/_bluePrints/_test/BP_CharaLight.BP_CharaLight_C.ForceUpdateAllLightParameter
	// void ForceUpdateAllLightParameter();                                                                                     // [0x35d7f00] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/chara/_bluePrints/_test/BP_CharaLight.BP_CharaLight_C.ExecuteUbergraph_BP_CharaLight
	// void ExecuteUbergraph_BP_CharaLight(int32_t EntryPoint);                                                                 // [0x35d7f00] Final                
};

/// Class /Game/chara/_bluePrints/BpFunc_CharaLight.BpFunc_CharaLight_C
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBpFunc_CharaLight_C : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Game/chara/_bluePrints/BpFunc_CharaLight.BpFunc_CharaLight_C.�0�0�0�0/*EOFCHARA*/�IQ
	// void _0_0_0_0__IQ(class AActor* lightActor, class UObject* __WorldContext);                                              // [0x35d7f00] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/chara/_bluePrints/BpFunc_CharaLight.BpFunc_CharaLight_C.�0�0�0�0�0�0�0�0�0�
	// void _0_0_0_0_0_0_0_0_0_(class UMaterialParameterCollection* MaterialParameterCollection, class AActor* SelfActor, class UObject* __WorldContext); // [0x35d7f00] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/chara/_bluePrints/BpFunc_CharaLight.BpFunc_CharaLight_C.�0�0�0�0�0�0�0�0�0
	// void _0_0_0_0_0_0_0_0_0(class UMaterialParameterCollection* MatParam, class ULightComponent* LightComponent, FLinearColor LightColor, double LightIntensity, FLinearColor rimColor, FLinearColor HighlightColor, FLinearColor LineColor, FLinearColor shadowColor, double rimBlur, double highLightBlur, double widthMax, double depthFade, double depthAjust, double lineDensity, double lineOcclusionRate, FLinearColor toonLightColor, FLinearColor allColorAdd, FLinearColor shadeColor, double shade01Range, double shade01Blur, double shade02Range, double shade02Strength, double shade02Blur, double texShade01Range, double texShade01Blur, double texShadeRate, double shadeColorGrayScaleAdd, double shadeColorSaturation, double shadeColorValue, class UObject* __WorldContext); // [0x35d7f00] Public|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


