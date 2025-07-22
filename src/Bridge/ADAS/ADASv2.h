#pragma once

#include "ADAS.h"

class ADASv2 : public ADAS {
public:
    ADASv2(AdasWarning* adasWarning_): ADAS(adasWarning_){}
    ~ADASv2() = default;

    int run() override;
    
}; // class ADASv2