#include "SignUp.h"

#include "SignUpUI.h"

SignUp::SignUp(MemberCollection *collection) : memberCollection(collection)
{
    boundary = new SignUpUI(this);
}

SignUp::~SignUp()
{
    delete boundary;
}

SignUpUI *SignUp::getBoundary()
{
    return boundary;
}

void SignUp::addMember(const std::string &id, const std::string &pw, const std::string &phone)
{
    memberCollection->addMember(id, pw, phone);
    return;
}