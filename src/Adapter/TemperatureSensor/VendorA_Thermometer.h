#pragma once

// Manufacturer A's sensor(returns Fahrenheit)
class VendorA_Thermometer{
public:
    float readFahrenheit(){
       // simulate hardware read
       return 77.0f;  
    }
}; // VendorA_Thermometer