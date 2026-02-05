#ifndef FNAME_HPP
  #define FNAME_HPP
  
#include "API/Function/Engine/FName/FnameToString.hpp"
#include "API/Function/Engine/FName/FNameCTor.hpp"
#include <string>
#include <string_view>

class FName
{
  public:
  uint32_t ComparisonIndex;
  uint32_t Number;

  FName(std::string_view value)
  {
    FNameCTor::call(reinterpret_cast<FName*>(this), static_cast<int>(value.size()), value.data(), 1);
  }

  FName(const FName& fname)
  {
    this->ComparisonIndex = fname.ComparisonIndex;
    this->Number = fname.Number;
  }
  
  inline std::string ToString()
  {
    FString str;
    FNameToString::call(this, &str);
    return str.ToString();
  }

  bool operator==(const FName &o) const 
  {
    return (ComparisonIndex == o.ComparisonIndex);
  }

  bool operator!=(const FName &o) const 
  {
    return !(*this == o);
  }
};

#endif // !FNAME_HPP