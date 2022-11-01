#include <Inventory/Armour.h>

using namespace std;

/**
 *  @file Armour.h
 *  @brief Armour class implementation,
 *  Design Patterns:
 *  @li Template Method: Concrete class participant
 *  @li Prototype: Concrete Prototype participant
 *  @li Decorator: Concrete Component participant
 *  @li Factory: Concrete Product participant
 *
 *  @details Armour implements the Entity interface, and is it's concrete class
 *  @author Lucinda Botes ; u19048263,
 */

Armour::Armour()
{
}

Armour::Armour(double armour)
{
  this->_armour = armour;
}

Armour::Armour(const Armour &a)
{
  this->_type = EntityType::ARMOUR;
  this->_armour = a._armour;
}

Armour::~Armour()
{
}

Entity *Armour::clone()
{
  return new Armour(*this);
}

double Armour::getArmour() const
{
  return _armour;
}

void Armour::setArmour(double armour)
{
  _armour = armour;
}
