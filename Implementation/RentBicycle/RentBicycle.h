#ifndef RENTBICYCLE_H
#define RENTBICYCLE_H

#include "../BicycleCollection/BicycleCollection.h"

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

    // getter and setter
    RentBicycleUI *getBoundary();

    // functional implementation
    Bicycle rentBicycleByID(const std::string &id);
};

#endif // RENTBICYCLE_H