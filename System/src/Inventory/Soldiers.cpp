#include <Inventory/Soldiers.h>

using namespace std;

Soldiers::Soldiers() {
}

Soldiers::~Soldiers() {
}

int Soldiers::getMember() {
  return this->member;
}

void Soldiers::setMember(int member) {
  this->member = member;
}
