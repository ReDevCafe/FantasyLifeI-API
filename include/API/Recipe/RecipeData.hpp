#ifndef RECIPEDATA_HPP
#define RECIPEDATA_HPP

#include "Game/Recipe/UGDSRecipeData.hpp"
#include "RecipeDataLifeParamInfo.hpp"
#include "API/Item/ItemData.hpp"

class RecipeData : GameObjectProxy<FGDRecipeData>
{
public:
    RecipeData(FGDRecipeData &data) 
        : GameObjectProxy(data),
        _lifeParam{data.lifeParamInfo}
    {};

    std::string GetIdentifier();
    ItemData GetItem();
    RecipeDataLifeParamInfo GetLifeParam() const;

private:
    RecipeDataLifeParamInfo _lifeParam;
};

#endif // !RECIPEDATA_HPP