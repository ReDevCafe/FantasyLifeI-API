#ifndef UGDSFASTTRAVEL_HPP
    #define UGDSFASTTRAVEL_HPP

    #include "Engine/DataTable.hpp"
    #include "Engine/UGameDataAsset.hpp"
    #include "Engine/UObject.hpp"
    #include "Game/FGDStCommon.hpp"

struct FGDFastTravel : FTableRowBase
{ 
    public:
	FGDId                                              ID;
	uint32_t                                           flagNo;
	char                                               FastTravelType; 
	unsigned char                                      UnknownData00_6[0x3];   
	FName                                              TargetMapID;      
	FName                                              TargetPlayerStartID;  
	float                                              cameraAzimuth; 
	FVector                                            Position;    
	FName                                              AreaID;       
	FName                                              Title;        
	FName                                              iconID;            
	TArray<FGDStCommon_CondCmd>                        ValidCondition;             
	TArray<FGDStCommon_CondCmd>                        selectable;                  
	TArray<FGDStCommon_CondCmd>                        Exposure;              
};

class UGDSFastTravel : public UGameDataAsset
{ 
    public:
	TMap<FGDId, FGDFastTravel>                         m_dataMap;               
	unsigned char                                      UnknownData00_7[0x50];   
};

#endif // !UGDSFASTTRAVEL_HPP
