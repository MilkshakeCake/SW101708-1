#include "LogOut.h"
#include "LogOutUI.h"
#include <iostream>

LogOut::LogOut(MemberCollection *collection) : memberCollection(collection)
{
    this->boundary = new LogOutUI(this);
}

LogOut::~LogOut() {
    delete boundary;
}

LogOutUI *LogOut::getBoundary()
{
    return boundary;
}

std::string LogOut::logOut()
{
    std::string currentMemberID = memberCollection->getCurrentMember();
    memberCollection->logOut();
    return currentMemberID;
}