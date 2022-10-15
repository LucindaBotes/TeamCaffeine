#include <WarPhases/HostileState.h>

using namespace std;

HostileState::HostileState() {
}

HostileState::~HostileState() {
}

int HostileState::getMember() {
  return this->member;
}

void HostileState::setMember(int member) {
  this->member = member;
}
