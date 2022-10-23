#include <Inventory/Medics.h>

using namespace std;

/** 
*  @file Medics.h
*  @brief Medics class implementation,
*  Design Patterns:
*  @li Template Method: Concrete class participant
*  @li Prototype: Concrete Prototype participant
*  @li Decorator: Concrete Component participant
*  @li Factory: Concrete Product participant
*
*  @details Medics implements the Entity interface, and is it's concrete class
*  
*  @author Marthinus Ettienne van Zyl ; u19012366,
*TODO:  @todo Override base class decorator extra method
*/

Medics::Medics()
{
  // this->head = 0;
  this->_type = EntityType::MEDIC;
}

Medics::Medics(const Medics& m)
{
    this->_type = EntityType::MEDIC;
    this->_heal = m._heal;
}

Medics::~Medics() {
}

Entity* Medics::clone() {
    return new Medics(*this);
}

void Medics::addEntity(Entity* e) {
    //TODO: implement
}

double Medics::getHeal() const {
    return this->_heal;
}

void Medics::setHeal(double heal) {
    this->_heal = heal;
}
