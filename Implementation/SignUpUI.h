#ifndef SIGNUPUI_H
#define SIGNUPUI_H

// SignUpUI.h
// Declares the SignUpUI class which serves as the user interface for member sign-up functionality.

#include <string>

class SignUp;

// Boundary class for handling user input during the sign-up process and delegating actions to the SignUp controller.
class SignUpUI
{
private:
    // Boundary class holds control reference to call function
    SignUp *controller;

public:
    // Constructs a SignUpUI and associates it with a SignUp controller.
    // @param signUpController Pointer to the SignUp control class.
    SignUpUI(SignUp *signUpController);
    // Initiates the account creation process via the controller using provided user credentials.
    // @param id New member's ID.
    // @param pw New member's password.
    // @param phone New member's phone number.
    void createAccount(const std::string &id, const std::string &pw, const std::string &phone);
};

#endif // SIGNUPUI_H