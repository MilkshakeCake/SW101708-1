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
    std::vector<Bicycle> getRentedBicycles();
    void addBicycle(Bicycle &newBicycle);
    Bicycle rentBicycle(const std::string &id);
};

#endif