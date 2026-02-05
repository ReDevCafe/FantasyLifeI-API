
#ifndef FUOBJECTARRAY_HPP_
    #define FUOBJECTARRAY_HPP_

    #include "SDK.h"
    #include "Export.h"
    #include <Windows.h>

    #define NUM_ELEMENT_PER_CHUNK 65536

class FCriticalSection {
    public:
        CRITICAL_SECTION CriticalSection;
};

struct FUObjectItem {
    UObject *Object;
    int32_t Flags;
    int32_t ClusterRootIndex;	
    int32_t SerialNumber;
};

class FChunkedFixedUObjectArray {
    public:
        FUObjectItem** Objects;
        FUObjectItem* PreAllocatedObjects;
        int32_t MaxElements;
        int32_t NumElements;
        int32_t MaxChunks;
        int32_t NumChunks;
};

class ML_API FUObjectArray {
    public:
        FChunkedFixedUObjectArray ObjObjects;
        mutable FCriticalSection ObjObjectsCritical;

        UObject *getObject(uint32_t index);
        void lock();
        void unlock();
};

#endif /* !FUOBJECTARRAY_HPP_ */
