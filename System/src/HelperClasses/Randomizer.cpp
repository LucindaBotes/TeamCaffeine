#include "Randomizer.h"

using namespace std;

Randomizer::Randomizer() {
}

Randomizer::~Randomizer() {
  delete this->_instance;
}

Randomizer* Randomizer::getInstance() {
  if (_instance == nullptr) {
      _instance = new Randomizer();
  }

  return _instance;
}

double Randomizer::getUniformRandomNumber(double min, double max) {
  srand(time(NULL));
  std::default_random_engine seedGenerator(rand());
  std::normal_distribution<double> toReturnDistrib (min, max);
  return toReturnDistrib(seedGenerator);
}
