#ifndef COLDSTATE_H
#define COLDSTATE_H

#include <WarPhaseState.h>
#include <PeacefulState.h>
#include <WarPhaseContext.h>

class ColdState : public WarPhaseState
{
  private:
    
  public:
    ColdState();
    ~ColdState();
    virtual string getState();
    virtual void setState(WarPhaseContext* s);
};
#endif