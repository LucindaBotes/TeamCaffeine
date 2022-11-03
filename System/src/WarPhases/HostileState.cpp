#include <WarPhases/HostileState.h>

using namespace std;

HostileState::HostileState() {
}

HostileState::~HostileState() {
}

/// @brief returns the current state name, HostileState
/// @return name of state, which is Hostile
string HostileState::getState()
{
    return "Hostile";
}

/// @brief Changes the state from HostileState to PeacefulState using the context
/// @param s 
void HostileState::setState(WarPhaseContext* s)
{
    s->setState(new PeacefulState());
}
