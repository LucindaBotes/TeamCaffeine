#ifndef REALTIME_H
#define REALTIME_H

#include <Strategy.h>
#include <ModeContext.h>

class RealTime : public Strategy
{
  private:
    

  public:
    RealTime();
    ~RealTime();
    virtual void startSimulation();
    virtual void undo();
};
#endif