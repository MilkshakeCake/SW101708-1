#include "SignUpUI.h"
#include "SignUp.h"
#include <iostream>

SignUpUI::SignUpUI(SignUp* signUpController) {
    this->controller = signUpController;
}

void SignUpUI::createAccount(const std::string& id, const std::string& pw, const std::string& phone) {
    controller->addMember(id, pw, phone);

    std::cout << "> " << id << ' ' << pw << ' ' << phone << std::endl;
}
