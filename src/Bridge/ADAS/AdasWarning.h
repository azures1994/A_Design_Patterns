#pragma once

class AdasWarning{
public:
    AdasWarning() = default;
    virtual ~AdasWarning() = default;

    virtual void LDW() = 0;
    virtual void FCW() = 0;
    virtual void PCW() = 0;

}; // class AdasWarning