// QueryBicycleUI.h
// Declares the QueryBicycleUI class that serves as the boundary interface for querying rented bicycles.

#ifndef QUERYBICYCLEUI_H
#define QUERYBICYCLEUI_H

class QueryBicycle;

// Boundary class that interacts with the user interface to display rented bicycle information.
class QueryBicycleUI
{
private:
    // Boundary class holds control reference to call function
    QueryBicycle *controller;

public:
    // Constructs a QueryBicycleUI and associates it with the corresponding QueryBicycle controller.
    // @param queryBicycleController Pointer to the QueryBicycle control class.
    QueryBicycleUI(QueryBicycle *queryBicycleController);

    // Triggers the controller to retrieve and display the list of rented bicycles.
    void queryBicycleList();
};

#endif // BICYCLECOLLECTION_H