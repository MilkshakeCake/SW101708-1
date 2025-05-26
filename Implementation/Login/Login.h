#ifndef LOGIN_H
#define LOGIN_H

#include <string>
#include "MemberCollection.h"

class LoginUI;

class Login
{
private:
    MemberCollection *memberCollection;
    LoginUI *boundary;

public:
    Login(MemberCollection *collection);
    bool login(const std::string &id, const std::string &pw);
};

#endif // LOGIN_H