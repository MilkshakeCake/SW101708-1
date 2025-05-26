#include "RentBicycle.h"
#include "RentBicycleUI.h"

RentBicycle::RentBicycle(BicycleCollection *collection) : bicycleCollection(collection) {
    boundary = new RentBicycleUI(this);
}

Bicycle RentBicycle::rentBicycleByID(const std::string &id) {
    return bicycleCollection->rentBicycle(id);
}