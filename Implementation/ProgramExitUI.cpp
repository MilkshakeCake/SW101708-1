#include "ProgramExitUI.h"

#include "ProgramExit.h"

ProgramExitUI::ProgramExitUI(ProgramExit *programExitController)
{
    this->controller = programExitController;
}

void ProgramExitUI::shutDown(BicycleCollection *bCollection, MemberCollection *mCollection) {
    controller->shutDown(bCollection, mCollection);
}