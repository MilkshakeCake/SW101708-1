#include "RegisterBicycleUI.h"
#include "RegisterBicycle.h"
#include <iostream>

RegisterBicycleUI::RegisterBicycleUI(RegisterBicycle *registerBicycleController)
{
    this->controller = registerBicycleController;
}

void RegisterBicycleUI::addBicycle(const std::string &id, const std::string &maker)
{
    Bicycle registeringBicycle(id, maker);
    controller->createBicycleEntry(registeringBicycle);
    std::cout << "> " << id << ' ' << maker << std::endl;
}