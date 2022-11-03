#include <Inventory/EntityCreator.h>

using namespace std;

EntityCreator::EntityCreator() {
}

EntityCreator::~EntityCreator() {
}

int EntityCreator::getMember() {
  return this->member;
}

void EntityCreator::setMember(int member) {
  this->member = member;
}
