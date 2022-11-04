#include "MementoFacade.h"

using namespace std;

MementoFacade::MementoFacade() {
}

MementoFacade::~MementoFacade() {
}

int MementoFacade::getMember() {
  return this->member;
}

void MementoFacade::setMember(int member) {
  this->member = member;
}
