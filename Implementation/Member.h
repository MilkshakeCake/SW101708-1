#// Member.h
#// Declares the Member class which stores and provides access to user account information.

#ifndef MEMBER_H
#define MEMBER_H

#include <string>

// Represents a member with ID, password, phone number, and admin status.
class Member
{
private:
    std::string memberID;
    std::string memberPW;
    std::string memberPhoneNumber;
    bool isAdmin;

public:
    // Constructs a Member object with given credentials and attributes.
    // @param id Member ID.
    // @param pw Member password.
    // @param phone Optional phone number.
    // @param admin Boolean indicating if the member has admin privileges.
    Member(const std::string &id, const std::string &pw, const std::string &phone = "", bool admin = false)
        : memberID(id), memberPW(pw), memberPhoneNumber(phone), isAdmin(admin) {};
    
    // Returns the member's ID.
    // @return A string containing the member ID.
    std::string getMemberID() const;
    // Returns the member's password.
    // @return A string containing the member password.
    std::string getMemberPW() const;
    // Returns the member's phone number.
    // @return A string containing the phone number.
    std::string getMemberPhoneNumber() const;
    // Indicates if the member has admin privileges.
    // @return True if the member is an admin, false otherwise.
    bool getIsAdmin() const;
};

#endif // MEMBER_H
