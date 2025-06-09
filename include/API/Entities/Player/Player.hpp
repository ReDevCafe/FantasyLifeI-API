
#ifndef PLAYER_HPP_
    #define PLAYER_HPP_

    #include "../EntityStats.hpp"
    #include "../EntityStatus.hpp"
    #include <cstddef>

class Player {
    public:
        Player(FGDCharaParameter &charaParameter, FCharaStatusP *charaStatusP, FAvatarCharaStatusV &charaStatusV);
        ~Player() = default;
        EntityStats stats;
        EntityStatus status;
        ELifeType getLifeType();
        void setExp(ELifeType life, uint32_t exp);
        void setLevel(ELifeType life, uint16_t lvl);
        uint32_t getExp(ELifeType life);
        uint16_t getLevel(ELifeType life);
    protected:
};

#endif /* !PLAYER_HPP_ */

