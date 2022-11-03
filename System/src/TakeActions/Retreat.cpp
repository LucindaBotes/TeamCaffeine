#include <TakeActions/Retreat.h>

using namespace std;

Retreat::Retreat() {
}

Retreat::~Retreat() {
}

int Retreat::getMember() {
  return this->member;
}

void Retreat::setMember(int member) {
  this->member = member;
}
