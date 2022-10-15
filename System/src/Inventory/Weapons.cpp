#include <Inventory/Weapons.h>

using namespace std;

Weapons::Weapons() {
}

Weapons::~Weapons() {
}

int Weapons::getMember() {
  return this->member;
}

void Weapons::setMember(int member) {
  this->member = member;
}
