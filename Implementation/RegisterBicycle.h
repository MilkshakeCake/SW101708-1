#ifndef REGISTERBICYCLE_H
#define REGISTERBICYCLE_H

#include "BicycleCollection.h"

class RegisterBicycleUI;

class RegisterBicycle {
private:
    BicycleCollection *collection;
    RegisterBicycleUI *boundary;
public:
    // constructor and destructor
    RegisterBicycle(BicycleCollection *bicycleCollection);
    ~RegisterBicycle();

    // Get boundary class reference
    RegisterBicycleUI *getBoundary();

    // functional implementation
    void createBicycleEntry(const std::string &id, const std::string &maker);
};

#endif // REGISTERBICYCLE_H