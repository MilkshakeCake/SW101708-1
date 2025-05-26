#ifndef SIGNUPUI_H
#define SIGNUPUI_H

#include <string>

class SignUp;

class SignUpUI
{
private:
    SignUp *controller;

public:
    SignUpUI(SignUp *signUpController);
    void createAccount(const std::string &id, const std::string &pw, const std::string &phone);
};

#endif // SIGNUPUI_H