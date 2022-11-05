#include "Medics.h"

using namespace std;

/** 
*  @file Medics.h
*  @brief Medics class implementation,
*  Design Patterns:
*  @li Prototype: Concrete Prototype participant
*  @li Decorator: Concrete Component participant
*  @li Factory: Concrete Product participant
*
*  @details Medics implements the Entity interface, and is it's concrete class
*  
*  @author Marthinus Ettienne van Zyl ; u19012366,
*/

/**
 * @brief Create Medics:: Create Medics object and initialize @code _heal @endcode to a uniform random number between 18 and 19
 * @details Create Medics object and instansiate it's base class with the @code EntityType::MEDIC @endcode enum and set the @code _heal @endcode member to a uniform random number between 18 and 19.
 * @return Medics
 */
Medics::Medics() : EntityDecorator(EntityType::MEDIC)
{
    this->_heal = Randomizer::getInstance()->getUniformRandomNumber(18.0, 19.0);
}

/**
 * @brief Create Medics:: Create Medics Decorator object
 * @details Create Medics Decoratotr object and instansiate it's base class with the @code EntityType::MEDIC @endcode enum and set the @code _heal @endcode member to passed in parameter @code heal @endcode.
 * @param heal double
 * @return Medics
 */
Medics::Medics(double heal) : EntityDecorator(EntityType::MEDIC)
{
    this->_heal = heal;
}

/**
 * @brief Create Medics:: Create Medics Decorator object from another Medics object
 * @details Create Medics Decorator object from another Medics object and instansiate it's base class with the @code EntityType::MEDIC @endcode enum and set the @code _heal @endcode member to passed in Medics object's @code m @endcode parameter.
 * @param Medics const Medics&
 * @return Medics
 */
Medics::Medics(const Medics& m) : EntityDecorator(EntityType::MEDIC)
{
    this->_heal = m._heal;
}

/**
 * @brief Destroy the Medics:: Medics object
 */
Medics::~Medics() {
}

/**
 * @brief Clone Medics:: Clone Medics object
 * @details Clones the current Medics object by using the copy constructor and returns a pointer to the new object.
 * @return Entity* 
 */
Entity* Medics::clone() {
    return new Medics(*this);
}

/**
 * @brief Get Medics:: Get the Heal object
 * @details Returns the @code _heal @endcode member of the Medics object.
 * @return double const
 */
double Medics::getHeal() const {
    return this->_heal;
}

/**
 * @brief Set Medics:: Set the Heal object
 * @details Sets the @code _heal @endcode member of the Medics object to the passed in parameter @code heal @endcode.
 * @param heal double
 */
void Medics::setHeal(double heal) {
    this->_heal = heal;
}
