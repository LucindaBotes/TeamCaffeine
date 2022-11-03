#ifndef HOSTILESTATE_H
#define HOSTILESTATE_H

#include <WarPhaseState.h>
#include <ColdState.h>
#include <WarPhaseContext.h>

class HostileState : public WarPhaseState
{
  private:

  public:
    HostileState();
    ~HostileState();
    virtual string getState();
    virtual void setState(WarPhaseContext* s);
};
#endif
