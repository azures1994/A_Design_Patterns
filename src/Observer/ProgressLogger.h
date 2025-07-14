#pragma once

#include "FitnessData.h"
#include "FitnessDataObserver.h"

class ProgressLogger : public FitnessDataObserver {
public:
    void update(const FitnessData& data) override;
};