#include <iostream>

#include "TemperatureSensor.h"
#include "VendorA_Adapter.h"

int main(int argc, char* argv[]){

    TemperatureSensor* sensor = new VendorA_Adapter();

    std::cout << "Output: " << sensor->getCelsius() << std::endl;

    return 0;
}