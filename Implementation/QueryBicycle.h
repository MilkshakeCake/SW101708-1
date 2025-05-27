#ifndef QUERYBICYCLE_H
#define QUERYBICYCLE_H

// QueryBicycle.h
// Declares the QueryBicycle class for querying and returning rented bicycle information.

#include "BicycleCollection.h"

class QueryBicycleUI;

// Control class that interacts with the boundary to handle bicycle rental queries.
class QueryBicycle
{
private:
    BicycleCollection *bicycleCollection;
    QueryBicycleUI *boundary;

public:
    // Constructs a QueryBicycle object and initializes it with a bicycle collection.
    // @param collection Pointer to the BicycleCollection used for rental queries.
    QueryBicycle(BicycleCollection *collection);
    // Destructor that cleans up the boundary object.
    ~QueryBicycle();

    // Returns the boundary interface used to interact with the user.
    // @return A pointer to the QueryBicycleUI.
    QueryBicycleUI *getBoundary();

    // Retrieves the list of currently rented bicycles from the collection.
    // @return A vector of Bicycle objects that are currently rented.
    std::vector<Bicycle> showRentedBicycleList();
};

#endif // QUERYBICYCLE_H