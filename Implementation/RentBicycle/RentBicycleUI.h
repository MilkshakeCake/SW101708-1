#ifndef RENTBICYCLEUI_H
#define RENTBICYCLEUI_H

#include <string>

class RentBicycle;

class RentBicycleUI {
    private:
    RentBicycle *controller;
    public:
    RentBicycleUI(RentBicycle *rentBicycleController);
    void rentBicycleByID(const std::string &id);
};

#endif