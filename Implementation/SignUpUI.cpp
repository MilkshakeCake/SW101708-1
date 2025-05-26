#include "SignUpUI.h"
#include "SignUp.h"
#include <fstream>
extern std::ofstream out_fp;

SignUpUI::SignUpUI(SignUp *signUpController)
{
    this->controller = signUpController;
}

void SignUpUI::createAccount(const std::string &id, const std::string &pw, const std::string &phone)
{
    controller->addMember(id, pw, phone);

    out_fp << "> " << id << ' ' << pw << ' ' << phone << std::endl
           << std::endl;
}
