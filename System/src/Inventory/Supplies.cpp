#include <Inventory/Supplies.h>

using namespace std;

Supplies::Supplies() {
}

Supplies::~Supplies() {
}

int Supplies::getMember() {
  return this->member;
}

void Supplies::setMember(int member) {
  this->member = member;
}
