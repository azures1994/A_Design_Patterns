#pragma once

#include "AdasWarning.h"

class AdasWarningv2 : public AdasWarning {
public:
    AdasWarningv2() = default;
    ~AdasWarningv2() = default;

    virtual void FCW() override;
    virtual void LDW() override;
    virtual void PCW() override;
}; // class AdasWarningv2