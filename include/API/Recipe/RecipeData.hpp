#ifndef RECIPEDATA_HPP
#define RECIPEDATA_HPP

#include "Game/Recipe/UGDSRecipeData.hpp"
#include "RecipeDataLifeParamInfo.hpp"
#include "RecipeDataItemInfo.hpp"
#include "Game/Life/Life.hpp"
#include "API/Recipe/RecipeDataRewardData.hpp"
#include <vector>

class RecipeData : GameObjectProxy<FGDRecipeData>
{
public:
    RecipeData(FGDRecipeData &data) 
        : GameObjectProxy(data),
        _lifeParam{data.lifeParamInfo},
        _rewardData{data.rewardData},
        _rebuildItem{data.rebuildItem}
    {
        for(int i = 0; i < data.itemList.Count; ++i)
            _itemInfo.push_back(RecipeDataItemInfo{data.itemList[i]});

    };

    std::string GetIdentifier();
    std::string GetItemIdentifier();

    ERecipeType GetType() const { return this->_object.Type; }
    void SetType(ERecipeType type) const { this->_object.Type = type; }

    RecipeDataLifeParamInfo         GetLifeParam() const { return this->_lifeParam; }

    ERecipeCategory                 GetCategory() const { return this->_object.Category; }
    void                            GetCategory(ERecipeCategory category) const { this->_object.Category = category; }

    ERecipeItemSeries               GetSeries() const { return this->_object.recipeItemSeries; }
    void                            SetSeries(ERecipeItemSeries serie) const { this->_object.recipeItemSeries = serie; }

    EItemTitleType                  GetTitleType() const { return this->_object.titleType; }
    void                            SetTitleType(EItemTitleType type) const { this->_object.titleType = type; }

    ERandomRecipeType               GetRandomRecipeType() const { return this->_object.randomRecipeType; }
    void                            SetRandomRecipeType(ERandomRecipeType type) const { this->_object.randomRecipeType = type; }

    ItemData GetItem();
    void SetItem(ItemData data) const { this->_object.ItemId = data.getObject().ID; }

    ERarityType                     GetRarity() const { return this->_object.rarity; }  
    void                            SetRarity(ERarityType rarity) const { this->_object.rarity = rarity; }

    RecipeDataRewardData            GetRewards() const { return this->_rewardData; }

    std::vector<RecipeDataItemInfo> GetItemList() const { return this->_itemInfo; }

    void                            AddItem(ItemData data, int32_t quantity);
    void                            RemoveItem(int index); // UNSTABLE?

    RecipeDataItemInfo              GetRebuildItem() const { return _rebuildItem; }

    bool                            GetRequestable() const { return this->_object.requestable; }
    void                            SetRequestable(bool i) const { this->_object.requestable = i; }

    bool                            GetNotAcquiredLife() const {  return this->_object.notAcquiredLife; }
    void                            SetNotAcquiredLife(bool i) const { this->_object.notAcquiredLife = i; }
        
private:
    RecipeDataLifeParamInfo _lifeParam;
    RecipeDataRewardData _rewardData;
    std::vector<RecipeDataItemInfo> _itemInfo;
    RecipeDataItemInfo _rebuildItem;
};

#endif // !RECIPEDATA_HPP