#include "LogOut.h"
#include "LogOutUI.h"

LogOut::LogOut(MemberCollection *collection) : memberCollection(collection) {
    this->boundary = new LogOutUI(this);
}

std::string LogOut::logOut()
{
    std::string currentMemberID = memberCollection->getCurrentMember();
    memberCollection->logOut();
    return currentMemberID;
}