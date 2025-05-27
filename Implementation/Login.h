#// Login.h
#// Declares the Login class that handles user authentication and provides a boundary interface.
#ifndef LOGIN_H
#define LOGIN_H

#include <string>
#include "MemberCollection.h"

// Forward Declaration
class LoginUI;

// Controls the login process, connecting the user interface with the member data collection.
class Login
{
private:
    // Control class holds reference to entity and boundary classes
    MemberCollection *memberCollection;
    LoginUI *boundary;

public:
    // Constructs a Login object and associates it with a MemberCollection.
    // @param collection Pointer to the MemberCollection used for authentication.
    Login(MemberCollection *collection);

    // Destroys the Login object and cleans up the UI boundary.
    ~Login();

    // Returns a pointer to the UI boundary associated with this login controller.
    // @return Pointer to the LoginUI object.
    LoginUI *getBoundary();

    // Logs in a user with the provided credentials.
    // @param id The user's identifier.
    // @param pw The user's password (currently unused).
    void login(const std::string &id, const std::string &pw);
};

#endif // LOGIN_H