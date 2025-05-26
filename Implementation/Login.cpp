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
    bool loginSuccess = memberCollection->validateLogin(id, pw);
    if(loginSuccess) {
        memberCollection->setCurrentMember(id);
    }
    
    return loginSuccess;
}


LoginUI *Login::getBoundary()
{
    return boundary;
}