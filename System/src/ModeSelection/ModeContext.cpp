#include <ModeSelection/ModeContext.h>

ModeContext::ModeContext(Strategy *s)
{
    _strategy = s;
}

ModeContext::~ModeContext()
{
    delete _strategy;
}

void ModeContext::start()
{
    _strategy->startSimulation();
}