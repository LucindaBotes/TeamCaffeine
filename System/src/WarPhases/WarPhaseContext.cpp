#include <WarPhases/WarPhaseContext.h>

/**
 * @brief WarPhaseContext class implementation,
 * @li Design Pattern: State
 * @li Participant: Context
 * 
 * @details WarPhaseContext class 
 * @author UnarineLeo  
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
    delete _state;
}

/// @brief deallocates current state and set a new state
/// @param s 
void WarPhaseContext::setState(WarPhaseState* s)
{
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