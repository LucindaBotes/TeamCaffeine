#include <ModeSelection/Design.h>

using namespace std;

/**
 * @file Design.cpp
 * @brief Design class implementation,
 * @li Design Pattern: Strategy
 * @li Participant: ConcreteStrategy
 * 
 * @details Design is responsible for allowing the user to interrupt, tweak and continue the war
 * @author Netshifhefhe Unarine Leo : u20505656
*/

Design::Design() {
}

Design::~Design() {
}

/// @brief it shows that user that they selected the design mode
void Design::startSimulation()
{
    cout << "\tYou've choosen the Design Mode, here" << endl;
    cout << "there will be an ability to undo, nor stop the simulation." << endl;
}

/// @brief This function will undo the recent action done and retrieve the Battle values before the action
Battle Design::undo()
{
    return getBattle().back();
}
