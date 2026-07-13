#ifndef USER_HPP
#define USER_HPP

#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

class User {
    private:

    string _name;
    string _login;
    string _pwrd; // Password
    bool _isLogged; // logged-in state

    public:
    
    // Constructor
    User(string login, string pwrd);

    // Use of getters and setters 
    string getName() const;
    string getLogin() const;
    string getPwrd() const;
    
    void setName(string newName);
    void setLogin(string newLogin);
    void setPwrd(string newPwrd);
    
    bool userTest(string loginTest, string pwrdTest);
    void logout();

    virtual ~User() = default;
};

#endif