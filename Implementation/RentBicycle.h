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
    // constructor and destructor
    RentBicycle(BicycleCollection *collection);
    ~RentBicycle();

    // Get boundary class reference
    RentBicycleUI *getBoundary();

    // functional implementation
    Bicycle rentBicycleByID(const std::string &id);
};

#endif // RENTBICYCLE_H