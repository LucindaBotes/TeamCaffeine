#ifndef STRATEGY_H
#define STRATEGY_H

class ModeContext;
#include <iostream>
#include <string>

using namespace std;

class Strategy 
{
  private:
  
  public:
    Strategy();
    ~Strategy();
    virtual void startSimulation() = 0;
    virtual void undo() = 0;
};
#endif
