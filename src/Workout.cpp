#include "Workout.hpp"

void Workout::addWorkout(string muscle, int rotation){
    Exercises newExercises;

    cin >> newExercises.exName;
    cin >> newExercises.series;
    // cin >> newExercises.repetition; ------- FOR THE FUTURE
    cin >> newExercises.time_maxRest;
    cin >> newExercises.time_minRest;
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

    cout << "Please insert the avaliable time for today's Workout: " << endl;

}