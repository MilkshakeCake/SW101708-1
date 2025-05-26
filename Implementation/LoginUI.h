#ifndef LOGINUI_H
#define LOGINUI_H

#include <string>

// Forward Declaration
class Login;

class LoginUI
{
private:
    // Boundary class holds control reference to call function
    Login *controller;

public:
    // Constructor
    LoginUI(Login *loginController);

    // Call control for log in functionality
    void login(const std::string &id, const std::string &pw);
};

#endif // LOGINUI_H