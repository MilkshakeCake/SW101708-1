#// ProgramExit.h
#// Declares the ProgramExit class used for application shutdown and cleanup operations.

#ifndef PROGRAMEXIT_H
#define PROGRAMEXIT_H

#include "BicycleCollection.h"
#include "MemberCollection.h"

class ProgramExitUI;

// Handles application termination logic and delegates cleanup to the boundary interface.
class ProgramExit
{
private:
    ProgramExitUI *boundary;

public:
    // Constructs a ProgramExit object.
    ProgramExit();

    // Returns a pointer to the boundary interface for shutdown interaction.
    // @return Pointer to the ProgramExitUI object.
    ProgramExitUI *getBoundary();

    // Performs cleanup and resource deallocation during program exit.
    // @param bCollection Pointer to the BicycleCollection to be deallocated.
    // @param mCollection Pointer to the MemberCollection to be deallocated.
    void shutDown(BicycleCollection *bCollection, MemberCollection *mCollection);
};

#endif // PROGRAMEXIT_H