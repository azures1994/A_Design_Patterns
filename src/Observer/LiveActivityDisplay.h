#pragma once

#include "FitnessData.h"
#include "FitnessDataObserver.h"

class LiveActivityDisplay : public FitnessDataObserver {
public:
    void update(const FitnessData& data) override;
}; // class LiveActivityDisplay