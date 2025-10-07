#include "API/Life/ULifeData.hpp"
#include "API/Life/LifeData.hpp"

LifeData ULifeData::GetLife(ELifeType life)
{
    uint8_t index = (uint8_t) life - 1;
    TMap<FName, FGDLifeData> map = this->_object.m_dataMap;
    if(index < 0 || map.Data.Count >= index) throw std::out_of_range("ULifeData::GetLife() index out of range"); 
    
    return LifeData(map.Data[index].Value.Second);
}