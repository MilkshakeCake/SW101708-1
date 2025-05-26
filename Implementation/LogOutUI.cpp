#include "LogOutUI.h"
#include "LogOut.h"
#include <fstream>
extern std::ofstream out_fp;

LogOutUI::LogOutUI(LogOut *logOutController)
{
    this->controller = logOutController;
}

void LogOutUI::logOut()
{
    out_fp << controller->logOut() << std::endl
           << std::endl;
}