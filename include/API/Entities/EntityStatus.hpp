#ifndef ENTITYSTATUS_HPP_
    #define ENTITYSTATUS_HPP_

    #include <cstdint>
    #include "SDK.h"

    #include "Export.h"

class ML_API EntityStatus {
    public:
        EntityStatus(FCharaStatusP &permanentStatus, FAvatarCharaStatusV &volatileStatus) : _permanentStatus(permanentStatus), _volatileStatus(volatileStatus) {}
        void SetHP(uint32_t hp);
        void SetSP(uint32_t sp);
        uint32_t GetHP();
        uint32_t GetSP();
        FCharaStatusP &GetPermanentStatus();
        FAvatarCharaStatusV &GetVolatileStatus();
    protected:
    private:
        FCharaStatusP &_permanentStatus;
        FAvatarCharaStatusV &_volatileStatus;
};

#endif /* !ENTITYSTATUS_HPP_ */
    