#ifndef ELEMENT_HPP_
    #define ELEMENT_HPP_

    #include <cstdint>

enum class EElementAttrType : uint8_t
{
	None = 0,
	Fire = 1,
	Water = 2,
	Wind  = 3,
	Earth = 4,
	Shine = 5,
	Dark  = 6,
	Num = 7,
	Invalid = 255
};

#endif /* !ELEMENT_HPP_ */
