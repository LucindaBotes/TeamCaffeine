#include "Supplies.h"

using namespace std;

/** 
*  @file Supplies.h
*  @brief Supplies class implementation,
*  Design Patterns:
*  @li Template Method: Concrete class participant
*  @li Prototype: Concrete Prototype participant
*  @li Decorator: Concrete Component participant
*  @li Factory: Product participant
*
*  @details Supplies implements the base @file Entity.h class.
*  
*  @author Marthinus Ettienne van Zyl ; u19012366,
*  @author Lucinda Botes ; u19012366
*TODO:  @todo Override base class decorator extra method
*/

Supplies::Supplies() : EntityDecorator(EntityType::SUPPLIES) {
  this->_health = 0;
}

Supplies::Supplies(double health) : EntityDecorator(EntityType::SUPPLIES) {
  this->_health = health;
}

Supplies::Supplies(const Supplies &s ) : EntityDecorator(EntityType::SUPPLIES) {
  this->_health = s._health;
}

Supplies::~Supplies() {
}

Entity* Supplies::clone(){
  return new Supplies(*this);
}

double Supplies::getHealth() const
{
  return this->_health;
}

void Supplies::setHealth(double health) {
  this->_health = health;
}