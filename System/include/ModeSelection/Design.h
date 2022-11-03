#ifndef DESIGN_H
#define DESIGN_H

#include <Strategy.h>
#include <ModeContext.h>

class Design : public Strategy
{
  private:

  public:
    Design();
    ~Design();
    virtual void startSimulation();
    virtual vector<Battle> undo();
};
#endif