#ifndef STRATEGY_H
#define STRATEGY_H

class ModeContext;
#include <iostream>
#include <string>

#include "Battle.h"

using namespace std;

class Battle;

class Strategy 
{
  private:
  
  public:
    Strategy();
    ~Strategy();
    virtual void startSimulation() = 0;
    virtual Battle * undo() = 0;
};
#endif