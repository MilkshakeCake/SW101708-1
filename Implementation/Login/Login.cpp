#include "Login.h"
#include "LoginUI.h"

Login::Login(MemberCollection *collection) : memberCollection(collection)
{
    boundary = new LoginUI(this);
}

Login::~Login() {
    delete boundary;
}

bool Login::login(const std::string &id, const std::string &pw)
{
    return memberCollection->validateLogin(id, pw);
}


LoginUI *Login::getBoundary()
{
    return boundary;
}