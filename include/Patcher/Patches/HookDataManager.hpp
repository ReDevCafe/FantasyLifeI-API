#ifndef HOOKDATAMANAGER_HPP_
    #define HOOKDATAMANAGER_HPP_

    #include "../Patch.hpp"
    #include <atomic>


const uintptr_t freeZoneOffset = 0x6823382;

class HookDataManager : public Patch {
    public:
        HookDataManager() : Patch(Priority::HIGH, "HookDataManager", 0x6821A66, (uintptr_t) HookDataManager::_getDataManager) {};
        bool apply(uintptr_t baseAddress) const;
        static void *getDataManager() { return (void *) _ptr.load(); };
    protected:
        static void _getDataManager(uintptr_t dataManager);
        static std::atomic<uintptr_t> _ptr;
    private:
};

#endif /* !HOOKDATAMANAGER_HPP_ */
