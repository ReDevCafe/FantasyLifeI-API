#ifndef RECIPEDATAREWARDDATA
    #define RECIPEDATAREWARDDATA

    #include "API/GameObjectProxy.hpp"
    #include "API/Item/ItemData.hpp"

class RecipeDataRewardData : public GameObjectProxy<FGDRecipeData_RewardData>
{
    public:
        RecipeDataRewardData(FGDRecipeData_RewardData& data) : GameObjectProxy(data){};

        ItemData GetRank0Item();
        ItemData GetRank1Item();
        ItemData GetRank2Item();
        ItemData GetRank3Item();

        void SetRank0Item(ItemData data) const { this->_object.rank0_itemId = data.getObject().ID; }
        void SetRank1Item(ItemData data) const { this->_object.rank1_itemId = data.getObject().ID; }
        void SetRank2Item(ItemData data) const { this->_object.rank2_itemId = data.getObject().ID; }
        void SetRank3Item(ItemData data) const { this->_object.rank3_itemId = data.getObject().ID; }

        uint32_t GetRank0Exp() const { return this->_object.rank0_exp; }
        uint32_t GetRank1Exp() const { return this->_object.rank1_exp; }
        uint32_t GetRank2Exp() const { return this->_object.rank2_exp; }
        uint32_t GetRank3Exp() const { return this->_object.rank3_exp; }

        uint32_t SetRank0Exp(uint32_t exp) const { this->_object.rank0_exp = exp; }
        uint32_t SetRank1Exp(uint32_t exp) const { this->_object.rank1_exp = exp; }
        uint32_t SetRank2Exp(uint32_t exp) const { this->_object.rank2_exp = exp; }
        uint32_t SetRank3Exp(uint32_t exp) const { this->_object.rank3_exp = exp; }


};

#endif // !RECIPEDATAREWARDDATA
