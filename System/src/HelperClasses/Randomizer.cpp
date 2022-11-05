#include "Randomizer.h"

using namespace std;

Randomizer::Randomizer() {
}

Randomizer::~Randomizer() {
}

double Randomizer::getUniformRandomNumber(double min, double max) {
  srand(time(NULL));
  std::default_random_engine seedGenerator(rand());
  std::normal_distribution<double> toReturnDistrib (min, max);
  return toReturnDistrib(seedGenerator);
}
