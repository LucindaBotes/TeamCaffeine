#include <WarPhases/WarPhaseContext.h>

using namespace std;

WarPhaseContext::WarPhaseContext() 
{
    _state = new ColdState();
    cout << "The War is still at a ColdState." << endl;
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