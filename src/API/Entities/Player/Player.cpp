#include "API/Entities/Player/Player.hpp"
#include "API/Engine/FName.hpp"
#include "Utils.hpp"

#include "ModLoader.hpp"
#include <cstdint>

Player::Player(FGDCharaParameter &charaParameter, FCharaStatusP *charaStatusP, FAvatarCharaStatusV &charaStatusV) : stats(charaParameter), status(*charaStatusP, charaStatusV) {}

ELifeType Player::GetLifeType() {
    FAvatarCharaStatusP *avatarStatus = reinterpret_cast<FAvatarCharaStatusP *>(&this->status.GetPermanentStatus());
    std::string lifeId = static_cast<API_FName>(avatarStatus->m_lifeId).ToString();
    if (lifeId.empty() || lifeId.size() <= 4)
        return ELifeType::ELifeType__None;

    uint8_t life = std::stoi(lifeId.c_str() + 4);
    return static_cast<ELifeType>(life + 1);
}

void Player::SetExp(ELifeType life, uint32_t exp) {
    FAvatarCharaStatusP *avatarStatus = reinterpret_cast<FAvatarCharaStatusP *>(&this->status.GetPermanentStatus());
    avatarStatus->m_exp.Data[static_cast<int>(life) - 1].Value.Second = exp;
}

uint32_t Player::GetExp(ELifeType life) {
    FAvatarCharaStatusP *avatarStatus = reinterpret_cast<FAvatarCharaStatusP *>(&this->status.GetPermanentStatus());
    return avatarStatus->m_exp.Data[static_cast<int>(life) - 1].Value.Second;
}

void Player::SetLevel(ELifeType life, uint16_t lvl) {
    FAvatarCharaStatusP *avatarStatus = reinterpret_cast<FAvatarCharaStatusP *>(&this->status.GetPermanentStatus());
    avatarStatus->m_lv.Data[static_cast<int>(life) - 1].Value.Second = lvl;
}

uint16_t Player::GetLevel(ELifeType life) {
    FAvatarCharaStatusP *avatarStatus = reinterpret_cast<FAvatarCharaStatusP *>(&this->status.GetPermanentStatus());
    return avatarStatus->m_lv.Data[static_cast<int>(life) - 1].Value.Second;
}