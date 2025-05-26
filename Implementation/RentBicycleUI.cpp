#include "RentBicycle.h"
#include "RentBicycleUI.h"
#include <fstream>
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