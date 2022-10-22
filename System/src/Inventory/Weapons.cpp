#include <Inventory/Weapons.h>

using namespace std;

/** 
*  @file Weapons.h
*  @brief Weapons class implementation,
*  Design Patterns:
*  @li Template Method: Concrete class participant
*  @li Prototype: Concrete Prototype participant
*  @li Decorator: Concrete Component participant
*  @li Factory: Concrete Product participant
*
*  @details Weapons implements the Entity interface, and is it's concrete class
*  
*  @author Marthinus Ettienne van Zyl ; u19012366,
*TODO:  @todo Override base class decorator extra method
*/

Weapons::Weapons() {
}

Weapons::Weapons(const Weapons& w)
{
  this->_type = EntityType::WEAPONS;

  this->_damage = w._damage;
  this->_armour = w._armour;
  this->_vehicles = w._vehicles;
}

Weapons::~Weapons() {
}

Entity* Weapons::clone() {
  return new Weapons(*this);
}

double Weapons::getDamage() const {
  return this->_damage;
}

double Weapons::getArmour() const {
  return this->_armour;
}

int Weapons::getVehicles() const {
  return this->_vehicles;
}

void Weapons::setDamage(double damage) {
  this->_damage = damage;
}

void Weapons::setArmour(double armour) {
  this->_armour = armour;
}

void Weapons::setVehicles(int vehicles) {
  this->_vehicles = vehicles;
}
