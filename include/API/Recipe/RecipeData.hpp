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

    ERecipeType GetType() const { return this->_object.Type; }
    void SetType(ERecipeType type) const { this->_object.Type = type; }

    RecipeDataLifeParamInfo         GetLifeParam() const { return RecipeDataLifeParamInfo(this->_object.lifeParamInfo); }

    ERecipeCategory                 GetCategory() const { return this->_object.Category; }
    void                            GetCategory(ERecipeCategory category) const { this->_object.Category = category; }

    ERecipeItemSeries               GetSeries() const { return this->_object.recipeItemSeries; }
    void                            SetSeries(ERecipeItemSeries serie) const { this->_object.recipeItemSeries = serie; }

    EItemTitleType                  GetRank() const { return this->_object.titleType; }
    void                            SetRank(EItemTitleType rank) const { this->_object.titleType = rank; }

    ERandomRecipeType               GetRandomRecipeType() const { return this->_object.randomRecipeType; }
    void                            SetRandomRecipeType(ERandomRecipeType type) const { this->_object.randomRecipeType = type; }

    ItemData GetItem();
    void SetItem(ItemData data) const { this->_object.ItemId = data.getObject().ID; }

    ERarityType                     GetRarity() const { return this->_object.rarity; }  
    void                            SetRarity(ERarityType rarity) const { this->_object.rarity = rarity; }

    RecipeDataRewardData            GetRewards() const { return RecipeDataRewardData(this->_object.rewardData); }

    RecipeDataItemInfo              GetItem(int index);
    void                            SetItem(int index, ItemData data, int32_t quantity);
    void                            AddItem(ItemData data, int32_t quantity);

    RecipeDataItemInfo              GetRebuildItem() const { return RecipeDataItemInfo(this->_object.rebuildItem); }

    bool                            GetRequestable() const { return this->_object.requestable; }
    void                            SetRequestable(bool i) const { this->_object.requestable = i; }

    bool                            GetNotAcquiredLife() const {  return this->_object.notAcquiredLife; }
    void                            SetNotAcquiredLife(bool i) const { this->_object.notAcquiredLife = i; }
        
};

#endif // !RECIPEDATA_HPP