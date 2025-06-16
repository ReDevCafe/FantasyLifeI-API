#ifndef RECIPEDATA_HPP
#define RECIPEDATA_HPP

#include "RecipeDataLifeParamInfo.hpp"
#include "RecipeDataItemInfo.hpp"
#include "API/Recipe/RecipeDataRewardData.hpp"
#include <vector>

class RecipeData : GameObjectProxy<FGDRecipeData>
{
public:
    RecipeData(FGDRecipeData &data) 
        : GameObjectProxy(data)
    {};

    std::string GetIdentifier();
    std::string GetItemIdentifier();

    ERecipeType                     GetType()                                   { return this->_object.Type; }
    void                            SetType(ERecipeType type)                   { this->_object.Type = type; }

    RecipeDataLifeParamInfo         GetLifeParam()                              { return RecipeDataLifeParamInfo(this->_object.lifeParamInfo); }

    ERecipeCategory                 GetCategory()                               { return this->_object.Category; }
    void                            GetCategory(ERecipeCategory category)       { this->_object.Category = category; }

    ERecipeItemSeries               GetSeries()                                 { return this->_object.recipeItemSeries; }
    void                            SetSeries(ERecipeItemSeries serie)          { this->_object.recipeItemSeries = serie; }

    EItemTitleType                  GetRank()                                   { return this->_object.titleType; }
    void                            SetRank(EItemTitleType rank)                { this->_object.titleType = rank; }

    ERandomRecipeType               GetRandomRecipeType()                       { return this->_object.randomRecipeType; }
    void                            SetRandomRecipeType(ERandomRecipeType type) { this->_object.randomRecipeType = type; }

    ItemData GetItem();
    void                            SetItem(ItemData data)                      { this->_object.ItemId = data.getObject().ID; }

    ERarityType                     GetRarity()                                 { return this->_object.rarity; }  
    void                            SetRarity(ERarityType rarity)               { this->_object.rarity = rarity; }

    RecipeDataRewardData            GetRewards()                                { return RecipeDataRewardData(this->_object.rewardData); }

    RecipeDataItemInfo              GetRecipeItem(int index);
    void                            SetRecipeItem(ItemData data, int index, int32_t quantity);
    void                            AddRecipeItem(ItemData data, int32_t quantity);

    RecipeDataItemInfo              GetRebuildItem()                            { return RecipeDataItemInfo(this->_object.rebuildItem); }

    bool                            GetRequestable()                            { return this->_object.requestable; }
    void                            SetRequestable(bool i)                      { this->_object.requestable = i; }

    bool                            GetNotAcquiredLife()                        { return this->_object.notAcquiredLife; }
    void                            SetNotAcquiredLife(bool i)                  { this->_object.notAcquiredLife = i; }
        
};

#endif // !RECIPEDATA_HPP