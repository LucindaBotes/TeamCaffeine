#ifndef PEACEFULSTATE_H
#define PEACEFULSTATE_H

#include "WarPhaseState.h"
#include "WarPhaseContext.h"
#include "HostileState.h"

class PeacefulState : public WarPhaseState
{
  private:

  public:
    PeacefulState();
    ~PeacefulState();
    virtual string getState();
    virtual void setState(WarPhaseContext* s);
};
#endif