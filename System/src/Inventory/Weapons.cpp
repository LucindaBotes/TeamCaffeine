#include "Weapons.h"

using namespace std;

/** 
*  @file Weapons.h
*  @brief Weapons class implementation,
*  Design Patterns:
*  @li Template Method: Concrete class participant
*  @li Prototype: Concrete Prototype participant
*  @li Decorator: Concrete Component participant
*  @li Factory: Product participant
*
*  @details Weapons implements the base @file Entity.h class.
*  
*  @author Marthinus Ettienne van Zyl ; u19012366,
*  @author Lucinda Botes ; u19012366
*TODO:  @todo Override base class decorator extra method
*/


Weapons::Weapons() : EntityDecorator(EntityType::WEAPON) {
  this->_damage = 0;
}

Weapons::Weapons(double damage) : EntityDecorator(EntityType::WEAPON) {
  this->_damage = damage;
}

Weapons::Weapons(const Weapons& w) : EntityDecorator(EntityType::WEAPON)
{
  this->_damage = w._damage;
}

Weapons::~Weapons() {
}

Entity* Weapons::clone() {
  return new Weapons(*this);
}

double Weapons::getDamage() const {
  return this->_damage;
}

void Weapons::setDamage(double damage) {
  this->_damage = damage;
}