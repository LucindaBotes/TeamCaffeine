#include "Randomizer.h"

using namespace std;

Randomizer* Randomizer::onlyInstanece_ = nullptr;

Randomizer::Randomizer() {
}

Randomizer* Randomizer::getInstance() {
  if(onlyInstanece_ == nullptr) {
    onlyInstanece_ = new Randomizer();
  }
  return onlyInstanece_;
}

double Randomizer::getUniformRandomNumber(double min, double max) {
  srand(time(NULL));
  std::default_random_engine seedGenerator(rand());
  std::uniform_real_distribution<double> toReturnDistrib (min, max);
  return toReturnDistrib(seedGenerator);
}
