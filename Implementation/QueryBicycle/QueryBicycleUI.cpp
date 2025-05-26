#include "QueryBicycleUI.h"
#include "QueryBicycle.h"
#include <iostream>

QueryBicycleUI::QueryBicycleUI(QueryBicycle *queryBicycleController) {
    this->controller = queryBicycleController;
}

void QueryBicycleUI::queryBicycleList() {
    std::vector<Bicycle> bicycleList = controller->showBicycleList();
    for(Bicycle &i : bicycleList) {
        std::cout << "> " << i.getID() << ' ' << i.getMaker() << std::endl;
    }
}