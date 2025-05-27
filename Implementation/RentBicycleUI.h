# // RentBicycleUI.h
# // Declares the RentBicycleUI class that provides the boundary interface for bicycle rental operations.

#ifndef RENTBICYCLEUI_H
#define RENTBICYCLEUI_H

#include <string>

class RentBicycle;

// Boundary class that interacts with the user for bicycle rental and delegates actions to the controller.
class RentBicycleUI
{
private:
    // Boundary class holds control reference to call function
    RentBicycle *controller;

public:
    // Constructs a RentBicycleUI and associates it with a RentBicycle controller.
    // @param rentBicycleController Pointer to the RentBicycle control class.
    RentBicycleUI(RentBicycle *rentBicycleController);
    // Initiates bicycle rental based on the provided bicycle ID.
    // @param id Unique identifier of the bicycle to rent.
    void rentBicycleByID(const std::string &id);
};

#endif // RENTBICYCLEUI_H