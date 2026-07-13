#include "User.hpp"
#include <iostream>

using namespace std;

//Contructor
User::User(string login, string pwrd) {
    _login = login;
    _pwrd = pwrd;
    _isLogged = false;
}

//Getters
string User::getName() const{
    return _name;
}

string User::getLogin() const{
    return _login;
}

string User::getPwrd() const{
    return _pwrd;
}

//Setters

void User::setName(string newName){
    if(!newName.empty()){
        _name = newName;
    }
}

void User::setLogin(string newLogin){
    if(!newLogin.empty()){
        _login = newLogin; 
    }
}

// The password must have at least 8 characters
void User::setPwrd(string newPwrd){
    for(int i=0; i<1; ){
        if(newPwrd.length() >= 8){
            _pwrd = newPwrd;
            cout << "Password updated!" << endl;
            i = 1;
        } else{
            cout << "Error: You password must have at least 8 characters" << endl;
        }
    }
}

// Login test

bool User::userTest(string loginTest, string pwrdTest){
    if(loginTest == _login && pwrdTest == _pwrd){
        _isLogged = true;
        return true;
    } else{
        return false;
    }
}

// Logout
void User::logout(){
    _isLogged = false;
    cout << "Logout sucessfully." << endl;
}

