#ifndef THREADPOOL_HEADER
    #define THREADPOOL_HEADER

    #include <condition_variable>
    #include <mutex>
    #include <functional>
    #include <queue>
    #include <thread>
    #include <vector>

class ThreadPool 
{
    public:
    ThreadPool(size_t threads = std::thread::hardware_concurrency())
    {
        for(size_t i = 0; i < threads; ++i)
        workers.emplace_back([this] 
        {
            while(true)
            {
                std::function<void()> task;
                {
                    std::unique_lock<std::mutex> lk(mtx);
                    cv_tasks.wait(lk, [this]{return stopping || !tasks.empty(); });

                    if(stopping && tasks.empty()) return;

                    task = std::move(tasks.front());
                    tasks.pop();
                }

                task();
            }
        });
    }

    ~ThreadPool()
    {
        {
            std::lock_guard<std::mutex> lk(mtx);
            stopping = true;
        }

        cv_tasks.notify_all();
        for(auto& t : workers)
            t.join();
    }

    void enqueue(std::function<void()> t)
    {
        {
            std::lock_guard<std::mutex> lk(mtx);
            tasks.push(std::move(t));
        }
        cv_tasks.notify_one();
    }

    private:
    std::vector<std::thread>    workers;
    std::queue<std::function<void()>>            tasks;
    std::mutex                  mtx;
    std::condition_variable     cv_tasks;
    bool                        stopping = false;
};

#endif // !THREADPOOL_HEADER