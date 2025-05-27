// LogOut.cpp
// Implements the LogOut class that handles user logout logic and UI interaction.

#include "LogOut.h"

#include "LogOutUI.h"

// Constructs a LogOut object and associates it with a boundary UI.
// @param collection Pointer to the MemberCollection used for managing login state.
LogOut::LogOut(MemberCollection *collection) : memberCollection(collection)
{
    this->boundary = new LogOutUI(this);
}

// Destructor that deletes the associated boundary UI.
LogOut::~LogOut() {
    delete boundary;
}

// Returns the boundary UI associated with this logout controller.
// @return Pointer to the LogOutUI.
LogOutUI *LogOut::getBoundary() const
{
    return boundary;
}

// Logs out the current user and returns their ID before logout.
// @return The ID of the user who was logged out.
std::string LogOut::logOut()
{
    std::string currentMemberID = memberCollection->getCurrentMember();
    memberCollection->logOut();
    return currentMemberID;
}