#include <Inventory/Armour.h>

Armour::Armour() : EntityDecorator(EntityType::ARMOUR){
}

Armour::Armour(double armour) : EntityDecorator(EntityType::ARMOUR) {
  this->_armour = armour;
}

Armour::Armour(const Armour &a) : EntityDecorator(EntityType::ARMOUR) {
  this->_armour = a._armour;
}

Armour::~Armour() {
}

Entity* Armour::clone() {
  return new Armour(*this);
}

double Armour::getArmour() const {
  return _armour;
}

void Armour::setArmour(double armour) {
  _armour = armour;
}
