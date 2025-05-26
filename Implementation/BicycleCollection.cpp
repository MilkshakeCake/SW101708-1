#include "BicycleCollection.h"

std::vector<Bicycle> BicycleCollection::getRentedBicycles()
{
    return rentedBicycles;
}

void BicycleCollection::addBicycle(Bicycle &newBicycle)
{
    bicycles.push_back(newBicycle);
}

Bicycle BicycleCollection::rentBicycle(const std::string &id)
{
    for (Bicycle &i : bicycles)
    {
        if (i.getID() == id)
        {
            rentedBicycles.push_back(i);
            return i;
        }
    }

    return bicycles[0];
}