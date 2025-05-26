#include "API/Life/ULifeData.hpp"
#include "Logger/ModLoaderLogger.hpp"
#include <Utils.hpp>

FGDLifeData& ULifeData::getLife(ELifeType life)
{
    mlLogger.info(this->_object.m_dataMap.Data.Count);
    return this->_object.m_dataMap.Data[(uint8_t) life - 1].Value.Second;
}