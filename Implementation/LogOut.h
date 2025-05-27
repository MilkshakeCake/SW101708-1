#ifndef LOGOUT_H
#define LOGOUT_H

// LogOut.h
// Declares the LogOut class responsible for managing user logout operations and boundary interaction.

#include "MemberCollection.h"
#include <string>

// Forward Declaration
class LogOutUI;

// Control class for handling user logout and connecting to the boundary interface.
class LogOut
{
private:
    MemberCollection *memberCollection;
    LogOutUI *boundary;

public:
    // Constructs a LogOut object and associates it with a MemberCollection and boundary.
    // @param collection Pointer to the MemberCollection used for login tracking.
    LogOut(MemberCollection *collection);
    // Destructor to clean up the boundary object.
    ~LogOut();

    // Returns the associated UI boundary for logout operations.
    // @return Pointer to the LogOutUI.
    LogOutUI *getBoundary() const;

    // Performs the logout operation and clears the current member session.
    // @return The ID of the member who has been logged out.
    std::string logOut();
};

#endif // LOGOUT_H