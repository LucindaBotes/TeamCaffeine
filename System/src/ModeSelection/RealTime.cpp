#include <ModeSelection/RealTime.h>
using namespace std;

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

/// @brief this function will do nothing, since an undo is not allowed in Real-Time Mode
void RealTime::undo()
{

}