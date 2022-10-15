#include <Inventory/EntityDecorator.h>

using namespace std;

EntityDecorator::EntityDecorator() {
}

EntityDecorator::~EntityDecorator() {
}

int EntityDecorator::getMember() {
  return this->member;
}

void EntityDecorator::setMember(int member) {
  this->member = member;
}
