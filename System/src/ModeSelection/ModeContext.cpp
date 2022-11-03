#include <ModeSelection/ModeContext.h>

using namespace std;

/// @brief initializes the strategy pointer 
/// @param s 
ModeContext::ModeContext(Strategy *s)
{
    _strategy = s;
}

/// @brief deallocate the strategy pointer
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