#ifndef RECIPEDATA_HPP
    #define RECIPEDATA_HPP

    #include "RecipeDataLifeParamInfo.hpp"
    #include "RecipeDataItemInfo.hpp"
    #include "API/Recipe/RecipeDataRewardData.hpp"
    #include "Export.h"

class ML_API RecipeData : GameObjectProxy<FGDRecipeData>
{
public:
    RecipeData(FGDRecipeData &data) 
        : GameObjectProxy(data)
    {};

    std::string                     GetIdentifier() const { return this->_object.recipeId.ToString(); };
    std::string                     GetItemIdentifier() const { return this->_object.ItemId.ToString(); };

    ERecipeType                     GetType()                                   { return static_cast<ERecipeType>(this->_object.Type); }
    void                            SetType(ERecipeType type)                   { this->_object.Type =  static_cast<char>(type); }

    RecipeDataLifeParamInfo         GetLifeParam()                              { return RecipeDataLifeParamInfo(this->_object.lifeParamInfo); }

    ERecipeCategory                 GetCategory()                               { return static_cast<ERecipeCategory>(this->_object.Category); }
    void                            GetCategory(ERecipeCategory category)       { this->_object.Category =  static_cast<char>(category); }

    ERecipeItemSeries               GetSeries()                                 { return static_cast<ERecipeItemSeries>(this->_object.recipeItemSeries); }
    void                            SetSeries(ERecipeItemSeries serie)          { this->_object.recipeItemSeries =  static_cast<char>(serie); }

    EItemTitleType                  GetRank()                                   { return static_cast<EItemTitleType>(this->_object.titleType); }
    void                            SetRank(EItemTitleType rank)                { this->_object.titleType = static_cast<char>(rank); }

    ERandomRecipeType               GetRandomRecipeType()                       { return static_cast<ERandomRecipeType>(this->_object.randomRecipeType); }
    void                            SetRandomRecipeType(ERandomRecipeType type) { this->_object.randomRecipeType =  static_cast<char>(type); }

    ItemData GetItem();
    void                            SetItem(ItemData data)                      { this->_object.ItemId = data.getObject().ID; }

    ERarityType                     GetRarity()                                 { return static_cast<ERarityType>(this->_object.rarity); }  
    void                            SetRarity(ERarityType rarity)               { this->_object.rarity = static_cast<char>(rarity); }

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