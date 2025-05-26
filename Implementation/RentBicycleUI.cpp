#include "RentBicycle.h"

#include <fstream>

#include "RentBicycleUI.h"
extern std::ofstream out_fp;

RentBicycleUI::RentBicycleUI(RentBicycle *rentBicycleController)
{
    this->controller = rentBicycleController;
}

void RentBicycleUI::rentBicycleByID(const std::string &id)
{
    Bicycle rentedBicycle = controller->rentBicycleByID(id);
    out_fp << "> " << rentedBicycle.getID() << ' ' << rentedBicycle.getMaker() << std::endl
           << std::endl;
}