#include <TakeActions/Defend.h>

using namespace std;

Defend::Defend() {
}

Defend::~Defend() {
}

int Defend::getMember() {
  return this->member;
}

void Defend::setMember(int member) {
  this->member = member;
}
