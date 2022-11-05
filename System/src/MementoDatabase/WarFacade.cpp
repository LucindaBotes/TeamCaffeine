#include "WarFacade.h"

using namespace std;

WarFacade::WarFacade() {
}

WarFacade::~WarFacade() {
}

int WarFacade::getMember() {
  return this->member;
}

void WarFacade::setMember(int member) {
  this->member = member;
}
