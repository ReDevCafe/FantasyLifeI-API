#ifndef GAMEDATA_HPP_
    #define GAMEDATA_HPP_

    #include "Engine/FUObjectArray.hpp"
    #include "Game/UStaticDataManager.hpp"
    #include "API/Entities/Player/Player.hpp"
    #include "Utils.hpp"

    #include <type_traits>

constexpr uintptr_t GOBJECTS_OFFSET = 0xBFF47F0;
constexpr uintptr_t GNAMES_OFFSET =  0xBF3DA40;
constexpr uintptr_t GWORLD_OFFSET = 0xC174678;

template<typename T>
concept UObjectBase = std::is_base_of_v<UObject, T>;

class GameData {
    public:
        GameData(uintptr_t baseAddress);
        ~GameData() = default;

        template<UObjectBase T>
        T *getUObject(const std::string &name, bool safe = true) {
            if (_gObjects == nullptr) return nullptr;
            if (_cache.contains(name))
                return reinterpret_cast<T *>(_cache.at(name));
            UObject *object = nullptr;
            if (safe)
                _gObjects->lock();
            for (int i = 0; i < _gObjects->ObjObjects.NumElements; ++i) {
                object = _gObjects->getObject(i);
                if (object == nullptr) continue;
                if (Utils::FNameToString(_baseAddress, object->NamePrivate) == name) break;
            }
            if (safe)
                _gObjects->unlock();
            if (object)
                _cache.emplace(name, object);
            return reinterpret_cast<T *>(object);
        }

        uintptr_t getBaseAddress();
        FUObjectArray *getGObjects();
        void *getGNames();
        void *getGWorld();
        UStaticDataManager *getStaticDataManager();
    protected:
    private:
        uintptr_t _baseAddress;
        FUObjectArray *_gObjects;
        void *_gNames;
        void *_gWorld;
        UStaticDataManager *_staticDataManager;
        std::unordered_map<std::string, UObject *> _cache;
};

#endif /* !GAMEDATA_HPP_ */
