#ifndef EVENTHOOK_HPP_
    #define EVENTHOOK_HPP_

    #include "../Trampoline.hpp"
    #include "Hook/EventHandler.hpp"

class EventHook : public Trampoline {
    public:
        EventHook(EventType type, uintptr_t target) : Trampoline(Priority::HIGH, EventTypeNames[type] + "Hook", target, reinterpret_cast<uintptr_t>(EventHandler::callEvent)), _type(type) {};
        virtual bool apply(uintptr_t baseAddress) override;
        EventType getType() const { return _type; };
    protected:
    private:
        EventType _type;
};

#endif /* !EVENTHOOK_HPP_ */

