// LogOutUI.h
// Declares the LogOutUI class which provides a boundary interface for the logout functionality.

#ifndef LOGOUTUI_H
#define LOGOUTUI_H

// Forward Declaration
class LogOut;

// Boundary class for handling user logout, delegates functionality to the LogOut controller.
class LogOutUI
{
private:
    // Boundary class holds control reference to call function
    LogOut *controller;

public:
    // Constructs a LogOutUI object and associates it with a LogOut controller.
    // @param logOutController Pointer to the associated LogOut control class.
    LogOutUI(LogOut* logOutController);

    // Executes the logout process by calling the appropriate method in the controller.
    void logOut();
};

#endif // LOGOUTUI_H