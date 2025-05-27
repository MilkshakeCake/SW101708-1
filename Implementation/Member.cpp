// Member.cpp
// Implements the Member class, providing access to member credentials and attributes.

#include "Member.h"

// Returns the ID of the member.
// @return A string containing the member ID.
std::string Member::getMemberID() const {
    return memberID;
}

// Returns the password of the member.
// @return A string containing the member password.
std::string Member::getMemberPW() const {
    return memberPW;
}

// Returns the phone number of the member.
// @return A string containing the member's phone number.
std::string Member::getMemberPhoneNumber() const {
    return memberPhoneNumber;
}

// Returns whether the member has administrator privileges.
// @return True if the member is an admin, false otherwise.
bool Member::getIsAdmin() const {
    return isAdmin;
}