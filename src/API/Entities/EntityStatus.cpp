#include "API/Entities/EntityStatus.hpp"

void EntityStatus::SetHP(uint32_t hp) {
    this->_permanentStatus.m_nowHp = hp;
    this->_volatileStatus.m_maxHP = hp;
}

void EntityStatus::SetSP(uint32_t sp) {
    this->_permanentStatus.m_nowSp = sp;
    this->_volatileStatus.m_maxSP = sp;
}

uint32_t EntityStatus::GetHP() {
    return this->_permanentStatus.m_nowHp;
}

uint32_t EntityStatus::GetSP() {
    return this->_permanentStatus.m_nowSp;
}

FCharaStatusP &EntityStatus::GetPermanentStatus() {
    return this->_permanentStatus;
}

FAvatarCharaStatusV &EntityStatus::GetVolatileStatus() {
    return this->_volatileStatus;
}