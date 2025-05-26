#ifndef RENTBICYCLE_H
#define RENTBICYCLE_H

#include "BicycleCollection.h"

class RentBicycleUI;

class RentBicycle
{
private:
    BicycleCollection *bicycleCollection;
    RentBicycleUI *boundary;
public:
    RentBicycle(BicycleCollection *collection);
    Bicycle rentBicycleByID(const std::string &id);
};

#endif // RENTBICYCLE_H