#ifndef QUERYBICYCLE_H
#define QUERYBICYCLE_H

#include "BicycleCollection.h"

class QueryBicycleUI;

class QueryBicycle
{
private:
    BicycleCollection *bicycleCollection;
    QueryBicycleUI *boundary;

public:
    QueryBicycle(BicycleCollection *collection);
    std::vector<Bicycle> showBicycleList();
};

#endif