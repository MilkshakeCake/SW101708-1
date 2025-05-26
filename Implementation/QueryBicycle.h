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
    // Constructor
    QueryBicycle(BicycleCollection *collection);
    // Destructor
    ~QueryBicycle();

    // Get boundary class reference
    QueryBicycleUI *getBoundary();

    // return list of bicycles
    std::vector<Bicycle> showRentedBicycleList();
};

#endif // QUERYBICYCLE_H