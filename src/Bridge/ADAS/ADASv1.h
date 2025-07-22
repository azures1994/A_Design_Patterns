#pragma once

#include "ADAS.h"

class ADASv1 : public ADAS{
public:
    ADASv1(AdasWarning* adasWarning_): ADAS(adasWarning_){}
    ~ADASv1() = default;

    int run() override;

}; // class ADASv1