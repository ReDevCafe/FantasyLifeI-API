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
        _rewardData{data.rewardData}
    {
        for(int i = 0; i < data.itemList.Count; ++i)
            _itemInfo.push_back(RecipeDataItemInfo{data.itemList[i]});

    };

    std::string GetIdentifier();
    std::string GetItemIdentifier();

    ERecipeType GetType() const { return this->_object.Type; }
    void SetType(ERecipeType type) const { this->_object.Type = type; }

    RecipeDataLifeParamInfo         GetLifeParam() const { return this->_lifeParam; }
    RecipeDataRewardData            GetRewards() const { return this->_rewardData; }
    std::vector<RecipeDataItemInfo> GetItemInfo() const { return this->_itemInfo; }

    void                            AddItem(ItemData data, int32_t quantity);

    ItemData GetItem();
    void SetItem(ItemData data) const { this->_object.ItemId = data.getObject().ID; }
        
private:
    RecipeDataLifeParamInfo _lifeParam;
    RecipeDataRewardData _rewardData;
    std::vector<RecipeDataItemInfo> _itemInfo;
};

#endif // !RECIPEDATA_HPP