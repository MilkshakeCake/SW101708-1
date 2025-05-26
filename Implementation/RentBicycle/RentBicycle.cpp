#include "RentBicycle.h"
#include "RentBicycleUI.h"

RentBicycle::RentBicycle(BicycleCollection *collection) : bicycleCollection(collection)
{
    boundary = new RentBicycleUI(this);
}

RentBicycle::~RentBicycle()
{
    delete boundary;
}

RentBicycleUI *RentBicycle::getBoundary()
{
    return boundary;
}

Bicycle RentBicycle::rentBicycleByID(const std::string &id)
{
    return bicycleCollection->rentBicycle(id);
}