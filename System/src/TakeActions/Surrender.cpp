#include <TakeActions/Surrender.h>

using namespace std;

Surrender::Surrender() {
}

Surrender::~Surrender() {
}

int Surrender::getMember() {
  return this->member;
}

void Surrender::setMember(int member) {
  this->member = member;
}
