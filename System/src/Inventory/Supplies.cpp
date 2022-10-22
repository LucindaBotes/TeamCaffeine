#include <Inventory/Supplies.h>

using namespace std;

/** 
*  @file Supplies.h
*  @brief Supplies class implementation,
*  Design Patterns:
*  @li Template Method: Concrete class participant
*  @li Prototype: Concrete Prototype participant
*  @li Decorator: Concrete Component participant
*  @li Factory: Concrete participant
*
*  @details Supplies implements the Entity interface, and is it's concrete class
*  
*  @author Marthinus Ettienne van Zyl ; u19012366,
*TODO:  @todo Override base class decorator extra method
*/

Supplies::Supplies() {
}

Supplies::Supplies(const Supplies& soldiers)
{
  this->_type = EntityType::SUPPLIES;

  this->_health = soldiers._health;
}

Supplies::~Supplies() {
}

Entity* Supplies::clone() {
  return new Supplies(*this);
}

double Supplies::getHealth() const {
  return this->_health;
}

void Supplies::setHealth(double health) {
  this->_health = health;
}