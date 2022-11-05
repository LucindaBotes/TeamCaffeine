#include <ModeSelection/ModeContext.h>

using namespace std;

/**
 * @file ModeContext.cpp
 * @brief ModeContext class implementation,
 * @li Design Pattern: Strategy
 * @li Participant: Context
 * 
 * @details ModeContext is responsible for allowing client to choose the mode of the game 
 * @author Netshifhefhe Unarine Leo : u20505656
 * 
*/

/// @brief Initializes the strategy pointer 
/// @param s 
ModeContext::ModeContext(Strategy *s)
{
    _strategy = s;
}

/// @brief Deallocates the strategy pointer
ModeContext::~ModeContext()
{
    delete _strategy;
}

/// @brief It notifies the user about the perks of choosing either real-mode or design mode
void ModeContext::start()
{
    _strategy->startSimulation();
}

/// @brief Undo the recent action done by the player and re-initiatialize the values of the variables before the action
Battle ModeContext::Undo()
{
    return _strategy->undo();
}
