// ProgramExit.cpp
// Implements the ProgramExit class responsible for final cleanup operations at application shutdown.

#include "ProgramExit.h"

#include "ProgramExitUI.h"

// Constructs a ProgramExit object.
ProgramExit::ProgramExit() {};


// Returns the boundary interface associated with ProgramExit.
// @return Pointer to the ProgramExitUI object.
ProgramExitUI *ProgramExit::getBoundary()
{
    return boundary;
}

// Performs shutdown tasks such as deallocating resources.
// @param bCollection Pointer to the BicycleCollection to be deleted.
// @param mCollection Pointer to the MemberCollection to be deleted.
void ProgramExit::shutDown(BicycleCollection *bCollection, MemberCollection *mCollection)
{
    delete bCollection;
    delete mCollection;
}