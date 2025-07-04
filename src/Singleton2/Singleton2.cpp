
#include "Singleton2.h"

std::once_flag Singleton2::_initFlag;
std::unique_ptr<Singleton2, Singleton2::Deleter> Singleton2::_instance = nullptr;


Singleton2::Singleton2(std::string path_){
    std::cout << "=== Singleton2::Singleton2() ===" << std::endl;
    this->_path = path_;
}

Singleton2::~Singleton2(){
    std::cout << "=== Singleton2::~Singleton2() ===" << std::endl;
}

int Singleton2::init(std::string path_){
    std::call_once(Singleton2::_initFlag, [&path_](){
        Singleton2::_instance = std::unique_ptr<Singleton2, Singleton2::Deleter>(new Singleton2(path_));
    });

    return 0;
}

Singleton2& Singleton2::getInstance(){

    if (!Singleton2::_instance) {
        throw std::runtime_error("Singleton2::_instance has not been initialized. Call Singleton2::init() first.");
    }

    return *Singleton2::_instance;
}