#ifndef RENTBICYCLEUI_H
#define RENTBICYCLEUI_H

#include <string>

class RentBicycle;

class RentBicycleUI
{
private:
    // Boundary class holds control reference to call function
    RentBicycle *controller;

public:
    // Constructor
    RentBicycleUI(RentBicycle *rentBicycleController);
    // Call control 
    void rentBicycleByID(const std::string &id);
};

#endif // RENTBICYCLEUI_H