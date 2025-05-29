#ifndef ENTITYSTATUS_HPP_
    #define ENTITYSTATUS_HPP_

    #include "API/GameObjectProxy.hpp"
    #include "Game/Character/UGDDCharaStatus.hpp"

class EntityStatus {
    public:
        EntityStatus(FCharaStatusP &permanentStatus, FNewCharaStatusP &volatileStatus) : _permanentStatus(permanentStatus), _volatileStatus(volatileStatus) {}
        void setHP(uint32_t hp);
        void setSP(uint32_t sp);
        uint32_t getHP();
        uint32_t getSP();
        FCharaStatusP &getPermanentStatus();
        FNewCharaStatusP &getVolatileStatus();
    protected:
    private:
        FCharaStatusP &_permanentStatus;
        FNewCharaStatusP &_volatileStatus;
};

#endif /* !ENTITYSTATUS_HPP_ */
    