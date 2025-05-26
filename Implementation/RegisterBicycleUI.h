#ifndef REGISTERBICYCLEUI_H
#define REGISTERBICYCLEUI_H

#include <string>

class RegisterBicycle;

class RegisterBicycleUI
{
private:
    // Boundary class holds control reference to call function
    RegisterBicycle *controller;

public:
    // Constructor
    RegisterBicycleUI(RegisterBicycle *registerBicycleController);

    // Call control for bicycle register functionality
    void addBicycle(const std::string &id, const std::string &maker);
};

#endif // REGISTERBICYCLEUI_H