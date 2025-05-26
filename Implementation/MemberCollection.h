#ifndef MEMBERCOLLECTION_H
#define MEMBERCOLLECTION_H

#include <vector>
#include "Member.h"

class MemberCollection
{
private:
    std::string currentMember;
    std::vector<Member> members;

public:
    // constructor and destructor
    MemberCollection();

    // getter and setter
    const std::string getCurrentMember() const;
    void setCurrentMember(const std::string &userID);
    const std::vector<Member> &getMembers() const;

    // functional implementation
    void logOut();
    void addMember(const Member &member);
    bool validateLogin(const std::string &id, const std::string &pw);
};

#endif // MEMBERCOLLECTION_H