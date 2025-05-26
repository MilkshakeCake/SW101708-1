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
    // constructor and destructor
    SignUp(MemberCollection *collection);
    ~SignUp();

    // getter and setter
    SignUpUI *getBoundary();

    // functional implementation
    void addMember(const std::string &id, const std::string &pw, const std::string &phone);
    bool validateSignUp(const std::string &id, const std::string &pw);
};

#endif // SIGNUP_H