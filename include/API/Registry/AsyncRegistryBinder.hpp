#ifndef ASYNC_REGISTRY_BINDER_HPP
#define ASYNC_REGISTRY_BINDER_HPP

#include "API/Registry/RegistrySource.hpp"
#include <chrono>
#include <functional>
#include <future>
#include <memory>

template<typename Value>
class AsyncRegistryBinder
{
  public:
  using SourcePtr    = std::shared_ptr<RegistrySource<Value>>;
  using BindFunc     = std::function<SourcePtr()>;
  using BindCallback = std::function<void(SourcePtr)>;

  [[nodiscard]] std::future<SourcePtr> BindAsync(BindFunc bindFunc, BindCallback onComplete = nullptr)
  {
      return std::async(std::launch::async,
      [f = std::move(bindFunc), cb = std::move(onComplete)]() -> SourcePtr
      {
        auto source = f();
        if (cb) cb(source);
        return source;
      });
  }

  template<typename Rep, typename Period>
  [[nodiscard]] SourcePtr WaitFor(std::future<SourcePtr>& future, const std::chrono::duration<Rep, Period>& timeout)
  {
    if (future.wait_for(timeout) == std::future_status::ready) return future.get();
    return nullptr;
  }
};

#endif // ASYNC_REGISTRY_BINDER_HPP