#ifndef GAMECACHE_HPP
    #define GAMECACHE_HPP

    #include <functional>
    #include <string>
    #include <type_traits>
    #include <memory>

    #include "API/Item/ItemData.hpp"
    #include "API/Recipe/RecipeData.hpp"

class UStaticDataManager;
class GameData;
class GameCache 
{
    public:
        GameCache();
        ~GameCache() = default;

        FGDStCommon_NounInfo*   GetNoun     (std::string key);
        ItemData                GetItem     (std::string key);
        RecipeData              GetRecipe   (std::string key);

        const std::unordered_map<std::string, std::unique_ptr<ItemData>>& GetListItems() const { return _cacheItemData; }
        const std::unordered_map<std::string, std::unique_ptr<RecipeData>>& GetListRecipes() const { return _cacheRecipeData; }

    private:
        std::unordered_map<std::string, FGDStCommon_NounInfo*> _cacheNounInfo;
        std::unordered_map<std::string, std::unique_ptr<ItemData>> _cacheItemData;
        std::unordered_map<std::string, std::unique_ptr<RecipeData>> _cacheRecipeData;

    protected:
        void initNoun(GameData* gmd, UStaticDataManager* sdm);
        void initItem(GameData* gmd, UStaticDataManager* sdm);
        void initRecipe(GameData* gmd, UStaticDataManager* sdm);
};

#endif // !GAMECACHE_HPP