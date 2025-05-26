#include "LogOutUI.h"
#include "LogOut.h"
#include <iostream>

LogOutUI::LogOutUI(LogOut* logOutController) {
    this->controller = logOutController;
}

void LogOutUI::logOut() {
    std::cout << controller->logOut() << std::endl;
}