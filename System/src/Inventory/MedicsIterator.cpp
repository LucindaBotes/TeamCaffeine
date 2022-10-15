#include <Inventory/MedicsIterator.h>

using namespace std;

MedicsIterator::MedicsIterator() {
}

MedicsIterator::~MedicsIterator() {
}

int MedicsIterator::getMember() {
  return this->member;
}

void MedicsIterator::setMember(int member) {
  this->member = member;
}
