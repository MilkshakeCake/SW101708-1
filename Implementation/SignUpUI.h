#ifndef SIGNUPUI_H
#define SIGNUPUI_H

#include <string>

class SignUp;

class SignUpUI
{
private:
    // Boundary class holds control reference to call function
    SignUp *controller;

public:
    // Constructor
    SignUpUI(SignUp *signUpController);
    // Call control to 
    void createAccount(const std::string &id, const std::string &pw, const std::string &phone);
};

#endif // SIGNUPUI_H