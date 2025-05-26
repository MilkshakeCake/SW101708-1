#ifndef LOGOUTUI_H
#define LOGOUTUI_H

class LogOut;

class LogOutUI
{
private:
    LogOut *controller;

public:
    LogOutUI(LogOut* logOutController);
    void logOut();
};

#endif // LOGOUTUI_H