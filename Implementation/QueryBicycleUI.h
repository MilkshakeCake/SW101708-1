#ifndef QUERYBICYCLEUI_H
#define QUERYBICYCLEUI_H

class QueryBicycle;

class QueryBicycleUI
{
private:
    QueryBicycle *controller;

public:
    QueryBicycleUI(QueryBicycle *queryBicycleController);
    void queryBicycleList();
};

#endif // BICYCLECOLLECTION_H