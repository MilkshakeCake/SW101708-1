#ifndef MEMBERCOLLECTION_H
#define MEMBERCOLLECTION_H

// MemberCollection.h
// Declares the MemberCollection class that manages member data and tracks login status.

#include <vector>
#include "Member.h"

// Manages a collection of members and tracks the currently logged-in member.
class MemberCollection
{
private:
    // status variable to hold currently logged in member
    // cannot hold in control since multiple controls need access to the status variable
    std::string currentMember;
    std::vector<Member> members;

public:
    // Constructs a MemberCollection and initializes internal member storage.
    // Constructor
    MemberCollection();

    // Returns the ID of the currently logged-in member.
    // @return A string containing the current member's ID.
    // Get current member
    std::string getCurrentMember() const;
    // Sets the current member to the specified user ID.
    // @param userID The ID of the member to mark as currently logged in.
    // Set current member
    void setCurrentMember(const std::string &userID);

    // Logs out the current user by clearing the login status.
    // functional implementation
    void logOut();
    // Adds a new member to the collection.
    // @param id The member's ID.
    // @param pw The member's password.
    // @param phone The member's phone number.
    void addMember(const std::string &id, const std::string &pw, const std::string &phone);
};

#endif // MEMBERCOLLECTION_H