#ifndef EVENTHOOK_HPP_
    #define EVENTHOOK_HPP_

    #include "../Patch.hpp"
    #include "Hook/EventHandler.hpp"

class EventHook : public Patch {
    public:
        EventHook(EventType type, uintptr_t target) : Patch(Priority::HIGH, EventTypeNames[type] + "Hook", target, reinterpret_cast<uintptr_t>(EventHandler::callEvent)), _type(type) {};
        virtual bool apply(uintptr_t baseAddress) override;
        EventType getType() const { return _type; };
    protected:
    private:
        EventType _type;
};

#endif /* !EVENTHOOK_HPP_ */

