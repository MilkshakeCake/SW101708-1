#include "RentBicycle.h"
#include "RentBicycleUI.h"
#include <iostream>

RentBicycleUI::RentBicycleUI(RentBicycle *rentBicycleController) {
    this->controller = rentBicycleController;
}

void RentBicycleUI::rentBicycleByID(const std::string &id) {
    Bicycle rentedBicycle = controller->rentBicycleByID(id);
    std::cout << "> " << rentedBicycle.getID() << ' ' << rentedBicycle.getMaker() << std::endl;
}