// SignUpUI.cpp
// Implements the SignUpUI class which provides a user interface for creating new member accounts.
#include "SignUpUI.h"

#include <fstream>

#include "SignUp.h"
extern std::ofstream out_fp;

// Constructs a SignUpUI object and associates it with a SignUp controller.
// @param signUpController Pointer to the SignUp control class.
SignUpUI::SignUpUI(SignUp *signUpController)
{
    this->controller = signUpController;
}

// Creates a new account by delegating to the controller and outputs the result.
// @param id New member's identifier.
// @param pw New member's password.
// @param phone New member's phone number.
void SignUpUI::createAccount(const std::string &id, const std::string &pw, const std::string &phone)
{
    controller->addMember(id, pw, phone);

    out_fp << "> " << id << ' ' << pw << ' ' << phone << std::endl
           << std::endl;
}
