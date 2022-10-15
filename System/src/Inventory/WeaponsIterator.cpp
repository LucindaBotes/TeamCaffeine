#include <Inventory/WeaponsIterator.h>

using namespace std;

WeaponsIterator::WeaponsIterator() {
}

WeaponsIterator::~WeaponsIterator() {
}

int WeaponsIterator::getMember() {
  return this->member;
}

void WeaponsIterator::setMember(int member) {
  this->member = member;
}
