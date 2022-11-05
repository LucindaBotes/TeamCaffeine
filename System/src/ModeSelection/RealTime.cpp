#include <ModeSelection/RealTime.h>

using namespace std;

/**
 * @brief RealTime class implementation,
 * @li Design Pattern: Strategy
 * @li Participant: ConcreteStrategy
 * 
 * @details RealTime is responsible for not allowing the user to interrupt the war
 * @author Netshifhefhe Unarine Leo : u20505656
 * 
*/

RealTime::RealTime() {
}

RealTime::~RealTime() {
}

/// @brief Shows the user that they selected the Real time mode
void RealTime::startSimulation()
{
  cout << "\tYou've choosen the Real-Time Mode, here" << endl;
  cout << "there will be no ability to undo, nor stop the simulation." << endl;
}

/// @brief Real-Time Mode doesn't undo an activity so it's not implemented
/// @return null
Battle RealTime::undo()
{
    return NULL;
}
