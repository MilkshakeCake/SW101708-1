// LoginUI.cpp
// Implements the LoginUI class which serves as the boundary for user login input/output.

#include "LoginUI.h"

#include <fstream>

#include "Login.h"

extern std::ofstream out_fp;

// Constructs a LoginUI and binds it to the corresponding Login controller.
// @param loginController Pointer to the Login control class.
LoginUI::LoginUI(Login *loginController)
{
    this->controller = loginController;
}

// Handles the login input from the user interface and delegates to the controller.
// Also writes the input data to the output file stream.
// @param id The user ID entered.
// @param pw The password entered.
void LoginUI::login(const std::string &id, const std::string &pw)
{
    controller->login(id, pw);

    out_fp << "> " << id << ' ' << pw << std::endl
           << std::endl;
}