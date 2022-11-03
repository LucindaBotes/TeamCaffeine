#include <Inventory/Medics.h>

using namespace std;

Medics::Medics() {
}

Medics::~Medics() {
}

int Medics::getMember() {
  return this->member;
}

void Medics::setMember(int member) {
  this->member = member;
}
