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
    Member(const std::string &id, const std::string &pw, const std::string &phone)
        : memberID(id), memberPW(pw), memberPhoneNumber(phone), isAdmin(false) {};
    std::string getMemberID() const;
    std::string getMemberPW() const;
    std::string getMemberPhoneNumber() const;
    bool getIsAdmin() const;
};

#endif // MEMBER_H
