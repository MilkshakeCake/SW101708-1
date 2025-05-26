#ifndef LOGOUTUI_H
#define LOGOUTUI_H

// Forward Declaration
class LogOut;

class LogOutUI
{
private:
    // Boundary class holds control reference to call function
    LogOut *controller;

public:
    // Constructor
    LogOutUI(LogOut* logOutController);

    // Call control for log out functionality
    void logOut();
};

#endif // LOGOUTUI_H