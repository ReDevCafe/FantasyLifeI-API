#ifndef GAME_FUNCTION_PROXY_HPP
  #define GAME_FUNCTION_PROXY_HPP

  #include "Hook/Pattern.hpp"
  #include <cstdint>
  #include <stdexcept>
  #include <utility>
  #include "Export.h"

  #define FLIAPI_FUNCTION_CALL_MACRO(FTYPE) \
  \
  template<typename... Args> \
  ML_API static auto call(Args&&... args) -> decltype(std::declval<FTYPE>()(std::forward<Args>(args)...)) \
  { \
      return instance()(std::forward<Args>(args)...); \
  } \
  
  #define FLIAPI_FUNCTION_INSTANCE_MACRO(CNAME) \
  \
  ML_API static CNAME& instance() \
  { \
      static CNAME inst; \
      return inst; \
  } \

template<typename FuncType>
class GameFunctionProxy
{ 
  private:
  FuncType _function;
  const std::string& _id;

  public:
  GameFunctionProxy(const GameFunctionProxy&) = delete;
  GameFunctionProxy& operator=(const GameFunctionProxy&) = delete;

  static GameFunctionProxy& instance(const uint8_t& pattern, const char* mask, uintptr_t offset = 0)
  {
    static GameFunctionProxy instance(pattern, mask, offset);
    return instance;
  }

  template<typename... Args>
  auto operator()(Args&&... args) const -> decltype((*std::declval<FuncType>())(std::forward<Args>(args)...))
  {
    if(!_function) throw std::runtime_error("Function ptr not initialized or null");
    return _function(std::forward<Args>(args)...);
  }
  
  FuncType         get() const { return _function; }
  bool         isValid() const { return _function != nullptr; }
  uintptr_t getAddress() const { return reinterpret_cast<uintptr_t>(_function); }

  protected:
  GameFunctionProxy(const std::string& id, uint8_t* pattern, const char* mask, uintptr_t startOffset = 0) :
  _function(nullptr),
  _id(id)
  {
    try 
    {
      Pattern pat(pattern, mask);
      uintptr_t addr = pat.find(startOffset);
      
      _function = reinterpret_cast<FuncType>(addr);
    } catch (const std::runtime_error& e) 
    {
      throw std::runtime_error("Failed to initialize function proxy for " + _id + ": " + e.what());
    }
  }
};

#endif //! GAME_FUNCTION_PROXY_HPP