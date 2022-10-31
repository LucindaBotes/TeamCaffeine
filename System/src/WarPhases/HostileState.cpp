#include <WarPhases/HostileState.h>

using namespace std;

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
    s->setState(new PeacefulState());
}