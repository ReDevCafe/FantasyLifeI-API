#ifndef PATTERN_HPP
  #define PATTERN_HPP

  #include <cstddef>
  #include <cstdint>

class Pattern
{
  private:
  uint8_t*    _pattern;
  const char* _mask;


  public:
  Pattern(uint8_t *pattern, const char* mask);

  size_t getSize();
  uint8_t* getPattern();
  const char* getMask();

  uintptr_t find(uintptr_t baseAddress, uint32_t range);
  uintptr_t find(uintptr_t startOffset);
};

#endif //! PATTERN_HPPP