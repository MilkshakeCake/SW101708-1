// MemberCollection.cpp
// Implements the MemberCollection class that manages a list of members and the current session.

#include "MemberCollection.h"

// Constructs a MemberCollection and initializes it with a default admin account.
MemberCollection::MemberCollection()
{
    Member *admin = new Member("admin", "admin", "", true);
    members.push_back(*admin);
}

// Returns the ID of the currently logged-in member.
// @return A string containing the current member's ID.
std::string MemberCollection::getCurrentMember() const
{
    return currentMember;
}

// Sets the current logged-in member by ID.
// @param userID The ID of the member to be set as currently logged in.
void MemberCollection::setCurrentMember(const std::string &userID) {
    currentMember = userID;
}

// Logs out the current user by clearing the current member ID.
void MemberCollection::logOut()
{
    currentMember = "";
    return;
}

// Adds a new member to the collection.
// @param id The member's ID.
// @param pw The member's password.
// @param phone The member's phone number.
void MemberCollection::addMember(const std::string &id, const std::string &pw, const std::string &phone)
{
    Member newMember(id, pw, phone);
    members.push_back(newMember);
    return;
}