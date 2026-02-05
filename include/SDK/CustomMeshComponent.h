
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

/// Class /Script/CustomMeshComponent.CustomMeshComponent
/// Size: 0x0560 (1376 bytes) (0x000550 - 0x000560) align 16 MaxSize: 0x0560
class UCustomMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0550   (0x0010)  MISSED


	/// Functions
	// Function /Script/CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
	// bool SetCustomMeshTriangles(TArray<FCustomMeshTriangle>& Triangles);                                                     // [0x8bb6ea0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
	// void ClearCustomMeshTriangles();                                                                                         // [0x8bb6e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
	// void AddCustomMeshTriangles(TArray<FCustomMeshTriangle>& Triangles);                                                     // [0x8bb6d20] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/CustomMeshComponent.CustomMeshTriangle
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FCustomMeshTriangle
{ 
	FVector                                            Vertex0;                                                    // 0x0000   (0x0018)  
	FVector                                            Vertex1;                                                    // 0x0018   (0x0018)  
	FVector                                            Vertex2;                                                    // 0x0030   (0x0018)  
};

#pragma pack(pop)


