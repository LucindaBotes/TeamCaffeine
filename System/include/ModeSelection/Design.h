#ifndef DESIGN_H
#define DESIGN_H

#include "Strategy.h"
#include "War.h"
#include "ModeContext.h"

class Design : public Strategy
{
  private:
    War * war;
    
  public:
    Design();
    ~Design();
    virtual void startSimulation();
    virtual Battle * undo();
};
#endif