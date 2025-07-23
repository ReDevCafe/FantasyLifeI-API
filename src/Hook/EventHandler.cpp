#include "Hook/EventHandler.hpp"
#include "Hook/MemoryHelper.hpp"
#include "ModLoader.hpp"
#include "SDK.h"

#include <iomanip>

std::unordered_map<EventType, std::vector<std::function<void(std::vector<std::any>)>>> EventHandler::_handlers;
std::unordered_map<uintptr_t, EventType> EventHandler::_events;

void EventHandler::callEvent() {
    CONTEXT context;
    context.ContextFlags = CONTEXT_ALL;
    RtlCaptureContext(&context);
    CONTEXT newContext = MemoryHelper::getPreviousFrame(context, 1);
    uintptr_t call = newContext.Rip - 0x14;
    EventType type = getTypeFromAddress(call);
    std::vector<std::function<void(std::vector<std::any>)>> *eventHandler = getEventHandler(type);
    if (eventHandler == nullptr)
        return;
    std::vector<std::any> args = getArgsFromEvent(type, newContext);
    for (auto &handler : *eventHandler)
        handler(args);
}

void EventHandler::addEvent(EventType type, uintptr_t trampoline) {
    _events.emplace(trampoline, type);
}

EventType EventHandler::getTypeFromAddress(uintptr_t address) {
    if (_events.contains(address))
        return _events.at(address);
    return EventType::None;
}

std::vector<std::function<void(std::vector<std::any>)>> *EventHandler::getEventHandler(EventType type) {
        if (_handlers.contains(type))
            return &_handlers.at(type);
        return nullptr;
}

std::vector<std::any> EventHandler::getArgsFromEvent(EventType type, CONTEXT context) {
    std::vector<std::any> args;
    switch (type) {
        case EventType::ClickEvent:
            args.push_back(reinterpret_cast<UMenuLayer *>(context.R15));
            args.push_back(reinterpret_cast<FGestureData *>(context.R8));
            break;
        default:
            break;
    }
    return args;
}