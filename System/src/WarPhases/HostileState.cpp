#include <WarPhases/HostileState.h>

using namespace std;

/**
 * @file HostileState.cpp
 * @brief HostileState class implementation,
 * @li Design Pattern: State
 * @li Participant: ConcreteState
 * 
 * @details HostileState class implements a state which is for when a country invades another country
 * @author Netshifhefhe Unarine Leo : u20505656
*/

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