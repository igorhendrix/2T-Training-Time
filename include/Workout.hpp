#ifndef WORKOUT_HPP
#define WORKOUT_HPP

#include <iostream>
#include <string>
#include <vector>


using namespace std;

// Struct that contains the exercises from workout
struct Exercises {
    string exName;
    int repetition;
    int maxRest;
    int minRest;
};

// Class Workout can have the amount of exercises the user wants
class Workout {
    private:

    string _muscle;
    vector<Exercises> _exercises;
    int rotation; // How many exercises the program can do rotation 

    public:

    void addWorkout(string _muscle, int rotation);




}





















#endif