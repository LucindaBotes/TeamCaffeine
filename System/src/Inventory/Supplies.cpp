#include <Inventory/Supplies.h>

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

Supplies::Supplies() {
  this->_health = 0;
}

Supplies::Supplies(const Supplies &s){

}

Supplies::Supplies(const Supplies& soldiers)
{
  this->_type = EntityType::SUPPLIES;

  this->_health = soldiers._health;
}

Supplies::~Supplies() {
}

Entity* Supplies::clone(){
  return new Supplies(*this);
}

void Supplies::addEntity(Entity* e) {
  // TODO: implement
}

double Supplies::getHealth() const
{
  return this->_health;
}

void Supplies::setHealth(double health) {
  this->_health = health;
}