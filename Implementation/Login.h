#ifndef LOGIN_H
#define LOGIN_H

#include <string>
#include "MemberCollection.h"

// Forward Declaration
class LoginUI;

class Login
{
private:
    // Control class holds reference to entity and boundary classes
    MemberCollection *memberCollection;
    LoginUI *boundary;

public:
    // Constructor
    Login(MemberCollection *collection);
    // Deconstructor
    ~Login();

    // Get boundary class reference
    LoginUI *getBoundary();

    // Log in functionality
    void login(const std::string &id, const std::string &pw);
};

#endif // LOGIN_H