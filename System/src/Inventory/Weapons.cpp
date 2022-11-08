#include "Weapons.h"

using namespace std;

/** 
*  @file Weapons.h
*  @brief Weapons class implementation,
*  Design Patterns:
*  @li Prototype: Concrete Prototype participant
*  @li Decorator: Concrete Component participant
*  @li Factory: Product participant
*
*  @details Weapons implements the base @file Entity.h class.
*  
*  @author Marthinus Ettienne van Zyl ; u19012366,
*  @author Lucinda Botes ; u19012366
*/

/**
 * @brief Create Weapons:: Create Weapons object and initializes @code _damage @endcode member value to a uniform random number
 * @details Create Weapons object and initializes @code _damage @endcode member value to a uniform random number between 15.0 and 20.0
 * @return Weapons
 */
Weapons::Weapons() : EntityDecorator(EntityType::WEAPON) {
  this->_damage = Randomizer::getInstance()->getUniformRandomNumber(15.0, 20.0);
}

/**
 * @brief Create Weapons:: Create Weapons object
 * @details Create Weapons object and initializes @code _damage @endcode member value to passed in @code damage @endcode parameter
 * @param damage double
 * @return Weapons
 */
Weapons::Weapons(double damage) : EntityDecorator(EntityType::WEAPON) {
  this->_damage = damage;
}

/**
 * @brief Create Weapons:: Create Weapons object from another Weapons object
 * @details Create Weapons object from another Weapons object and instansiate it's base class with the @code EntityType::WEAPON @endcode enum and set the @code _damage @endcode member to passed in Weapons object's @code w @endcode parameter.
 * @param w const Weapons&
 * @return Weapons
 */
Weapons::Weapons(const Weapons& w) : EntityDecorator(EntityType::WEAPON)
{
  this->_damage = w._damage;
}

/**
 * @brief Destroy the Weapons:: Weapons object
 */
Weapons::~Weapons() {
}

/**
 * @brief clone Weapons:: Clone Weapons object
 * @details Clonse the current Weapons object by using the copy constructor and returns a pointer to the new object.
 * @return Entity*
 */
Entity* Weapons::clone() {
  return new Weapons(*this);
}

/**
 * @brief Get Weapons:: Get the damage value of the Weapons object
 * @details Gets the @code _damage @endcode member value of the Weapons object
 * @return double
*/
double Weapons::getDamage() {
  return this->_damage;
}

/**
 * @brief Set Weapons:: Set the damage value of the Weapons object
 * @details Sets the @code _damage @endcode member value of the Weapons object to the passed in @code damage @endcode parameter
 * @param damage double
*/
void Weapons::setDamage(double damage) {
  this->_damage = damage;
}