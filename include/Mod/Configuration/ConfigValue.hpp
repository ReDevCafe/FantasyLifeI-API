#ifndef MOD_CONFIG_VALUE
  #define MOD_CONFIG_VALUE

  #include <mutex>

/*
* Please refer to the following documentation:
* https://github.com/ReDevCafe/FantasyLifeI-API/tree/master/.github/doc/Mod/ConfigurationFiles.md
*/ 
template<typename T>
class ConfigValue
{
  public:
  ConfigValue() : _initialized(false){}

  T Get() const 
  {
    std::unique_lock<std::mutex> lock(_mutex);
    _cv.wait(lock, [this] { return _initialized.load(); });
    return _value;
  }

  T GetOrThrow() const
  {
    std::lock_guard<std::mutex> lock(_mutex);
    if(!_initialized.load()) throw std::runtime_error("Config value not initialized yet....");

    return _value;
  }

  void Set(T value)
  {
    std::lock_guard<std::mutex> lock(_mutex);
    _value = value;
    _initialized.store(true);
    _cv.notify_all();
  }

  void Reset()
  {
    std::lock_guard<std::mutex> lock(_mutex);
    _initialized.store(false);
  }

  private:
  mutable std::mutex _mutex;
  mutable std::condition_variable _cv;
  std::atomic<bool> _initialized; // atomic cant support string, honestly that crazy 
  T _value;
};

#endif //! MOD_CONFIG_VALUE