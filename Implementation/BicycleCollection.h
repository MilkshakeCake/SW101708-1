// BicycleCollection.h
// Declares the BicycleCollection class that manages a set of available and rented bicycles.

#ifndef BICYCLECOLLECTION_H
#define BICYCLECOLLECTION_H

#include <vector>
#include "Bicycle.h"

// Manages a collection of Bicycle objects, tracking both registered and rented bicycles.
class BicycleCollection
{
private:
    // keep track of rented Bicycles to prepare query
    std::vector<Bicycle> rentedBicycles;
    // keep track of total registered bicycles
    std::vector<Bicycle> bicycles;

public:
    // Returns a list of bicycles that have been rented.
    // @return A vector containing the rented Bicycle objects.
    std::vector<Bicycle> getRentedBicycles() const;

    // Adds a new bicycle to the collection of available bicycles.
    // @param id The unique identifier for the bicycle.
    // @param maker The name of the bicycle's manufacturer.
    void addBicycle(const std::string &id, const std::string &maker);

    // Rents a bicycle with the specified ID.
    // Moves the bicycle to the rented collection and returns it.
    // @param id The unique identifier of the bicycle to be rented.
    // @return The rented Bicycle object.
    Bicycle rentBicycle(const std::string &id);
};

#endif