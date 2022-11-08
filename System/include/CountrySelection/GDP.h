#ifndef GDP_H
#define GDP_H

#include "Randomizer.h"

class GDP {
  private:
    double _value;

  public:
    GDP();
    GDP(double);
    ~GDP();

    double getValue();
    void setValue(double);
};

#endif
