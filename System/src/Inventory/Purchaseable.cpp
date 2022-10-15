#include <Inventory/Purchaseable.h>

using namespace std;

Purchaseable::Purchaseable() {
}

Purchaseable::~Purchaseable() {
}

int Purchaseable::getMember() {
  return this->member;
}

void Purchaseable::setMember(int member) {
  this->member = member;
}
