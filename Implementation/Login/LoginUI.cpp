#include "LoginUI.h"
#include "Login.h"
#include <iostream>

LoginUI::LoginUI(Login *loginController) {
    this->controller = loginController;
}

void LoginUI::login(const std::string &id, const std::string &pw)
{
    if (controller->login(id, pw))
        std::cout << "> " << id << ' ' << pw << std::endl;
}