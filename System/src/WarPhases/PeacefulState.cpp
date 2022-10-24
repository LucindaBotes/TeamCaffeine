#include <WarPhases/PeacefulState.h>

PeacefulState::PeacefulState() {
}

PeacefulState::~PeacefulState() {
}

string PeacefulState::getState()
{
    return "Peaceful";
}

void PeacefulState::setState(WarPhaseContext* s)
{
    s->setState(new HostileState());
}