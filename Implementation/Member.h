#ifndef MEMBER_H
#define MEMBER_H

#include <string>

class Member
{
private:
    std::string memberID;
    std::string memberPW;
    std::string memberPhoneNumber;
    bool isAdmin;

public:
    // Constructor
    Member(const std::string &id, const std::string &pw, const std::string &phone = "", bool admin = false)
        : memberID(id), memberPW(pw), memberPhoneNumber(phone), isAdmin(admin) {};
    
    // getter functions
    std::string getMemberID() const;
    std::string getMemberPW() const;
    std::string getMemberPhoneNumber() const;
    bool getIsAdmin() const;
};

#endif // MEMBER_H
