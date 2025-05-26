#include "MemberCollection.h"

MemberCollection::MemberCollection()
{
    Member *admin = new Member("admin", "admin", "", true);
    members.push_back(*admin);
}

std::string MemberCollection::getCurrentMember() const
{
    return currentMember;
}

void MemberCollection::setCurrentMember(const std::string &userID) {
    currentMember = userID;
}

void MemberCollection::logOut()
{
    currentMember = "";
    return;
}

void MemberCollection::addMember(const std::string &id, const std::string &pw, const std::string &phone)
{
    Member newMember(id, pw, phone);
    members.push_back(newMember);
    return;
}