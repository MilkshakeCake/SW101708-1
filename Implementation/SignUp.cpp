// SignUp.cpp
// Implements the SignUp class which handles user sign-up logic and UI interaction.

#include "SignUp.h"

#include "SignUpUI.h"

// Constructs a SignUp object and initializes its boundary interface.
// @param collection Pointer to the MemberCollection where new members are added.
SignUp::SignUp(MemberCollection *collection) : memberCollection(collection)
{
    boundary = new SignUpUI(this);
}

// Destructor that cleans up the boundary interface.
SignUp::~SignUp()
{
    delete boundary;
}

// Returns the associated UI boundary for user sign-up.
// @return Pointer to the SignUpUI.
SignUpUI *SignUp::getBoundary()
{
    return boundary;
}

// Adds a new member to the collection using the provided ID, password, and phone number.
// @param id Member's identifier.
// @param pw Member's password.
// @param phone Member's phone number.
void SignUp::addMember(const std::string &id, const std::string &pw, const std::string &phone)
{
    memberCollection->addMember(id, pw, phone);
    return;
}