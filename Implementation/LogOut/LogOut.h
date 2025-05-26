#ifndef LOGOUT_H
#define LOGOUT_H

#include "../MemberCollection/MemberCollection.h"
#include <string>

class LogOutUI;

class LogOut
{
private:
    MemberCollection *memberCollection;
    LogOutUI *boundary;

public:
    // constructor and destructor
    LogOut(MemberCollection *collection);
    ~LogOut();

    // getter and setter
    LogOutUI *getBoundary();

    // functional implementation
    std::string logOut();
};

#endif // LOGOUT_H