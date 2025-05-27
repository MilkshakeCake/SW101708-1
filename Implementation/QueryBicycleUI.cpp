// QueryBicycleUI.cpp
// Implements the QueryBicycleUI class which displays a list of rented bicycles to the user.

#include "QueryBicycleUI.h"

#include <fstream>

#include "QueryBicycle.h"
extern std::ofstream out_fp;

// Constructs a QueryBicycleUI object and associates it with the corresponding controller.
// @param queryBicycleController Pointer to the QueryBicycle control class.
QueryBicycleUI::QueryBicycleUI(QueryBicycle *queryBicycleController)
{
    this->controller = queryBicycleController;
}

// Retrieves and prints the list of rented bicycles to the output file stream.
void QueryBicycleUI::queryBicycleList()
{
    std::vector<Bicycle> bicycleList = controller->showRentedBicycleList();
    for (Bicycle &i : bicycleList)
    {
        out_fp << "> " << i.getID() << ' ' << i.getMaker() << std::endl;
    }
    out_fp << std::endl;
}