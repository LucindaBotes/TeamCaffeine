#include <Inventory/ArmourIterator.h>

using namespace std;

ArmourIterator::ArmourIterator() {
}

ArmourIterator::~ArmourIterator() {
}

int ArmourIterator::getMember() {
  return this->member;
}

void ArmourIterator::setMember(int member) {
  this->member = member;
}
