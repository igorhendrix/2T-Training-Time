#ifndef USER_HPP
#define USER_HPP

#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

class User {
    private:

    string name;
    string login;
    string pwrd; // Password

    public:
    
    // Use of getters and setters 
    string getName() const;
    string getLogin() const;
    
    void setName(string newName);
    void setLogin(string newLogin);
    void setPwrd(string newPwrd);
    
    virtual ~User() = default;
};

#endif