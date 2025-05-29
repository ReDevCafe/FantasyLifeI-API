#include "API/Item/ItemEquipData.hpp"
#include "Utils.hpp"
#include "Logger/ModLoaderLogger.hpp"

std::string ItemEquipData::GetModel()
{
    return Utils::FNameToString(reinterpret_cast<FGDItemEquipData*>(&this->_object)->modelId);
}