// Login.cpp
// Implements the Login class which handles user authentication and UI binding.

#include "Login.h"
#include "LoginUI.h"


// Constructs a Login instance and binds it to a LoginUI.
// @param collection Pointer to the MemberCollection used for authentication.
Login::Login(MemberCollection *collection) : memberCollection(collection)
{
    boundary = new LoginUI(this);
}


// Destructor for Login. Cleans up the associated LoginUI object.
Login::~Login() {
    delete boundary;
}


// Performs login by setting the current member using the given credentials.
// @param id The ID entered by the user.
// @param pw The password entered by the user (currently unused).
void Login::login(const std::string &id, const std::string &pw)
{
    memberCollection->setCurrentMember(id);
}


// Returns the associated UI boundary object for the Login use case.
// @return A pointer to the LoginUI object.
LoginUI *Login::getBoundary()
{
    return boundary;
}