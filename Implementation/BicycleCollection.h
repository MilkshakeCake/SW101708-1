#ifndef BICYCLECOLLECTION_H
#define BICYCLECOLLECTION_H

#include <vector>
#include "Bicycle.h"

class BicycleCollection
{
private:
    // keep track of rented Bicycles to prepare query
    std::vector<Bicycle> rentedBicycles;
    // keep track of total registered bicycles
    std::vector<Bicycle> bicycles;

public:
    // Getter for rentedBicycles
    std::vector<Bicycle> getRentedBicycles() const;

    // bicycle register functionality
    void addBicycle(const std::string &id, const std::string &maker);

    // bicycle rent functionality
    Bicycle rentBicycle(const std::string &id);
};

#endif