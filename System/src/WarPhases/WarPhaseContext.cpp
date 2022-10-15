#include <WarPhases/WarPhaseContext.h>

using namespace std;

WarPhaseContext::WarPhaseContext() {
}

WarPhaseContext::~WarPhaseContext() {
}

int WarPhaseContext::getMember() {
  return this->member;
}

void WarPhaseContext::setMember(int member) {
  this->member = member;
}
