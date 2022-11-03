#ifndef WARPHASECONTEXT_H
#define WARPHASECONTEXT_H

#include <WarPhaseState.h>
#include <PeacefulState.h>

class WarPhaseContext 
{
  private:
    WarPhaseState* _state;

  public:
    WarPhaseContext();
    ~WarPhaseContext();
    void setState(WarPhaseState* s);
    void changeState();

};
#endif