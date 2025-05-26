#include "LoginUI.h"
#include "Login.h"
#include <fstream>
extern std::ofstream out_fp;

LoginUI::LoginUI(Login *loginController) {
    this->controller = loginController;
}

void LoginUI::login(const std::string &id, const std::string &pw)
{
    if (controller->login(id, pw))
        out_fp << "> " << id << ' ' << pw << std::endl << std::endl;
}