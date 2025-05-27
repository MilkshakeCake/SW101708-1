// RentBicycleUI.cpp
// Implements the RentBicycleUI class which provides a user interface for renting bicycles.

#include "RentBicycle.h"

#include <fstream>

#include "RentBicycleUI.h"
extern std::ofstream out_fp;

// Constructs a RentBicycleUI object and associates it with the given RentBicycle controller.
// @param rentBicycleController Pointer to the RentBicycle control class.
RentBicycleUI::RentBicycleUI(RentBicycle *rentBicycleController)
{
    this->controller = rentBicycleController;
}

// Rents a bicycle by ID using the controller and writes the result to the output file.
// @param id Unique identifier of the bicycle to rent.
void RentBicycleUI::rentBicycleByID(const std::string &id)
{
    Bicycle rentedBicycle = controller->rentBicycleByID(id);
    out_fp << "> " << rentedBicycle.getID() << ' ' << rentedBicycle.getMaker() << std::endl
           << std::endl;
}