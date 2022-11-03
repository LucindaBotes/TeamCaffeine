#include <Inventory/InventoryShop.h>

using namespace std;

InventoryShop::InventoryShop() {
}

InventoryShop::~InventoryShop() {
}

int InventoryShop::getMember() {
  return this->member;
}

void InventoryShop::setMember(int member) {
  this->member = member;
}
