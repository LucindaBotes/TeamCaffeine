#include <Inventory/SuppliedIterator.h>

using namespace std;

SuppliedIterator::SuppliedIterator() {
}

SuppliedIterator::~SuppliedIterator() {
}

int SuppliedIterator::getMember() {
  return this->member;
}

void SuppliedIterator::setMember(int member) {
  this->member = member;
}
