#include <iostream>
#include "LiveActivityDisplay.h"

void LiveActivityDisplay::update(const FitnessData& data){
    printf("LiveActivityDisplay: Current Activity - Steps: %d, Active Minutes: %d, Calories: %d\n", 
            data.getSteps(), data.getActiveMinutes(), data.getCalories());
}