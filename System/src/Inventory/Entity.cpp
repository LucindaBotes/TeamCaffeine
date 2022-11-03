#include <Inventory/Entity.h>

using namespace std;

Entity::Entity() {
}

Entity::~Entity() {
}

int Entity::getMember() {
  return this->member;
}

void Entity::setMember(int member) {
  this->member = member;
}
