#ifndef REGISTERBICYCLE_H
#define REGISTERBICYCLE_H

#include "../BicycleCollection/BicycleCollection.h"

class RegisterBicycleUI;

class RegisterBicycle {
private:
    BicycleCollection *collection;
    RegisterBicycleUI *boundary;
public:
    // constructor and destructor
    RegisterBicycle(BicycleCollection *bicycleCollection);
    ~RegisterBicycle();

    // getter and setter
    RegisterBicycleUI *getBoundary();

    // functional implementation
    void createBicycleEntry(Bicycle registeringBicycle);
};

#endif // REGISTERBICYCLE_H