#ifndef QUERYBICYCLEUI_H
#define QUERYBICYCLEUI_H

#include "BicycleCollection.h"

class QueryBicycle;

class QueryBicycleUI {
private:
    QueryBicycle *controller;
public:
    QueryBicycleUI(QueryBicycle *queryBicycleController);
    void queryBicycleList();
};

#endif