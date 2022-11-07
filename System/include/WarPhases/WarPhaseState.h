#ifndef WARPHASESTATE_H
#define WARPHASESTATE_H

class WarPhaseContext;

#include <string>
#include <iostream>
using namespace std;

class WarPhaseState 
{
  private:

  public:
    WarPhaseState();
    virtual ~WarPhaseState();
    virtual string getState() = 0;
    virtual void setState(WarPhaseContext* s) = 0;
};
#endif