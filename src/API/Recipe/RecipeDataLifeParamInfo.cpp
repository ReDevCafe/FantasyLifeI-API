#include "API/Recipe/RecipeDataLifeParamInfo.hpp"

ELifeType RecipeDataLifeParamInfo::GetLifeType()
{
    return static_cast<ELifeType>((int) this->_object.lifeType - 1);
}

void RecipeDataLifeParamInfo::SetLifeType(ELifeType life)
{
    this->_object.lifeType = static_cast<ELifeType>((int) life - 1);
}

int32_t RecipeDataLifeParamInfo::GetPower()
{
    return this->_object.power;
}

void RecipeDataLifeParamInfo::SetPower(int32_t power)
{
    this->_object.power = power;
}