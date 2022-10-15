#include <WarPhases/ColdState.h>

using namespace std;

ColdState::ColdState() {
}

ColdState::~ColdState() {
}

int ColdState::getMember() {
  return this->member;
}

void ColdState::setMember(int member) {
  this->member = member;
}
