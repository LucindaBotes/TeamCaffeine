#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <random>

class Randomizer {
  public:
    static Randomizer* getInstance();
    double getUniformRandomNumber(double min, double max);
    int getUniformRandomNumber(int min, int max);
  
  protected:
    Randomizer();
    Randomizer(const Randomizer &r);
    ~Randomizer();
    Randomizer& operator=(const Randomizer&);

  private:
    static Randomizer* onlyInstanece_;
    std::default_random_engine seedGenerator;
};

#endif
