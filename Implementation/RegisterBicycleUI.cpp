#include "RegisterBicycleUI.h"
#include "RegisterBicycle.h"
#include <fstream>
extern std::ofstream out_fp;

RegisterBicycleUI::RegisterBicycleUI(RegisterBicycle *registerBicycleController)
{
    this->controller = registerBicycleController;
}

void RegisterBicycleUI::addBicycle(const std::string &id, const std::string &maker)
{
    Bicycle registeringBicycle(id, maker);
    controller->createBicycleEntry(registeringBicycle);
    out_fp << "> " << id << ' ' << maker << std::endl
           << std::endl;
}