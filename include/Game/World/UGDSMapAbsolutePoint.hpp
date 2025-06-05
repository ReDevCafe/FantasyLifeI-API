#ifndef UGDSMAPABSOLUTEPOINT_HPP
    #define UGDSMAPABSOLUTPOINT_HPP

    #include "Game/FGDStCommon.hpp"
    #include "Engine/DataTable.hpp"
    #include "Engine/UGameDataAsset.hpp"
    #include "Engine/UObject.hpp"

struct FGDMapAbsolutePoint : FTableRowBase
{ 
    public:
	FName                                              ID;                                                         // 0x0008   (0x0008)  
	TArray<FVector>                                    Position;                                                   // 0x0010   (0x0010)  
};

class UGDSMapAbsolutePoint : public UGameDataAsset
{ 
    public:
	TMap<FName, FGDMapAbsolutePoint>                   m_dataMap;                                                  // 0x0050   (0x0050)  
};

#endif // !UGDSMAPABSOLUTEPOINT_HPP