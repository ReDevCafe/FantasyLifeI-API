#ifndef GAMEDATA_HPP_
    #define GAMEDATA_HPP_

    #include "Engine/FUObjectArray.hpp"
    #include "API/Entities/Player/Player.hpp"
    #include <string_view>
    #include <type_traits>
    #include <memory>
    #include <unordered_map>
    #include <thread>
    
    #include "SDK.h"
    #include "Export.h"

    class GameData {
    public:
        GameData();
        ~GameData() = default;

        void init();
        void initOthersData();
        ML_API FUObjectArray *getGObjects();
        ML_API void *getGNames();
        ML_API void *getGWorld();
        ML_API UStaticDataManager *getStaticDataManager();
        ML_API UDynamicDataManager *getDynamicDataManager();

        template<typename T = void>
        T *getUObject(const std::string name, bool safe = false, uint32_t nth = 0)
        {
            if (_gObjects == nullptr) return nullptr;
            if (_cache.contains(name))
                return reinterpret_cast<T *>(_cache.at(name));
            UObject *object = _getUObject(name, safe, nth);
            if (object)
                _cache.emplace(name, object);
            return reinterpret_cast<T *>(object);
        }

        ML_API Player *getPlayer();
        
        template<typename T = void *>
        void waitObject(T *object, std::string_view name = {}, uint32_t nth = 0) {
            while (*object == nullptr) 
            {
                if (!name.empty()) *object = this->getUObject<typename std::remove_pointer<T>::type>(name.data(), false, nth);
                std::this_thread::sleep_for(std::chrono::milliseconds(1));
            }
        }

    protected:
        UObject* _getUObject(std::string_view name, bool safe, int nth);

    private:
        FUObjectArray *_gObjects;
        void *_gNames;
        void *_gWorld;
        UStaticDataManager *_staticDataManager;
        UDynamicDataManager *_dynamicDataManager;
        std::unique_ptr<Player> _player;
        std::unordered_map<std::string, UObject *> _cache;
};

#endif /* !GAMEDATA_HPP_ */
