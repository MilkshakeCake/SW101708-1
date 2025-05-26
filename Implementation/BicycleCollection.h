#ifndef BICYCLECOLLECTION_H
#define BICYCLECOLLECTION_H

#include <vector>
#include "Bicycle.h"

class BicycleCollection
{
private:
    std::vector<Bicycle> rentedBicycles;
    std::vector<Bicycle> bicycles;

public:
    // getter and setter
    std::vector<Bicycle> getRentedBicycles();

    // functional implementation
    void addBicycle(Bicycle &newBicycle);
    Bicycle rentBicycle(const std::string &id);
};

#endif