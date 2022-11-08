#ifndef MODECONTEXT_H
#define MODECONTEXT_H

#include "Strategy.h"
#include "War.h"

class ModeContext 
{
  private:
    Strategy* _strategy;

  public:
    ModeContext(Strategy *s);
    ~ModeContext();
    void start();
    Battle * Undo();
};
#endif