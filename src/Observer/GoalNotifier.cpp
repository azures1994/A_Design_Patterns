#include <iostream>
#include "GoalNotifier.h"

void GoalNotifier::update(const FitnessData& data){
    if(data.getSteps() >= 10000){
        printf("GoalNotifier: Congratulations! You've reached your daily step goal!\n");
    }

    if(data.getActiveMinutes() >= 30){
        printf("GoalNotifier: Great job! You've met your daily active minutes goal.\n");
    }

    if(data.getCalories() >= 2000){
        printf("GoalNotifier: Well done! You've burned enough calories today.\n");
    }
}