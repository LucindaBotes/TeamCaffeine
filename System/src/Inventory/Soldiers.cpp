#include "Soldiers.h"

using namespace std;

/** 
*  @file Soldiers.h
*  @brief Soldiers class implementation,
*  Design Patterns:
*  @li Prototype: Concrete Prototype participant
*  @li Decorator: Concrete Component participant
*  @li Factory: Concrete Product participant
*
*  @details Soldiers implements the Entity interface, and is it's concrete class
*  
*  @author Marthinus Ettienne van Zyl ; u19012366,
*/

/**
 * @brief Create Soldiers:: Create Soldiers Decorator object and initializes members to uniform random numbers.
 * @details Create Soldiers:: Create Soldiers Decorator object and initializes members: @code _damage, _armour, _count @endcode to uniform random numbers between 10 and 20, 15 and 30 and 1 and 10 respectively.
 * @return Soldiers
 */
Soldiers::Soldiers() :  Entity(EntityType::SOLDIER) {
  this->_damage = Randomizer::getInstance()->getUniformRandomNumber(10.0, 20.0);
  this->_armour = Randomizer::getInstance()->getUniformRandomNumber(15.0, 30.0);
  this->_count = Randomizer::getInstance()->getUniformRandomNumber(1, 10);
}

/**
 * @brief Create Soldiers:: Create Soldiers Decorator object from another Soldiers object
 * @details Create Soldiers Decorator object from another Soldiers object and instansiate it's base class with the @code EntityType::SOLDIER @endcode enum and set the @code _damage, _armour, _count @endcode members to passed in Soldiers object's @code soldiers @endcode parameter.
 * @param soldiers const Soldier&
 */
Soldiers::Soldiers(const Soldiers& soldiers) : Entity(EntityType::SOLDIER)
{
  this->_damage = soldiers._damage;
  this->_armour = soldiers._armour;
  this->_count = soldiers._count;
}

/**
 * @brief Create Soldiers:: Create Soldiers Decorator object
 * @details Create Soldiers:: Create Soldiers Decorator object and initializes members: @code _damage, _armour, _count @endcode to passed in parameters @code damage, armour, count @endcode respectively.
 * @param damage double
 * @param armour double
 * @param count int
 * @return Soldiers
 */
Soldiers::Soldiers(double damage, double armour, int count) : Entity(EntityType::SOLDIER) {
  this->_damage = damage;
  this->_armour = armour;
  this->_count = count;
}

/**
 * @brief Destroy the Soldiers:: Soldiers object
 */
Soldiers::~Soldiers() {
}

/**
 * @brief Clone Soldiers:: Clone Soldiers object
 * @details Clones the current Soldiers object by using the copy constructor and returns a pointer to the new object.
 * @return Entity* 
 */
Entity* Soldiers::clone() {
  return new Soldiers(*this);
}

/**
 * @brief Get Soldiers:: Get the damage of the Soldiers object
 * @details Gets the Soldiers object's @code _damage @endcode member value.
 * @return double const
 */
double Soldiers::getDamage() const {
  return this->_damage;
}

/**
 * @brief Get Soldiers:: Get the armour of the Soldiers object
 * @details Gets the Soldiers object's @code _armour @endcode member value.
 * @return double const
 */
double Soldiers::getArmour() const {
  return this->_armour;
}

/**
 * @brief Get Soldiers:: Get the soldier count of the Soldiers object
 * @details Gets the Soldiers object's @code _count @endcode member value.
 * @return int const
 */
int Soldiers::getCount() const {
  return this->_count;
}

/**
 * @brief Set Soldiers:: Set the damage of the Soldiers object
 * @details Sets the Soldiers object's @code _damage @endcode member value to the passed in @code damage @endcode parameter.
 * @param damage double
 */
void Soldiers::setDamage(double damage) {
  this->_damage = damage;
}

/**
 * @brief Set Soldiers:: Set the armour of the Soldiers object
 * @details Sets the Soldiers object's @code _armour @endcode member value to the passed in @code armour @endcode parameter.
 * @param armour double
 */
void Soldiers::setArmour(double armour) {
  this->_armour = armour;
}

/**
 * @brief Set Soldiers:: Set the soldier count of the Soldiers object
 * @details Sets the Soldiers object's @code _count @endcode member value to the passed in @code count @endcode parameter.
 * @param count int
 */
void Soldiers::setCount(int count) {
  this->_count = count;
}
