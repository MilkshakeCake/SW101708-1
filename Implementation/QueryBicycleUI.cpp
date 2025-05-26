#include "QueryBicycleUI.h"
#include "QueryBicycle.h"
#include <fstream>
extern std::ofstream out_fp;

QueryBicycleUI::QueryBicycleUI(QueryBicycle *queryBicycleController)
{
    this->controller = queryBicycleController;
}

void QueryBicycleUI::queryBicycleList()
{
    std::vector<Bicycle> bicycleList = controller->showBicycleList();
    for (Bicycle &i : bicycleList)
    {
        out_fp << "> " << i.getID() << ' ' << i.getMaker() << std::endl;
    }
    out_fp << std::endl;
}