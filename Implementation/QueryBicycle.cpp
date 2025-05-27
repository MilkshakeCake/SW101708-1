// QueryBicycle.cpp
// Implements the QueryBicycle class that handles logic for displaying rented bicycle information.

#include "QueryBicycle.h"

#include "QueryBicycleUI.h"

// Constructs a QueryBicycle object and binds it to its boundary UI.
// @param collection Pointer to the BicycleCollection used for querying rented bicycles.
QueryBicycle::QueryBicycle(BicycleCollection *collection) : bicycleCollection(collection)
{
    boundary = new QueryBicycleUI(this);
}

// Destructor for QueryBicycle. Cleans up the associated boundary UI.
QueryBicycle::~QueryBicycle()
{
    delete boundary;
}

// Returns the associated boundary UI object.
// @return A pointer to the QueryBicycleUI.
QueryBicycleUI *QueryBicycle::getBoundary()
{
    return boundary;
}

// Retrieves the list of rented bicycles from the collection.
// @return A vector of rented Bicycle objects.
std::vector<Bicycle> QueryBicycle::showRentedBicycleList()
{
    return bicycleCollection->getRentedBicycles();
}