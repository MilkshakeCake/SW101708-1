#ifndef LOGOUT_H
#define LOGOUT_H

#include "MemberCollection.h"
#include <string>

class LogOutUI;

class LogOut
{
private:
    MemberCollection *memberCollection;
    LogOutUI *boundary;

public:
    LogOut(MemberCollection *collection);
    std::string logOut();
};

#endif