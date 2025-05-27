// BicycleCollection.cpp
// Implements the BicycleCollection class, which manages a collection of available and rented bicycles.

#include "BicycleCollection.h"

// Returns a list of currently rented bicycles.
// @return A vector of Bicycle objects representing rented bicycles.
std::vector<Bicycle> BicycleCollection::getRentedBicycles() const
{
    return rentedBicycles;
}

// Adds a new bicycle to the collection of available bicycles.
// @param id The unique identifier for the new bicycle.
// @param maker The name of the bicycle's manufacturer.
void BicycleCollection::addBicycle(const std::string &id, const std::string &maker)
{
    Bicycle newBicycle(id, maker);
    bicycles.push_back(newBicycle);
}

// Rents a bicycle by its ID.
// Finds the bicycle in the collection, adds it to the rented list, and returns it.
// @param id The unique identifier of the bicycle to rent.
// @return The Bicycle object that was rented.
Bicycle BicycleCollection::rentBicycle(const std::string &id)
{
    // Create empty bicycle instance
    Bicycle rentingBicycle = Bicycle("", "");

    // iterate through all registered bicycles to find bicycle maker
    for (Bicycle &i : bicycles)
    {
        if (i.getID() != id)
            continue;
        rentingBicycle = i;
    }

    rentedBicycles.push_back(rentingBicycle);

    return rentingBicycle;
}