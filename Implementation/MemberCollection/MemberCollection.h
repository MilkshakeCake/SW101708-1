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
// getter functions
    const std::string getCurrentMember() const;
    const std::vector<Member> &getMembers() const;

// functional implementations
    void logOut();
    void addMember(const Member &member);
    bool validateLogin(const std::string &id, const std::string &pw);
};

#endif