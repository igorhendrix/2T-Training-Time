#include "Workout.hpp"

void Workout::addWorkout(string muscle, int rotation){
    Exercises newExercises;
    cout << "Exercise's name: ";
    cin >> newExercises.exName;

    cout << "Exercise's number of series: ";
    cin >> newExercises.series;

    cout << "Exercise's execution time: ";
    cin >> newExercises.time_execution;

    // cin >> newExercises.repetition; ------- FOR THE FUTURE
    cout << "Exercise's maximum rest time: ";
    cin >> newExercises.time_maxRest;

    cout << "Exercise's minimum rest time: ";
    cin >> newExercises.time_minRest;

    cout << "Exercise's final rest time: ";
    cin >> newExercises.time_finalRest;

    // Add to the vector that is in the Workout class
    _exercises.push_back(newExercises);
}

void Workout::calculateWorkout(int avTime){
    // input the avTime (Avaliable time) at the funcion call
    // see the exercises for today
    // by the avTime, calculate the rest of each exercise
    // FIRST IDEA OF LOGIC: get the total and do a proportional calculus, basically the same to do some DEMAND PLANS
    // show the exercises with the time of each one

}