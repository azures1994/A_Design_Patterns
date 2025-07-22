#pragma once

#include "AdasWarning.h"

class ADAS{
public:
    ADAS(AdasWarning* adasWarning_) : _adasWarning(adasWarning_){};
    virtual ~ADAS() = default;

    virtual int run(){
        this->_adasWarning->LDW();
        this->_adasWarning->FCW();
        this->_adasWarning->PCW();

        return 0;
    }

private:
    AdasWarning* _adasWarning;
};