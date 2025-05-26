#include "ProgramExit.h"

#include "ProgramExitUI.h"

ProgramExit::ProgramExit() {};

ProgramExitUI *ProgramExit::getBoundary()
{
    return boundary;
}

void ProgramExit::shutDown(BicycleCollection *bCollection, MemberCollection *mCollection)
{
    delete bCollection;
    delete mCollection;
}