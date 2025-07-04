#include <iostream>
#include <string>
#include <memory>      // std::unique_ptr
#include <mutex>       // (-pthread) std::once_flag, std::call_once
#include <stdexcept>   // std::runtime_error
#include <functional> // function

class Singleton2{

public:

    struct Deleter{
        void operator()(Singleton2* p){
            delete p;
        }
    };

    static int init(std::string path_);
    static Singleton2& getInstance();

private:
    Singleton2(std::string path_);
    ~Singleton2();
    Singleton2(const Singleton2&) = delete;
    Singleton2& operator=(const Singleton2&) = delete;

private:
    std::string _path;

    static std::once_flag _initFlag;
    static std::unique_ptr<Singleton2, Singleton2::Deleter> _instance;

}; // class Singleton2