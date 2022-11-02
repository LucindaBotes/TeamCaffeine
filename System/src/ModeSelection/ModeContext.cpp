#include <ModeSelection/ModeContext.h>

using namespace std;

ModeContext::ModeContext(Strategy *s)
{
    _strategy = s;
}

ModeContext::~ModeContext()
{
    delete _strategy;
}

/// @brief just notifies the user about the perks of choosing either real-mode or design mode
void ModeContext::start()
{
    _strategy->startSimulation();
}

/// @brief undo the recent action
void ModeContext::Undo()
{
    _strategy->undo();
}