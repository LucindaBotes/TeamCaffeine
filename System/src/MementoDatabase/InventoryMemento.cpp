#include "InventoryMemento.h"

using namespace std;

InventoryMemento::InventoryMemento() {
}

InventoryMemento::~InventoryMemento() {
}

int InventoryMemento::getMember() {
  return this->member;
}

void InventoryMemento::setMember(int member) {
  this->member = member;
}
