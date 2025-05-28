#include "API/Recipe/RecipeData.hpp"
#include "ModLoader.hpp"
#include "GameData.hpp"
#include <memory>

std::string RecipeData::GetIdentifier()
{
    return Utils::FNameToString(this->_object.recipeId);
}

RecipeDataLifeParamInfo RecipeData::GetLifeParam() const
{
    return this->_lifeParam;
} 

ItemData RecipeData::GetItem()
{
    return *ModLoader::gameData->_cacheItemData.at(Utils::FNameToString(this->_object.ItemId));
}