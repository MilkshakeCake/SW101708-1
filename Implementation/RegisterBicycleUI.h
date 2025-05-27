#ifndef REGISTERBICYCLEUI_H
#define REGISTERBICYCLEUI_H

// RegisterBicycleUI.h
// Declares the RegisterBicycleUI class that serves as the user interface for bicycle registration.

#include <string>

class RegisterBicycle;

// Boundary class for receiving user input related to bicycle registration and delegating actions to the controller.
class RegisterBicycleUI
{
private:
    // Boundary class holds control reference to call function
    RegisterBicycle *controller;

public:
    // Constructs a RegisterBicycleUI and associates it with a RegisterBicycle controller.
    // @param registerBicycleController Pointer to the RegisterBicycle control class.
    RegisterBicycleUI(RegisterBicycle *registerBicycleController);

    // Triggers the controller to register a new bicycle with the given ID and maker.
    // @param id Unique identifier of the bicycle.
    // @param maker Manufacturer of the bicycle.
    void addBicycle(const std::string &id, const std::string &maker);
};

#endif // REGISTERBICYCLEUI_H