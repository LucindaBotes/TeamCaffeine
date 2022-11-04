#include "Randomizer.h"

using namespace std;

Randomizer::Randomizer() {
}

Randomizer::~Randomizer() {
}

int Randomizer::getMember() {
  return this->member;
}

void Randomizer::setMember(int member) {
  this->member = member;
}
