#pragma once

#include "AdasWarning.h"

class AdasWarningv1 : public AdasWarning{

public:
    AdasWarningv1() = default;
    ~AdasWarningv1() = default;

    virtual void LDW() override;
    virtual void FCW() override;
    virtual void PCW() override;

}; // class AdasWarningv1