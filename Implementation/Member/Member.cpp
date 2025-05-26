#include "Member.h"

std::string Member::getMemberID() const {
    return memberID;
}

std::string Member::getMemberPW() const {
    return memberPW;
}

std::string Member::getMemberPhoneNumber() const {
    return memberPhoneNumber;
}

bool Member::getIsAdmin() const {
    return isAdmin;
}