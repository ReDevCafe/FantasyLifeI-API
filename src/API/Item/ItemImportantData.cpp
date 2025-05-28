#include "API/Item/ItemImportantData.hpp"

uint16_t ItemImportantData::GetStack()
{
    return reinterpret_cast<FGDItemImportantData*>(&this->_object)->StackCheckNum;
}