#include "Workout.hpp"

void Workout::addWorkout(string muscle, int rotation){
    Exercises newExercises;

    cin >> newExercises.exName;
    cin >> newExercises.series;
    cin >> newExercises.repetition;
    cin >> newExercises.maxRest;
    cin >> newExercises.minRest;

    // Add to the vector that is in the Workout class
    _exercises.push_back(newExercises);
}

void Workout::calculateWorkout(){
    // to do
}