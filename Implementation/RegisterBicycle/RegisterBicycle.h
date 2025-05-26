#ifndef REGISTERBICYCLE_H
#define REGISTERBICYCLE_H

#include "BicycleCollection.h"

class RegisterBicycleUI;

class RegisterBicycle {
private:
    BicycleCollection *collection;
    RegisterBicycleUI *boundary;
public:
    RegisterBicycle(BicycleCollection *bicycleCollection);
    void createBicycleEntry(Bicycle registeringBicycle);
};

#endif // REGISTERBICYCLE_H