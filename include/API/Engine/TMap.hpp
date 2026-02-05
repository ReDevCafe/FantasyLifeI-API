#ifndef TMAP_HPP
  #define TMAP_HPP

  #include "TArray.hpp"

// TODO: PROPER IMPLEMENTATION OF THESES STRUCTS
template<typename ElementType>
class TSetElement
{
  public:
    ElementType                                                Value;                                                   // 0x0000(0x0000)
    int32_t                                                    HashNextId;                                              // 0x0000(0x0000)
    int32_t                                                    HashIndex;                                               // 0x0000(0x0000)
};

template <typename KeyType, typename ValueType>
class TPair
{
  public:
	KeyType First;
  ValueType Second;
};


template<typename Key, typename Value>
class TMap
{
  public:
	TArray<TSetElement<TPair<Key, Value>>>                     Data;                                                    // 0x0000(0x0000)
  
  private:
	uint8_t                                                    UnknownData01[0x04];                                     // 0x0000(0x0000)
	uint8_t                                                    UnknownData02[0x04];                                     // 0x0000(0x0000)
	uint8_t                                                    UnknownData03[0x08];                                     // 0x0000(0x0000)
	uint8_t                                                    UnknownData04[0x08];                                     // 0x0000(0x0000)
	uint8_t                                                    UnknownData_MayBeSize[0x04];                             // 0x0000(0x0000)
	uint8_t                                                    UnknownData_MayBeFlag[0x04];                             // 0x0000(0x0000)
	uint8_t                                                    UnknownData05[0x08];                                     // 0x0000(0x0000)
	uint8_t                                                    UnknownData06[0x08];                                     // 0x0000(0x0000)
	uint8_t                                                    UnknownData07[0x08];                                     // 0x0000(0x0000)
	uint8_t                                                    UnknownData_MayBeSize02[0x04];                           // 0x0000(0x0000)
	uint8_t                                                    UnknownData08[0x04];                                     // 0x0000(0x0000)

  public:
  inline int32_t Num() const
  {
      return Data.Num();
  }

  [[nodiscard]] TPair<Key, Value>* Find(const Key& key)
  {
      for (int32_t i = 0; i < Data.Num(); ++i)
      {
          TPair<Key, Value>& pair = Data[i].Value;
          if (pair.First == key)
          {
              return &pair;
          }
      }
      return nullptr;
  }

  [[nodiscard]] bool Contains(const Key& key)
  {
      return Find(key) != nullptr;
  }


  //Skibidi suicide
  class Iterator 
  {
    private:
    TSetElement<TPair<Key, Value>>* current;

    public:
    constexpr explicit Iterator(TSetElement<TPair<Key, Value>>* p) noexcept : current(p) {}

    [[nodiscard]] constexpr Value& operator*() const noexcept 
    { 
        return current->Value.Second; 
    }

    [[nodiscard]] constexpr Value* operator->() const noexcept 
    { 
        return &current->Value.Second; 
    }

    constexpr Iterator& operator++() noexcept 
    { 
        ++current; 
        return *this; 
    }

    constexpr Iterator operator++(int) noexcept 
    { 
        Iterator temp = *this; 
        ++current; 
        return temp; 
    }

    constexpr Iterator& operator--() noexcept 
    { 
        --current; 
        return *this; 
    }

    constexpr Iterator operator--(int) noexcept 
    { 
        Iterator temp = *this; 
        --current; 
        return temp; 
    }

    [[nodiscard]] constexpr bool operator==(const Iterator& other) const noexcept 
    { 
        return current == other.current; 
    }

    [[nodiscard]] constexpr bool operator!=(const Iterator& other) const noexcept 
    { 
        return current != other.current; 
    }

    [[nodiscard]] constexpr Iterator operator+(int32_t offset) const noexcept 
    { 
        return Iterator(current + offset); 
    }

    [[nodiscard]] constexpr Iterator operator-(int32_t offset) const noexcept 
    { 
        return Iterator(current - offset); 
    }

    constexpr Iterator& operator+=(int32_t offset) noexcept 
    { 
        current += offset; 
        return *this; 
    }

    constexpr Iterator& operator-=(int32_t offset) noexcept 
    { 
        current -= offset; 
        return *this; 
    }

    [[nodiscard]] constexpr int32_t operator-(const Iterator& other) const noexcept 
    { 
        return static_cast<int32_t>(current - other.current); 
    }

  };

  [[nodiscard]] constexpr Iterator begin() noexcept
  {
      return Iterator(Data.GetData());
  }

  [[nodiscard]] constexpr Iterator end() noexcept
  {
      return Iterator(Data.GetData() + Data.Num());
  }

};

#endif // !TMAP_HPP