
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

/// Class /Script/CableComponent.CableActor
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class ACableActor : public AActor
{ 
public:
	class UCableComponent*                             CableComponent;                                             // 0x0290   (0x0008)  
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x0600 (1536 bytes) (0x000550 - 0x000600) align 16 MaxSize: 0x0600
class UCableComponent : public UMeshComponent
{ 
public:
	bool                                               bAttachStart;                                               // 0x0550   (0x0001)  
	bool                                               bAttachEnd;                                                 // 0x0551   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0552   (0x0006)  MISSED
	FComponentReference                                AttachEndTo;                                                // 0x0558   (0x0028)  
	FName                                              AttachEndToSocketName;                                      // 0x0580   (0x0008)  
	FVector                                            EndLocation;                                                // 0x0588   (0x0018)  
	float                                              CableLength;                                                // 0x05A0   (0x0004)  
	int32_t                                            NumSegments;                                                // 0x05A4   (0x0004)  
	float                                              SubstepTime;                                                // 0x05A8   (0x0004)  
	int32_t                                            SolverIterations;                                           // 0x05AC   (0x0004)  
	bool                                               bEnableStiffness;                                           // 0x05B0   (0x0001)  
	bool                                               bUseSubstepping;                                            // 0x05B1   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotVisible;                             // 0x05B2   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotOwnerRecentlyRendered;               // 0x05B3   (0x0001)  
	bool                                               bEnableCollision;                                           // 0x05B4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x05B5   (0x0003)  MISSED
	float                                              CollisionFriction;                                          // 0x05B8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x05BC   (0x0004)  MISSED
	FVector                                            CableForce;                                                 // 0x05C0   (0x0018)  
	float                                              CableGravityScale;                                          // 0x05D8   (0x0004)  
	float                                              CableWidth;                                                 // 0x05DC   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x05E0   (0x0004)  
	float                                              TileMaterial;                                               // 0x05E4   (0x0004)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x05E8   (0x0018)  MISSED


	/// Functions
	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
	// void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);                                        // [0x8bae4b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.SetAttachEndTo
	// void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);                                     // [0x8bae3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations
	// void GetCableParticleLocations(TArray<FVector>& Locations);                                                              // [0x8bae270] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedComponent
	// class USceneComponent* GetAttachedComponent();                                                                           // [0x8bae1e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedActor
	// class AActor* GetAttachedActor();                                                                                        // [0x8bae1a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


