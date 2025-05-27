// LoginUI.h
// Declares the LoginUI class which acts as the boundary for login-related user input.

#ifndef LOGINUI_H
#define LOGINUI_H

#include <string>

// Forward Declaration
class Login;

// Boundary class responsible for receiving login input and delegating actions to the Login controller.
class LoginUI
{
private:
    // Boundary class holds control reference to call function
    Login *controller;

public:
    // Constructs a LoginUI object and associates it with a Login controller.
    // @param loginController Pointer to the associated Login control class.
    LoginUI(Login *loginController);

    // Handles the login action by forwarding input to the controller.
    // @param id The user ID.
    // @param pw The user password.
    void login(const std::string &id, const std::string &pw);
};

#endif // LOGINUI_H