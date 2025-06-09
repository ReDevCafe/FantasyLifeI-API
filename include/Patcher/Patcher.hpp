#ifndef PATCHER_HPP_
    #define PATCHER_HPP_

    #include <queue>
    #include "Patch.hpp"

struct Compare {
    bool operator()(Patch *a, Patch *b) { return a->getPriority() > b->getPriority(); };
};

class Patcher {
    public:
        static void add(Patch *patch);
        static bool applyPatches(uintptr_t baseAddress);
        static void clear();
    protected:
    private:
        static std::priority_queue<Patch *, std::vector<Patch *>, Compare> _queue;
};

#endif /* !PATCHER_HPP_ */