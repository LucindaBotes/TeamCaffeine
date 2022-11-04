#include "InventoryDatabase.h"

using namespace std;

InventoryDatabase::InventoryDatabase() {
}

InventoryDatabase::~InventoryDatabase() {
}

int InventoryDatabase::getMember() {
  return this->member;
}

void InventoryDatabase::setMember(int member) {
  this->member = member;
}
