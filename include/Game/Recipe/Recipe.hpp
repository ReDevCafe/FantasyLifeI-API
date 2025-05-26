#ifndef RECIPE_HPP_
    #define RECIPE_HPP_

    #include <cstdint>

enum class ERandomRecipeType : uint8_t {
	None = 0,
	Level1 = 1,
	Level2 = 2
};

enum class ERecipeType : uint8_t {
	None = 0,
	Life = 1,
	Random = 2
};

#endif /* !RECIPE_HPP_ */
