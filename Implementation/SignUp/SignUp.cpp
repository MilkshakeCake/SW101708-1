#include "SignUp.h"
#include "SignUpUI.h"

SignUp::SignUp(MemberCollection *collection) : memberCollection(collection)
{
    boundary = new SignUpUI(this);
}

void SignUp::addMember(const std::string &id, const std::string &pw, const std::string &phone)
{
    if (!validateSignUp(id, pw))
    {
        return;
    }
    Member newMember(id, pw, phone);
    memberCollection->addMember(newMember);
}

bool SignUp::validateSignUp(const std::string &id, const std::string &pw)
{
    if (id.empty() || pw.empty()) return false;
    for (Member i : memberCollection->getMembers())
    {
        if (i.getMemberID() == id)
        {
            return false;
        }
    }
    return true;
}
