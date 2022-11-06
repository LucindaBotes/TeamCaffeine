#include "Randomizer.h"

using namespace std;

/** 
*  @file Randomizer.h
*  @brief Randomizer class implementation,
*
*  Design Patterns:
*  @li Singleton
*
*  @details Randomizer implements the base @file Country.h class.
*  
*  @author Marthinus Ettienne van Zyl ; u19012366
*/


Randomizer* Randomizer::onlyInstanece_ = nullptr; /** Initialise instance to null */

/**
 * @brief Create Randomizer:: Create Randomizer object and initializes members.
 * @details Create Randomizer object seeds random and initializes @code _seedGenerator @endcode member to a random engine.
 * @return Randomizer
 */
Randomizer::Randomizer() {
  srand(time(NULL));
  _seedGenerator = default_random_engine(rand());
}

/**
 * @brief Destroy the Randomizer:: Randomizer object
 */
Randomizer::~Randomizer() {
}

/**
 * @brief Get Randomizer:: Get the instance of the Randomizer object
 * @details Get Randomizer:: Gets the @code onlyInstance_ @endcode member of the Randomizer object if it's instantialed and if not instantiates it and returns it.
 * @return Randomizer*
 */
Randomizer* Randomizer::getInstance() {
  if(onlyInstanece_ == nullptr) {
    onlyInstanece_ = new Randomizer();
  }
  return onlyInstanece_;
}

/**
 * @brief Get Randomizer:: Get a uniform random number
 * @details Gets a uniform random number between passed in parameters @code min @endcode and @code max @endcode.
 * @param min double
 * @param max double
 * @return double
 */
double Randomizer::getUniformRandomNumber(double min, double max) {
  std::uniform_real_distribution<double> toReturnDistrib (min, max);
  return toReturnDistrib(_seedGenerator);
}

/**
 * @brief Get Randomizer:: Get a uniform random number
 * @details Gets a uniform random number between passed in parameters @code min @endcode and @code max @endcode.
 * @param min int
 * @param max int
 * @return int
 */
int Randomizer::getUniformRandomNumber(int min, int max) {
  std::uniform_int_distribution<int> toReturnDistrib (min, max);
  return toReturnDistrib(_seedGenerator);
}
