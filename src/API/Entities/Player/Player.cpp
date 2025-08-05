
#include "API/Entities/Player/Player.hpp"
#include "Engine/FNamePool.hpp"
#include "ModLoader.hpp"

Player::Player(FGDCharaParameter &charaParameter, FCharaStatusP *charaStatusP, FAvatarCharaStatusV &charaStatusV) : stats(charaParameter), status(*charaStatusP, charaStatusV) {}

ELifeType Player::getLifeType() {
    FAvatarCharaStatusP *avatarStatus = reinterpret_cast<FAvatarCharaStatusP *>(&this->status.getPermanentStatus());
    std::string lifeId = FNameUtils::getString(avatarStatus->m_lifeId);
    if (lifeId.empty() || lifeId.size() <= 4)
        return ELifeType::ELifeType__None;
    return static_cast<ELifeType>(std::stoi(lifeId.c_str() + 4));
}

void Player::setExp(ELifeType life, uint32_t exp) {
    FAvatarCharaStatusP *avatarStatus = reinterpret_cast<FAvatarCharaStatusP *>(&this->status.getPermanentStatus());
    avatarStatus->m_exp.Data[static_cast<int>(life) - 1].Value.Second = exp;
}

uint32_t Player::getExp(ELifeType life) {
    FAvatarCharaStatusP *avatarStatus = reinterpret_cast<FAvatarCharaStatusP *>(&this->status.getPermanentStatus());
    return avatarStatus->m_exp.Data[static_cast<int>(life) - 1].Value.Second;
}

void Player::setLevel(ELifeType life, uint16_t lvl) {
    FAvatarCharaStatusP *avatarStatus = reinterpret_cast<FAvatarCharaStatusP *>(&this->status.getPermanentStatus());
    avatarStatus->m_lv.Data[static_cast<int>(life) - 1].Value.Second = lvl;
}

uint16_t Player::getLevel(ELifeType life) {
    FAvatarCharaStatusP *avatarStatus = reinterpret_cast<FAvatarCharaStatusP *>(&this->status.getPermanentStatus());
    return avatarStatus->m_lv.Data[static_cast<int>(life) - 1].Value.Second;
}