#ifndef UGDSNPCROOMDATAH_PP
    #define UGDSNPCROOMDATA_HPP

    #include "Engine/DataTable.hpp"
    #include "Engine/UGameDataAsset.hpp"

struct FGDNPCRoomData : FTableRowBase
{ 
    public:
	FName                       charaID;
	FName                       mapId; 
};

class UGDSNPCRoomData : public UGameDataAsset
{ 
    public:
	TMap<FName, FGDNPCRoomData> m_dataMap;
};

#endif // !UGDSNPCROOMDATAH_PP
