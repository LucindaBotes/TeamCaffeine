#include <Inventory/Armour.h>

using namespace std;

Armour::Armour() {
}

Armour::Armour(double armour) {
  this->_armour = armour;
}

Armour::Armour(const Armour &a) {
  this->_type = EntityType::ARMOUR;
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
