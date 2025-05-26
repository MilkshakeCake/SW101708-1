#ifndef SIGNUP_H
#define SIGNUP_H

#include <string>
#include "MemberCollection.h"

class SignUpUI;

class SignUp
{
private:
    MemberCollection *memberCollection;
    SignUpUI *boundary;

public:
    SignUp(MemberCollection *collection);
    void addMember(const std::string &id, const std::string &pw, const std::string &phone);
    bool validateSignUp(const std::string &id, const std::string &pw);
};

#endif
