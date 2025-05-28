#include "API/Item/ItemEquipData.hpp"
#include "Utils.hpp"
#include "Logger/ModLoaderLogger.hpp"

std::string ItemEquipData::GetModel()
{
    auto test = reinterpret_cast<FGDItemEquipData*>(&this->_object)->modelId;
    std::string modelId = Utils::FNameToString(test);
    mlLogger.warn("GetModel, from ", this->GetIdentifier(), " returned ", modelId);
    return modelId;
}