#include <WarPhases/ColdState.h>

/**
 * @file ColdState.cpp
 * @brief ColdState class implementation,
 * @li Design Pattern: State
 * @li Participant: ConcreteState
 * 
 * @details ColdState class implements a state which is for when countries haven't declared war unto the another
 * @author Netshifhefhe Unarine Leo : u20505656

*/

using namespace std;

ColdState::ColdState() {
}

ColdState::~ColdState() {
}

/// @brief returns the current state name, ColdState
/// @return name of state, which is ColdState
string ColdState::getState()
{
    return "ColdState";
}

/// @brief Changes the state from ColdState to HostileState using the context Participant
/// @param s 
void ColdState::setState(WarPhaseContext* s)
{
    s->setState(new HostileState());
}
