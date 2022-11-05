#include "Randomizer.h"

using namespace std;

Randomizer* Randomizer::onlyInstanece_ = nullptr;

Randomizer::Randomizer() {
  srand(time(NULL));
  seedGenerator = default_random_engine(rand());
}

Randomizer* Randomizer::getInstance() {
  if(onlyInstanece_ == nullptr) {
    onlyInstanece_ = new Randomizer();
  }
  return onlyInstanece_;
}

double Randomizer::getUniformRandomNumber(double min, double max) {
  std::uniform_real_distribution<double> toReturnDistrib (min, max);
  return toReturnDistrib(seedGenerator);
}

int Randomizer::getUniformRandomNumber(int min, int max) {
  std::uniform_int_distribution<int> toReturnDistrib (min, max);
  return toReturnDistrib(seedGenerator);
}
