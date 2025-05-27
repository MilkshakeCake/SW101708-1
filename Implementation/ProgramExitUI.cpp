// ProgramExitUI.cpp
// Implements the ProgramExitUI class, which interfaces with the user to initiate program shutdown.

#include "ProgramExitUI.h"

#include "ProgramExit.h"

// Constructs a ProgramExitUI object and associates it with a ProgramExit controller.
// @param programExitController Pointer to the ProgramExit control object.
ProgramExitUI::ProgramExitUI(ProgramExit *programExitController)
{
    this->controller = programExitController;
}

// Delegates the shutdown process to the associated ProgramExit controller.
// @param bCollection Pointer to the BicycleCollection to be deallocated.
// @param mCollection Pointer to the MemberCollection to be deallocated.
void ProgramExitUI::shutDown(BicycleCollection *bCollection, MemberCollection *mCollection) {
    controller->shutDown(bCollection, mCollection);
}