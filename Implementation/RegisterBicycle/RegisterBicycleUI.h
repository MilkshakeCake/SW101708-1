#ifndef REGISTERBICYCLEUI_H
#define REGISTERBICYCLEUI_H

#include <string>

class RegisterBicycle;

class RegisterBicycleUI
{
private:
    RegisterBicycle *controller;

public:
    RegisterBicycleUI(RegisterBicycle *registerBicycleController);
    void addBicycle(const std::string &id, const std::string &maker);
};

#endif // REGISTERBICYCLEUI_H