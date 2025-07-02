
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Struct /Script/CharamakeBoneModify.BoneSizeInfo
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FBoneSizeInfo
{ 
	bool                                               IsEnable;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            Position;                                                   // 0x0008   (0x0018)  
	FVector                                            Scale;                                                      // 0x0020   (0x0018)  
	FVector                                            Rotator;                                                    // 0x0038   (0x0018)  
	bool                                               isSizeRerative;                                             // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/CharamakeBoneModify.BoneSizeInfoList
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FBoneSizeInfoList
{ 
	TArray<FBoneSizeInfo>                              infoList;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/CharamakeBoneModify.AnimNode_CharamakeBoneModify
/// Size: 0x0228 (552 bytes) (0x0000C8 - 0x000228) align 8 MaxSize: 0x0228
struct FAnimNode_CharamakeBoneModify : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     RootBone;                                                   // 0x00C8   (0x0010)  
	FBoneReference                                     WaistBone;                                                  // 0x00D8   (0x0010)  
	FBoneReference                                     SpineBone;                                                  // 0x00E8   (0x0010)  
	FBoneReference                                     HeadBone;                                                   // 0x00F8   (0x0010)  
	FBoneReference                                     ShoulderRBone;                                              // 0x0108   (0x0010)  
	FBoneReference                                     ShoulderLBone;                                              // 0x0118   (0x0010)  
	FBoneReference                                     ArmRBone;                                                   // 0x0128   (0x0010)  
	FBoneReference                                     ArmLBone;                                                   // 0x0138   (0x0010)  
	FBoneReference                                     HandRBone;                                                  // 0x0148   (0x0010)  
	FBoneReference                                     HandLBone;                                                  // 0x0158   (0x0010)  
	FBoneReference                                     ThighRBone;                                                 // 0x0168   (0x0010)  
	FBoneReference                                     ThighLBone;                                                 // 0x0178   (0x0010)  
	FBoneReference                                     ShinRBone;                                                  // 0x0188   (0x0010)  
	FBoneReference                                     ShinLBone;                                                  // 0x0198   (0x0010)  
	FBoneReference                                     AnkleRBone;                                                 // 0x01A8   (0x0010)  
	FBoneReference                                     AnkleLBone;                                                 // 0x01B8   (0x0010)  
	TMap<FName, FBoneSizeInfo>                         BoneSizeInfo;                                               // 0x01C8   (0x0050)  
	FBoneSizeInfoList                                  BoneSizeInfoList;                                           // 0x0218   (0x0010)  
};

#pragma pack(pop)


