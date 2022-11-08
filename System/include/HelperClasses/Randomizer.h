#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <random>

class Randomizer {
  public:
    static Randomizer* getInstance();
    double getUniformRandomNumber(double min, double max);
    int getUniformRandomNumber(int min, int max);
    bool getRandomBoolean();
    int getRandomInt(int);
  
  protected:
    Randomizer();
    Randomizer(const Randomizer &r);
    ~Randomizer();
    Randomizer& operator=(const Randomizer&);

  private:
    static Randomizer* onlyInstanece_;
    std::default_random_engine _seedGenerator;
};

#endif
