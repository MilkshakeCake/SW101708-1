#include "RegisterBicycle.h"

#include "RegisterBicycleUI.h"

RegisterBicycle::RegisterBicycle(BicycleCollection *bicycleCollection) : collection(bicycleCollection)
{
    boundary = new RegisterBicycleUI(this);
}

RegisterBicycle::~RegisterBicycle()
{
    delete boundary;
}

RegisterBicycleUI *RegisterBicycle::getBoundary()
{
    return boundary;
}

void RegisterBicycle::createBicycleEntry(const std::string &id, const std::string &maker)
{
    collection->addBicycle(id, maker);
}