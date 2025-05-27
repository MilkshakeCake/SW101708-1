# // RentBicycle.h
# // Declares the RentBicycle class responsible for handling bicycle rental logic and UI binding.

#ifndef RENTBICYCLE_H
#define RENTBICYCLE_H

#include "BicycleCollection.h"

class RentBicycleUI;

// Control class for managing the bicycle rental process and communicating with the UI boundary.
class RentBicycle
{
private:
    BicycleCollection *bicycleCollection;
    RentBicycleUI *boundary;
public:
    // Constructs a RentBicycle object and associates it with a BicycleCollection and boundary UI.
    // @param collection Pointer to the BicycleCollection used for rentals.
    RentBicycle(BicycleCollection *collection);

    // Destructor that deallocates the associated boundary UI.
    ~RentBicycle();

    // Returns the UI boundary associated with this rental controller.
    // @return Pointer to the RentBicycleUI.
    RentBicycleUI *getBoundary();

    // Rents a bicycle using its unique identifier.
    // @param id The unique identifier of the bicycle to rent.
    // @return The rented Bicycle object.
    Bicycle rentBicycleByID(const std::string &id);
};

#endif // RENTBICYCLE_H