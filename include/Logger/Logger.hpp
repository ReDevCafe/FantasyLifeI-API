#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>
#include <ostream>
#include <string_view>
#include <sstream>
#include <iostream>
#include <fstream>
#include <mutex>
#include <functional>
#include <Windows.h>
#include <filesystem>
#include <ctime>

class Logger
{
    private:
        template<typename... Args>
        void log(std::string_view level, Args&&... args)
        {
            mutex.lock();
            std::ostringstream oss;
            (oss << ... << std::forward<Args>(args));

            std::string content = prefix + oss.str();
            logFunc(std::string(level) + content + "\033[0m\n");
            std::cout.flags(std::ios::fmtflags(0));

            pushToFile(content);
            mutex.unlock();
        }

    public:
        Logger(
            const std::string& prefix
            ) :
            prefix("[" + prefix + "] "),
            logFunc([](const std::string& msg) { std::cout << msg; }) 
        {
            createFile(prefix);
        }

#if MLDEBUG
        template<typename... Args>
        void verbose(Args&&... args) { log("\033[36m", std::forward<Args>(args)...); }
#else 
        template<typename... Args>
        void verbose(Args&&... args) { pushToFile(std::forward<Args>(args)...); }
#endif
        template<typename... Args>
        void info(Args&&... args) { log("\033[37m", std::forward<Args>(args)...); }

        template<typename... Args>
        void warn(Args&&... args) { log("\033[33m", std::forward<Args>(args)...); }

        template<typename... Args>
        void error(Args&&... args) { log("\033[31m", std::forward<Args>(args)...); }

    private:
        void createFile(const std::string& prefix = "")
        {
            std::time_t now = std::time(nullptr);
            std::tm timeinfo{};
            localtime_s(&timeinfo, &now);

            char buf[64];
            std::strftime(buf, sizeof(buf), "%Y-%m-%d.%H.%M.%S", &timeinfo);
            std::string filename = "../../../Logs/FliML-" + prefix + std::string(buf) + ".log";
            std::filesystem::create_directories("../../../Logs");

            logFile.open(filename, std::ios::out | std::ios::trunc);
            if(!logFile.is_open()) throw std::filesystem::filesystem_error(
                "Failed to open log file",
                std::filesystem::path(filename),
                std::make_error_code(std::errc::io_error)
            );
        }

        template<typename... Args>
        void pushToFile(Args&&... args)
        {
            mutex.lock();
            std::ostringstream oss;
            (oss << ... << std::forward<Args>(args));

            pushToFile(prefix + oss.str());
            mutex.unlock();
        }

        void pushToFile(std::string stream)
        {
            logFile << stream << "\n";
        }
        
        std::string prefix;
        std::function<void(std::string)> logFunc;
        std::ofstream logFile;
        mutable std::mutex mutex;
};

#endif // LOGGER_HPP