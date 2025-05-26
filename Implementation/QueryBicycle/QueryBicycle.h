#ifndef QUERYBICYCLE_H
#define QUERYBICYCLE_H

#include "../BicycleCollection/BicycleCollection.h"

class QueryBicycleUI;

class QueryBicycle
{
private:
    BicycleCollection *bicycleCollection;
    QueryBicycleUI *boundary;

public:
    // constructor and destructor
    QueryBicycle(BicycleCollection *collection);
    ~QueryBicycle();

    // getter and setter
    QueryBicycleUI *getBoundary();

    // functional implementation
    std::vector<Bicycle> showBicycleList();
};

#endif // QUERYBICYCLE_H