#include "RegisterBicycleUI.h"

#include <fstream>

#include "RegisterBicycle.h"
extern std::ofstream out_fp;

RegisterBicycleUI::RegisterBicycleUI(RegisterBicycle *registerBicycleController)
{
    this->controller = registerBicycleController;
}

void RegisterBicycleUI::addBicycle(const std::string &id, const std::string &maker)
{
    Bicycle registeringBicycle(id, maker);
    controller->createBicycleEntry(id, maker);
    out_fp << "> " << id << ' ' << maker << std::endl
           << std::endl;
}