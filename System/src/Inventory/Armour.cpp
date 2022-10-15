#include <Inventory/Armour.h>

using namespace std;

Armour::Armour() {
}

Armour::~Armour() {
}

int Armour::getMember() {
  return this->member;
}

void Armour::setMember(int member) {
  this->member = member;
}
