#ifndef LIFE_HPP
    #define LIFE_HPP

    #include "Game/Life/Life.hpp"
    #include "Engine/FName.hpp"

class Life
{
    public:
        static ELifeType GetLifeTypeByName(std::string life);
};

#endif // !LIFE_HPP