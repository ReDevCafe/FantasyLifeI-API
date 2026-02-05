
#ifndef ENTITYSTATS_HPP_
    #define ENTITYSTATS_HPP_

    #include "../GameObjectProxy.hpp"
    #include <stdexcept>
    #include "Export.h"
    #include "SDK.h"

class ML_API EntityStats : public GameObjectProxy<FGDCharaParameter> {
    public:
        EntityStats(FGDCharaParameter &parameter) : GameObjectProxy(parameter) {};
        void SetPhysicalAttack(ELifeType life, int32_t physicalAttack);
        void SetMagicalAttack(ELifeType life, int32_t magicalAttack);
        void SetPhysicalDefense(ELifeType life, int32_t physicalDefense);
        void SetMagicalDefense(ELifeType life, int32_t magicalDefense);
        void SetCriticalRate(ELifeType life, int32_t criticalRate);
        void SetCriticalRateEvasion(ELifeType life, int32_t criticalRateEvasion);
        int32_t GetPhysicalAttack(ELifeType life);
        int32_t GetMagicalAttack(ELifeType life);
        int32_t GetPhysicalDefense(ELifeType life);
        int32_t GetMagicalDefense(ELifeType life);
        int32_t GetCriticalRate(ELifeType life);
        int32_t GetCriticalRateEvasion(ELifeType life);
    protected:
    private:
        FGDCharaParameter_CharaStatusParam &getParamFrom(ELifeType life);
};

#endif /* !ENTITYSTATS_HPP_ */
