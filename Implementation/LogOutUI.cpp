// LogOutUI.cpp
// Implements the LogOutUI class which provides the user interface for the logout operation.

#include "LogOutUI.h"

#include <fstream>

#include "LogOut.h"
extern std::ofstream out_fp;

// Constructs a LogOutUI object and associates it with a LogOut controller.
// @param logOutController Pointer to the LogOut control class.
LogOutUI::LogOutUI(LogOut *logOutController)
{
    this->controller = logOutController;
}

// Handles the logout process by invoking the controller and outputting the result.
void LogOutUI::logOut()
{
    out_fp << controller->logOut() << std::endl
           << std::endl;
}