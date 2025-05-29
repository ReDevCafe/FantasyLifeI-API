#include "API/Entities/EntityStatus.hpp"

void EntityStatus::setHP(uint32_t hp) {
    this->_permanentStatus.m_nowHp = hp;
    this->_volatileStatus.m_maxHP = hp;
}

void EntityStatus::setSP(uint32_t sp) {
    this->_permanentStatus.m_nowSp = sp;
    this->_volatileStatus.m_maxSP = sp;
}

uint32_t EntityStatus::getHP() {
    return this->_permanentStatus.m_nowHp;
}

uint32_t EntityStatus::getSP() {
    return this->_permanentStatus.m_nowSp;
}

FCharaStatusP &EntityStatus::getPermanentStatus() {
    return this->_permanentStatus;
}

FNewCharaStatusP &EntityStatus::getVolatileStatus() {
    return this->_volatileStatus;
}