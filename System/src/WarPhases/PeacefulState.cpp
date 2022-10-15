#include <WarPhases/PeacefulState.h>

using namespace std;

PeacefulState::PeacefulState() {
}

PeacefulState::~PeacefulState() {
}

int PeacefulState::getMember() {
  return this->member;
}

void PeacefulState::setMember(int member) {
  this->member = member;
}
