#ifndef PATTERN_HPP_
    #define PATTERN_HPP_

    #include <cstdint>
    #include <cstring>

class Pattern {
    public:
        Pattern(uint8_t *pattern, const char *mask);
        ~Pattern();
        size_t getSize();
        uint8_t *getPattern();
        const char *getMask();
        uintptr_t find(uintptr_t baseAddress, uint32_t range);
    protected:
    private:
        uint8_t *_pattern;
        const char *_mask;

};

#endif /* !PATTERN_HPP_ */
