// RegisterBicycle.cpp
// Implements the RegisterBicycle class that handles the logic for registering new bicycles.

#include "RegisterBicycle.h"

#include "RegisterBicycleUI.h"

// Constructs a RegisterBicycle object and initializes its boundary.
// @param bicycleCollection Pointer to the collection where new bicycles will be added.
RegisterBicycle::RegisterBicycle(BicycleCollection *bicycleCollection) : collection(bicycleCollection)
{
    boundary = new RegisterBicycleUI(this);
}

// Destructor that cleans up the associated UI boundary.
RegisterBicycle::~RegisterBicycle()
{
    delete boundary;
}

// Returns the associated boundary UI for registering bicycles.
// @return A pointer to the RegisterBicycleUI.
RegisterBicycleUI *RegisterBicycle::getBoundary()
{
    return boundary;
}

// Adds a new bicycle entry to the collection.
// @param id Unique identifier of the bicycle.
// @param maker Name of the bicycle's manufacturer.
void RegisterBicycle::createBicycleEntry(const std::string &id, const std::string &maker)
{
    collection->addBicycle(id, maker);
}