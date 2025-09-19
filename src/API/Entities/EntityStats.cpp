#include "API/Entities/EntityStats.hpp"

void EntityStats::SetPhysicalAttack(ELifeType life, int32_t physicalAttack) {
    FGDCharaParameter_CharaStatusParam &param = this->getParamFrom(life);
    param.baseParamMin.physicalOffense = physicalAttack;
}

void EntityStats::SetMagicalAttack(ELifeType life, int32_t magicalAttack) {
    FGDCharaParameter_CharaStatusParam &param = this->getParamFrom(life);
    param.baseParamMin.magicOffense = magicalAttack;
}

void EntityStats::SetPhysicalDefense(ELifeType life, int32_t physicalDefense) {
    FGDCharaParameter_CharaStatusParam &param = this->getParamFrom(life);
    param.baseParamMin.physicalDefense = physicalDefense;
}

void EntityStats::SetMagicalDefense(ELifeType life, int32_t magicalDefense) {
    FGDCharaParameter_CharaStatusParam &param = this->getParamFrom(life);
    param.baseParamMin.magicDefense = magicalDefense;
}

FGDCharaParameter_CharaStatusParam &EntityStats::getParamFrom(ELifeType life) {
    int index = static_cast<int>(life) - 1;
    if (!this->_object.charaStatusParamList.Data.IsValidIndex(index))
        throw std::out_of_range("Invalid index");
    return this->_object.charaStatusParamList.Data[index].Value.Second;
}

int32_t EntityStats::GetPhysicalAttack(ELifeType life) {
    FGDCharaParameter_CharaStatusParam &param = this->getParamFrom(life);
    return param.baseParamMin.physicalOffense;
}

int32_t EntityStats::GetMagicalAttack(ELifeType life) {
    FGDCharaParameter_CharaStatusParam &param = this->getParamFrom(life);
    return param.baseParamMin.magicOffense;
}

int32_t EntityStats::GetPhysicalDefense(ELifeType life) {
    FGDCharaParameter_CharaStatusParam &param = this->getParamFrom(life);
    return param.baseParamMin.physicalDefense;
}

int32_t EntityStats::GetMagicalDefense(ELifeType life) {
    FGDCharaParameter_CharaStatusParam &param = this->getParamFrom(life);
    return param.baseParamMin.magicDefense;
}

int32_t EntityStats::GetCriticalRate(ELifeType life) {
    FGDCharaParameter_CharaStatusParam &param = this->getParamFrom(life);
    return param.baseParamMin.criticalRate;
}

int32_t EntityStats::GetCriticalRateEvasion(ELifeType life) {
    FGDCharaParameter_CharaStatusParam &param = this->getParamFrom(life);
    return param.baseParamMin.criticalRateEvasion;
}