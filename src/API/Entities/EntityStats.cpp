#include "API/Entities/EntityStats.hpp"

void EntityStats::setPhysicalAttack(ELifeType life, int32_t physicalAttack) {
    FGDCharaParameter_CharaStatusParam &param = this->_getParamFrom(life);
    param.baseParamMin.physicalOffense = physicalAttack;
}

void EntityStats::setMagicalAttack(ELifeType life, int32_t magicalAttack) {
    FGDCharaParameter_CharaStatusParam &param = this->_getParamFrom(life);
    param.baseParamMin.magicOffense = magicalAttack;
}

void EntityStats::setPhysicalDefense(ELifeType life, int32_t physicalDefense) {
    FGDCharaParameter_CharaStatusParam &param = this->_getParamFrom(life);
    param.baseParamMin.physicalDefense = physicalDefense;
}

void EntityStats::setMagicalDefense(ELifeType life, int32_t magicalDefense) {
    FGDCharaParameter_CharaStatusParam &param = this->_getParamFrom(life);
    param.baseParamMin.magicDefense = magicalDefense;
}

FGDCharaParameter_CharaStatusParam &EntityStats::_getParamFrom(ELifeType life) {
    int index = static_cast<int>(life) - 1;
    if (!this->_object.charaStatusParamList.Data.IsValidIndex(index))
        throw std::out_of_range("Invalid index");
    return this->_object.charaStatusParamList.Data[index].Value.Second;
}

int32_t EntityStats::getPhysicalAttack(ELifeType life) {
    FGDCharaParameter_CharaStatusParam &param = this->_getParamFrom(life);
    return param.baseParamMin.physicalOffense;
}

int32_t EntityStats::getMagicalAttack(ELifeType life) {
    FGDCharaParameter_CharaStatusParam &param = this->_getParamFrom(life);
    return param.baseParamMin.magicOffense;
}

int32_t EntityStats::getPhysicalDefense(ELifeType life) {
    FGDCharaParameter_CharaStatusParam &param = this->_getParamFrom(life);
    return param.baseParamMin.physicalDefense;
}

int32_t EntityStats::getMagicalDefense(ELifeType life) {
    FGDCharaParameter_CharaStatusParam &param = this->_getParamFrom(life);
    return param.baseParamMin.magicDefense;
}

int32_t EntityStats::getCriticalRate(ELifeType life) {
    FGDCharaParameter_CharaStatusParam &param = this->_getParamFrom(life);
    return param.baseParamMin.criticalRate;
}

int32_t EntityStats::getCriticalRateEvasion(ELifeType life) {
    FGDCharaParameter_CharaStatusParam &param = this->_getParamFrom(life);
    return param.baseParamMin.criticalRateEvasion;
}