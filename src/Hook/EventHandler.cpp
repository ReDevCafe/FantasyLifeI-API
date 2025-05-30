#include "Hook/EventHandler.hpp"
#include "Hook/Memory.hpp"
#include <iostream>
#include "Logger/ModLoaderLogger.hpp"
#include "Game/Menu/Menu.hpp"

std::unordered_map<EventType, std::vector<std::function<void(std::vector<std::any>)>>> EventHandler::_handlers;
std::unordered_map<uintptr_t, EventType> EventHandler::_events;

void EventHandler::callEvent() {
    CONTEXT context = {};
    RtlCaptureContext(&context);
    CONTEXT newContext = Memory::getPreviousFrame(context, 1);
    uintptr_t call = *reinterpret_cast<uintptr_t *>(newContext.Rsp) - 5;
    EventType type = getTypeFromAddress(call);
    std::vector<std::function<void(std::vector<std::any>)>> * eventHandler = getEventHandler(type);
    if (eventHandler == nullptr)
        return;
    std::vector<std::any> args = getArgsFromEvent(type, newContext);
    for (auto &handler : *eventHandler)
        handler(args);
}

std::vector<std::any> EventHandler::handlingArgument(EventType type) {
    return std::vector<std::any>();
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
            args.push_back(std::any_cast<UMenuLayer *>(context.R15));
            args.push_back(std::any_cast<FGestureData *>(context.R8));
            break;
        default:
            break;
    }
    return args;
}