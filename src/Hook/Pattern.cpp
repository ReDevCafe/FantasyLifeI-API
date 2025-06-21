#include "Hook/Pattern.hpp"
#include "Hook/MemoryHelper.hpp"

Pattern::Pattern(uint8_t *pattern, const char *mask) : _pattern(pattern), _mask(mask) {}

size_t Pattern::getSize() {
    return strlen(_mask);
}

uint8_t *Pattern::getPattern() {
    return _pattern;
}

const char *Pattern::getMask() {
    return _mask;
}

uintptr_t Pattern::find(uintptr_t baseAddress, uint32_t range) {
    return MemoryHelper::findPattern(baseAddress, range, this->_pattern, this->_mask);
}
