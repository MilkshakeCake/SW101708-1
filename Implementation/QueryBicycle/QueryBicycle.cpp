#include "QueryBicycle.h"
#include "QueryBicycleUI.h"

QueryBicycle::QueryBicycle(BicycleCollection *collection) : bicycleCollection(collection)
{
    boundary = new QueryBicycleUI(this);
}

QueryBicycle::~QueryBicycle()
{
    delete boundary;
}

QueryBicycleUI *QueryBicycle::getBoundary()
{
    return boundary;
}

std::vector<Bicycle> QueryBicycle::showBicycleList()
{
    return bicycleCollection->getRentedBicycles();
}