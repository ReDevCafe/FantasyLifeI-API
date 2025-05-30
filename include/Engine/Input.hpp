#ifndef INPUT_HPP_
    #define INPUT_HPP_
    
    #include "FName.hpp"

struct FKey
{ 
	FName                                              KeyName;                                                    // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

#endif /* !INPUT_HPP_ */
