#ifndef PROGRAMEXIT_H
#define PROGRAMEXIT_H

#include "BicycleCollection.h"
#include "MemberCollection.h"

class ProgramExitUI;

class ProgramExit
{
private:
    ProgramExitUI *boundary;

public:
    ProgramExit();
    ProgramExitUI *getBoundary();
    void shutDown(BicycleCollection *bCollection, MemberCollection *mCollection);
};

#endif // PROGRAMEXIT_H