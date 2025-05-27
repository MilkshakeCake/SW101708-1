// RegisterBicycle.h
// Declares the RegisterBicycle class responsible for handling bicycle registration logic and UI binding.

#ifndef REGISTERBICYCLE_H
#define REGISTERBICYCLE_H

#include "BicycleCollection.h"

class RegisterBicycleUI;

// Control class that manages the registration of new bicycles and communicates with the UI boundary.
class RegisterBicycle {
private:
    BicycleCollection *collection;
    RegisterBicycleUI *boundary;
public:
    // Constructs a RegisterBicycle object and associates it with a bicycle collection.
    // @param bicycleCollection Pointer to the BicycleCollection used for registration.
    RegisterBicycle(BicycleCollection *bicycleCollection);

    // Destructor to clean up the associated UI boundary.
    ~RegisterBicycle();

    // Returns the UI boundary for registering bicycles.
    // @return Pointer to the RegisterBicycleUI.
    RegisterBicycleUI *getBoundary();

    // Adds a new bicycle to the collection.
    // @param id Unique identifier of the bicycle.
    // @param maker Manufacturer of the bicycle.
    void createBicycleEntry(const std::string &id, const std::string &maker);
};

#endif // REGISTERBICYCLE_H