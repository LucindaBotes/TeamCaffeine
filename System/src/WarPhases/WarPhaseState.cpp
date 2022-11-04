#include "WarPhaseState.h"

using namespace std;

WarPhaseState::WarPhaseState() {
}

WarPhaseState::~WarPhaseState() {
}

int WarPhaseState::getMember() {
  return this->member;
}

void WarPhaseState::setMember(int member) {
  this->member = member;
}
