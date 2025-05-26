#ifndef QUERYBICYCLEUI_H
#define QUERYBICYCLEUI_H

class QueryBicycle;

class QueryBicycleUI
{
private:
    // Boundary class holds control reference to call function
    QueryBicycle *controller;

public:
    // Constructor
    QueryBicycleUI(QueryBicycle *queryBicycleController);

    // Call control for query functionality
    void queryBicycleList();
};

#endif // BICYCLECOLLECTION_H