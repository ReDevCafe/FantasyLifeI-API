
#ifndef ENTITYSTATS_HPP_
    #define ENTITYSTATS_HPP_

    #include "../GameObjectProxy.hpp"
    #include <stdexcept>
    #include "Export.h"

class ML_API EntityStats : public GameObjectProxy<FGDCharaParameter> {
    public:
        EntityStats(FGDCharaParameter &parameter) : GameObjectProxy(parameter) {};
        void setPhysicalAttack(ELifeType life, int32_t physicalAttack);
        void setMagicalAttack(ELifeType life, int32_t magicalAttack);
        void setPhysicalDefense(ELifeType life, int32_t physicalDefense);
        void setMagicalDefense(ELifeType life, int32_t magicalDefense);
        void setCriticalRate(ELifeType life, int32_t criticalRate);
        void setCriticalRateEvasion(ELifeType life, int32_t criticalRateEvasion);
        int32_t getPhysicalAttack(ELifeType life);
        int32_t getMagicalAttack(ELifeType life);
        int32_t getPhysicalDefense(ELifeType life);
        int32_t getMagicalDefense(ELifeType life);
        int32_t getCriticalRate(ELifeType life);
        int32_t getCriticalRateEvasion(ELifeType life);
    protected:
    private:
        FGDCharaParameter_CharaStatusParam &_getParamFrom(ELifeType life);
};

#endif /* !ENTITYSTATS_HPP_ */
