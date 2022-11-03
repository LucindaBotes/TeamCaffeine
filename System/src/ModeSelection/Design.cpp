#include <ModeSelection/Design.h>

using namespace std;

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

/// @brief This function will undo the action done now and retrieve information before the retrival
vector<Battle> Design::undo()
{
    return getBattle().back();
}