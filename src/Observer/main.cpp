#include <iostream>

#include "FitnessData.h"
#include "GoalNotifier.h"
#include "LiveActivityDisplay.h"
#include "ProgressLogger.h"

int test(){

    FitnessData fitnessData;

    GoalNotifier goalNotifier;
    LiveActivityDisplay liveActivityDisplay;
    ProgressLogger progressLogger;

    fitnessData.registerObserver(&goalNotifier);
    fitnessData.registerObserver(&liveActivityDisplay);
    fitnessData.registerObserver(&progressLogger);

    // Simulate fitness data updates
    printf("=== Fitness App Observer Demo ===\n");

    // First update
    printf("Update 1:\n");
    fitnessData.pushData(5000, 15, 1000);

    // Second update
    printf("Update 2:\n");
    fitnessData.pushData(12000, 45, 2500);

    // Daily reset
    printf("Daily Reset: \n");
    fitnessData.dailyReset();

    return 0;
}

int main(int argc, char* argv[]){

    test();

    return 0;
}