#include "Supplies.h"

using namespace std;

/** 
*  @file Supplies.h
*  @brief Supplies class implementation,
*  Design Patterns:
*  @li Prototype: Concrete Prototype participant
*  @li Decorator: Concrete Component participant
*  @li Factory: Product participant
*
*  @details Supplies implements the base @file Entity.h class.
*  
*  @author Marthinus Ettienne van Zyl ; u19012366,
*  @author Lucinda Botes ; u19012366
*/

/**
 * @brief Create Supplies:: Create Supplies object and initializes @code _health @endcode member value to a uniform random number
 * @details Create Supplies object and initializes @code _health @endcode member value to a uniform random number between 10.0 and 20.0
 * @return Supplies
 */
Supplies::Supplies() : EntityDecorator(EntityType::SUPPLIES) {
  this->_health = Randomizer::getInstance()->getUniformRandomNumber(10.0, 20.0);
}

/**
 * @brief Create Supplies:: Create Supplies object
 * @details Create Supplies object and initializes @code _health @endcode member value to passed in @code health @endcode parameter
 * @param health double
 */
Supplies::Supplies(double health) : EntityDecorator(EntityType::SUPPLIES) {
  this->_health = health;
}

/**
 * @brief Create Supplies:: Create Supplies object from another Supplies object
 * @details Create Supplies object from another Supplies object and instansiate it's base class with the @code EntityType::SUPPLIES @endcode enum and set the @code _health @endcode member to passed in Supplies object's @code s @endcode parameter.
 * @param s const Supplies&
 */
Supplies::Supplies(const Supplies &s ) : EntityDecorator(EntityType::SUPPLIES) {
  this->_health = s._health;
}

/**
 * @brief Destroy the Supplies:: Supplies object
 */
Supplies::~Supplies() {
}

/**
 * @brief clone Supplies:: Clone Supplies object
 * @details Clonse the current Supplies object by using the copy constructor and returns a pointer to the new object.
 * @return Entity*
 */
Entity* Supplies::clone(){
  return new Supplies(*this);
}

/**
 * @brief Get Supplies:: Get the Health of the Supplies object
 * @details Returns the @code _health @endcode member value of the Supplies object
 * @return double const
 */
double Supplies::getHealth() const
{
  return this->_health;
}

/**
 * @brief Set Supplies:: Set the Health of the Supplies object
 * @details Sets the @code _health @endcode member value of the Supplies object to the passed in @code health @endcode parameter
 * @param health double
 */
void Supplies::setHealth(double health) {
  this->_health = health;
}