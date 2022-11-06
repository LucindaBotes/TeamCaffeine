#include "PeacefulState.h"

using namespace std;

/**
 * @brief PeacefulState class implementation,
 * @li Design Pattern: State
 * @li Participant: ConcreteState
 * 
 * @details PeacefulState class implements a state which is for when a war is over, and there's a truce or one country is defeated
 * @author UnarineLeo
*/

PeacefulState::PeacefulState() {
}

PeacefulState::~PeacefulState() {
}


/// @brief returns the current state name, PeacefulState
/// @return name of state, which is Peaceful 
string PeacefulState::getState()
{
    return "Peaceful";
}

/// @brief Changes the state from PeacefulState to ColdState using the context Participant
/// @param s 
void PeacefulState::setState(WarPhaseContext* s)
{
    s->setState(new ColdState());
}