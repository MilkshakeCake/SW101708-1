#ifndef PROGRAMEXITUI_H
#define PROGRAMEXITUI_H

#include "BicycleCollection.h"
#include "MemberCollection.h"

class ProgramExit;

class ProgramExitUI
{
private:
    ProgramExit *controller;

public:
    ProgramExitUI(ProgramExit *programExitController);
    void shutDown(BicycleCollection *bCollection, MemberCollection *mCollection);
};

#endif // PROGRAMEXITUI_H