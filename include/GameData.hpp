#ifndef GAMEDATA_HPP_
    #define GAMEDATA_HPP_

    #include "SDK.h"
    #include "Engine/FUObjectArray.hpp"
    #include "Game/Global/UStaticDataManager.hpp"
    #include "API/Entities/Player/Player.hpp"
    #include "Utils.hpp"
    #include "Logger/ModLoaderLogger.hpp"
    #include <type_traits>
    #include <functional>
    #include "Game/Global/UDynamicDataManager.hpp"
    #include "API/Item/ItemData.hpp"
    #include "API/Recipe/RecipeData.hpp"
    #include <memory>

constexpr uintptr_t GOBJECTS_OFFSET = 0xBFF47F0;
constexpr uintptr_t GNAMES_OFFSET =  0xBF3DA40;
constexpr uintptr_t GWORLD_OFFSET = 0xC174678;

class GameData {
    public:
        GameData(uintptr_t baseAddress);
        ~GameData() = default;

        void initOthersData();
        uintptr_t getBaseAddress();
        FUObjectArray *getGObjects();
        void *getGNames();
        void *getGWorld();
        UStaticDataManager *getStaticDataManager();
        UDynamicDataManager *getDynamicDataManager();

        template<typename T = void>
        T *getUObject(const std::string &name, bool safe = true, uint32_t nth = 0) {
            if (_gObjects == nullptr) return nullptr;
            if (_cache.contains(name))
                return reinterpret_cast<T *>(_cache.at(name));
            UObject *object = nullptr;
            uint32_t counter = 0;
            if (safe)
                _gObjects->lock();
            for (int i = 0; i < _gObjects->ObjObjects.NumElements; ++i) {
                object = _gObjects->getObject(i);
                if (object == nullptr) continue;
                if (Utils::FNameToString(_baseAddress, object->NamePrivate) == name && ++counter > nth) break;
                object = nullptr;
            }
            if (safe)
                _gObjects->unlock();
            if (object)
                _cache.emplace(name, object);
            return reinterpret_cast<T *>(object);
        }

        Player *getPlayer();

        template<typename T = void *>
        void waitObject(T *object, const std::string &name = "", uint32_t nth = 0) {
            mlLogger.info("Waiting an object...");
            while (*object == nullptr) {
                if (name != "")
                    *object = this->getUObject<typename std::remove_pointer<T>::type>(name, false, nth);
                Sleep(1);
            }
            mlLogger.info("Object found !");
        }

    protected:
    private:
        uintptr_t _baseAddress; 
        FUObjectArray *_gObjects;
        void *_gNames;
        void *_gWorld;
        UStaticDataManager *_staticDataManager;
        UDynamicDataManager *_dynamicDataManager;
        std::unique_ptr<Player> _player;
        std::unordered_map<std::string, UObject *> _cache;
};

#endif /* !GAMEDATA_HPP_ */
