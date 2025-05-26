#ifndef UGAMEDATAASSET_HPP_
    #define UGAMEDATAASSET_HPP_

    #include "UObject.hpp"
    #include "TMap.hpp"

class FGDId {
    public:
        uint32_t crc;
        FName Name;
};

class UGameDataAsset : public UObject {
    public:
        unsigned char m_unknown[2];
        TArray<char> m_autoBin;
        FString m_autoStr;
};

#endif /* !UGAMEDATAASSET_HPP_ */
