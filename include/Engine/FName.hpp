
#ifndef FNAME_HPP_
    #define FNAME_HPP_

    #include <cstdint>

typedef uint32_t FNameEntryId;

struct FName {
    FNameEntryId ComparisonIndex = 0;
    FNameEntryId Number = 0;
};

#endif /* !FNAME_HPP_ */
