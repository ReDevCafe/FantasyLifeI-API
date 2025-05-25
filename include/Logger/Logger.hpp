#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>
#include <ostream>
#include <sstream>
#include <iostream>
#include <mutex>
#include <functional>

class Logger
{
    protected:
        template<typename... Args>
        void log(std::string_view level, Args&&... args)
        {
            std::ostringstream oss;
            (oss << ... << std::forward<Args>(args));
            logFunc(std::string(level) + prefix + oss.str() + "\033[0m\n");
        }

    public:
        Logger(
            const std::string& prefix,
            std::function<void(const std::string&)> logFunc
        ) : 
            prefix("[" + prefix + "] "),
            logFunc(std::move(logFunc))
        {}

        // Usefull only when you have your own console
        Logger(
            const std::string& prefix
            ) :
            prefix("[" + prefix + "] "),
            logFunc([](const std::string& msg) { std::cout << msg; }) 
        {}

        template<typename... Args>
        void info(Args&&... args) { log("\033[37m", std::forward<Args>(args)...); }

        template<typename... Args>
        void warn(Args&&... args) { log("\033[33m", std::forward<Args>(args)...); }

        template<typename... Args>
        void error(Args&&... args) { log("\033[31m", std::forward<Args>(args)...); }

    private:
        std::string prefix;
        std::function<void(std::string)> logFunc;
};

#endif // LOGGER_HPP