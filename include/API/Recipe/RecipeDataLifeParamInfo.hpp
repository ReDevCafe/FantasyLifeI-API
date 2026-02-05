#ifndef RECIPEDATALIFEPARAMINFO_HPP
    #define RECIPEDATALIFEPARAMINFO_HPP
    
    #include "API/GameObjectProxy.hpp"
    #include "SDK.h"
    #include "Export.h"

class ML_API RecipeDataLifeParamInfo : GameObjectProxy<FGDRecipeData_LifeParamInfo>
{
    public:
        RecipeDataLifeParamInfo(FGDRecipeData_LifeParamInfo& data) : GameObjectProxy(data){};

        ELifeType GetLifeType() const { return static_cast<ELifeType>((int) this->_object.lifeType - 1); }
        void      SetLifeType(ELifeType life) const { this->_object.lifeType = static_cast<char>((int) life - 1); }
        
        int32_t   GetPower() const { return this->_object.power; }
        void      SetPower(int32_t power) const { this->_object.power = power; }
};

#endif // !RECIPEDATALIFEPARAMINFO_HPP