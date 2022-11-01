#include <WarPhases/ColdState.h>

using namespace std;

ColdState::ColdState() {
}

ColdState::~ColdState() {
}

/// @brief returns the current state name, ColdState
/// @return String
string ColdState::getState()
{
    return "ColdState";
}

/// @brief Changes the state from ColdState to HostileState using the context
/// @param s 
void ColdState::setState(WarPhaseContext* s)
{
    s->setState(new HostileState());
}