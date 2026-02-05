#ifndef EVENTHANDLER_HPP_
    #define EVENTHANDLER_HPP_

    #include <unordered_map>
    #include <vector>
    #include <functional>
    #include <any>
    #include <stdexcept>
    #include <Windows.h>
    #include "Export.h"

const std::string EventTypeNames[] = {"None", "ClickEvent"};

enum EventType {
    None,
    ClickEvent
};


class EventHandler {
    public:

        template<typename...Args>
        static void addHandler(EventType type, void (callback)(Args...)) {
            std::function<void (Args...)> castCallback = callback;
            addHandler(type, castCallback);
        }

        template<typename...Args>
        static void addHandler(EventType type, std::function<void(Args...)> callback) {
            std::function<void(std::vector<std::any>)> function = [callback](std::vector<std::any> args) {
                if (args.size() != sizeof...(Args))
                    throw std::runtime_error("Argument count mismatch");
                callFromAnyVector(callback, args, std::index_sequence_for<Args...>{});
            };
            if (_handlers.contains(type))
                _handlers.at(type).emplace_back(function);
            else
                _handlers.emplace(type, std::vector<std::function<void(std::vector<std::any>)>>()).first->second.emplace_back(function);
            
        }
        ML_API static void callEvent();
        ML_API static void addEvent(EventType type, uintptr_t trampoline);
        ML_API static EventType getTypeFromAddress(uintptr_t address);
        ML_API static std::vector<std::any> getArgsFromEvent(EventType type, CONTEXT context);
        ML_API static std::vector<std::function<void(std::vector<std::any>)>> *getEventHandler(EventType type);
    protected:
    private:
        ML_API static std::unordered_map<EventType, std::vector<std::function<void(std::vector<std::any>)>>> _handlers;
        ML_API static std::unordered_map<uintptr_t, EventType> _events;
};

template<typename... Args, std::size_t... Is>
static void callFromAnyVector(const std::function<void(Args...)>& func, const std::vector<std::any>& args, std::index_sequence<Is...>) {
    func(std::any_cast<std::remove_reference_t<Args>>(args[Is])...);
}

#endif /* !EVENTHANDLER_HPP_ */
