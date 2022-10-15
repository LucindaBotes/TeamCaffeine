#include <Inventory/SoldierIterator.h>

using namespace std;

SoldierIterator::SoldierIterator() {
}

SoldierIterator::~SoldierIterator() {
}

int SoldierIterator::getMember() {
  return this->member;
}

void SoldierIterator::setMember(int member) {
  this->member = member;
}
