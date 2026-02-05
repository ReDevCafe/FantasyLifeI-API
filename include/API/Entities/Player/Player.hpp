
#ifndef PLAYER_HPP_
    #define PLAYER_HPP_

    #include "../EntityStats.hpp"
    #include "../EntityStatus.hpp"
    #include "Export.h"

class ML_API Player {
    public:
    Player(FGDCharaParameter &charaParameter, FCharaStatusP *charaStatusP, FAvatarCharaStatusV &charaStatusV);
    ~Player() = default;
    
    private:
    EntityStats stats;
    EntityStatus status;
    
    public:
    ELifeType    GetLifeType();
    void        SetExp(ELifeType life, uint32_t exp);
    void        SetLevel(ELifeType life, uint16_t lvl);
    uint32_t    GetExp(ELifeType life);
    uint16_t    GetLevel(ELifeType life);

    EntityStats  GetStats()  { return stats; }
    EntityStatus GetStatus() { return status; }
};

#endif /* !PLAYER_HPP_ */

