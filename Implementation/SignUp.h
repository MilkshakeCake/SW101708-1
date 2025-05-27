// SignUp.h
// Declares the SignUp class that handles new member registration and links to the UI boundary.

#ifndef SIGNUP_H
#define SIGNUP_H

#include <string>

#include "MemberCollection.h"

class SignUpUI;

// Control class for user sign-up, managing member addition and communicating with the SignUp UI.
class SignUp
{
private:
    MemberCollection *memberCollection;
    SignUpUI *boundary;

public:
    // Constructs a SignUp object and links it to the member collection and boundary UI.
    // @param collection Pointer to the MemberCollection where new members will be registered.
    SignUp(MemberCollection *collection);

    // Destructor to release resources associated with the UI boundary.
    ~SignUp();

    // Returns the associated boundary UI for sign-up interaction.
    // @return Pointer to the SignUpUI.
    SignUpUI *getBoundary();

    // Adds a new member with the provided ID, password, and phone number.
    // @param id The member's identifier.
    // @param pw The member's password.
    // @param phone The member's phone number.
    void addMember(const std::string &id, const std::string &pw, const std::string &phone);
};

#endif // SIGNUP_H