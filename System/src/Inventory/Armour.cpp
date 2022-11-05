#include "Armour.h"

/** 
*  @file Armour.h
*  @brief EntityDecorator class implementation,
*  Design Patterns:
*  @li Decorator: Concrete Decorator Participant
*  @li Factory: Concrete Product participant
*
*  @details Armour implements the EntityDecorator class, and is it's concrete class
*  
*  @author Marthinus Ettienne van Zyl ; u19012366
*/


/**
*  @brief Create Armour:: Create Armour Decorator object and initialize @code _armour @endcode to a uniform random number between 15 and 30
*  @details Create Armour Decorator object and instansiate it's base class with the @code EntityType::ARMOUR @endcode enum and set the @code _armour @endcode member to a uniform random number between 18 and 19.
*  @return Armour
*/
Armour::Armour() : EntityDecorator(EntityType::ARMOUR){
  this->_armour = Randomizer::getInstance()->getUniformRandomNumber(15.0, 30.0);
}

/**
*  @brief Create Armour:: Create Armour Decorator object
*  @details Create Armour Decorator object and instansiate it's base class with the @code EntityType::ARMOUR @endcode enum and set the @code _armour @endcode member to passed in parameter @code armour @endcode.
*  @param armour double
*  @return Armour
*/
Armour::Armour(double armour) : EntityDecorator(EntityType::ARMOUR) {
  this->_armour = armour;
}

/**
*  @brief Create Armour:: Create Armour Decorator object from another Armour object
*  @details Create Armour Decorator object from another Armour object and instansiate it's base class with the @code EntityType::ARMOUR @endcode enum and set the @code _armour @endcode member to passed in Armour object's @code a @endcode parameter.
*  @param Armour const Armour&
*  @return Armour
*/
Armour::Armour(const Armour &a) : EntityDecorator(EntityType::ARMOUR) {
  this->_armour = a._armour;
}

/**
 * @brief Destroy the Armour:: Armour object
 */
Armour::~Armour() {
}

/**
 * @brief Clone Armour:: Clone Armour object
 * @details Clones the current Armour object by using the copy constructor and returns a pointer to the new object.
 * @return Entity* 
 */
Entity* Armour::clone() {
  return new Armour(*this);
}

/**
 * @brief Get Armour:: Get Armour object's armour
 * @details Gets the Armour object's @code _armour @endcode member value.
 * @return double const
 */
double Armour::getArmour() const {
  return _armour;
}

/**
 * @brief Set Armour:: Set Armour object's armour
 * @details Sets Armour object's @code _armour @endcode member to passed in parameter @code armour @endcode
 * @param armour double
 */
void Armour::setArmour(double armour) {
  _armour = armour;
}
