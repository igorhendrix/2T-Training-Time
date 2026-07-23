#ifndef WORKOUT_HPP
#define WORKOUT_HPP

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Struct that contains the exercises from workout
struct Exercises {
    string exName;
    int series;
    int repetition;
    int time_execution; // execution time of 1 series
    int time_maxRest;
    int time_minRest;
    int time_finalRest; // the rest after all series
};

// Class Workout can have the amount of exercises the user wants
class Workout {
    private:

    string _muscle;
    vector<Exercises> _exercises;
    // int _rotation; ------- FOR THE FUTURE How many exercises the program can do rotation 

    public:

    void addWorkout(string muscle, int rotation);

    void calculateWorkout(int avTime); // in development - Avaliable time of the user at the moment
};





















#endif