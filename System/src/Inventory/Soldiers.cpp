#include <Inventory/Soldiers.h>

using namespace std;

/** 
*  @file Soldiers.h
*  @brief Soldiers class implementation,
*  Design Patterns:
*  @li Template Method: Concrete class participant
*  @li Prototype: Concrete Prototype participant
*  @li Decorator: Concrete Component participant
*  @li Factory: Concrete Product participant
*
*  @details Soldiers implements the Entity interface, and is it's concrete class
*  
*  @author Marthinus Ettienne van Zyl ; u19012366,
*TODO:  @todo Override base class decorator extra method
*/

Soldiers::Soldiers() :  Entity(EntityType::SOLDIER) {
  this->_damage = 0;
  this->_armour = 0;
  this->_count = 0;
}

Soldiers::Soldiers(const Soldiers& soldiers) : Entity(EntityType::SOLDIER)
{
  this->_damage = soldiers._damage;
  this->_armour = soldiers._armour;
  this->_count = soldiers._count;
}

Soldiers::Soldiers(double damage, double armour, int count) : Entity(EntityType::SOLDIER) {
  this->_damage = damage;
  this->_armour = armour;
  this->_count = count;
}

Soldiers::~Soldiers() {
}

Entity* Soldiers::clone() {
  return new Soldiers(*this);
}

double Soldiers::getDamage() const {
  return this->_damage;
}

double Soldiers::getArmour() const {
  return this->_armour;
}

int Soldiers::getCount() const {
  return this->_count;
}

void Soldiers::setDamage(double damage) {
  this->_damage = damage;
}

void Soldiers::setArmour(double armour) {
  this->_armour = armour;
}

void Soldiers::setCount(int count) {
  this->_count = count;
}