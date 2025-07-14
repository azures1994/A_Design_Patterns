#include <iostream>
#include <algorithm>
#include "FitnessData.h"

FitnessData::FitnessData() : _steps(0), _activeMinutes(0), _calories(0) {}

void FitnessData::registerObserver(FitnessDataObserver* observer_){
    this->_observers.push_back(observer_);
}
    
void FitnessData::removeObserver(FitnessDataObserver* observer_){
    auto it = std::find(this->_observers.begin(), this->_observers.end(), observer_);
    if(it != this->_observers.end()){
        this->_observers.erase(it);
    }
}
    
void FitnessData::notifyObservers(){
    for(auto& observer : this->_observers){
        observer->update(*this);
    }
}

void FitnessData::pushData(int steps_, int activeMinutes_, int calories_){
    this->_steps = steps_;
    this->_activeMinutes = activeMinutes_;
    this->_calories = calories_;

    printf("FitnessData: New data received - Steps: %d, Active Minutes: %d, Calories: %d\n", 
           this->_steps, this->_activeMinutes, this->_calories);
    
    this->notifyObservers();
}

void FitnessData::dailyReset(){
    this->_steps = 0;
    this->_activeMinutes = 0;
    this->_calories = 0;

    printf("FitnessData: Daily reset performed.\n");
    this->notifyObservers();    
}