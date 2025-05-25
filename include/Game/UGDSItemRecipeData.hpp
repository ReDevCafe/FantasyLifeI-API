#ifndef UGDSITEMRECIPEDATA_HPP_
    #define UGDSITEMRECIPEDATA_HPP_

    #include "../Game/FGDItemData.hpp"

class FGDItemRecipeData : public FGDItemData {
    public:
        FName recipeId;
};

class UGDSItemRecipeData : public UGameDataAsset {
    public:
        TMap<FName, FGDItemRecipeData> m_dataMap;
};

#endif /* !UGDSITEMRECIPEDATA_HPP_ */
