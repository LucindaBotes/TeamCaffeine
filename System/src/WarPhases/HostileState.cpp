#include <WarPhases/HostileState.h>

HostileState::HostileState() {
}

HostileState::~HostileState() {
}

string HostileState::getState()
{
    return "Hostile";
}

void HostileState::setState(WarPhaseContext* s)
{
    s->setState(new ColdState());
}