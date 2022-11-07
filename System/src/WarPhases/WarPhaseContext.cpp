#include "WarPhaseContext.h"

/**
 * @file WarPhaseContext.cpp
 * @brief WarPhaseContext class implementation,
 * @li Design Pattern: State
 * @li Participant: Context
 * 
 * @details WarPhaseContext class will be responsible for changing the states of the war phase.
 * @author Netshifhefhe Unarine Leo; u20505656

*/

using namespace std;

/// @brief initialize the first state as a ColdState
WarPhaseContext::WarPhaseContext() 
{
    _state = new ColdState();
    cout << "The War is still at a ColdState." << endl;
}

/// @brief deallocates a pointer
WarPhaseContext::~WarPhaseContext() 
{
    if(_state)
        delete _state;
}

/// @brief deallocates current state and set a new state
/// @param s 
void WarPhaseContext::setState(WarPhaseState* s)
{
    if(this->_state)
        delete _state;

    _state = s;

    cout << "The War state has changed to a ";
    cout << s->getState() << " state." << endl;
}

/// @brief changes from the current state to a new one
void WarPhaseContext::changeState()
{
    _state->setState(this);
}
