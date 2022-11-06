
#ifndef REALTIME_H
#define REALTIME_H

#include <Strategy.h>
#include <UserInterface/War.h>
#include <ModeContext.h>

class RealTime : public Strategy
{
  private:
    War * war;

  public:
    RealTime();
    ~RealTime();
    virtual void startSimulation();
    virtual Battle * undo();
};
#endif