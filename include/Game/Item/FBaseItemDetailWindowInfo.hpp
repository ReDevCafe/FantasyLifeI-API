#ifndef FBASEITEMDETAILWINDOWINFO_HPP_
    #define FBASEITEMDETAILWINDOWINFO_HPP_

    #include "Engine/FName.hpp"
    #include "Engine/DataTable.hpp"
    #include "Game/Item/Item.hpp"
    #include "Game/Types.hpp"
    #include "Game/Inventory/Inventory.hpp"

struct FBaseItemDetailWindowInfo
{ 
	FInventoryHandle                                   Handle;                                                     // 0x0000   (0x0004)  
	FName                                              ItemId;                                                     // 0x0004   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	ERarityType                                        rarity;                                                     // 0x0020   (0x0001)  
	EItemQualityType                                   Quality;                                                    // 0x0021   (0x0001)  
	EItemTitleType                                     Title;                                                      // 0x0022   (0x0001)  
	EItemGradeType                                     grade;                                                      // 0x0023   (0x0001)  
	EItemRankType                                      rank;                                                       // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	int32_t                                            stockNum;                                                   // 0x0028   (0x0004)  
	int32_t                                            stockMax;                                                   // 0x002C   (0x0004)  
	bool                                               isAvailablePurchase;                                        // 0x0030   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	FName                                              iconID;                                                     // 0x0034   (0x0008)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FString                                            detailText;                                                 // 0x0040   (0x0010)  
	char                                               ItemType;                                                   // 0x0050   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	TArray<FString>                                    itemTypeNames;                                              // 0x0058   (0x0010)  
	int32_t                                            itemTypeSetCount;                                           // 0x0068   (0x0004)  
	bool                                               isContentRightInvalid;                                      // 0x006C   (0x0001)  
	unsigned char                                      UnknownData05_7[0x3];                                       // 0x006D   (0x0003)  MISSED
};

#endif /* !FBASEITEMDETAILWINDOWINFO_HPP_ */
