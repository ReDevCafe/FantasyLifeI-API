
#ifndef ENTITYSTATS_HPP_
    #define ENTITYSTATS_HPP_

    #include "../GameObjectProxy.hpp"
    #include "../../Game/UGDSCharaParameter.hpp"

class EntityStats : public GameObjectProxy<FGDCharaParameter> {
    public:
        EntityStats(FGDCharaParameter &parameter) : GameObjectProxy(parameter) {};
        void setHP(int32_t hp);
        void setSP(int32_t sp);
        void setPhysicalAttack(int32_t physicalAttack);
        void setMagicalAttack(int32_t magicalAttack);
        void setPhysicalDefense(int32_t physicalDefense);
        void setMagicalDefense(int32_t magicalDefense);
        int32_t getHP(int32_t hp);
        int32_t getSP(int32_t sp);
        int32_t getPhysicalAttack();
        int32_t getMagicalAttack();
        int32_t getPhysicalDefense();
        int32_t getMagicalDefense();
    protected:
    private:
};

#endif /* !ENTITYSTATS_HPP_ */
