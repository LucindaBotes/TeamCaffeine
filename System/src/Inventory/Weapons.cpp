#include <Inventory/Weapons.h>

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

Weapons::Weapons()
{ 
  this->_type = EntityType::WEAPON;
}

Weapons::~Weapons() 
{ }

Weapons::Weapons(const Weapons &w) {
  this->_type = w._type;

  this->_damage = w._damage;
  this->_armour = w._armour;
  this->_vehicles = w._vehicles;
}

Entity* Weapons::clone(){
  return new Weapons(*this);
}

double Weapons::getDamage() const {
  return _damage;
}

double Weapons::getArmour() const {
  return _armour;
}

int Weapons::getVehicles() const {
  return _vehicles;
}

void Weapons::setDamage(double damage) {
  _damage = damage;
}

void Weapons::setArmour(double armour) {
  _armour = armour;
}

void Weapons::setVehicles(int vehicles) {
  _vehicles = vehicles;
}