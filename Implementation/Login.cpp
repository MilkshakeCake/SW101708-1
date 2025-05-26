#include "Login.h"
#include "LoginUI.h"

Login::Login(MemberCollection *collection) : memberCollection(collection)
{
    boundary = new LoginUI(this);
}

Login::~Login() {
    delete boundary;
}

void Login::login(const std::string &id, const std::string &pw)
{
    memberCollection->setCurrentMember(id);
}

LoginUI *Login::getBoundary()
{
    return boundary;
}