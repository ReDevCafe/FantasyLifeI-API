
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

/// Enum /Script/ProceduralMeshComponent.EProcMeshSliceCapOption
/// Size: 0x01 (1 bytes)
enum class EProcMeshSliceCapOption : uint8_t
{
	EProcMeshSliceCapOption__NoCap                                                   = 0,
	EProcMeshSliceCapOption__CreateNewSectionForCap                                  = 1,
	EProcMeshSliceCapOption__UseLastSectionForCap                                    = 2
};

/// Class /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
	// void SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent*& OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial); // [0x67b98a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
	// void GetSectionFromStaticMesh(class UStaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents); // [0x67b9410] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
	// void GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents); // [0x67b8f60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
	// void GenerateBoxMesh(FVector BoxRadius, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents); // [0x67b8c90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
	// void CreateGridMeshWelded(int32_t NumX, int32_t NumY, TArray<int32_t>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs, float GridSpacing); // [0x67b7e70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
	// void CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, TArray<int32_t>& Triangles);                     // [0x67b7be0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
	// void CreateGridMeshSplit(int32_t NumX, int32_t NumY, TArray<int32_t>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs, TArray<FVector2D>& UV1s, float GridSpacing); // [0x67b7300] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
	// void CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int32_t LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision); // [0x67b6f20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
	// void ConvertQuadToTriangles(TArray<int32_t>& Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3);     // [0x67b6d60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
	// void CalculateTangentsForMesh(TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector2D>& UVs, TArray<FVector>& Normals, TArray<FProcMeshTangent>& Tangents); // [0x67b6a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshTangent
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FProcMeshTangent
{ 
	FVector                                            TangentX;                                                   // 0x0000   (0x0018)  
	bool                                               bFlipTangentY;                                              // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshVertex
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FProcMeshVertex
{ 
	FVector                                            Position;                                                   // 0x0000   (0x0018)  
	FVector                                            Normal;                                                     // 0x0018   (0x0018)  
	FProcMeshTangent                                   Tangent;                                                    // 0x0030   (0x0020)  
	FColor                                             Color;                                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FVector2D                                          UV0;                                                        // 0x0058   (0x0010)  
	FVector2D                                          UV1;                                                        // 0x0068   (0x0010)  
	FVector2D                                          UV2;                                                        // 0x0078   (0x0010)  
	FVector2D                                          UV3;                                                        // 0x0088   (0x0010)  
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshSection
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FProcMeshSection
{ 
	TArray<FProcMeshVertex>                            ProcVertexBuffer;                                           // 0x0000   (0x0010)  
	TArray<uint32_t>                                   ProcIndexBuffer;                                            // 0x0010   (0x0010)  
	FBox                                               SectionLocalBox;                                            // 0x0020   (0x0038)  
	bool                                               bEnableCollision;                                           // 0x0058   (0x0001)  
	bool                                               bSectionVisible;                                            // 0x0059   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x005A   (0x0006)  MISSED
};

/// Class /Script/ProceduralMeshComponent.ProceduralMeshComponent
/// Size: 0x05D0 (1488 bytes) (0x000550 - 0x0005D0) align 16 MaxSize: 0x05D0
class UProceduralMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0550   (0x0008)  MISSED
	bool                                               bUseComplexAsSimpleCollision;                               // 0x0558   (0x0001)  
	bool                                               bUseAsyncCooking;                                           // 0x0559   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x055A   (0x0006)  MISSED
	class UBodySetup*                                  ProcMeshBodySetup;                                          // 0x0560   (0x0008)  
	TArray<FProcMeshSection>                           ProcMeshSections;                                           // 0x0568   (0x0010)  
	TArray<FKConvexElem>                               CollisionConvexElems;                                       // 0x0578   (0x0010)  
	FBoxSphereBounds                                   LocalBounds;                                                // 0x0588   (0x0038)  
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                        // 0x05C0   (0x0010)  


	/// Functions
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
	// void UpdateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bSRGBConversion); // [0x67b9dc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
	// void UpdateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents); // [0x67b9af0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
	// void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility);                                                   // [0x67b97d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
	// bool IsMeshSectionVisible(int32_t SectionIndex);                                                                         // [0x67b9720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
	// int32_t GetNumSections();                                                                                                // [0x67b8f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
	// void CreateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision, bool bSRGBConversion); // [0x67b87a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
	// void CreateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision); // [0x67b8430] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
	// void ClearMeshSection(int32_t SectionIndex);                                                                             // [0x67b6cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
	// void ClearCollisionConvexMeshes();                                                                                       // [0x67b6c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
	// void ClearAllMeshSections();                                                                                             // [0x67b6c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
	// void AddCollisionConvexMesh(TArray<FVector> ConvexVerts);                                                                // [0x67b6920] Final|Native|Public|BlueprintCallable 
};

#pragma pack(pop)


