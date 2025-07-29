#pragma once

#include "TemperatureSensor.h"
#include "VendorA_Thermometer.h"
class VendorA_Adapter : public TemperatureSensor{
public:
    float getCelsius() override{
        float f = thermometer.readFahrenheit();
        return (f - 32) * 5 / 9; // Fahrenheit to Celsius
    }
private:
    VendorA_Thermometer thermometer;
}; // class VendorA_Adapter