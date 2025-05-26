#include "RegisterBicycle.h"
#include "RegisterBicycleUI.h"

RegisterBicycle::RegisterBicycle(BicycleCollection *bicycleCollection) : collection(bicycleCollection) {
    boundary = new RegisterBicycleUI(this);
}

void RegisterBicycle::createBicycleEntry(Bicycle registeringBicycle) {
    collection->addBicycle(registeringBicycle);
}