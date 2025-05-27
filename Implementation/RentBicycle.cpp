// RentBicycle.cpp
// Implements the RentBicycle class which handles the business logic for renting bicycles.

#include "RentBicycle.h"

#include "RentBicycleUI.h"

// Constructs a RentBicycle object and initializes the associated boundary UI.
// @param collection Pointer to the BicycleCollection from which bicycles are rented.
RentBicycle::RentBicycle(BicycleCollection *collection) : bicycleCollection(collection)
{
    boundary = new RentBicycleUI(this);
}

// Destructor that cleans up the boundary UI.
RentBicycle::~RentBicycle()
{
    delete boundary;
}

// Returns the associated boundary UI.
// @return A pointer to the RentBicycleUI.
RentBicycleUI *RentBicycle::getBoundary()
{
    return boundary;
}

// Rents a bicycle from the collection using the given ID.
// @param id The unique identifier of the bicycle to rent.
// @return The rented Bicycle object.
Bicycle RentBicycle::rentBicycleByID(const std::string &id)
{
    return bicycleCollection->rentBicycle(id);
}