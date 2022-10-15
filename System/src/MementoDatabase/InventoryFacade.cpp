#include <MementoDatabase/InventoryFacade.h>

using namespace std;

InventoryFacade::InventoryFacade() {
}

InventoryFacade::~InventoryFacade() {
}

int InventoryFacade::getMember() {
  return this->member;
}

void InventoryFacade::setMember(int member) {
  this->member = member;
}
