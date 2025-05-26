#ifndef MEMBERCOLLECTION_H
#define MEMBERCOLLECTION_H

#include <vector>
#include "Member.h"

class MemberCollection
{
private:
    // status variable to hold currently logged in member
    // cannot hold in control since multiple controls need access to the status variable
    std::string currentMember;
    std::vector<Member> members;

public:
    // Constructor
    MemberCollection();

    // Get current member
    std::string getCurrentMember() const;
    // Set current member
    void setCurrentMember(const std::string &userID);

    // functional implementation
    void logOut();
    void addMember(const std::string &id, const std::string &pw, const std::string &phone);
};

#endif // MEMBERCOLLECTION_H