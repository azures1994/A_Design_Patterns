#pragma once

#include "FitnessData.h"
#include "FitnessDataObserver.h"

class GoalNotifier : public FitnessDataObserver{

public:
    void update(const FitnessData& data) override;
}; // class GoalNotifier