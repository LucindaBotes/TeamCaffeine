#include "Statistics.h"

using namespace std;

/** 
*  @file Statistics.h
*  @brief Statistics class implementation,
*
*  @details Statistics implements the base @file Statistics.h class.
*  
*  @author Marthinus Ettienne van Zyl ; u19012366
*/

/**
 * @brief Create Statistics:: Create Statistics object and initializes members.
 * @details Create Statistics object and initializes @code _health, _damage, _defence, _gdp @endcode members to a uniform random number between 1000 and 1500, 50 and70, 50 and 70 and GDP's default constructor respectivley.
 * @return Statistics
 */
Statistics::Statistics() {
  _health = Randomizer::getInstance()->getUniformRandomNumber(1000, 1500);
  _damage = Randomizer::getInstance()->getUniformRandomNumber(50, 70);
  _defence = Randomizer::getInstance()->getUniformRandomNumber(50, 70);
  _gdp = new GDP();
}

/**
 * @brief Create Statistics:: Create Statistics object.
 * @details Create Statistics object and initializes @code _health, _damage, _defence, _gdp @endcode members to passed in parameters @code health, damage, defence, gdp @endcode respectively.
 * @param health double
 * @param damage double
 * @param defence double
 * @param gdp GDP*
 * @return Statistics
 */
Statistics::Statistics(double health, double damage, double defence, GDP* gdp) {
  this->_health = health;
  this->_damage = damage;
  this->_defence = defence;
  this->_gdp = gdp;
}

/**
 * @brief Destroy the Statistics:: Statistics object
 */
Statistics::~Statistics() {
  delete _gdp;
}

/**
 * @brief Get Statistics:: Get the value of the Health object
 * @details Gets the @code _health @endcode member of the Statistics object.
 * @return double const
 */
double Statistics::getHealth() const {
  return _health;
}

/**
 * @brief Get Statistics:: Get the value of the Damage object
 * @details Gets the @code _damage @endcode member of the Statistics object.
 * @return double const
 */
double Statistics::getDamage() const {
  return _damage;
}

/**
 * @brief Get Statistics:: Get the value of the Defence object
 * @details Gets the @code _defence @endcode member of the Statistics object.
 * @return double const
 */
double Statistics::getDefence() const {
  return _defence;
}

/**
 * @brief Get Statistics:: Get the value of the GDP object
 * @details Gets the @code _gdp @endcode member of the Statistics object.
 * @return GDP const
 */
GDP Statistics::getGDP() const {
  return *_gdp;
}

/**
 * @brief Set Statistics:: Set the value of the Health object
 * @details Sets the @code _health @endcode member of the Statistics object to passed in parameter @code health @endcode.
 * @param health double
 */
void Statistics::setHealth(double health) {
  _health = health;
} 

/**
 * @brief Set Statistics:: Set the value of the Damage object
 * @details Sets the @code _damage @endcode member of the Statistics object to passed in parameter @code damage @endcode.
 * @param damage double
 */
void Statistics::setDamage(double damage) {
  _damage = damage;
}

/**
 * @brief Set Statistics:: Set the value of the Defence object
 * @details Sets the @code _defence @endcode member of the Statistics object to passed in parameter @code defence @endcode.
 * @param defence double
 */
void Statistics::setDefence(double defence) {
  _defence = defence;
}

void Statistics::setGDP(double gdp)
{
  this->_gdp->setValue(gdp);
}

void Statistics::generateStats()
{
  this->_gdp->setValue(Randomizer::getInstance()->getUniformRandomNumber(1000, 1500));
  this->_health = Randomizer::getInstance()->getUniformRandomNumber(150, 250);
  this->_defence = Randomizer::getInstance()->getRandomInt(20);
}
