#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <random>

class Randomizer {
  protected:
    Randomizer();
    static Randomizer* _instance;

  public:
    Randomizer(Randomizer &r) = delete;
    ~Randomizer();

    static Randomizer* getInstance();

    double getUniformRandomNumber(double min, double max);
};

#endif
