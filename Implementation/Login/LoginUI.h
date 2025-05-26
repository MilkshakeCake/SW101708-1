#ifndef LOGINUI_H
#define LOGINUI_H

#include <string>

class Login;

class LoginUI
{
private:
    Login *controller;

public:
    LoginUI(Login *loginController);
    void login(const std::string &id, const std::string &pw);
};

#endif // LOGINUI_H