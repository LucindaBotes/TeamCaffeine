#include <WarPhases/PeacefulState.h>

using namespace std;

PeacefulState::PeacefulState() {
}

PeacefulState::~PeacefulState() {
}


/// @brief returns the current state name, PeacefulState
/// @return String 
string PeacefulState::getState()
{
    return "Peaceful";
}

/// @brief Changes the state from PeacefulState to ColdState using the context
/// @param s 
void PeacefulState::setState(WarPhaseContext* s)
{
    s->setState(new ColdState());
}