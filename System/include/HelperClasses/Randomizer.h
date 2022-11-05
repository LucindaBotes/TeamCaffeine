#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <random>

class Randomizer {
  private:
    int member;

  public:
    Randomizer();
    ~Randomizer();
    double getUniformRandomNumber(double min, double max);
};

#endif
