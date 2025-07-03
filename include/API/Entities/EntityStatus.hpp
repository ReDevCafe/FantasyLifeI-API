#ifndef ENTITYSTATUS_HPP_
    #define ENTITYSTATUS_HPP_

    #include "API/GameObjectProxy.hpp"
    #include "Export.h"

class ML_API EntityStatus {
    public:
        EntityStatus(FCharaStatusP &permanentStatus, FAvatarCharaStatusV &volatileStatus) : _permanentStatus(permanentStatus), _volatileStatus(volatileStatus) {}
        void setHP(uint32_t hp);
        void setSP(uint32_t sp);
        uint32_t getHP();
        uint32_t getSP();
        FCharaStatusP &getPermanentStatus();
        FAvatarCharaStatusV &getVolatileStatus();
    protected:
    private:
        FCharaStatusP &_permanentStatus;
        FAvatarCharaStatusV &_volatileStatus;
};

#endif /* !ENTITYSTATUS_HPP_ */
    