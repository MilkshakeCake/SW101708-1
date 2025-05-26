#include "BicycleCollection.h"

std::vector<Bicycle> BicycleCollection::getRentedBicycles() const
{
    return rentedBicycles;
}

void BicycleCollection::addBicycle(const std::string &id, const std::string &maker)
{
    Bicycle newBicycle(id, maker);
    bicycles.push_back(newBicycle);
}

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