#include <iostream>

#include "Singleton2.h"

int main(int argc, char* argv[]){

    Singleton2::init("config.json");
    Singleton2& instance = Singleton2::getInstance();

    return 0;
}