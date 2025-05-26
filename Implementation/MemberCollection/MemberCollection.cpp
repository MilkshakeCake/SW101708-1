#include "MemberCollection.h"

const std::string MemberCollection::getCurrentMember() const
{
    return currentMember;
}

const std::vector<Member> &MemberCollection::getMembers() const
{
    return members;
}

void MemberCollection::logOut()
{
    currentMember = "";
    return;
}

void MemberCollection::addMember(const Member &member)
{
    members.push_back(member);
    return;
}

bool MemberCollection::validateLogin(const std::string &id, const std::string &pw)
{
    for (Member &i : members)
    {
        if (i.getMemberID() != id)
            continue;
        if (i.getMemberPW() == pw)
        {
            return true;
        }
    }
    return false;
}