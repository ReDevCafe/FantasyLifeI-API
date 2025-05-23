#ifndef HOOKDATAMANAGER_HPP_
    #define HOOKDATAMANAGER_HPP_

    #include "../Patch.hpp"
    #include <atomic>

constexpr unsigned char trampoline[13] = { 0x48, 0xB8, '?', '?', '?', '?', '?', '?', '?', '?', 0xFF, 0xD0, 0xC3};
constexpr unsigned char patch[8]       = { 0x48, 0x89, 0xD9, 0xE9, '?', '?', '?', '?'};

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
