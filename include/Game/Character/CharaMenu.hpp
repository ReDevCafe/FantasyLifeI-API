#ifndef MENU_HPP_
    #define MENU_HPP_

    #include "Engine/DataTable.hpp"
    #include "Engine/FName.hpp"

    #include "Game/Life/Life.hpp"
    #include "Game/Types.hpp"
    #include "Game/Element.hpp"

struct FCharacterMenuStatusValue
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
	bool                                               isParameterSync;                                            // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};


struct FCharacterMenuParamData
{ 
	bool                                               isShowed;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            charaName;                                                  // 0x0008   (0x0010)  
	FName                                              charaID;                                                    // 0x0018   (0x0008)  
	FName                                              charaIconId;                                                // 0x0020   (0x0008)  
	FName                                              lifeId;                                                     // 0x0028   (0x0008)  
	ELifeType                                          lifeType;                                                   // 0x0030   (0x0001)  
	bool                                               IsLeader;                                                   // 0x0031   (0x0001)  
	bool                                               IsInstantChara;                                             // 0x0032   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0033   (0x0001)  MISSED
	FCharacterMenuStatusValue                          nowHp;                                                      // 0x0034   (0x0008)  
	FCharacterMenuStatusValue                          maxHp;                                                      // 0x003C   (0x0008)  
	FCharacterMenuStatusValue                          nowSp;                                                      // 0x0044   (0x0008)  
	FCharacterMenuStatusValue                          maxSp;                                                      // 0x004C   (0x0008)  
	FCharacterMenuStatusValue                          physicalOffense;                                            // 0x0054   (0x0008)  
	FCharacterMenuStatusValue                          physicalDefense;                                            // 0x005C   (0x0008)  
	FCharacterMenuStatusValue                          magicOffense;                                               // 0x0064   (0x0008)  
	FCharacterMenuStatusValue                          magicDefense;                                               // 0x006C   (0x0008)  
	FCharacterMenuStatusValue                          criticalRate;                                               // 0x0074   (0x0008)  
	FCharacterMenuStatusValue                          criticalRateEvasion;                                        // 0x007C   (0x0008)  
	FCharacterMenuStatusValue                          minerParam;                                                 // 0x0084   (0x0008)  
	FCharacterMenuStatusValue                          lumberjackParam;                                            // 0x008C   (0x0008)  
	FCharacterMenuStatusValue                          fishermanParam;                                             // 0x0094   (0x0008)  
	FCharacterMenuStatusValue                          farmerParam;                                                // 0x009C   (0x0008)  
	FCharacterMenuStatusValue                          cookParam;                                                  // 0x00A4   (0x0008)  
	FCharacterMenuStatusValue                          blacksmithParam;                                            // 0x00AC   (0x0008)  
	FCharacterMenuStatusValue                          carpenterParam;                                             // 0x00B4   (0x0008)  
	FCharacterMenuStatusValue                          needleworkerParam;                                          // 0x00BC   (0x0008)  
	FCharacterMenuStatusValue                          alchemistParam;                                             // 0x00C4   (0x0008)  
	FCharacterMenuStatusValue                          artistParam;                                                // 0x00CC   (0x0008)  
	FCharacterMenuStatusValue                          lifePower;                                                  // 0x00D4   (0x0008)  
	FCharacterMenuStatusValue                          attrResistFire;                                             // 0x00DC   (0x0008)  
	FCharacterMenuStatusValue                          attrResistWater;                                            // 0x00E4   (0x0008)  
	FCharacterMenuStatusValue                          attrResistWind;                                             // 0x00EC   (0x0008)  
	FCharacterMenuStatusValue                          attrResistEarth;                                            // 0x00F4   (0x0008)  
	FCharacterMenuStatusValue                          attrResistShine;                                            // 0x00FC   (0x0008)  
	FCharacterMenuStatusValue                          attrResistDark;                                             // 0x0104   (0x0008)  
	EElementAttrType                                   elementAttributeType;                                       // 0x010C   (0x0001)  
	bool                                               isParameterSync;                                            // 0x010D   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x010E   (0x0002)  MISSED
	FName                                              clothingTypeIconId;                                         // 0x0110   (0x0008)  
};
#endif /* !MENU_HPP_ */
