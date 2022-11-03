#include <Inventory/InventoryObserver.h>

using namespace std;

InventoryObserver::InventoryObserver() {
}

InventoryObserver::~InventoryObserver() {
}

int InventoryObserver::getMember() {
  return this->member;
}

void InventoryObserver::setMember(int member) {
  this->member = member;
}
