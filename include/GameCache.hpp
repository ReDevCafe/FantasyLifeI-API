#ifndef GAMECACHE_HPP
    #define GAMECACHE_HPP

    #include <unordered_map>
    #include "API/Item/ItemData.hpp"
    #include "API/Recipe/RecipeData.hpp"
    #include "API/Skill/SkillData.hpp"
    #include "API/Common/CommonPickParamData.hpp"
    #include "API/Entities/CharaData.hpp"
    #include "API/World/MapSubLevel.hpp"
    #include "API/World/MapData.hpp"

class UStaticDataManager;
class GameData;
class GameCache 
{
    public:
        GameCache();
        ~GameCache() = default;

        //                                          Called for caches that require the save to be loaded
        void                                        PostLoadCache   ();

        FGDStCommon_NounInfo*                       GetNoun         (const std::string& key ) const { return _cacheNounInfo.at(key); }
        FGDStCommon_TextInfo*                       GetText         (const std::string& key ) const { return _cacheTextInfo.at(key); }
        SkillData                                   GetSkill        (const std::string& key ) const { return *_cacheSkillData.at(key); }
        CommonPickParamData                         GetPickParam    (const std::string& key ) const { return *_cacheCommonPickParam.at(key); }
        ItemData                                    GetItem         (const std::string& key ) const { return *_cacheItemData.at(key); }
        RecipeData                                  GetRecipe       (const std::string& key ) const { return *_cacheRecipeData.at(key); }
        CharaData                                   GetChara        (const std::string& key ) const { return *_cacheCharaData.at(key); }
        TArray<FGDAddSkillLotTable_AddSkillInfo>&   GetAddSkillTable(const std::string& key ) const { return *_cacheAddSkillLotTable.at(key); }

        MapSubLevel                                 GetSubLevel     (const std::string& key ) const { return *_cacheSubLevel.at(key); }
        MapData                                     GetMapData      (const std::string& key ) const { return *_cacheMap.at(key); }

        const std::unordered_map<std::string, std::unique_ptr<ItemData>>&   GetListItems() const { return _cacheItemData; }
        const std::unordered_map<std::string, std::unique_ptr<RecipeData>>& GetListRecipes() const { return _cacheRecipeData; }

    private:
        std::unordered_map<std::string, FGDStCommon_NounInfo*>                  _cacheNounInfo;
        std::unordered_map<std::string, FGDStCommon_TextInfo*>                  _cacheTextInfo;
        std::unordered_map<std::string, TArray<FGDAddSkillLotTable_AddSkillInfo>*>      _cacheAddSkillLotTable;

        std::unordered_map<std::string, std::unique_ptr<CommonPickParamData>>   _cacheCommonPickParam;
        std::unordered_map<std::string, std::unique_ptr<SkillData>>             _cacheSkillData;
        std::unordered_map<std::string, std::unique_ptr<ItemData>>              _cacheItemData;
        std::unordered_map<std::string, std::unique_ptr<RecipeData>>            _cacheRecipeData;
        std::unordered_map<std::string, std::unique_ptr<CharaData>>             _cacheCharaData;

        // World shit
        std::unordered_map<std::string, std::unique_ptr<MapSubLevel>>           _cacheSubLevel;
        std::unordered_map<std::string, std::unique_ptr<MapData>>               _cacheMap;

        void initNoun(GameData* gmd, UStaticDataManager* sdm);
        void initText(GameData* gmd, UStaticDataManager* sdm);
        void initSkill(GameData* gmd, UStaticDataManager* sdm);
        void initCommonPickParam(GameData* gmd, UStaticDataManager* sdm);
        void initItem(GameData* gmd, UStaticDataManager* sdm);
        void initRecipe(GameData* gmd, UStaticDataManager* sdm);
        void initChara(GameData* gmd, UStaticDataManager* sdm);
        void initAddSkillTable(GameData* gmd, UStaticDataManager* sdm);


        void postInitText(GameData* gmd, UStaticDataManager* sdm);

        // World shit
        void initSubLevel(GameData* gmd, UStaticDataManager* sdm);
        void initMap(GameData* gmd, UStaticDataManager* sdm);
};

#endif // !GAMECACHE_HPP