#pragma once

#include <vector>

#include "FitnessDataSubject.h"

class FitnessData : public FitnessDataSubject{

public:
    FitnessData();

    void registerObserver(FitnessDataObserver* observer_) override;
    void removeObserver(FitnessDataObserver* observer_) override;
    void notifyObservers() override;

    void pushData(int steps_, int activeMinutes_, int calories_);
    void dailyReset();

    int getSteps() const { return _steps; }
    int getActiveMinutes() const { return _activeMinutes; }
    int getCalories() const { return _calories; }

private:
    int _steps;
    int _activeMinutes;
    int _calories;

    std::vector<FitnessDataObserver*> _observers;
}; // class FitnessData