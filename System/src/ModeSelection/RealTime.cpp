#include <ModeSelection/RealTime.h>

using namespace std;

RealTime::RealTime() {
}

RealTime::~RealTime() {
}

void RealTime::startSimulation()
{
  cout << "\tYou've choosen the Real-Time Mode, here" << endl;
  cout << "there will be no ability to undo, nor stop the simulation." << endl;
}