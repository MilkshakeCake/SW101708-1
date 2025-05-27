// ProgramExitUI.h
// Declares the ProgramExitUI class that interfaces with the user to trigger program shutdown.

#ifndef PROGRAMEXITUI_H
#define PROGRAMEXITUI_H

#include "BicycleCollection.h"
#include "MemberCollection.h"

class ProgramExit;

// Boundary class for handling user-initiated shutdown requests, forwarding them to the controller.
class ProgramExitUI
{
private:
    ProgramExit *controller;

public:
    // Constructs a ProgramExitUI and associates it with a ProgramExit controller.
    // @param programExitController Pointer to the controller that performs shutdown operations.
    ProgramExitUI(ProgramExit *programExitController);
    // Calls the controller's shutdown method to perform cleanup operations.
    // @param bCollection Pointer to the BicycleCollection to be deallocated.
    // @param mCollection Pointer to the MemberCollection to be deallocated.
    void shutDown(BicycleCollection *bCollection, MemberCollection *mCollection);
};

#endif // PROGRAMEXITUI_H