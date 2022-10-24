#include <WarPhases/ColdState.h>

ColdState::ColdState() {
}

ColdState::~ColdState() {
}

string ColdState::getState()
{
    return "ColdState";
}

void ColdState::setState(WarPhaseContext* s)
{
    s->setState(new PeacefulState());
}