
#ifndef PLAYER_HPP_
    #define PLAYER_HPP_

    #include "../EntityStats.hpp"

class Player {
    public:
        Player(FGDCharaParameter &charaParameter);
        ~Player() = default;
        EntityStats stats;
    protected:
    private:
};

#endif /* !PLAYER_HPP_ */

