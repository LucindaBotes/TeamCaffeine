#include "WarMemento.h"

using namespace std;

WarMemento::WarMemento() {
}

WarMemento::~WarMemento() {
}

int WarMemento::getMember() {
  return this->member;
}

void WarMemento::setMember(int member) {
  this->member = member;
}
