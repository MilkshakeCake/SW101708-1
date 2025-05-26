#include "QueryBicycle.h"
#include "QueryBicycleUI.h"

QueryBicycle::QueryBicycle(BicycleCollection *collection) : bicycleCollection(collection) {
    boundary = new QueryBicycleUI(this);
}

std::vector<Bicycle> QueryBicycle::showBicycleList() {
    return bicycleCollection->getRentedBicycles();
}