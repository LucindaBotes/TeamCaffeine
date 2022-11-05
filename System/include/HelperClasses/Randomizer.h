#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <random>

class Randomizer {
  public:
    static Randomizer* getInstance();
    double getUniformRandomNumber(double min, double max);
  
  protected:
    Randomizer();
    Randomizer(const Randomizer &r);
    ~Randomizer();
    Randomizer& operator=(const Randomizer&);

  private:
    static Randomizer* onlyInstanece_;
};

#endif
