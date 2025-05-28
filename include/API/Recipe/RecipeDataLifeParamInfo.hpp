#ifndef RECIPEDATALIFEPARAMINFO_HPP
    #define RECIPEDATALIFEPARAMINFO_HPP

    #include "API/GameObjectProxy.hpp"
    #include "Game/Recipe/UGDSRecipeData.hpp"

class RecipeDataLifeParamInfo : GameObjectProxy<FGDRecipeData_LifeParamInfo>
{
    public:
        RecipeDataLifeParamInfo(FGDRecipeData_LifeParamInfo& data) : GameObjectProxy(data){};

        ELifeType GetLifeType();
        void      SetLifeType(ELifeType life);
        
        int32_t   GetPower();
        void      SetPower(int32_t power);
};

#endif // !RECIPEDATALIFEPARAMINFO_HPP