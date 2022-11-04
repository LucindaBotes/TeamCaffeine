#include "Databases.h"

using namespace std;

Databases::Databases() {
}

Databases::~Databases() {
}

int Databases::getMember() {
  return this->member;
}

void Databases::setMember(int member) {
  this->member = member;
}
