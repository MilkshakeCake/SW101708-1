// RegisterBicycleUI.cpp
// Implements the RegisterBicycleUI class that provides a user interface for registering bicycles.

#include "RegisterBicycleUI.h"

#include <fstream>

#include "RegisterBicycle.h"
extern std::ofstream out_fp;

// Constructs a RegisterBicycleUI and associates it with a RegisterBicycle controller.
// @param registerBicycleController Pointer to the RegisterBicycle control class.
RegisterBicycleUI::RegisterBicycleUI(RegisterBicycle *registerBicycleController)
{
    this->controller = registerBicycleController;
}

// Adds a new bicycle using the controller and prints the result to the output file.
// @param id Unique identifier of the bicycle.
// @param maker Manufacturer of the bicycle.
void RegisterBicycleUI::addBicycle(const std::string &id, const std::string &maker)
{
    Bicycle registeringBicycle(id, maker);
    controller->createBicycleEntry(id, maker);
    out_fp << "> " << id << ' ' << maker << std::endl
           << std::endl;
}