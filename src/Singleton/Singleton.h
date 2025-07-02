#pragma once

#include <iostream>

class Singleton{
public:

    static Singleton& getInstance(){
        static Singleton instance;
        return instance;
    }

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    void doSomething(){
        // do something
        std::cout << "do something" << std::endl;
        
    }

private:
    
    Singleton() = default;
    ~Singleton() = default;

}; // class Singleton
