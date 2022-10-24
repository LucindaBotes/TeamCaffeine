#include <WarPhases/WarPhaseContext.h>

WarPhaseContext::WarPhaseContext() 
{
    _state = new PeacefulState();
    cout << "The War is still at a peaceful state." << endl;
}

WarPhaseContext::~WarPhaseContext() 
{
    delete _state;
}

void WarPhaseContext::setState(WarPhaseState* s)
{
    delete _state;
    _state = s;

    cout << "The War state has changed to a ";
    cout << s->getState() << " state." << endl;
}

void WarPhaseContext::changeState()
{
    _state->setState(this);
}