#ifndef LOGOUT_H
#define LOGOUT_H

#include "MemberCollection.h"
#include <string>

// Forward Declaration
class LogOutUI;

class LogOut
{
private:
    MemberCollection *memberCollection;
    LogOutUI *boundary;

public:
    // Constructor
    LogOut(MemberCollection *collection);
    // Destructor
    ~LogOut();

    // Get boundary class reference
    LogOutUI *getBoundary() const;

    // functional implementation
    std::string logOut();
};

#endif // LOGOUT_H